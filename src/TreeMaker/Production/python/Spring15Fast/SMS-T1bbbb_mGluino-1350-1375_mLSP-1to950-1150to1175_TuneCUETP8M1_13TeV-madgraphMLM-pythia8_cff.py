import FWCore.ParameterSet.Config as cms

maxEvents = cms.untracked.PSet( input = cms.untracked.int32(-1) )
readFiles = cms.untracked.vstring()
secFiles = cms.untracked.vstring() 
source = cms.Source ("PoolSource",fileNames = readFiles, secondaryFileNames = secFiles)
readFiles.extend( [
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/0E7B1418-F65D-E511-8057-6C3BE5B5A4C8.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/1AD3393A-E65D-E511-B11F-00304867FE47.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/1EF905E8-E75D-E511-8547-0CC47A13CCFC.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/268B2EB8-E65D-E511-BBC9-0CC47A0AD630.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/305E597E-E65D-E511-BE2E-00259048AE52.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/34EF07B3-E65D-E511-BB80-002590791D3C.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/3CE25295-E65D-E511-A741-0CC47A0AD6C4.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/4E385E1C-F65D-E511-99BD-6C3BE5B5B108.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/643937EA-E75D-E511-9B12-00304865C254.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/6652BB6E-E75D-E511-AAB4-003048F5ADF8.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/6CE6574D-E65D-E511-BDEB-00304867FEC3.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/7065A544-F65D-E511-A22D-B499BAAC04F0.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/70F2FBE7-E75D-E511-9D5D-00304865C2D2.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/82080167-E65D-E511-843C-0CC47A0AD742.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/82FBF191-E65D-E511-95F0-0CC47A0AD6E4.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/84DA2DF1-E75D-E511-819A-0025904A8ECA.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/92DF0E6C-F65D-E511-ADBC-B499BAAC0694.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/969B6DF2-E75D-E511-8FF0-0025904AC2C6.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/9C54CF40-F65D-E511-9FCF-009C029C1160.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/9EB3098C-E75D-E511-9F6B-90B11C27E14D.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/A0A6E174-E65D-E511-8219-002590D9D984.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/B0DF30E6-F55D-E511-829F-6C3BE5B5F218.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/B2350122-F65D-E511-8787-6C3BE5B58000.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/B4BAE4ED-E75D-E511-941F-0025901D08D6.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/B4D35329-E85D-E511-98D6-001517E73360.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/B86B99F2-E75D-E511-998A-0025904A8EC4.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/BAA38A37-E65D-E511-8AA5-0025907DE266.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/C22995ED-E75D-E511-8056-00304861D446.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/CCF335A1-E75D-E511-A1A4-0025901D08B0.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/F61484E0-F55D-E511-9E85-6C3BE5B581A8.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-1350-1375_mLSP-1to950-1150to1175_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/50000/FA7579FE-F55D-E511-90BD-6C3BE5B55390.root' ] );


secFiles.extend( [
               ] )

