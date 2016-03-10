// -*- C++ -*-
//
// Package:    SuSySubstructure
// Class:      genParticlesProducer
// 
/*

 Description: Takes as cfg input a jet collection 
 and clusters the jets into large-R anti-kt jets.
 A collection of 4-vectors corresponding to these 
 jets is saved to the event.

*/
//
// Original Author:  Andrew Whitbeck
//         Created:  Wed March 7, 2014
// 

// system include files
#include <memory>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDProducer.h"

#include "FWCore/Framework/interface/Event.h"

#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/ServiceRegistry/interface/Service.h"
#include "CommonTools/UtilAlgos/interface/TFileService.h"

#include "TreeMaker/Utils/interface/genParticlesProducer.h"
//#include "TreeMaker/Utils/interface/genP.h"
#include "TreeMaker/Utils/interface/stoppair.h"

#include "TLorentzVector.h"
#include <DataFormats/ParticleFlowCandidate/interface/PFCandidate.h>


#include <vector>
#include <iostream>

genParticlesProducer::genParticlesProducer(const edm::ParameterSet& iConfig):
  genCollection(iConfig.getUntrackedParameter<edm::InputTag>("genCollection")),
  debug(iConfig.getUntrackedParameter<bool>("debug",true))
{
  produces< std::vector< TLorentzVector > >(""); 
  produces< std::vector< int > >("PDGid");
  produces< std::vector< int > >("parent");
  produces< genP >("genPart");
  produces< stoppair >("stopPair");
  produces< int >("nMuons");
  produces< int >("nElectrons");
  produces< int >("nTaus");
  produces< int >("nMufromB");
  
}


genParticlesProducer::~genParticlesProducer()
{
 
   // do anything here that needs to be done at desctruction time
   // (e.g. close files, deallocate resources etc.)

}


//
// member functions
//

