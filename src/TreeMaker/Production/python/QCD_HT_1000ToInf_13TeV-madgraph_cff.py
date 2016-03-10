import FWCore.ParameterSet.Config as cms

maxEvents = cms.untracked.PSet( input = cms.untracked.int32(-1) )
readFiles = cms.untracked.vstring()
secFiles = cms.untracked.vstring() 
source = cms.Source ("PoolSource",fileNames = readFiles, secondaryFileNames = secFiles)
readFiles.extend( [
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/00000/12DA081B-5E74-E411-8140-00259073E3D6.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/00000/1A25B034-5E74-E411-AB19-002590574604.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/00000/2EDAAF5C-5E74-E411-BA95-002590D0B0BE.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/00000/3CE8E14A-5E74-E411-86DB-00259074AE32.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/00000/5875AE66-5E74-E411-8BF6-485B39800BBF.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/00000/723FFE3C-5E74-E411-83D7-00259073E3A0.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/00000/824AEE22-5E74-E411-929E-00259073E4C2.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/00000/A03CBE5B-5E74-E411-946B-00259073E3A2.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/00000/A6C9A4FB-5D74-E411-B003-485B39800BD5.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/00000/AA96296E-5E74-E411-B545-00259073E3F2.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/00000/E6901560-5E74-E411-B93F-BCAEC50971F2.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/00000/FADE572F-5E74-E411-AC31-00259074AED2.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/00000/FAF78155-5E74-E411-89FA-00259073E3A2.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/10000/047F5082-6874-E411-B9C1-002590D0B048.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/10000/349E775C-6874-E411-9DF8-00259073E470.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/10000/64B89571-6874-E411-AC42-20CF305B053E.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/10000/6897C987-6874-E411-A4C7-00259073E3B4.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/10000/7639575E-6874-E411-BE12-0025907B4EEE.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/10000/788A3C5D-6874-E411-824F-00259073E470.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/10000/92EA5B3C-6874-E411-B50D-002590D0AFE8.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/10000/C2F35257-6874-E411-8370-20CF305B04D2.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/10000/DA81C183-6874-E411-908E-20CF305B04FB.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/10000/DC529E4C-6874-E411-B7B4-20CF3027A627.root',
       'file:/fdata/hepx/store/mc/Phys14DR/QCD_HT_1000ToInf_13TeV-madgraph/MINIAODSIM/PU20bx25_PHYS14_25_V1_ext1-v1/10000/DCC97166-6874-E411-933C-485B39800BC7.root'
] );


secFiles.extend( [
               ] )

