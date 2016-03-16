//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Oct 12 11:41:46 2015 by ROOT version 6.02/05
// from TTree PreSelection/PreSelection
// found on file: signal.root
//////////////////////////////////////////////////////////

#ifndef EventLoop_h
#define EventLoop_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TLorentzVector.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "iostream"
//#include "TreeMaker/Utils/interface/stoppair.h"

/*class Sample{
public:
   Sample(TString _fName, TString _fOut, double _lum):
      filename(_fName), outFile(_fOut), Lum(_lum){};

   TString filename;
   TString outFile;
   double Lum;
   };*/

class EventLoop {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain
   vector<TString> samples;   
   vector<TString> outFile;
   vector<double> lum;
  
// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          RunNum;
   UInt_t          LumiBlockNum;
   UInt_t          EvtNum;
   vector<TLorentzVector> *bestPhoton;
   Int_t           BTags;
   Double_t        DeltaPhi1;
   Double_t        DeltaPhi2;
   Double_t        DeltaPhi3;
   Double_t        DeltaPhi4;
   Double_t        DeltaPhiN1;
   Double_t        DeltaPhiN2;
   Double_t        DeltaPhiN3;
   vector<int>     *ElectronCharge;
   vector<TLorentzVector> *Electrons;
   Double_t        genHT;
   Double_t        GenMETPhi;
   Double_t        GenMETPt;
   vector<TLorentzVector> *genParticles;
   vector<int>     *genParticles_PDGid;
   //   stoppair        genParticles_stopPair;
   Double_t        HT;
   Int_t           isoElectronTracks;
   Int_t           isoMuonTracks;
   Int_t           isoPionTracks;
   Bool_t          JetID;
   vector<TLorentzVector> *Jets;
   vector<double>  *Jets_bDiscriminatorCS;
   vector<double>  *Jets_bDiscriminatorMVA;
   vector<double>  *Jets_chargedEmEnergyFraction;
   vector<double>  *Jets_chargedHadronEnergyFraction;
   vector<int>     *Jets_chargedHadronMultiplicity;
   vector<int>     *Jets_electronMultiplicity;
   vector<int>     *Jets_flavor;
   vector<double>  *Jets_jetArea;
   vector<double>  *Jets_muonEnergyFraction;
   vector<int>     *Jets_muonMultiplicity;
   vector<double>  *Jets_neutralEmEnergyFraction;
   vector<int>     *Jets_neutralHadronMultiplicity;
   vector<double>  *Jets_photonEnergyFraction;
   vector<int>     *Jets_photonMultiplicity;
   Int_t           Leptons;
   Double_t        METPhi;
   Double_t        METPt;
   Double_t        MHT;
   Double_t        MHT_Phi;
   Double_t        minDeltaPhiN;
   vector<int>     *MuonCharge;
   vector<TLorentzVector> *Muons;
   Int_t           nAllVertices;
   Int_t           NJets;
   Int_t           NumPhotons;
   Int_t           NVtx;
   Double_t        puSysDown;
   Double_t        puSysUp;
   Double_t        puWeight;
   Double_t        SusyLSPMass;
   Double_t        SusyMotherMass;
   Int_t           TagLeptonHighPT;
   vector<string>  *TriggerNames;
   vector<bool>    *TriggerPass;
   vector<int>     *TriggerPrescales;
   Double_t        Weight;

