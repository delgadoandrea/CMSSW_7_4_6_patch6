#define EventLoop_cxx
#include "EventLoop.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TLorentzVector.h>
#include <TVector2.h>
#include <TMath.h>
#include <TProfile2D.h>

#include <map>
#include <iterator>
#include <iostream>
#include <fstream>

void EventLoop::Loop()
{
//   In a ROOT session, you can do:
//      root> .L EventLoop.C
//      root> EventLoop t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntriesFast();

   cout << "Doing sample: " << samples[sampleIndex] << " :) " << endl;
   TFile *outf = new TFile(outFile[sampleIndex],"RECREATE"); 

   map<TString, TH1D*> histograms;
   TString hname;
   hname = "mupt"; 
   histograms[hname] = new TH1D(hname, "p_{T, #mu}; p_{T, #mu}; Entries",12,3,15);
   histograms[hname]->Sumw2();
   hname = "mu2pt"; 
   histograms[hname] = new TH1D(hname, "p_{T, #mu2}; p_{T, #mu2}; Entries",3,0,3);
   histograms[hname]->Sumw2();
   hname = "leadjetpt";
   histograms[hname] = new TH1D(hname, "p_{T}^{Leading jet}; p_{T}^{Leading jet}; Entries", 25, 30, 1250);
   histograms[hname]->Sumw2();
   hname = "2ndjetpt"; 
   histograms[hname] = new TH1D(hname, "p_{T}^{2nd jet}; p_{T}^{2nd jet}; Entries", 40,30,1000);
   histograms[hname]->Sumw2();
   hname = "3rdjetpt";
   histograms[hname] = new TH1D(hname, "p_{T}^{3rd jet}; p_{T}^{3rd jet}; Entries", 32,30,800);
   histograms[hname]->Sumw2();
   hname = "4rthjetpt";
   histograms[hname] = new TH1D(hname, "p_{T}^{3rd jet}; p_{T}^{3rd jet}; Entries", 32,30,800);
   histograms[hname]->Sumw2();
   hname = "METpt";
   histograms[hname] = new TH1D(hname, "MET_{p_{T}}; MET; Entries", 26,200,1500);
   histograms[hname]->Sumw2();
   hname = "mjj";
   histograms[hname] = new TH1D(hname, "m_{jj};  m_{jj}; Entries", 40,0,2000);
   histograms[hname]->Sumw2();
   hname = "njets";
   histograms[hname] = new TH1D(hname, "Number of jets;  No. of Jets; Entries", 15,0,15);
   histograms[hname]->Sumw2();
   hname = "deltaeta";
   histograms[hname] = new TH1D(hname, "#Delta_{#eta};  #Delta_{#eta}; Entries", 10,0,10);
   histograms[hname]->Sumw2();
   hname = "VBFInvMass";
   histograms[hname] = new TH1D(hname, "m_{jj} + VBF cuts; m_{jj}; Entries", 40, 0, 2000);
   histograms[hname]->Sumw2();
   hname = "METopt";
   histograms[hname] = new TH1D(hname, "MET/p_{T}^{lead jet}", 15,0,3.);
   histograms[hname]->Sumw2();
   hname = "METPhiLeadJetPhi";
   histograms[hname] = new TH1D(hname, " MET and p_{T}^{lead jet} #Delta_{#phi};  #Delta#phi_{MET - p_{T}^{Lead}}; Entries", 20,-TMath::Pi(),TMath::Pi());
   histograms[hname]->Sumw2();
   hname = "METJets";
   histograms[hname] = new TH1D(hname, " Number of jets in MET hemisphere;  No. of Jets; Entries", 15,0,15);
   histograms[hname]->Sumw2();
   hname = "BalanceJets";
   histograms[hname] = new TH1D(hname, " Number of jets in balancing hemisphere;  No. of Jets; Entries", 15,0,15);
   histograms[hname]->Sumw2();
   hname = "BJets";
   histograms[hname] = new TH1D(hname, " Number of b-tagged jets;  No. of Jets; Entries", 7,0,7);
   histograms[hname]->Sumw2();
   hname = "phimuphileadj";
   histograms[hname] = new TH1D(hname, " #Delta_{#phi}[#mu,jet_{1}];  #Delta#phi[#mu, jet_{1}}; Entries", 20,-TMath::Pi(),TMath::Pi());
   histograms[hname]->Sumw2();
   hname = "phimuphimet";
   histograms[hname] = new TH1D(hname, " #Delta_{#phi}[#mu,MET];  #Delta#phi[#mu, MET}; Entries", 20,-TMath::Pi(),TMath::Pi());
   histograms[hname]->Sumw2();
   hname = "phimu2phimet";
   histograms[hname] = new TH1D(hname, " #Delta_{#phi}[#mu2,MET];  #Delta#phi[#mu2, MET}; Entries", 20,-TMath::Pi(),TMath::Pi());
   histograms[hname]->Sumw2();
   hname = "phijet1phijet2";
   histograms[hname] = new TH1D(hname, " #Delta_{#phi}[jet_{1},jet_{2}];  #Delta#phi[jet_{1}, jet_{2}}; Entries", 20,-TMath::Pi(),TMath::Pi());
   histograms[hname]->Sumw2();
   hname = "phimetphijet2";
   histograms[hname] = new TH1D(hname, " #Delta_{#phi}[MET,jet_{2}];  #Delta#phi[MET, jet_{2}}; Entries", 20,-TMath::Pi(),TMath::Pi());
   histograms[hname]->Sumw2();
   hname = "phimetphijet3";
   histograms[hname] = new TH1D(hname, " #Delta_{#phi}[MET,jet_{3}];  #Delta#phi[MET, jet_{3}}; Entries", 20,-TMath::Pi(),TMath::Pi());
   histograms[hname]->Sumw2();
   hname = "phimetphijet4";
   histograms[hname] = new TH1D(hname, " #Delta_{#phi}[MET,jet_{4}];  #Delta#phi[MET, jet_{4}}; Entries", 20,-TMath::Pi(),TMath::Pi());
   histograms[hname]->Sumw2();
   hname = "hmt";
   histograms[hname] = new TH1D(hname, " Transverse mass; m_{T};  Entries", 8,0,200);
   histograms[hname]->Sumw2();
   TH2D * mapj1 = new TH2D("Angular distribution j1", "Angular distribution j1", 500,-5,5, 500,-5, 5);
   mapj1->Sumw2();
   TH2D * mapj2 = new TH2D("Angular distribution j2", "Angular distribution j2", 500,-5,5, 500,-5, 5);
   mapj2->Sumw2();
   TH2D * mapmu = new TH2D("Angular_distribution_mu", "Angular_distribution_mu", 50,-1.5,1.5, 50,-1.5, 1.5);
   mapmu->Sumw2();
   TH2D * mapmuj1 = new TH2D("Angular_distribution_mu_j1", "Angular_distribution_mu_j1", 50,-1.5,1.5, 50,-1.5, 1.5);
   mapmuj1->Sumw2();
   TH2D * mapmuj2 = new TH2D("Angular_distribution_mu_j2", "Angular_distribution_mu_j2", 50,-1.5,1.5, 50,-1.5, 1.5);
   mapmuj2->Sumw2();
   TH2D * mapmuj3 = new TH2D("Angular_distribution_mu_j3", "Angular_distribution_mu_j3", 50,-1.5,1.5, 50,-1.5, 1.5);
   mapmuj3->Sumw2();
   TH2D * mapmuj4 = new TH2D("Angular_distribution_mu_j4", "Angular_distribution_mu_j4", 50,-1.5,1.5, 50,-1.5, 1.5);
   mapmuj4->Sumw2();
   TH2D * mapmum1 = new TH2D("Angular_distribution_mu_m1", "Angular_distribution_mu_m1", 50,-1.5,1.5, 50,-1.5, 1.5);
   mapmum1->Sumw2();
   TH2D * mapmum2 = new TH2D("Angular_distribution_mu_m2", "Angular_distribution_mu_m2", 50,-1.5,1.5, 50,-1.5, 1.5);
   mapmum2->Sumw2();
   TH2D * mapmum3 = new TH2D("Angular_distribution_mu_m3", "Angular_distribution_mu_m3", 50,-1.5,1.5, 50,-1.5, 1.5);
   mapmum3->Sumw2();
   
   hname = "lepinvmass"; 
   histograms[hname] = new TH1D(hname, " LepInvMass;  LepInvMass; Entries", 50,0,150);
   histograms[hname]->Sumw2();
   hname = "jetsinvmass"; 
   histograms[hname] = new TH1D(hname, " JetsInvMass;  JetsInvMass; Entries", 50,0,150);
   histograms[hname]->Sumw2();
   hname = "DeltaPhiMETMu";
   histograms[hname] = new TH1D(hname, "#Delta #Phi [MET, #mu]; #Delta #Phi [MET, #mu];  Entries/ pb^{-1}", 10, 0 , TMath::Pi());
   histograms[hname]->Sumw2();
   
   Long64_t nbytes = 0, nb = 0;
   Double_t events = 0;
   Double_t wevents = 0;
   TLorentzVector metV;
   TLorentzVector lepV;
   TLorentzVector sumT;
   TLorentzVector lepInv;
   TLorentzVector jetsInv;
   
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      if(jentry%10000==0) std::cout<<jentry<<std::endl;
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      
      Double_t METCut = 200.0;
      Double_t maxMuPtCut = 12.0;
      Double_t minMuPtCut = 3.0;
      Int_t NoJets = 0;
      lepV.Clear();
      metV.Clear();
      sumT.Clear();
      lepInv.Clear();
      bool muoncut = true;
      Int_t flip = 1;
      
      if(Muons->size()>1){
        lepInv = Muons->at(0)+ Muons->at(1); 
        histograms["lepinvmass"]->Fill(lepInv.M(),Weight*lum[sampleIndex]/puWeight);
      }

      if(Jets->size()>2){
        jetsInv = Jets->at(1)+ Jets->at(2); 
        histograms["jetsinvmass"]->Fill(jetsInv.M(),Weight*lum[sampleIndex]/puWeight);
      }
      metV.SetXYZT(METPt*cos(METPhi), METPt*sin(METPhi), 0.0, METPt);
   
      if(Muons->size()>0 && Muons->at(0).Pt()<maxMuPtCut && Muons->at(0).Pt()>minMuPtCut && Electrons->size() == 0 && METPt > METCut){
        Double_t METopt = METPt/Jets->at(0).Pt();

        lepV.SetPtEtaPhiE(Muons->at(0).Pt(), 0., Muons->at(0).Phi(), Muons->at(0).Et());
        
        if(Muons->size() > 1){
          if (Muons->at(1).Pt() > minMuPtCut) muoncut = false;
          else{
            histograms["mu2pt"]->Fill(Muons->at(1).Pt(),Weight*lum[sampleIndex]/puWeight);
            histograms["phimu2phimet"]->Fill(metV.DeltaPhi(Muons->at(1)),Weight*lum[sampleIndex]/puWeight);
          }
        }
        
        if (muoncut){               
          if(Muons->at(0).Pt() < 10) histograms["DeltaPhiMETMu"]->Fill(metV.DeltaPhi(Muons->at(0)),Weight*lum[sampleIndex]/puWeight);
	  
          if(metV.DeltaPhi(Muons->at(0)) < 0) flip = -1;
          mapmu->Fill(log10(Muons->at(0).Pt())*cos(metV.DeltaPhi(Muons->at(0))),flip*log10(Muons->at(0).Pt())*sin(metV.DeltaPhi(Muons->at(0))),Weight*lum[sampleIndex]/puWeight);
          if(Muons->at(0).Pt() < 12.0)  mapmum1->Fill(log10(Muons->at(0).Pt())*cos(metV.DeltaPhi(Muons->at(0))),flip*log10(Muons->at(0).Pt())*sin(metV.DeltaPhi(Muons->at(0))),Weight*lum[sampleIndex]/puWeight);
          if(Muons->at(0).Pt() < 10.0)  mapmum2->Fill(log10(Muons->at(0).Pt())*cos(metV.DeltaPhi(Muons->at(0))),flip*log10(Muons->at(0).Pt())*sin(metV.DeltaPhi(Muons->at(0))),Weight*lum[sampleIndex]/puWeight);
          if(Muons->at(0).Pt() < 8.0)  mapmum3->Fill(log10(Muons->at(0).Pt())*cos(metV.DeltaPhi(Muons->at(0))),flip*log10(Muons->at(0).Pt())*sin(metV.DeltaPhi(Muons->at(0))),Weight*lum[sampleIndex]/puWeight);
          if (NJets == 1) mapmuj1->Fill(log10(Muons->at(0).Pt())*cos(metV.DeltaPhi(Muons->at(0))),flip*log10(Muons->at(0).Pt())*sin(metV.DeltaPhi(Muons->at(0))),Weight*lum[sampleIndex]/puWeight);
	  if (NJets == 2) mapmuj2->Fill(log10(Muons->at(0).Pt())*cos(metV.DeltaPhi(Muons->at(0))),flip*log10(Muons->at(0).Pt())*sin(metV.DeltaPhi(Muons->at(0))),Weight*lum[sampleIndex]/puWeight);
	  if (NJets == 3) mapmuj3->Fill(log10(Muons->at(0).Pt())*cos(metV.DeltaPhi(Muons->at(0))),flip*log10(Muons->at(0).Pt())*sin(metV.DeltaPhi(Muons->at(0))),Weight*lum[sampleIndex]/puWeight);
	  if (NJets == 4) mapmuj4->Fill(log10(Muons->at(0).Pt())*cos(metV.DeltaPhi(Muons->at(0))),flip*log10(Muons->at(0).Pt())*sin(metV.DeltaPhi(Muons->at(0))),Weight*lum[sampleIndex]/puWeight);
	  
          histograms["mupt"]->Fill(Muons->at(0).Pt(),Weight*lum[sampleIndex]/puWeight);
          histograms["phimuphileadj"]->Fill(Muons->at(0).DeltaPhi(Jets->at(0)),Weight*lum[sampleIndex]/puWeight);         
          
          histograms["phimuphimet"]->Fill(metV.DeltaPhi(Muons->at(0)),Weight*lum[sampleIndex]/puWeight);        
          sumT = metV + lepV;
          histograms["hmt"]->Fill(sumT.M(),Weight*lum[sampleIndex]/puWeight);
          
          histograms["METpt"]->Fill(METPt,Weight*lum[sampleIndex]/puWeight);  
          histograms["leadjetpt"]->Fill(Jets->at(0).Pt(),Weight*lum[sampleIndex]/puWeight);
          histograms["METopt"]->Fill(METopt, Weight*lum[sampleIndex]/puWeight);
          histograms["METPhiLeadJetPhi"]->Fill(metV.DeltaPhi(Jets->at(0)), Weight*lum[sampleIndex]/puWeight);
          
          //          mapj1->Fill(log10(Jets->at(0).Pt())*cos(metV.DeltaPhi(Jets->at(0))),flip*log10(Jets->at(0).Pt())*sin(metV.DeltaPhi(Jets->at(0))),Weight*lum[sampleIndex]/puWeight); 
          //mapj2->Fill(log10(Jets->at(1).Pt())*cos(metV.DeltaPhi(Jets->at(1))),flip*log10(Jets->at(1).Pt())*sin(metV.DeltaPhi(Jets->at(1))),Weight*lum[sampleIndex]/puWeight); 
          
          Double_t mass = -1;
          Double_t deltae = 0;
          Double_t massVBF = -1;
          Double_t deltaeVBF = 0;
          int nJetsMET = 0;
          int nJetsBal = 0;
          int bTags = 0;
          
          for(unsigned int i=0; i<Jets->size(); ++i){
            if(Jets->at(i).Pt() > 30.0){
              if(NJets>1){
                        histograms["2ndjetpt"]->Fill(Jets->at(1).Pt(),Weight*lum[sampleIndex]/puWeight);      
                        histograms["phijet1phijet2"]->Fill(Jets->at(0).DeltaPhi(Jets->at(1)),Weight*lum[sampleIndex]/puWeight);        
                        histograms["phimetphijet2"]->Fill(metV.DeltaPhi(Jets->at(1)), Weight*lum[sampleIndex]/puWeight);
                     }
                     if(NJets>2){
                        histograms["3rdjetpt"]->Fill(Jets->at(2).Pt(),Weight*lum[sampleIndex]/puWeight);    
                        histograms["phimetphijet3"]->Fill(metV.DeltaPhi(Jets->at(2)), Weight*lum[sampleIndex]/puWeight);
                     }
                     if(NJets>3){
                        histograms["4rthjetpt"]->Fill(Jets->at(3).Pt(),Weight*lum[sampleIndex]/puWeight);    
                        histograms["phimetphijet4"]->Fill(metV.DeltaPhi(Jets->at(3)), Weight*lum[sampleIndex]/puWeight);
                     }
                     // if (Cut(ientry) < 0) continue;
                     
                     NoJets++;
                     if(Jets_bDiscriminatorCS->at(i) > 0.89 && Jets_bDiscriminatorCS->at(i) < 1.0) bTags++;
                     if(TVector2::Phi_mpi_pi(METPhi - Jets->at(i).Phi()) > (TMath::Pi())/2){
                        ++nJetsBal;
                     }
                     else if(TVector2::Phi_mpi_pi(METPhi - Jets->at(i).Phi()) < (TMath::Pi())/2) ++nJetsMET;
                     
                     for(unsigned int j=i+1; j < Jets->size(); j++){
                        if(Jets->at(i).Eta()*Jets->at(j).Eta() < 0){
                           if(fabs(Jets->at(i).Eta()-Jets->at(j).Eta()) > 4.2){
                              TLorentzVector newVBFmass = Jets->at(i) + Jets->at(j);
                              if(newVBFmass.M() > massVBF){
                                 massVBF = newVBFmass.M();
                              }
                           }
                        }
                        TLorentzVector newMass = Jets->at(i) + Jets->at(j);
                        if(newMass.M() > mass){
                           mass = newMass.M();
                           deltae = fabs(Jets->at(i).Eta()-Jets->at(j).Eta()); 
                        }
                     }// second loop on jets
                  }//if jets > cut
               }//first loop on jets
               
               histograms["njets"]->Fill(NoJets,Weight*lum[sampleIndex]/puWeight);
               histograms["METJets"]->Fill(nJetsMET,Weight*lum[sampleIndex]/puWeight);      
               histograms["BJets"]->Fill(bTags,Weight*lum[sampleIndex]/puWeight);
               histograms["BalanceJets"]->Fill(nJetsBal,Weight*lum[sampleIndex]/puWeight);    
               histograms["mjj"]->Fill(mass,Weight*lum[sampleIndex]/puWeight);      
               histograms["deltaeta"]->Fill(deltae,Weight*lum[sampleIndex]/puWeight);
               histograms["VBFInvMass"]->Fill(massVBF, Weight*lum[sampleIndex]/puWeight);
       
        }//loop over cut
      }//loop over njets and musize
      ++events;
      wevents+= Weight;
   }//loop over entries in the tree
   
   cout << "Events: " << events << " " << "Weighted events: " << wevents << endl;
