
#define genTree_cxx
#include "genTree.h"
#include <TH2.h>
#include <TH2D.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TLorentzVector.h>
#include <TVector2.h>
#include <TMath.h>
#include <TProfile.h>



void genTree::Loop()
{
//   In a ROOT session, you can do:
//      root> .L genTree.C
//      root> genTree t
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
   TFile *outf = new TFile("QCD_3.root","RECREATE");
   
   map<TString, TH1D*> genHist;
   map<TString, TH2D*> genMap; 
   
   TString hname;
   
   hname = "isrJetPt";
   genHist[hname] = new TH1D(hname, "ISR Jet Pt; ISR jet Pt; events", 45,100, 1000);
   genHist[hname]->Sumw2();
   hname = "isrJetEta";
   genHist[hname] = new TH1D(hname, "ISR Jet Eta; ISR jet Eta; events", 48,-2.4, 2.4);
   genHist[hname]->Sumw2();
   hname = "njet60";
   genHist[hname] = new TH1D(hname, "Number of jets with Pt > 60 GeV; njet60; events", 10,0, 10);
   genHist[hname]->Sumw2();
   hname = "ht";
   genHist[hname] = new TH1D(hname, "HT; HT; events", 50,300, 1300);
   genHist[hname]->Sumw2();
   hname = "MET";
   genHist[hname] = new TH1D(hname, "MET; MET; events", 50,200, 1200);
   genHist[hname]->Sumw2();
   hname = "muPt";
   genHist[hname] = new TH1D(hname, "Muon Pt; muPt; events", 40,0, 200);
   genHist[hname]->Sumw2();
   hname = "muEta";
   genHist[hname] = new TH1D(hname, "ISR Jet Eta; ISR jet Eta; events", 46,-2.1, 2.1);
   genHist[hname]->Sumw2();
   hname = "nbtags";
   genHist[hname] = new TH1D(hname, "number of b-tags; nbtags; events", 6,0, 6);
   genHist[hname]->Sumw2();

   hname = "ISREvents";
   genHist[hname] = new TH1D(hname, "number of ISR Events; ISR; events", 1,0, 1);
   genHist[hname]->Sumw2();
   hname = "VBFEvents";
   genHist[hname] = new TH1D(hname, "number of VBF Events; VBF; events", 1,0, 1);
   genHist[hname]->Sumw2();
   hname = "ISRVBFEvents";
   genHist[hname] = new TH1D(hname, "number of ISR & VBF Events; ISR-VBF; events", 1,0, 1);
   genHist[hname]->Sumw2();

   
   Long64_t nbytes = 0, nb = 0;
   Int_t nevt = 0;
   Int_t ISRc =0;
   Int_t VBFc = 0;
   Int_t bothc = 0;
     
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
     if(jentry%100000==0) std::cout<<jentry<<std::endl;
     Long64_t ientry = LoadTree(jentry);
     if (ientry < 0) break;
     nb = fChain->GetEntry(jentry);   nbytes += nb;
     nevt++;
     
     Int_t ISRCounter = genTree::ISRCut(ientry);
     if(ISRCounter==1){
       ISRc++;
       genHist["ISREvents"]->Fill(ISRCounter, (0.000722806*1.3312*19.7*1000)/1.2951);
     }
     Int_t VBFCounter = genTree::VBFCut(ientry);
     if(VBFCounter==1){
       VBFc++;
       genHist["VBFEvents"]->Fill(VBFCounter,(0.000722806*1.3312*19.7*1000)/1.2951);
     }

     if(ISRCounter==1 && VBFCounter==1){
       bothc++;
       genHist["ISRVBFEvents"]->Fill(ISRCounter,(0.000722806*1.3312*19.7*1000)/1.2951);
     }

     
     
     /*if(cut){
       genHist["isrJetPt"]->Fill(Jets->at(0).Pt(),(3.78661*19700)/247899.);
       genHist["isrJetEta"]->Fill(Jets->at(0).Eta(),(3.78661*19700)/247899.);
       genHist["ht"]->Fill(HT,(3.78661*19700)/247899.);
       genHist["MET"]->Fill(METPt,(3.78661*19700)/247899.);
       for(int j=0; j<NJets; j++){
	 if(Jets->at(j).Pt()>60) n60++;
	 if(Jets_bDiscriminatorCS->at(j) > 0.89 && Jets_bDiscriminatorCS->at(j) < 1.0) bTags++;
       }
       genHist["njet60"]->Fill(n60,(3.78661*19700)/247899.);
       for(unsigned int m=0; m<Muons->size(); m++){
	 if(Muons->at(m).Pt() > 5 && Muons->at(m).Eta() < 2.1){
	   genHist["muPt"]->Fill(Muons->at(m).Pt(),(3.78661*19700)/247899.);
	   genHist["muEta"]->Fill(Muons->at(m).Eta(),(3.78661*19700)/247899.);
	 }
       }
       genHist["nbtags"]->Fill(bTags,(3.78661*19700)/247899.);
       }*/
     
   }//loop over entries

   
   std::cout<< "Events in sample: " << nevt << std::endl;
   std::cout<< "ISR events: " << ISRc << std::endl;
   std::cout<< "VBF events: " << VBFc << std::endl;
   std::cout<< "ISR & VBF events: " << bothc << std::endl;
      
   /* for(map<TString, TH1D*>::iterator k = genHist.begin(); k!=genHist.end(); k++){
     TString hname = k->first;
     genHist[hname]->GetXaxis()->SetTitle(hname);
     genHist[hname]->GetYaxis()->SetTitle("Events");
     genHist[hname]->Write();
     TCanvas *c = new TCanvas(hname, hname,1);
     gStyle->SetOptStat(0);
     c->SetLogy();
     genHist[hname]->Draw();
     c->Print(hname+".png");
     }*/

   /*for(map<TString, TH2D*>::iterator k = genMap.begin(); k!=genMap.end(); k++){
      TString hname = k->first;
      genMap[hname]->GetXaxis()->SetTitle(hname);
      genMap[hname]->GetYaxis()->SetTitle("Events");
      genMap[hname]->Write();
      TCanvas *c = new TCanvas(hname, hname,1);
      genMap[hname]->Draw("colz");
      c->Print(hname+".png");
   }*/

   outf->Close();
}