   // List of branches
   TBranch        *b_RunNum;   //!
   TBranch        *b_LumiBlockNum;   //!
   TBranch        *b_EvtNum;   //!
   TBranch        *b_bestPhoton;   //!
   TBranch        *b_BTags;   //!
   TBranch        *b_DeltaPhi1;   //!
   TBranch        *b_DeltaPhi2;   //!
   TBranch        *b_DeltaPhi3;   //!
   TBranch        *b_DeltaPhi4;   //!
   TBranch        *b_DeltaPhiN1;   //!
   TBranch        *b_DeltaPhiN2;   //!
   TBranch        *b_DeltaPhiN3;   //!
   TBranch        *b_ElectronCharge;   //!
   TBranch        *b_Electrons;   //!
   TBranch        *b_genHT;   //!
   TBranch        *b_GenMETPhi;   //!
   TBranch        *b_GenMETPt;   //!
   TBranch        *b_genParticles;   //!
   TBranch        *b_genParticles_PDGid;   //!
   //   TBranch        *b_genParticles_stopPair; 
   TBranch        *b_HT;   //!
   TBranch        *b_isoElectronTracks;   //!
   TBranch        *b_isoMuonTracks;   //!
   TBranch        *b_isoPionTracks;   //!
   TBranch        *b_JetID;   //!
   TBranch        *b_Jets;   //!
   TBranch        *b_Jets_bDiscriminatorCS;   //!
   TBranch        *b_Jets_bDiscriminatorMVA;   //!
   TBranch        *b_Jets_chargedEmEnergyFraction;   //!
   TBranch        *b_Jets_chargedHadronEnergyFraction;   //!
   TBranch        *b_Jets_chargedHadronMultiplicity;   //!
   TBranch        *b_Jets_electronMultiplicity;   //!
   TBranch        *b_Jets_flavor;   //!
   TBranch        *b_Jets_jetArea;   //!
   TBranch        *b_Jets_muonEnergyFraction;   //!
   TBranch        *b_Jets_muonMultiplicity;   //!
   TBranch        *b_Jets_neutralEmEnergyFraction;   //!
   TBranch        *b_Jets_neutralHadronMultiplicity;   //!
   TBranch        *b_Jets_photonEnergyFraction;   //!
   TBranch        *b_Jets_photonMultiplicity;   //!
   TBranch        *b_Leptons;   //!
   TBranch        *b_METPhi;   //!
   TBranch        *b_METPt;   //!
   TBranch        *b_MHT;   //!
   TBranch        *b_MHT_Phi;   //!
   TBranch        *b_minDeltaPhiN;   //!
   TBranch        *b_MuonCharge;   //!
   TBranch        *b_Muons;   //!
   TBranch        *b_nAllVertices;   //!
   TBranch        *b_NJets;   //!
   TBranch        *b_NumPhotons;   //!
   TBranch        *b_NVtx;   //!
   TBranch        *b_puSysDown;   //!
   TBranch        *b_puSysUp;   //!
   TBranch        *b_puWeight;   //!
   TBranch        *b_SusyLSPMass;   //!
   TBranch        *b_SusyMotherMass;   //!
   TBranch        *b_TagLeptonHighPT;   //!
   TBranch        *b_TriggerNames;   //!
   TBranch        *b_TriggerPass;   //!
   TBranch        *b_TriggerPrescales;   //!
   TBranch        *b_Weight;   //!

   unsigned int   sampleIndex;

   EventLoop(TTree *tree=0, unsigned int test=0);
   virtual ~EventLoop();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    ISRCut(Long64_t entry);
   virtual Int_t    VBFCut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef EventLoop_cxx


EventLoop::EventLoop(TTree *tree, unsigned int test) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   TString basepath = "/fdata/hepx/store/user/delgado_andrea/Analysis/Full/";
  //TString basepath = "./";
   TString outpath = "./";

   samples.clear();
   samples.push_back("TTbarH_M-125_13TeV_amcatnlo-pythia8-tauola.root");
   samples.push_back("QCD_HT_250To500_13TeV-madgraph.root");
   samples.push_back("QCD_HT-500To1000_13TeV-madgraph.root");
   samples.push_back("QCD_HT_1000ToInf_13TeV-madgraph.root");
   samples.push_back("signal.root");
   //samples.push_back("test.root");
   samples.push_back("WJetsToLNu_HT-100to200_Tune4C_13TeV-madgraph-tauola.root");
   samples.push_back("WJetsToLNu_HT-200to400_Tune4C_13TeV-madgraph-tauola.root");
   samples.push_back("WJetsToLNu_HT-400to600_Tune4C_13TeV-madgraph-tauola.root");
   samples.push_back("WJetsToLNu_HT-600toInf_Tune4C_13TeV-madgraph-tauola.root");
   samples.push_back("ZJetsToNuNu_HT-100to200_Tune4C_13TeV-madgraph-tauola.root");
   samples.push_back("ZJetsToNuNu_HT-200to400_Tune4C_13TeV-madgraph-tauola.root");
   samples.push_back("ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola.root");
   samples.push_back("ZJetsToNuNu_HT-600toInf_Tune4C_13TeV-madgraph-tauola.root");

   outFile.clear();
   outFile.push_back(outpath+"ttbar.txt");
   outFile.push_back(outpath+"QCD_HT_250To500.txt");
   outFile.push_back(outpath+"QCD_HT_500To1000.txt");
   outFile.push_back(outpath+"QCD_HT_1000ToInf.txt");
   outFile.push_back(outpath+"Signal.txt");
   outFile.push_back(outpath+"WJetsToLNu_HT-100to200.txt");
   outFile.push_back(outpath+"WJetsToLNu_HT-200to400.txt");
   outFile.push_back(outpath+"WJetsToLNu_HT-400to600.txt");
   outFile.push_back(outpath+"WJetsToLNu_HT-600toInf.txt");
   outFile.push_back(outpath+"ZJetsToNuNu_HT-100to200.txt");
   outFile.push_back(outpath+"ZJetsToNuNu_HT-200to400.txt");
   outFile.push_back(outpath+"ZJetsToNuNu_HT-400to600.txt");
   outFile.push_back(outpath+"ZJetsToNuNu_HT-600toInf.txt");

