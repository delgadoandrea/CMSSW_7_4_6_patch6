#include "TFile.h"
#include "TStyle.h"
#include "TH1D.h"
#include "TCanvas.h"
#include "TLegend.h"
#include <iostream>
#include <vector>
#include <TMath.h>



TH1D GetNumbers(TH1D *signal, TH1D *background, bool incremental){
   std::cout << "Getting numbers :) " << std:: endl;

   TH1D *result=(TH1D*)signal->Clone("result");

   if(incremental)for(int x=0; x<signal->GetNbinsX(); ++x){
         double signalEvents=signal->Integral(x+1,-1);
         double bgrEvents=0.;
	 if(x==0) if(signal->GetNbinsX()!=background->GetNbinsX()){
	     std::cout<<"Background has different number of bins than the signal histogram! Aborting..."<<std::endl;
	     break;
	   }
	 bgrEvents=background->Integral(x+1,-1);
	 if(signalEvents+bgrEvents == 0.0) result->SetBinContent(x+1,0.0);
	 else result->SetBinContent(x+1, signalEvents/TMath::Sqrt(signalEvents+bgrEvents));
     }
   else for(int x=signal->GetNbinsX(); x>0; --x){
       double signalEvents=signal->Integral(1,x);
       double bgrEvents=0.;
       
       if(x==0) if(signal->GetNbinsX()!=background->GetNbinsX()){
	   std::cout<<"Background has different number of bins than the signal histogram! Aborting..."<<std::endl;
	   break;
	 }
       bgrEvents=background->Integral(1,x);
       
       if(signalEvents+bgrEvents == 0.0) result->SetBinContent(x+1,0.0);
       else result->SetBinContent(x, signalEvents/TMath::Sqrt(signalEvents+bgrEvents));
     }
   return (*result);
}

