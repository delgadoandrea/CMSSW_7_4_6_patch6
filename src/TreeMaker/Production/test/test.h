//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jan  6 08:32:11 2016 by ROOT version 6.02/05
// from TTree PreSelection/PreSelection
// found on file: /fdata/hepx/store/user/delgado_andrea/Analysis/new/signal.root
//////////////////////////////////////////////////////////

#ifndef test_h
#define test_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "TreeMaker/Utils/interface/genP.h"
#include "TreeMaker/Utils/interface/stoppair.h"
#include "vector"
#include "vector"
#include "vector"

class test {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

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
   genP            *genParticles_genPart;
   Int_t           genParticles_nElectrons;
   Int_t           genParticles_nMuons;
   Int_t           genParticles_nTaus;
   vector<int>     *genParticles_parent;
   vector<int>     *genParticles_PDGid;
   stoppair        *genParticles_stopPair;
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
   vector<TLorentzVector> *pfcands;
   vector<double>  *pfcands_trkiso;
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
   TBranch        *b_genParticles_genPart;   //!
   TBranch        *b_genParticles_nElectrons;   //!
   TBranch        *b_genParticles_nMuons;   //!
   TBranch        *b_genParticles_nTaus;   //!
   TBranch        *b_genParticles_parent;   //!
   TBranch        *b_genParticles_PDGid;   //!
   TBranch        *b_genParticles_stopPair;   //!
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
   TBranch        *b_pfcands;   //!
   TBranch        *b_pfcands_trkiso;   //!
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

   test(TTree *tree=0);
   virtual ~test();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef test_cxx
test::test(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/fdata/hepx/store/user/delgado_andrea/Analysis/new/signal.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/fdata/hepx/store/user/delgado_andrea/Analysis/new/signal.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/fdata/hepx/store/user/delgado_andrea/Analysis/new/signal.root:/TreeMaker2");
      dir->GetObject("PreSelection",tree);

   }
   Init(tree);
}

test::~test()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t test::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t test::LoadTree(Long64_t entry)
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

void test::Init(TTree *tree)
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
   genParticles_genPart = 0;
   genParticles_parent = 0;
   genParticles_PDGid = 0;
   genParticles_stopPair = 0;
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
   pfcands = 0;
   pfcands_trkiso = 0;
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
   fChain->SetBranchAddress("genParticles_genPart", &genParticles_genPart, &b_genParticles_genPart);
   fChain->SetBranchAddress("genParticles_nElectrons", &genParticles_nElectrons, &b_genParticles_nElectrons);
   fChain->SetBranchAddress("genParticles_nMuons", &genParticles_nMuons, &b_genParticles_nMuons);
   fChain->SetBranchAddress("genParticles_nTaus", &genParticles_nTaus, &b_genParticles_nTaus);
   fChain->SetBranchAddress("genParticles_parent", &genParticles_parent, &b_genParticles_parent);
   fChain->SetBranchAddress("genParticles_PDGid", &genParticles_PDGid, &b_genParticles_PDGid);
   fChain->SetBranchAddress("genParticles_stopPair", &genParticles_stopPair, &b_genParticles_stopPair);
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
   fChain->SetBranchAddress("pfcands", &pfcands, &b_pfcands);
   fChain->SetBranchAddress("pfcands_trkiso", &pfcands_trkiso, &b_pfcands_trkiso);
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

Bool_t test::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void test::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t test::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef test_cxx