   lum.clear();
   lum.push_back(0.509*2.58/78300.);
   lum.push_back(1.3312);
   lum.push_back(1.2641);
   lum.push_back(1.2951);
   lum.push_back(3.78661/245492.);
   lum.push_back(2.2870);
   lum.push_back(1.0948);
   lum.push_back(1.00);
   lum.push_back(2.758);
   lum.push_back(1.0);
   lum.push_back(1.0);
   lum.push_back(1.0);
   lum.push_back(1.0);

   
   //for(unsigned int s=0; s< samples.size(); s++){
   sampleIndex=test;
   if (tree == 0) {
     TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(basepath+samples[test]);
     if (!f || !f->IsOpen()) {
       f = new TFile(basepath+samples[test]);
     }
     TDirectory * dir = (TDirectory*)f->Get(basepath+samples[test]+":/TreeMaker2");
     dir->GetObject("PreSelection",tree);        
   }
   Init(tree);
   Loop();
  
}

EventLoop::~EventLoop()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t EventLoop::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t EventLoop::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void EventLoop::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).


   // Set object pointer
   bestPhoton = 0;
   ElectronCharge = 0;
   Electrons = 0;
   genParticles = 0;
   genParticles_PDGid = 0;
   Jets = 0;
   Jets_bDiscriminatorCS = 0;
   Jets_bDiscriminatorMVA = 0;
   Jets_chargedEmEnergyFraction = 0;
   Jets_chargedHadronEnergyFraction = 0;
   Jets_chargedHadronMultiplicity = 0;
   Jets_electronMultiplicity = 0;
   Jets_flavor = 0;
   Jets_jetArea = 0;
   Jets_muonEnergyFraction = 0;
   Jets_muonMultiplicity = 0;
   Jets_neutralEmEnergyFraction = 0;
   Jets_neutralHadronMultiplicity = 0;
   Jets_photonEnergyFraction = 0;
   Jets_photonMultiplicity = 0;
   MuonCharge = 0;
   Muons = 0;
   TriggerNames = 0;
   TriggerPass = 0;
   TriggerPrescales = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("RunNum", &RunNum, &b_RunNum);
   fChain->SetBranchAddress("LumiBlockNum", &LumiBlockNum, &b_LumiBlockNum);
   fChain->SetBranchAddress("EvtNum", &EvtNum, &b_EvtNum);
   fChain->SetBranchAddress("bestPhoton", &bestPhoton, &b_bestPhoton);
   fChain->SetBranchAddress("BTags", &BTags, &b_BTags);
   fChain->SetBranchAddress("DeltaPhi1", &DeltaPhi1, &b_DeltaPhi1);
   fChain->SetBranchAddress("DeltaPhi2", &DeltaPhi2, &b_DeltaPhi2);
   fChain->SetBranchAddress("DeltaPhi3", &DeltaPhi3, &b_DeltaPhi3);
   fChain->SetBranchAddress("DeltaPhi4", &DeltaPhi4, &b_DeltaPhi4);
   fChain->SetBranchAddress("DeltaPhiN1", &DeltaPhiN1, &b_DeltaPhiN1);
   fChain->SetBranchAddress("DeltaPhiN2", &DeltaPhiN2, &b_DeltaPhiN2);
   fChain->SetBranchAddress("DeltaPhiN3", &DeltaPhiN3, &b_DeltaPhiN3);
   fChain->SetBranchAddress("ElectronCharge", &ElectronCharge, &b_ElectronCharge);
   fChain->SetBranchAddress("Electrons", &Electrons, &b_Electrons);
   fChain->SetBranchAddress("genHT", &genHT, &b_genHT);
   fChain->SetBranchAddress("GenMETPhi", &GenMETPhi, &b_GenMETPhi);
   fChain->SetBranchAddress("GenMETPt", &GenMETPt, &b_GenMETPt);
   fChain->SetBranchAddress("genParticles", &genParticles, &b_genParticles);
   fChain->SetBranchAddress("genParticles_PDGid", &genParticles_PDGid, &b_genParticles_PDGid);
   //   fChain->SetBranchAddress("genParticles_stopPair", &genParticles_stopPair, &b_genParticles_stopPair);
   fChain->SetBranchAddress("HT", &HT, &b_HT);
   fChain->SetBranchAddress("isoElectronTracks", &isoElectronTracks, &b_isoElectronTracks);
   fChain->SetBranchAddress("isoMuonTracks", &isoMuonTracks, &b_isoMuonTracks);
   fChain->SetBranchAddress("isoPionTracks", &isoPionTracks, &b_isoPionTracks);
   fChain->SetBranchAddress("JetID", &JetID, &b_JetID);
   fChain->SetBranchAddress("Jets", &Jets, &b_Jets);
   fChain->SetBranchAddress("Jets_bDiscriminatorCS", &Jets_bDiscriminatorCS, &b_Jets_bDiscriminatorCS);
   fChain->SetBranchAddress("Jets_bDiscriminatorMVA", &Jets_bDiscriminatorMVA, &b_Jets_bDiscriminatorMVA);
   fChain->SetBranchAddress("Jets_chargedEmEnergyFraction", &Jets_chargedEmEnergyFraction, &b_Jets_chargedEmEnergyFraction);
   fChain->SetBranchAddress("Jets_chargedHadronEnergyFraction", &Jets_chargedHadronEnergyFraction, &b_Jets_chargedHadronEnergyFraction);
   fChain->SetBranchAddress("Jets_chargedHadronMultiplicity", &Jets_chargedHadronMultiplicity, &b_Jets_chargedHadronMultiplicity);
   fChain->SetBranchAddress("Jets_electronMultiplicity", &Jets_electronMultiplicity, &b_Jets_electronMultiplicity);
   fChain->SetBranchAddress("Jets_flavor", &Jets_flavor, &b_Jets_flavor);
   fChain->SetBranchAddress("Jets_jetArea", &Jets_jetArea, &b_Jets_jetArea);
   fChain->SetBranchAddress("Jets_muonEnergyFraction", &Jets_muonEnergyFraction, &b_Jets_muonEnergyFraction);
   fChain->SetBranchAddress("Jets_muonMultiplicity", &Jets_muonMultiplicity, &b_Jets_muonMultiplicity);
   fChain->SetBranchAddress("Jets_neutralEmEnergyFraction", &Jets_neutralEmEnergyFraction, &b_Jets_neutralEmEnergyFraction);
   fChain->SetBranchAddress("Jets_neutralHadronMultiplicity", &Jets_neutralHadronMultiplicity, &b_Jets_neutralHadronMultiplicity);
   fChain->SetBranchAddress("Jets_photonEnergyFraction", &Jets_photonEnergyFraction, &b_Jets_photonEnergyFraction);
   fChain->SetBranchAddress("Jets_photonMultiplicity", &Jets_photonMultiplicity, &b_Jets_photonMultiplicity);
   fChain->SetBranchAddress("Leptons", &Leptons, &b_Leptons);
   fChain->SetBranchAddress("METPhi", &METPhi, &b_METPhi);
   fChain->SetBranchAddress("METPt", &METPt, &b_METPt);
   fChain->SetBranchAddress("MHT", &MHT, &b_MHT);
   fChain->SetBranchAddress("MHT_Phi", &MHT_Phi, &b_MHT_Phi);
   fChain->SetBranchAddress("minDeltaPhiN", &minDeltaPhiN, &b_minDeltaPhiN);
   fChain->SetBranchAddress("MuonCharge", &MuonCharge, &b_MuonCharge);
   fChain->SetBranchAddress("Muons", &Muons, &b_Muons);
   fChain->SetBranchAddress("nAllVertices", &nAllVertices, &b_nAllVertices);
   fChain->SetBranchAddress("NJets", &NJets, &b_NJets);
   fChain->SetBranchAddress("NumPhotons", &NumPhotons, &b_NumPhotons);
   fChain->SetBranchAddress("NVtx", &NVtx, &b_NVtx);
   fChain->SetBranchAddress("puSysDown", &puSysDown, &b_puSysDown);
   fChain->SetBranchAddress("puSysUp", &puSysUp, &b_puSysUp);
   fChain->SetBranchAddress("puWeight", &puWeight, &b_puWeight);
   fChain->SetBranchAddress("SusyLSPMass", &SusyLSPMass, &b_SusyLSPMass);
   fChain->SetBranchAddress("SusyMotherMass", &SusyMotherMass, &b_SusyMotherMass);
   fChain->SetBranchAddress("TagLeptonHighPT", &TagLeptonHighPT, &b_TagLeptonHighPT);
   fChain->SetBranchAddress("TriggerNames", &TriggerNames, &b_TriggerNames);
   fChain->SetBranchAddress("TriggerPass", &TriggerPass, &b_TriggerPass);
   fChain->SetBranchAddress("TriggerPrescales", &TriggerPrescales, &b_TriggerPrescales);
   fChain->SetBranchAddress("Weight", &Weight, &b_Weight);
   

   Notify();
}

