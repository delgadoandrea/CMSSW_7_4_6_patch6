#include "THStack.h"
#include "TFile.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TCanvas.h"
#include "TLegend.h"
#include <map>
#include <iostream>
#include <iterator>

class Sample{

public:
   Sample(TString _fName, TString _label, int _color, int _mstyle):
      fileName(_fName), label(_label), fillColor(_color), markerStyle(_mstyle), markerColor(_color), lineColor(_color){};
   
   TString fileName;
   TString label;
   int fillColor;
   int markerStyle;
   int markerColor;
   int lineColor = kBlack;
};

void setHistoColor(TH1* h , Sample & s){
   h->SetMarkerColor(s.markerColor);
   h->SetLineColor(s.lineColor);
   h->SetMarkerStyle(s.markerStyle);
   h->SetFillColor(s.fillColor);
}

void genPlots(){

  TFile *f = new TFile("genHist_200METCut.root", "READ");

  TFile *outf = new TFile("genPlots_200METCut.root","RECREATE");
 
  map<string, TH1D*> genHist;
  map<string, TH2D*> genMap;

  genHist["DeltaPhiMETLSPH"] = (TH1D*) f->Get("DeltaPhiMETLSPH");
  genHist["DeltaPhiMETLSPL"] = (TH1D*) f->Get("DeltaPhiMETLSPL");
  genHist["DeltaPhiMETSTOPH"] = (TH1D*) f->Get("DeltaPhiMETSTOPH");
  genHist["DeltaPhiMETSTOPL"] = (TH1D*) f->Get("DeltaPhiMETSTOPL");
  genHist["DeltaPhiMETbH"] = (TH1D*) f->Get("DeltaPhiMETbH");
  genHist["DeltaPhiMETbL"] = (TH1D*) f->Get("DeltaPhiMETbL");
  genHist["DeltaPhiMETlep"] = (TH1D*) f->Get("DeltaPhiMETlep");
  
  genHist["DeltaPhiLSPS"] = (TH1D*) f->Get("DeltaPhiLSPS");
  genHist["DeltaPhiLSPS"]->SetLineColor(kBlack);
  genHist["DeltaPhiLSPS"]->SetMarkerColor(kBlack);
  genHist["DeltaPhiStops"] = (TH1D*) f->Get("DeltaPhiStops");
  genHist["DeltaPhiStops"]->SetLineColor(kRed);
  genHist["DeltaPhiStops"]->SetMarkerColor(kRed);
  

  genHist["stopL_Pt"] = (TH1D*) f->Get("stopL_Pt");
  //genHist["stopL_Pt"]->SetLineColor(kBlack);
  //genHist["stopL_Pt"]->SetMarkerColor(kBlack);
  genHist["lspL_Pt"] = (TH1D*) f->Get("lspL_Pt");
  //genHist["lspL_Pt"]->SetLineColor(kRed);
  //genHist["lspL_Pt"]->SetMarkerColor(kRed);
  genHist["bL_Pt"] = (TH1D*) f->Get("bL_Pt");
  //genHist["bL_Pt"]->SetLineColor(kGreen);
  //genHist["bL_Pt"]->SetMarkerColor(kGreen);
  genHist["l_Pt"] = (TH1D*) f->Get("l_Pt");
  //genHist["l_Pt"]->SetLineColor(kCyan);
  //genHist["l_Pt"]->SetMarkerColor(kCyan);
  genHist["n_Pt"] = (TH1D*) f->Get("n_Pt");
  //genHist["n_Pt"]->SetLineColor(kBlue);
  //genHist["n_Pt"]->SetMarkerColor(kBlue);

  genHist["stopH_Pt"] = (TH1D*) f->Get("stopH_Pt");
  //genHist["stopH_Pt"]->SetLineColor(kRed);
  //genHist["stopH_Pt"]->SetMarkerColor(kRed);
  genHist["lspH_Pt"] = (TH1D*) f->Get("lspH_Pt");
  //genHist["lspH_Pt"]->SetLineColor(kBlack);
  //genHist["lspH_Pt"]->SetMarkerColor(kBlack);
  genHist["bH_Pt"] = (TH1D*) f->Get("bL_Pt");
  //genHist["bH_Pt"]->SetLineColor(kGreen);
  //genHist["bH_Pt"]->SetMarkerColor(kGreen);
  genHist["q1_Pt"] = (TH1D*) f->Get("q1_Pt");
  //genHist["q1_Pt"]->SetLineColor(kCyan);
  //genHist["q1_Pt"]->SetMarkerColor(kCyan);
  genHist["q2_Pt"] = (TH1D*) f->Get("q2_Pt");
  //genHist["q2_Pt"]->SetLineColor(kBlue);
  //genHist["q2_Pt"]->SetMarkerColor(kBlue);

  genHist["NegLStopDPhiLSP"] = (TH1D*) f->Get("NegLStopDPhiLSP");
  genHist["NegLStopDPhiLSP"]->SetLineColor(kRed);
  genHist["NegLStopDPhiLSP"]->SetMarkerColor(kRed);
  genHist["NegLStopDPhiB"] = (TH1D*) f->Get("NegLStopDPhiB");
  genHist["NegLStopDPhiB"]->SetLineColor(kGreen);
  genHist["NegLStopDPhiB"]->SetMarkerColor(kGreen);
  genHist["NegLStopDPhiL"] = (TH1D*) f->Get("NegLStopDPhiL");
  genHist["NegLStopDPhiL"]->SetLineColor(kCyan);
  genHist["NegLStopDPhiL"]->SetMarkerColor(kCyan);
  genHist["NegLStopDPhiN"] = (TH1D*) f->Get("NegLStopDPhiN");
  genHist["NegLStopDPhiN"]->SetLineColor(kBlue);
  genHist["NegLStopDPhiN"]->SetMarkerColor(kBlue);

  genHist["PosLStopDPhiLSP"] = (TH1D*) f->Get("PosLStopDPhiLSP");
  genHist["PosLStopDPhiLSP"]->SetLineColor(kRed);
  genHist["PosLStopDPhiLSP"]->SetMarkerColor(kRed);
  genHist["PosLStopDPhiB"] = (TH1D*) f->Get("PosLStopDPhiB");
  genHist["PosLStopDPhiB"]->SetLineColor(kGreen);
  genHist["PosLStopDPhiB"]->SetMarkerColor(kGreen);
  genHist["PosLStopDPhiL"] = (TH1D*) f->Get("PosLStopDPhiL");
  genHist["PosLStopDPhiL"]->SetLineColor(kCyan);
  genHist["PosLStopDPhiL"]->SetMarkerColor(kCyan);
  genHist["PosLStopDPhiN"] = (TH1D*) f->Get("PosLStopDPhiN");
  genHist["PosLStopDPhiN"]->SetLineColor(kBlue);
  genHist["PosLStopDPhiN"]->SetMarkerColor(kBlue);

  genHist["HStopDPhiLSP"] = (TH1D*) f->Get("HStopDPhiLSP");
  genHist["HStopDPhiLSP"]->SetLineColor(kRed);
  genHist["HStopDPhiLSP"]->SetMarkerColor(kRed);
  genHist["HStopDPhiB"] = (TH1D*) f->Get("HStopDPhiB");
  genHist["HStopDPhiB"]->SetLineColor(kGreen);
  genHist["HStopDPhiB"]->SetMarkerColor(kGreen);
  genHist["HStopDPhiq1"] = (TH1D*) f->Get("HStopDPhiq1");
  genHist["HStopDPhiq1"]->SetLineColor(kCyan);
  genHist["HStopDPhiq1"]->SetMarkerColor(kCyan);
  genHist["HStopDPhiq2"] = (TH1D*) f->Get("HStopDPhiq2");
  genHist["HStopDPhiq2"]->SetLineColor(kBlue);
  genHist["HStopDPhiq2"]->SetMarkerColor(kBlue);

  genHist["NegLLSPDPhiB"] = (TH1D*) f->Get("NegLLSPDPhiB");
  genHist["NegLLSPDPhiB"]->SetLineColor(kGreen);
  genHist["NegLLSPDPhiB"]->SetMarkerColor(kGreen);
  genHist["NegLLSPDPhiL"] = (TH1D*) f->Get("NegLLSPDPhiL");
  genHist["NegLLSPDPhiL"]->SetLineColor(kCyan);
  genHist["NegLLSPDPhiL"]->SetMarkerColor(kCyan);
  genHist["NegLLSPDPhiN"] = (TH1D*) f->Get("NegLLSPDPhiN");
  genHist["NegLLSPDPhiN"]->SetLineColor(kBlue);
  genHist["NegLLSPDPhiN"]->SetMarkerColor(kBlue);

  genHist["PosLLSPDPhiB"] = (TH1D*) f->Get("PosLLSPDPhiB");
  genHist["PosLLSPDPhiB"]->SetLineColor(kGreen);
  genHist["PosLLSPDPhiB"]->SetMarkerColor(kGreen);
  genHist["PosLLSPDPhiL"] = (TH1D*) f->Get("PosLLSPDPhiL");
  genHist["PosLLSPDPhiL"]->SetLineColor(kCyan);
  genHist["PosLLSPDPhiL"]->SetMarkerColor(kCyan);
  genHist["PosLLSPDPhiN"] = (TH1D*) f->Get("PosLLSPDPhiN");
  genHist["PosLLSPDPhiN"]->SetLineColor(kBlue);
  genHist["PosLLSPDPhiN"]->SetMarkerColor(kBlue);

  genMap["NegLStopDPhiLSP_map"] = (TH2D*) f->Get("NegLStopDPhiLSP_map");
  genMap["NegLStopDPhiLSP_map"]->SetLineColor(kRed);
  genMap["NegLStopDPhiLSP_map"]->SetMarkerColor(kRed);
  genMap["NegLStopDPhiB_map"] = (TH2D*) f->Get("NegLStopDPhiB_map");
  genMap["NegLStopDPhiB_map"]->SetLineColor(kGreen);
  genMap["NegLStopDPhiB_map"]->SetMarkerColor(kGreen);
  genMap["NegLStopDPhiL_map"] = (TH2D*) f->Get("NegLStopDPhiL_map");
  genMap["NegLStopDPhiL_map"]->SetLineColor(kCyan);
  genMap["NegLStopDPhiL_map"]->SetMarkerColor(kCyan);
  genMap["NegLStopDPhiN_map"] = (TH2D*) f->Get("NegLStopDPhiN_map");
  genMap["NegLStopDPhiN_map"]->SetLineColor(kBlue);
  genMap["NegLStopDPhiN_map"]->SetMarkerColor(kBlue);

  genMap["PosLStopDPhiLSP_map"] = (TH2D*) f->Get("PosLStopDPhiLSP_map");
  genMap["PosLStopDPhiLSP_map"]->SetLineColor(kRed);
  genMap["PosLStopDPhiLSP_map"]->SetMarkerColor(kRed);
  genMap["PosLStopDPhiB_map"] = (TH2D*) f->Get("PosLStopDPhiB_map");
  genMap["PosLStopDPhiB_map"]->SetLineColor(kGreen);
  genMap["PosLStopDPhiB_map"]->SetMarkerColor(kGreen);
  genMap["PosLStopDPhiL_map"] = (TH2D*) f->Get("PosLStopDPhiL_map");
  genMap["PosLStopDPhiL_map"]->SetLineColor(kCyan);
  genMap["PosLStopDPhiL_map"]->SetMarkerColor(kCyan);
  genMap["PosLStopDPhiN_map"] = (TH2D*) f->Get("PosLStopDPhiN_map");
  genMap["PosLStopDPhiN_map"]->SetLineColor(kBlue);
  genMap["PosLStopDPhiN_map"]->SetMarkerColor(kBlue);

  genMap["NegLLSPDPhiB_map"] = (TH2D*) f->Get("NegLLSPDPhiB_map");
  genMap["NegLLSPDPhiB_map"]->SetLineColor(kGreen);
  genMap["NegLLSPDPhiB_map"]->SetMarkerColor(kGreen);
  genMap["NegLLSPDPhiL_map"] = (TH2D*) f->Get("NegLLSPDPhiL_map");
  genMap["NegLLSPDPhiL_map"]->SetLineColor(kCyan);
  genMap["NegLLSPDPhiL_map"]->SetMarkerColor(kCyan);
  genMap["NegLLSPDPhiN_map"] = (TH2D*) f->Get("NegLLSPDPhiN_map");
  genMap["NegLLSPDPhiN_map"]->SetLineColor(kBlue);
  genMap["NegLLSPDPhiN_map"]->SetMarkerColor(kBlue);

  genMap["PosLLSPDPhiB_map"] = (TH2D*) f->Get("PosLLSPDPhiB_map");
  genMap["PosLLSPDPhiB_map"]->SetLineColor(kGreen);
  genMap["PosLLSPDPhiB_map"]->SetMarkerColor(kGreen);
  genMap["PosLLSPDPhiL_map"] = (TH2D*) f->Get("PosLLSPDPhiL_map");
  genMap["PosLLSPDPhiL_map"]->SetLineColor(kCyan);
  genMap["PosLLSPDPhiL_map"]->SetMarkerColor(kCyan);
  genMap["PosLLSPDPhiN_map"] = (TH2D*) f->Get("PosLLSPDPhiN_map");
  genMap["PosLLSPDPhiN_map"]->SetLineColor(kBlue);
  genMap["PosLLSPDPhiN_map"]->SetMarkerColor(kBlue);

  genMap["DeltaPhiLSPHMET_map"] = (TH2D*) f->Get("DeltaPhiLSPHMET_map");
  genMap["DeltaPhiLSPHMET_map"]->SetLineColor(kBlack);
  genMap["DeltaPhiLSPHMET_map"]->SetMarkerColor(kBlack);
  genMap["DeltaPhiLSPLMET_map"] = (TH2D*) f->Get("DeltaPhiLSPLMET_map");
  genMap["DeltaPhiLSPLMET_map"]->SetLineColor(kRed);
  genMap["DeltaPhiLSPLMET_map"]->SetMarkerColor(kRed);
  genMap["DeltaPhiStopHMET_map"] = (TH2D*) f->Get("DeltaPhiStopHMET_map");
  genMap["DeltaPhiStopHMET_map"]->SetLineColor(kGreen);
  genMap["DeltaPhiStopHMET_map"]->SetMarkerColor(kGreen);
  genMap["DeltaPhiStopLMET_map"] = (TH2D*) f->Get("DeltaPhiStopLMET_map");
  genMap["DeltaPhiStopLMET_map"]->SetLineColor(kCyan);
  genMap["DeltaPhiStopLMET_map"]->SetMarkerColor(kCyan);

  TString cname;
  cname = "DeltaPhiHadronicStopSystem";
  TCanvas *c12 = new TCanvas(cname, cname, 700, 700);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);
  c12->SetLogy();

  genHist["HStopDPhiLSP"]->Draw();
  genHist["HStopDPhiLSP"]->GetXaxis()->SetTitle("#Delta #Phi [stop^{H}, X decay]");
  genHist["HStopDPhiB"]->Draw("same");
  genHist["HStopDPhiq1"]->Draw("same");
  genHist["HStopDPhiq2"]->Draw("same");

  TLegend *leg12 = new TLegend(0.635057,0.69494,0.936782,0.924107); 
  leg12->SetFillColor(0);
  leg12->SetTextSize(0.034965);
  leg12->AddEntry(genHist["HStopDPhiLSP"],"LSP","lp");
  leg12->AddEntry(genHist["HStopDPhiB"], "b-quark","lp");
  leg12->AddEntry(genHist["HStopDPhiq1"], "q1","lp");
  leg12->AddEntry(genHist["HStopDPhiq2"], "q2","lp");
  leg12->Draw("same");
  c12->SaveAs(cname+".png");

  cname = "DeltaPhiNegativeStopSystem";
  TCanvas *c1 = new TCanvas(cname, cname, 700, 700);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);
  c1->SetLogy();

  genHist["NegLStopDPhiLSP"]->Draw();
  genHist["NegLStopDPhiLSP"]->GetXaxis()->SetTitle("#Delta #Phi [stop^{-}, X decay]");
  genHist["NegLStopDPhiB"]->Draw("same");
  genHist["NegLStopDPhiL"]->Draw("same");
  genHist["NegLStopDPhiN"]->Draw("same");

  TLegend *leg = new TLegend(0.635057,0.69494,0.936782,0.924107); 
  leg->SetFillColor(0);
  leg->SetTextSize(0.034965);
  leg->AddEntry(genHist["NegLStopDPhiLSP"],"LSP","lp");
  leg->AddEntry(genHist["NegLStopDPhiB"], "b-quark","lp");
  leg->AddEntry(genHist["NegLStopDPhiL"], "lepton","lp");
  leg->AddEntry(genHist["NegLStopDPhiN"], "neutrino","lp");
  leg->Draw("same");
  c1->SaveAs(cname+".png");

  cname = "DeltaPhiPositiveStopSystem";
  TCanvas *c2 = new TCanvas(cname, cname, 700, 700);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);
  c2->SetLogy();

  genHist["PosLStopDPhiLSP"]->GetXaxis()->SetTitle("#Delta #Phi [stop^{+}, X decay]");
  genHist["PosLStopDPhiLSP"]->Draw();
  genHist["PosLStopDPhiB"]->Draw("same");
  genHist["PosLStopDPhiL"]->Draw("same");
  genHist["PosLStopDPhiN"]->Draw("same");

  TLegend *leg2 = new TLegend(0.635057,0.69494,0.936782,0.924107); 
  leg2->SetFillColor(0);
  leg2->SetTextSize(0.034965);
  leg2->AddEntry(genHist["PosLStopDPhiLSP"],"LSP","lp");
  leg2->AddEntry(genHist["PosLStopDPhiB"], "b-quark","lp");
  leg2->AddEntry(genHist["PosLStopDPhiL"], "lepton","lp");
  leg2->AddEntry(genHist["PosLStopDPhiN"], "neutrino","lp");
  leg2->Draw("same");
  c2->SaveAs(cname+".png");

  cname = "DeltaPhiLSPNegativeStopSystem";
  TCanvas *c3 = new TCanvas(cname, cname, 700, 700);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);
  c3->SetLogy();

  genHist["NegLLSPDPhiB"]->GetXaxis()->SetTitle("#Delta #Phi [LSP^{-}, X decay]");
  genHist["NegLLSPDPhiB"]->Draw();
  genHist["NegLLSPDPhiL"]->Draw("same");
  genHist["NegLLSPDPhiN"]->Draw("same");

  TLegend *leg3 = new TLegend(0.635057,0.69494,0.936782,0.924107); 
  leg3->SetFillColor(0);
  leg3->SetTextSize(0.034965);
  leg3->AddEntry(genHist["NegLLSPDPhiB"], "b-quark","lp");
  leg3->AddEntry(genHist["NegLLSPDPhiL"], "lepton","lp");
  leg3->AddEntry(genHist["NegLLSPDPhiN"], "neutrino","lp");
  leg3->Draw("same");
  c3->SaveAs(cname+".png");

  cname = "DeltaPhiLSPPositiveStopSystem";
  TCanvas *c4 = new TCanvas(cname, cname, 700, 700);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);
  c4->SetLogy();

  genHist["PosLLSPDPhiB"]->GetXaxis()->SetTitle("#Delta #Phi [LSP^{+}, X decay]");
  genHist["PosLLSPDPhiB"]->Draw();
  genHist["PosLLSPDPhiL"]->Draw("same");
  genHist["PosLLSPDPhiN"]->Draw("same");

  TLegend *leg4 = new TLegend(0.635057,0.69494,0.936782,0.924107); 
  leg4->SetFillColor(0);
  leg4->SetTextSize(0.034965);
  leg4->AddEntry(genHist["PosLLSPDPhiB"], "b-quark","lp");
  leg4->AddEntry(genHist["PosLLSPDPhiL"], "lepton","lp");
  leg4->AddEntry(genHist["PosLLSPDPhiN"], "neutrino","lp");
  leg4->Draw("same");
  c4->SaveAs(cname+".png");

  //----------------------------------------------------------

  cname = "DeltaPhiNegativeStopSystem_map";
  TCanvas *c5 = new TCanvas(cname, cname, 700, 700);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);

  genMap["NegLStopDPhiLSP_map"]->Draw();
  genMap["NegLStopDPhiB_map"]->Draw("same");
  genMap["NegLStopDPhiL_map"]->Draw("same");
  genMap["NegLStopDPhiN_map"]->Draw("same");

  TLegend *leg5 = new TLegend(0.635057,0.69494,0.936782,0.924107); 
  leg5->SetFillColor(0);
  leg5->SetTextSize(0.034965);
  leg5->AddEntry(genMap["NegLStopDPhiLSP_map"],"LSP","lp");
  leg5->AddEntry(genMap["NegLStopDPhiB_map"], "b-quark","lp");
  leg5->AddEntry(genMap["NegLStopDPhiL_map"], "lepton","lp");
  leg5->AddEntry(genMap["NegLStopDPhiN_map"], "neutrino","lp");
  leg5->Draw("same");
  c5->SaveAs(cname+".png");

  cname = "DeltaPhiPositiveStopSystem_map";
  TCanvas *c6 = new TCanvas(cname, cname, 700, 700);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);

  genMap["PosLStopDPhiLSP_map"]->Draw();
  genMap["PosLStopDPhiB_map"]->Draw("same");
  genMap["PosLStopDPhiL_map"]->Draw("same");
  genMap["PosLStopDPhiN_map"]->Draw("same");

  TLegend *leg6 = new TLegend(0.635057,0.69494,0.936782,0.924107); 
  leg6->SetFillColor(0);
  leg6->SetTextSize(0.034965);
  leg6->AddEntry(genMap["PosLStopDPhiLSP_map"],"LSP","lp");
  leg6->AddEntry(genMap["PosLStopDPhiB_map"], "b-quark","lp");
  leg6->AddEntry(genMap["PosLStopDPhiL_map"], "lepton","lp");
  leg6->AddEntry(genMap["PosLStopDPhiN_map"], "neutrino","lp");
  leg6->Draw("same");
  c6->SaveAs(cname+".png");

  cname = "DeltaPhiLSPNegativeStopSystem_map";
  TCanvas *c7 = new TCanvas(cname, cname, 700, 700);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);

  genMap["NegLLSPDPhiB_map"]->Draw();
  genMap["NegLLSPDPhiL_map"]->Draw("same");
  genMap["NegLLSPDPhiN_map"]->Draw("same");

  TLegend *leg7 = new TLegend(0.635057,0.69494,0.936782,0.924107); 
  leg7->SetFillColor(0);
  leg7->SetTextSize(0.034965);
  leg7->AddEntry(genMap["NegLLSPDPhiB_map"], "b-quark","lp");
  leg7->AddEntry(genMap["NegLLSPDPhiL_map"], "lepton","lp");
  leg7->AddEntry(genMap["NegLLSPDPhiN_map"], "neutrino","lp");
  leg7->Draw("same");
  c7->SaveAs(cname+".png");

  cname = "DeltaPhiLSPPositiveStopSystem_map";
  TCanvas *c8 = new TCanvas(cname, cname, 700, 700);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);

  genMap["PosLLSPDPhiB_map"]->Draw();
  genMap["PosLLSPDPhiL_map"]->Draw("same");
  genMap["PosLLSPDPhiN_map"]->Draw("same");

  TLegend *leg8 = new TLegend(0.635057,0.69494,0.936782,0.924107); 
  leg8->SetFillColor(0);
  leg8->SetTextSize(0.034965);
  leg8->AddEntry(genMap["PosLLSPDPhiB_map"], "b-quark","lp");
  leg8->AddEntry(genMap["PosLLSPDPhiL_map"], "lepton","lp");
  leg8->AddEntry(genMap["PosLLSPDPhiN_map"], "neutrino","lp");
  leg8->Draw("same");
  c8->SaveAs(cname+".png");

  //----------------------------------------
  cname = "DeltaPhiStopsLSPS";
  TCanvas *c10 = new TCanvas(cname, cname, 700, 700);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);

  genHist["DeltaPhiLSPS"]->Draw();
  genHist["DeltaPhiStops"]->Draw("same");

  TLegend *leg10 = new TLegend(0.484195,0.688988,0.920977,0.938988);
  leg10->SetFillColor(0);
  leg10->SetTextSize(0.034965);
  leg10->AddEntry(genHist["DeltaPhiLSPS"], "#Delta #Phi [LSP1, LSP2] ","lp");
  leg10->AddEntry(genHist["DeltaPhiStops"], "#Delta #Phi [stop1, stop2] ","lp");
  leg10->Draw("same");
  c10->SaveAs(cname+".png");

  cname = "StopMETSystem";
  TCanvas *c11 = new TCanvas(cname, cname, 700, 700);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);

  genMap["DeltaPhiStopHMET_map"]->Draw();
  genMap["DeltaPhiStopLMET_map"]->Draw("same");
  genMap["DeltaPhiLSPHMET_map"]->Draw("same");
  genMap["DeltaPhiLSPLMET_map"]->Draw("same");

  TLegend *leg11 = new TLegend(0.484195,0.688988,0.920977,0.938988);
  leg11->SetFillColor(0);
  leg11->SetTextSize(0.034965);
  leg11->AddEntry(genMap["DeltaPhiStopHMET_map"], "#Delta #Phi [MET, Stop H] ","lp");
  leg11->AddEntry(genMap["DeltaPhiStopLMET_map"], "#Delta #Phi [MET, Stop L] ","lp");
  leg11->AddEntry(genMap["DeltaPhiLSPHMET_map"], "#Delta #Phi [MET, LSP H] ","lp");
  leg11->AddEntry(genMap["DeltaPhiLSPLMET_map"], "#Delta #Phi [MET, LSP L] ","lp");
  leg11->Draw("same");
  c11->SaveAs(cname+".png");
  
  cname = "METandDecays";
  TCanvas *c13 = new TCanvas(cname, cname, 1400, 700);
  gStyle->SetOptStat(111);
  gStyle->SetOptTitle(111111);

  c13->Divide(4,2);

  c13->cd(1);
  genHist["DeltaPhiMETLSPH"]->Draw();
  c13->cd(2);
  genHist["DeltaPhiMETLSPL"]->Draw();
  c13->cd(3);
  genHist["DeltaPhiMETSTOPH"]->Draw();
  c13->cd(4);
  genHist["DeltaPhiMETSTOPL"]->Draw();
  c13->cd(5);
  genHist["DeltaPhiMETbH"]->Draw();
  c13->cd(6);
  genHist["DeltaPhiMETbL"]->Draw();
  c13->cd(7);
  genHist["DeltaPhiMETlep"]->Draw();

  c13->SaveAs(cname+".png");

  cname = "Pt_StopSystem";
  TCanvas *c9 = new TCanvas(cname, cname, 1200, 800);
  c9->Divide(5,2);
  gStyle->SetOptStat(111);
  gStyle->SetOptTitle(111111);
  //c9->SetLogy();

  c9->cd(1);
  genHist["stopL_Pt"]->Draw();
  c9->cd(2);
  genHist["lspL_Pt"]->Draw();
  c9->cd(3);
  genHist["bL_Pt"]->GetXaxis()->SetRangeUser(0,50);
  genHist["bL_Pt"]->Draw();
  c9->cd(4);
  genHist["n_Pt"]->GetXaxis()->SetRangeUser(0,50);
  genHist["n_Pt"]->Draw();
  c9->cd(5);
  genHist["l_Pt"]->GetXaxis()->SetRangeUser(0,50);
  genHist["l_Pt"]->Draw();

  /*TLegend *leg9 = new TLegend(0.484195,0.688988,0.920977,0.938988);
  leg9->SetFillColor(0);
  leg9->SetTextSize(0.034965);
  leg9->AddEntry(genHist["stopL_Pt"], "Stop, Mean = 198.3","lp");
  leg9->AddEntry(genHist["lspL_Pt"], "LSP, Mean = 190.8","lp");
  leg9->AddEntry(genHist["bL_Pt"], "b-quark, Mean = 8.473","lp");
  leg9->AddEntry(genHist["l_Pt"], "lepton, Mean = 5.78","lp");
  leg9->AddEntry(genHist["n_Pt"], "neutrino, Mean = 5.56","lp");
  leg9->Draw("same");*/


  /*  
  c10->Divide(3,2);*/
  //  
  //c10->SetLogy();

  c9->cd(6);
  genHist["stopH_Pt"]->Draw();
  c9->cd(7);
  genHist["lspH_Pt"]->Draw();
  c9->cd(8);
  genHist["bH_Pt"]->GetXaxis()->SetRangeUser(0,50);
  genHist["bH_Pt"]->Draw();
  c9->cd(9);
  genHist["q1_Pt"]->GetXaxis()->SetRangeUser(0,50);
  genHist["q1_Pt"]->Draw();
  c9->cd(10);
  genHist["q2_Pt"]->GetXaxis()->SetRangeUser(0,50);
  genHist["q2_Pt"]->Draw();
  c9->SaveAs(cname+".png");

 



  
}
