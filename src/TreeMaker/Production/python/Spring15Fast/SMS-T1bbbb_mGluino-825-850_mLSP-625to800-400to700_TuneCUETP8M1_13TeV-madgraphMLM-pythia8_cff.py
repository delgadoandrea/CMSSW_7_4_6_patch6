import FWCore.ParameterSet.Config as cms

maxEvents = cms.untracked.PSet( input = cms.untracked.int32(-1) )
readFiles = cms.untracked.vstring()
secFiles = cms.untracked.vstring() 
source = cms.Source ("PoolSource",fileNames = readFiles, secondaryFileNames = secFiles)
readFiles.extend( [
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/0E008CD1-1C5E-E511-8C23-0025905A48E4.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/0EAC24AA-1D5E-E511-B7BC-0026189438B3.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/1293E6A7-1D5E-E511-9ACB-002590596484.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/2A7380BB-1D5E-E511-BB58-00266CFF0AF4.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/2E89D0AB-1D5E-E511-9394-0025905B85E8.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/2EF60BE5-1D5E-E511-B2B7-1CC1DE0570A0.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/4E0402D5-1D5E-E511-B60E-1CC1DE0530F8.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/5418D3AD-1D5E-E511-83CA-0025905A611C.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/60522F11-1D5E-E511-BEA3-0025905A497A.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/62ADA2AE-1D5E-E511-8ED6-0025905964A6.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/6A758FB0-1D5E-E511-80F7-0025905A60C6.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/72D59FBA-1D5E-E511-9767-6CC2173BBF00.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/74E321DE-1C5E-E511-BACB-003048FFD720.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/766DDDAE-1D5E-E511-8F23-0025905A60CA.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/7AE5E2C9-1C5E-E511-BD7C-0025905A6134.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/801622BC-1D5E-E511-B2E9-00266CFF0044.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/84E40CB4-1D5E-E511-9FCB-0025905938B4.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/8CF57DE9-1C5E-E511-9D42-0025905938A8.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/8E3936C2-1D5E-E511-84BF-0025905A60BC.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/9C1D77AD-1D5E-E511-A1AA-0025905B860E.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/9EF1C173-1D5E-E511-B503-00266CFFC980.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/A200F8BB-1D5E-E511-AC8F-00266CFF0044.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/A20AC4AE-1D5E-E511-8BC1-0025905A60B2.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/A2A6D613-1E5E-E511-93E5-0025905A6138.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/BEAE94AF-1D5E-E511-8D52-0025905A6090.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/C29372A8-1C5E-E511-B0E6-0025905AA9CC.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/C46DCFAF-1D5E-E511-B7CB-00259059642E.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/C83436A6-1D5E-E511-A2EF-002618943922.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/CA6979B8-1D5E-E511-9259-00266CFFC6CC.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/D411DEAB-1D5E-E511-B3C1-0025905A48F0.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/EA9686AE-1D5E-E511-ACB9-0025905A6132.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/F23B3B99-1C5E-E511-8698-0025905A48FC.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/F481CAB6-1D5E-E511-8056-1CC1DE04FFB8.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/F6ED2DC2-1D5E-E511-866A-0025905A6060.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/F80D76AD-1D5E-E511-AAF3-003048FFD760.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/F81B88AB-1D5E-E511-AB8D-0025905B855C.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/FA57DCAA-1D5E-E511-9218-0025905A610C.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/FC26A2AF-1D5E-E511-9E89-0025905A60B6.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/FCC220A9-1D5E-E511-951E-0025905A609A.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-825-850_mLSP-625to800-400to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/FEA29E36-1C5E-E511-BC36-0025905B860C.root' ] );


secFiles.extend( [
               ] )