// ------------ method called for each event  ------------
void
genParticlesProducer::produce(edm::Event& iEvent, const edm::EventSetup& iSetup)
{

   using namespace edm;
   
   std::auto_ptr< std::vector< TLorentzVector > > genParticle( new std::vector< TLorentzVector > () );
   std::auto_ptr< genP > genPart ( new genP ());
   std::auto_ptr< stoppair > stopPair ( new stoppair ());
   std::auto_ptr< std::vector< int > > PDGid( new std::vector< int > () );
   std::auto_ptr< std::vector< int > > parent( new std::vector< int > () );
   std::auto_ptr< int > nElectrons( new int ());
   std::auto_ptr< int > nMuons( new int ());
   std::auto_ptr< int > nTaus( new int ());
   std::auto_ptr< int > nMufromB( new int ());
   
   if( debug ){
      std::cout << "new events" << std::endl;
      std::cout << "===================" << std::endl;  
   }
   
   std::vector<int> pdgIdOfInterest;
   pdgIdOfInterest.push_back(21);
   pdgIdOfInterest.push_back(22);
   pdgIdOfInterest.push_back(23);
   pdgIdOfInterest.push_back(24);
   pdgIdOfInterest.push_back(25);
   
   pdgIdOfInterest.push_back(1);
   pdgIdOfInterest.push_back(2);
   pdgIdOfInterest.push_back(3);
   pdgIdOfInterest.push_back(4);
   pdgIdOfInterest.push_back(5);
   pdgIdOfInterest.push_back(6);
   
   pdgIdOfInterest.push_back(11);
   pdgIdOfInterest.push_back(12);
   pdgIdOfInterest.push_back(13);
   pdgIdOfInterest.push_back(14);
   pdgIdOfInterest.push_back(15);
   pdgIdOfInterest.push_back(16);
   
   pdgIdOfInterest.push_back(1000021);
   pdgIdOfInterest.push_back(1000022);
   pdgIdOfInterest.push_back(1000023);
   pdgIdOfInterest.push_back(1000025);
   pdgIdOfInterest.push_back(1000035);
   
   pdgIdOfInterest.push_back(1000001);
   pdgIdOfInterest.push_back(1000002);
   pdgIdOfInterest.push_back(1000003);
   pdgIdOfInterest.push_back(1000004);
   pdgIdOfInterest.push_back(1000005);
   pdgIdOfInterest.push_back(1000006);
   
   pdgIdOfInterest.push_back(2000001);
   pdgIdOfInterest.push_back(2000002);
   pdgIdOfInterest.push_back(2000003);
   pdgIdOfInterest.push_back(2000004);
   pdgIdOfInterest.push_back(2000005);
   pdgIdOfInterest.push_back(2000006);
   
   edm::Handle< View<reco::Candidate> > genPartCands;
   iEvent.getByLabel( "prunedGenParticles" ,genPartCands);
   
   size_t j = 0;
   int nMu = 0;
   int nEl = 0;
   int nTau = 0;
   int nMuB =0;

   for(View<reco::Candidate>::const_iterator iPart = genPartCands->begin();
       iPart != genPartCands->end();
       ++iPart){
      
     /*std::cout<<"Particle index: " << j  << " Status: " << iPart->status() << " ID= " << iPart->pdgId() << " " << iPart->charge() <<  std::endl;
       
     for(size_t i=0;i< iPart->numberOfDaughters();i++) std::cout<<"\t Daughter "<< i << ", Status: "<< iPart->daughter(i)->status()<< ", ID=" << iPart->daughter(i)->pdgId() << " " << std::endl;
       
       for(size_t i=0;i< iPart->numberOfMothers();i++) std::cout<<"\t Mother "<< i << ", "<< iPart->mother(i)->status()<< ", ID=" << iPart->mother(i)->pdgId()<< " " << std::endl;*/
     /*if( std::find( pdgIdOfInterest.begin(), pdgIdOfInterest.end(), abs(iPart->pdgId()) ) != pdgIdOfInterest.end() && abs( iPart->status() ) >20 && abs( iPart->status() ) <30 ){*/
     
     if(abs(iPart->pdgId())==13){
       for(size_t i=0;i< iPart->numberOfMothers();i++){

         if(abs(iPart->mother(i)->pdgId()) > 400 && abs(iPart->mother(i)->pdgId()) < 550){
           nMuB++;
         }
       }
     }
     TLorentzVector temp;
     temp.SetPtEtaPhiE( iPart->pt() ,
                        iPart->eta() ,
                        iPart->phi() ,
                        iPart->energy() 
                        );
     
     genParticle->push_back( temp );     
     PDGid->push_back( iPart->pdgId() );
     
     /*if(abs(iPart->pdgId())==12 || abs(iPart->pdgId())==14 || abs(iPart->pdgId())==16){
       if(abs(iPart->mother(0)->pdgId()) == 24 && iPart->mother(0)->status() == 62 ){*/
     //std::cout<<"Particle index: " << j  << " Status: " << iPart->status() << " ID= " << iPart->pdgId() << " " << iPart->charge() <<  std::endl;
     
     genPart->lv=temp;
     genPart->pdgid=iPart->pdgId();
     //}
     //}
     
     bool lepF = false;
     if(abs(iPart->pdgId())==1000006 && iPart->numberOfDaughters()>0 && iPart->daughter(0)->pdgId()==1000022){
       genPart->lv=temp;
       genPart->pdgid=iPart->pdgId();
       
       for(size_t i=0;i< iPart->numberOfDaughters();i++){
         if(iPart->daughter(i)->pdgId() > 10 && iPart->daughter(i)->pdgId() < 18) lepF = true; 
       }
       
       if(lepF){
         stopPair->stopL.push_back(*genPart);            
         for(size_t i=0;i< iPart->numberOfDaughters();i++){
           genPart->lv.SetPtEtaPhiE(iPart->daughter(i)->pt(),iPart->daughter(i)->eta(),iPart->daughter(i)->phi(),iPart->daughter(i)->energy());
           genPart->pdgid=iPart->daughter(i)->pdgId();
           
           if(iPart->daughter(i)->pdgId()==1000022) stopPair->lspL.push_back(*genPart);
           if(abs(iPart->daughter(i)->pdgId())==5) stopPair->bL.push_back(*genPart);
           if(abs(iPart->daughter(i)->pdgId())==11 || abs(iPart->daughter(i)->pdgId())==13 || abs(iPart->daughter(i)->pdgId())==15) stopPair->l.push_back(*genPart);
           if(abs(iPart->daughter(i)->pdgId())==12 || abs(iPart->daughter(i)->pdgId())==14 || abs(iPart->daughter(i)->pdgId())==16) stopPair->n.push_back(*genPart);
           if(abs(iPart->daughter(i)->pdgId())==11) nEl++;
           if(abs(iPart->daughter(i)->pdgId())==13) nMu++;
           if(abs(iPart->daughter(i)->pdgId())==15) nTau++;
           
         }
       }
       else{
         stopPair->stopH.push_back(*genPart);
         for(size_t i=0;i< iPart->numberOfDaughters();i++){
           genPart->lv.SetPtEtaPhiE(iPart->daughter(i)->pt(),iPart->daughter(i)->eta(),iPart->daughter(i)->phi(),iPart->daughter(i)->energy());
           genPart->pdgid=iPart->daughter(i)->pdgId();
           if(iPart->daughter(i)->pdgId()==1000022) stopPair->lspH.push_back(*genPart);
           if(abs(iPart->daughter(i)->pdgId())==5) stopPair->bH.push_back(*genPart);             
           if(iPart->daughter(i)->pdgId()>0 && iPart->daughter(i)->pdgId()<7 && abs(iPart->daughter(i)->pdgId())!=5) stopPair->q1.push_back(*genPart);             
           if(iPart->daughter(i)->pdgId()<0 && iPart->daughter(i)->pdgId()>-7 && abs(iPart->daughter(i)->pdgId())!=5) stopPair->q2.push_back(*genPart);             
         }
       }
     }
     
     
     int parentIndex = 0;
     
     for(View<reco::Candidate>::const_iterator jPart = genPartCands->begin();
         jPart != genPartCands->end();
         ++jPart){
       
       if( pow( pow( iPart->phi() - jPart->phi() , 2 ) + pow( iPart->eta() - jPart->eta() , 2 ) , .5 ) < 0.01 ) 
         break;
       
       parentIndex++;
       
     }
     //std::cout << "IPart index: " << j << " parentIndex: " << parentIndex << std::endl;
      
     parent->push_back( parentIndex );
     
     //}
     
     j++;
   }// end of loop over gen-particles
   
   *nElectrons = nEl;
   *nMuons = nMu;
   *nTaus = nTau;
   *nMufromB = nMuB;
   
   iEvent.put(genParticle); 
   iEvent.put(PDGid , "PDGid" );
   iEvent.put(parent , "parent" );
   iEvent.put(genPart,"genPart");
   iEvent.put(stopPair,"stopPair");
   iEvent.put(nElectrons, "nElectrons");
   iEvent.put(nMuons, "nMuons");
   iEvent.put(nTaus, "nTaus");
   iEvent.put(nMufromB, "nMufromB");
   
}


// ------------ method called once each job just before starting event loop  ------------
void 

genParticlesProducer::beginJob()
{
}

// ------------ method called once each job just after ending the event loop  ------------
void 
genParticlesProducer::endJob() 
{
}

// ------------ method called when starting to processes a run  ------------
void 
genParticlesProducer::beginRun(edm::Run const&, edm::EventSetup const&)
{
}

// ------------ method called when ending the processing of a run  ------------
void 
genParticlesProducer::endRun(edm::Run const&, edm::EventSetup const&)
{
}

// ------------ method called when starting to processes a luminosity block  ------------
void 
genParticlesProducer::beginLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&)
{
}

// ------------ method called when ending the processing of a luminosity block  ------------
void 
genParticlesProducer::endLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&)
{
}


// ------------ method fills 'descriptions' with the allowed parameters for the module  ------------
void
genParticlesProducer::fillDescriptions(edm::ConfigurationDescriptions& descriptions) {

  /*
  edm::ParameterSetDescription desc;
  desc.setUnknown();
  descriptions.addDefault(desc);
  */

}


#include "FWCore/Framework/interface/MakerMacros.h"

//define this as a plug-in
DEFINE_FWK_MODULE(genParticlesProducer);