void makePlots(){
  TFile *f = new TFile("genHist_200METCut.root", "READ");

  TH1D * relIsoElReal = (TH1D*) f->Get("ElIsoValueReal");
  TH1D * relIsoElFake = (TH1D*) f->Get("ElIsoValueFake");
  TH1D * absIsoElReal = (TH1D*) f->Get("ElPtIsoValueReal");
  TH1D * absIsoElFake = (TH1D*) f->Get("ElPtIsoValueFake");

  TH1D * relIsoMuReal = (TH1D*) f->Get("MuIsoValueReal");
  TH1D * relIsoMuFake = (TH1D*) f->Get("MuIsoValueFake");
  TH1D * absIsoMuReal = (TH1D*) f->Get("MuPtIsoValueReal");
  TH1D * absIsoMuFake = (TH1D*) f->Get("MuPtIsoValueFake");

  relIsoElFake->SetLineColor(kRed);
  absIsoElFake->SetLineColor(kRed);
  relIsoMuFake->SetLineColor(kRed);
  absIsoMuFake->SetLineColor(kRed);

  /*TCanvas *elRel = new TCanvas("c1","relative isolation electron",800,900);

  TH1D sigeleRelPos = GetNumbers(relIsoElReal, relIsoElFake, true);
  TH1D sigeleRelNeg = GetNumbers(relIsoElReal, relIsoElFake, false);

  sigeleRelPos.SetTitle("Greater than bins");
  sigeleRelPos.GetXaxis()->SetTitle("Relative isolation value");
  sigeleRelPos.GetYaxis()->SetTitle("Significance");
  sigeleRelNeg.SetTitle("Smaller than bins");
  sigeleRelNeg.GetXaxis()->SetTitle("Relative isolation value");
  sigeleRelNeg.GetYaxis()->SetTitle("Significance");
  
  elRel->Divide(1,2);
  elRel->cd(1);
  relIsoElReal->SetTitle("Electron relative isolation value");
  relIsoElReal->GetXaxis()->SetTitle("Relative isolation value (Electron)");

  TLegend *leg = new TLegend(0.599,0.6151,0.9973,0.8999); 
  leg->SetFillColor(0);
  leg->SetTextSize(0.034965);
  leg->AddEntry(relIsoElReal,"1 electron category","lp");
  leg->AddEntry(relIsoElFake,"no lepton category","lp");
  relIsoElReal->Draw();
  relIsoElFake->Draw("same");
  leg->Draw("same");
  elRel->cd(2);
  gPad->Divide(2,1);
  gPad->cd(1);
  sigeleRelPos.DrawClone("");
  elRel->cd(2);
  gPad->cd(2);
  sigeleRelNeg.DrawClone("");
  elRel->SaveAs("ElectronRelativeIsolation.png");

  TCanvas *elAbs = new TCanvas("c2","absolute isolation electron",800,900);
  //gStyle->SetOptStat(0);
  
  TH1D sigeleAbsPos = GetNumbers(absIsoElReal, absIsoElFake, true);
  TH1D sigeleAbsNeg = GetNumbers(absIsoElReal, absIsoElFake, false);

  sigeleAbsPos.SetTitle("Greater than bins");
  sigeleAbsPos.GetXaxis()->SetTitle("Absolute isolation value");
  sigeleAbsPos.GetXaxis()->SetRangeUser(0,50);
  sigeleAbsPos.GetYaxis()->SetTitle("Significance");
  sigeleAbsNeg.SetTitle("Smaller than bins");
  sigeleAbsNeg.GetXaxis()->SetTitle("Absolute isolation value");
  sigeleAbsNeg.GetXaxis()->SetRangeUser(0,50);
  sigeleAbsNeg.GetYaxis()->SetTitle("Significance");
  
  elAbs->Divide(1,2);
  elAbs->cd(1);
  absIsoElReal->SetTitle("Electron absolute isolation value");
  absIsoElReal->GetXaxis()->SetTitle("Absolute isolation value (Electron)");
  absIsoElReal->GetXaxis()->SetRangeUser(0,50);

  TLegend *leg2 = new TLegend(0.599,0.6151,0.9973,0.8999); 
  leg2->SetFillColor(0);
  leg2->SetTextSize(0.034965);
  leg2->AddEntry(absIsoElReal,"1 electron category","lp");
  leg2->AddEntry(absIsoElFake,"no lepton category","lp");
  absIsoElReal->Draw();
  absIsoElFake->Draw("same");
  leg2->Draw("same");
  elAbs->cd(2);
  gPad->Divide(2,1);
  gPad->cd(1);
  sigeleAbsPos.DrawClone("");
  elAbs->cd(2);
  gPad->cd(2);
  sigeleAbsNeg.DrawClone("");
  elAbs->SaveAs("ElectronAbsoluteIsolation.png");

  //-----------------------------------------

  TCanvas *muRel = new TCanvas("c3","relative isolation muon",800,900);
  
  TH1D sigmueRelPos = GetNumbers(relIsoMuReal, relIsoMuFake, true);
  TH1D sigmueRelNeg = GetNumbers(relIsoMuReal, relIsoMuFake, false);

  sigmueRelPos.SetTitle("Greater than bins");
  sigmueRelPos.GetXaxis()->SetTitle("Relative isolation value");
  sigmueRelPos.GetYaxis()->SetTitle("Significance");
  sigmueRelNeg.SetTitle("Smaller than bins");
  sigmueRelNeg.GetXaxis()->SetTitle("Relative isolation value");
  sigmueRelNeg.GetYaxis()->SetTitle("Significance");
  
  muRel->Divide(1,2);
  muRel->cd(1);
  relIsoMuReal->SetTitle("Muon relative isolation value");
  relIsoMuReal->GetXaxis()->SetTitle("Relative isolation value (Muon)");

  TLegend *leg3 = new TLegend(0.599,0.6151,0.9973,0.8999); 
  leg3->SetFillColor(0);
  leg3->SetTextSize(0.034965);
  leg3->AddEntry(relIsoMuReal,"1 muon category","lp");
  leg3->AddEntry(relIsoMuFake,"no lepton category","lp");
  relIsoMuReal->Draw();
  relIsoMuFake->Draw("same");
  leg3->Draw("same");
  muRel->cd(2);
  gPad->Divide(2,1);
  gPad->cd(1);
  sigmueRelPos.DrawClone("");
  muRel->cd(2);
  gPad->cd(2);
  sigmueRelNeg.DrawClone("");
  muRel->SaveAs("MuonRelativeIsolation.png");

  TCanvas *muAbs = new TCanvas("c4","absolute isolation muon",800,900);
  //gStyle->SetOptStat(0);
  
  TH1D sigmuAbsPos = GetNumbers(absIsoMuReal, absIsoMuFake, true);
  TH1D sigmuAbsNeg = GetNumbers(absIsoMuReal, absIsoMuFake, false);

  sigmuAbsPos.SetTitle("Greater than bins");
  sigmuAbsPos.GetXaxis()->SetTitle("Absolute isolation value");
  sigmuAbsPos.GetXaxis()->SetRangeUser(0,50);
  sigmuAbsPos.GetYaxis()->SetTitle("Significance");
  sigmuAbsNeg.SetTitle("Smaller than bins");
  sigmuAbsNeg.GetXaxis()->SetTitle("Absolute isolation value");
  sigmuAbsNeg.GetXaxis()->SetRangeUser(0,50);
  sigmuAbsNeg.GetYaxis()->SetTitle("Significance");
  
  muAbs->Divide(1,2);
  muAbs->cd(1);
  absIsoMuReal->SetTitle("Muon absolute isolation value");
  absIsoMuReal->GetXaxis()->SetTitle("Absolute isolation value (Muon)");
  absIsoMuReal->GetXaxis()->SetRangeUser(0,50);

  TLegend *leg4 = new TLegend(0.599,0.6151,0.9973,0.8999); 
  leg4->SetFillColor(0);
  leg4->SetTextSize(0.034965);
  leg4->AddEntry(absIsoMuReal,"1 muon category","lp");
  leg4->AddEntry(absIsoMuFake,"no lepton category","lp");
  absIsoMuReal->Draw();
  absIsoMuFake->Draw("same");
  leg4->Draw("same");
  muAbs->cd(2);
  gPad->Divide(2,1);
  gPad->cd(1);
  sigmuAbsPos.DrawClone("");
  muAbs->cd(2);
  gPad->cd(2);
  sigmuAbsNeg.DrawClone("");
  muAbs->SaveAs("MuonAbsoluteIsolation.png");*/
  
  //-------------------------

  TCanvas *ElIdEff = new TCanvas("c5", "Electron ID efficiency vs Pt", 1200, 600);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);

  ElIdEff->Divide(2,1);

  TH1D * ElectronGenVsPt = (TH1D*) f->Get("ElectronGenVsPt");
  TH1D * ElectronIDVsPt = (TH1D*) f->Get("ElectronIDVsPt");

  ElIdEff->cd(1);
  ElectronGenVsPt->SetLineColor(kRed);
  ElectronGenVsPt->GetXaxis()->SetTitle("Electron Pt");
  TLegend *leg5 = new TLegend(0.599,0.6151,0.9973,0.8999); 
  leg5->SetFillColor(0);
  leg5->SetTextSize(0.034965);
  leg5->AddEntry(ElectronGenVsPt,"Gen level electrons","lp");
  leg5->AddEntry(ElectronIDVsPt,"ID'd electrons","lp");
  
  ElectronGenVsPt->Draw();
  ElectronIDVsPt->Draw("same");
  leg5->Draw("same");
  
  ElIdEff->cd(2);
  TH1D * ElEff = (TH1D*) ElectronIDVsPt->Clone();
  ElEff->Divide(ElectronGenVsPt);
  ElEff->GetYaxis()->SetTitle("Efficiency");
  ElEff->GetXaxis()->SetTitle("Electron Pt");
  ElEff->Draw();
  ElIdEff->SaveAs("ElectronIDEfficiency.png");

    //-------------------------

  TCanvas *MuIdEff = new TCanvas("c6", "Muon ID efficiency vs Pt", 1200, 600);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);

  MuIdEff->Divide(2,1);

  TH1D * MuonGenVsPt = (TH1D*) f->Get("MuonGenVsPt");
  TH1D * MuonIDVsPt = (TH1D*) f->Get("MuonIDVsPt");

  MuIdEff->cd(1);
  MuonGenVsPt->SetLineColor(kRed);
  MuonGenVsPt->GetXaxis()->SetTitle("Muon Pt");
  TLegend *leg6 = new TLegend(0.599,0.6151,0.9973,0.8999); 
  leg6->SetFillColor(0);
  leg6->SetTextSize(0.034965);
  leg6->AddEntry(MuonGenVsPt,"Gen level muons","lp");
  leg6->AddEntry(MuonIDVsPt,"ID'd muons","lp");
  
  MuonGenVsPt->Draw();
  MuonIDVsPt->Draw("same");
  leg6->Draw("same");
  
  MuIdEff->cd(2);
  TH1D * MuEff = (TH1D*) MuonIDVsPt->Clone();
  MuEff->Divide(MuonGenVsPt);
  MuEff->GetYaxis()->SetTitle("Efficiency");
  MuEff->GetXaxis()->SetTitle("Muon Pt");
  MuEff->Draw();
  MuIdEff->SaveAs("MuonIDEfficiency.png");
}
