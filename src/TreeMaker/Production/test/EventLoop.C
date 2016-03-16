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
#include <iomanip>
#include <assert.h>

using namespace std;

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
   ofstream outf(outFile[sampleIndex]);
   //TFile *outf = new TFile(outFile[sampleIndex],"RECREATE"); 
   
   map<TString, TH1D*> genHist;
   
   TString hname;
   
   hname = "ISREvents";
   genHist[hname] = new TH1D(hname, "number of ISR Events; ISR; events", 5,-1., 4.);
   genHist[hname]->Sumw2();
   hname = "VBFEvents";
   genHist[hname] = new TH1D(hname, "number of VBF Events; VBF; events", 5,-1., 4.);
   genHist[hname]->Sumw2();
   hname = "ISRVBFEvents";
   genHist[hname] = new TH1D(hname, "number of ISR & VBF Events; ISR-VBF; events", 5,-1., 4.);
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
     
     Int_t ISRCounter = EventLoop::ISRCut(ientry);
     if(ISRCounter==1){
       ISRc++;
       genHist["ISREvents"]->Fill(ISRCounter);
     }
     Int_t VBFCounter = EventLoop::VBFCut(ientry);
     if(VBFCounter==1){
       VBFc++;
       genHist["VBFEvents"]->Fill(VBFCounter);
     }
     
     if(ISRCounter==1 && VBFCounter==1){
       bothc++;
       genHist["ISRVBFEvents"]->Fill(ISRCounter);
     }
     
     
   }//loop over entries
   
   std::cout<< "Events in sample: " << nevt << std::endl;
   std::cout<< "ISR events: " << ISRc << std::endl;
   std::cout<< "VBF events: " << VBFc << std::endl;
   std::cout<< "ISR & VBF events: " << bothc << std::endl;

   outf<< "Writing this to a file.\n"
       << "Events in sample: " << nevt << "\n"
       << "ISR events: " << ISRc << "\n"
       << "VBF events: " << VBFc << "\n"
       << "ISR & VBF events: " << bothc
   <<std::endl;
      
   /*for(map<TString, TH1D*>::iterator k = genHist.begin(); k!=genHist.end(); k++){
     TString hname = k->first;
     genHist[hname]->GetXaxis()->SetTitle(hname);
     genHist[hname]->GetYaxis()->SetTitle("Events");
     genHist[hname]->Write();
     }*/

   outf.close();
}