/*   TCanvas *a = new TCanvas("Weight applied","Weight applied",1500,1500);
     gStyle->SetOptStat(0);
     a->Divide(2,2);
     a->cd(1);
     histograms["mjjvsMET"]->Draw("colz");
     a->cd(2);
     histograms["METvspTjet2"]->Draw("colz");
     a->cd(3);
     h2->Draw();
     a->cd(4);
     histograms["etavsMu"]->Draw("colz");
     
     TCanvas *b = new TCanvas("No Weight","No Weight",1500,1500);
     gStyle->SetOptStat(0);
     b->Divide(2,2);
     b->cd(1);
     histograms["mjjvsMETnoWeight"]->Draw("colz");
     b->cd(2);
     histograms["METvspTjet2noWeight"]->Draw("colz");
     b->cd(3);
     h1->Draw();
     b->cd(4);
     histograms["etavsMunoWeight"]->Draw("colz");*/
   
   for(map<TString, TH1D*>::iterator k = histograms.begin(); k!=histograms.end(); k++){
      TString hname = k->first;
      //histograms[hname]->Scale(1./lum[sampleIndex]);
      histograms[hname]->GetXaxis()->SetTitle(hname);
      histograms[hname]->GetYaxis()->SetTitle("Events/pb");
      histograms[hname]->Write();
   }

   mapmu->Write();
   mapmum1->Write();
   mapmum2->Write();
   mapmum3->Write();
   mapmuj1->Write();
   mapmuj2->Write();
   mapmuj3->Write();
   mapmuj4->Write();
   mapj1->Write();
   mapj2->Write();
   outf->Close();
   
}