Bool_t EventLoop::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void EventLoop::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t EventLoop::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
Int_t EventLoop::ISRCut(Long64_t entry){
  bool cut = false;
  
  if(METPt > 300 && NJets > 0 && Jets->at(0).Pt() > 110 && Muons->size() > 0 && Muons->at(0).Pt() > 5 && Muons->at(0).Pt() < 30 && Muons->at(0).Eta()<1.5 && HT > 400 && Electrons->size() == 0 && BTags==0  && MuonCharge->at(0) == -1){



    if(Jets->at(0).Eta() < 2.4 && Jets_chargedEmEnergyFraction->at(0)<0.5 && Jets_neutralEmEnergyFraction->at(0)<0.7 && Jets_chargedHadronEnergyFraction->at(0) > 0.2 ){
      if(NJets>1){

	
	if(Jets->at(1).Pt()>60 && Jets->at(0).DeltaPhi(Jets->at(1)) < 2.5){
	  if(NJets>2){

	    if(Jets->at(2).Pt()>30 && Jets->at(2).Pt() < 60){
	      if(Muons->size() > 1 && Muons->at(0).Pt() < 20 && Muons->at(1).Pt() > 5 && Muons->at(1).Pt() < 20 && Muons->at(1).Eta()<1.5){
		cut = true;
	      }
	      else if(Muons->size() ==1){
		cut = true;
	      }
	    }
	  }
	  else{

	    if(Muons->size() > 1 && Muons->at(0).Pt() < 20 && Muons->at(1).Pt() > 5 && Muons->at(1).Pt() < 20 && Muons->at(1).Eta()<1.5){
	      cut = true;
	    }
	    else if(Muons->size() ==1){
	      cut = true;
	    }

	  }	     	  
	}//2nd jet req's

      }//njets >1
      else if(NJets == 1){

	if(Muons->size() > 1 && Muons->at(0).Pt() < 20 && Muons->at(1).Pt() > 5 && Muons->at(1).Pt() < 20 && Muons->at(1).Eta()<1.5){
	  cut = true;
	}
	else if(Muons->size() ==1){
	  cut = true;
	}
      }	 
    }
  }//loop over cuts

  if(cut) return 1;
  else return -1;
  
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.

}
Int_t EventLoop::VBFCut(Long64_t entry){
  bool cut = false;
  int j1Index = -1;
  int j2Index = -1;
  Double_t massVBF = -1;
  
  if(METPt > 300 && NJets > 1 && Muons->size() > 0 && Muons->at(0).Pt() > 5 && Muons->at(0).Pt() < 30 && Muons->at(0).Eta()<1.5 && Electrons->size() == 0 && BTags==0 && MuonCharge->at(0) == -1){

    for(int i=0; i<NJets; i++){
      for(int j=i+1; j < NJets; j++){
	if((Jets->at(i).Eta()*Jets->at(j).Eta()) < 0 && abs(Jets->at(i).Eta()-Jets->at(j).Eta()) > 4.2 && Jets->at(i).Pt() > 30 && Jets->at(j).Pt()>30){
	  TLorentzVector VBFmass = Jets->at(i) + Jets->at(j);
	  if(VBFmass.M() > massVBF){
	    massVBF = VBFmass.M();
	    j1Index = i;
	    j2Index = j;
	  }	    
	}
      }// second loop over jets
    }//first loop over jets


    if(massVBF > 250 && abs(Jets->at(j2Index).Phi() - METPhi) > 0.5){

      
      if(NJets>j2Index+1){

	if(Jets->at(j2Index+1).Pt()<50){

	  if(Muons->size() > 1 && Muons->at(0).Pt() < 20 && Muons->at(1).Pt() > 5 && Muons->at(1).Pt() < 20 && Muons->at(1).Eta()<1.5){
	    cut = true;
	  }
	  else if(Muons->size() ==1){
	    cut = true;
	  }
	}

      }
      else if(NJets==j2Index+1){

	if(Muons->size() > 1 && Muons->at(0).Pt() < 20 && Muons->at(1).Pt() > 5 && Muons->at(1).Pt() < 20 && Muons->at(1).Eta()<1.5){
	  cut = true;
	}
	else if(Muons->size() ==1){
	  cut = true;
	}
      }

    }
  }//loop over cuts
  
  if(cut) return 1;
  else return -1;
  
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.

}
#endif // #ifdef EventLoop_cxx
