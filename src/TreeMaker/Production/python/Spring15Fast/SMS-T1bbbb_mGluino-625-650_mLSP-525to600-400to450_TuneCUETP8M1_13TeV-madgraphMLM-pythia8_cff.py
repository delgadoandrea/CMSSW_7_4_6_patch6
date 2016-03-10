import FWCore.ParameterSet.Config as cms

maxEvents = cms.untracked.PSet( input = cms.untracked.int32(-1) )
readFiles = cms.untracked.vstring()
secFiles = cms.untracked.vstring() 
source = cms.Source ("PoolSource",fileNames = readFiles, secondaryFileNames = secFiles)
readFiles.extend( [
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/0882B6A0-B75C-E511-8AC9-90B11C1453E1.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/0AD7BA7C-B75C-E511-9BB0-90B11C094A7E.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/10915CF4-B55C-E511-BBE8-90B11C094A7E.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/1688D5E7-B55C-E511-8656-001E675A58D9.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/16E3DA57-B85C-E511-A9E1-0026180A8746.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/18D5A884-B55C-E511-BED7-0025905A6060.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/1C8A5219-B95C-E511-A711-E0DB550BA718.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/22EA27EB-B55C-E511-B917-001E675A68BF.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/261DF04E-B75C-E511-9F36-0026180A8746.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/26D406E6-B65C-E511-9F97-B8CA3A70A520.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/2E840A9E-B65C-E511-93C2-24BE05C44BB1.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/3442A8B2-B85C-E511-A3BF-001517F7F510.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/387A233B-A65C-E511-9A0F-001517F7F510.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/401074E7-B55C-E511-9EEE-24BE05C44BB1.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/447B1932-B65C-E511-A1C4-90B11C1453E1.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/4A4418C8-B65C-E511-B172-001E675A58D9.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/4ED59CF0-B55C-E511-8CB5-001517E7410C.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/5231437D-B95C-E511-AAF0-F45214C748C0.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/5440A448-B85C-E511-9CCB-001E675A68BF.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/5CAEE4F8-B55C-E511-AE51-24BE05C6D5B1.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/6207A6F6-B55C-E511-AED4-F45214C748D0.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/6219E0EE-B75C-E511-BAE4-001E675A58D9.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/663D279C-B95C-E511-A782-001E675A58D9.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/68B1E4F8-B55C-E511-A7DA-24BE05C6D5B1.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/6E809F10-B95C-E511-8325-001E67A40523.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/7A7B3228-B75C-E511-A672-001517FAAC78.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/7E09D8EC-B55C-E511-8B0C-001517FAAC78.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/7E113E58-B95C-E511-BCA9-001517F7F510.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/7E4314EC-B85C-E511-8239-001E67A401B3.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/7E845073-B95C-E511-9649-0026180A8746.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/88C2CA93-B85C-E511-8D29-90B11C094A7E.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/9270ECB9-B85C-E511-BA7B-001E675A58D9.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/9ED411B6-B85C-E511-8BE2-90B11C1453E1.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/A048BD03-B85C-E511-AC43-001E675A6AB3.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/A451C15A-B95C-E511-B702-90B11C08AD1E.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/A46D3514-B65C-E511-B650-B8CA3A70A520.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/B068F2AE-B65C-E511-99DD-5065F3815281.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/B82B03E7-B65C-E511-AA8E-0002C94CDA12.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/B8CFA93F-B95C-E511-8627-485B3919F14E.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/C201BE56-B65C-E511-90AA-F45214CEF24A.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/CA136F07-B85C-E511-A040-90B11C08AD1E.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/D09EC055-B95C-E511-B14C-001E675A6AB3.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/DC178215-B85C-E511-98BF-001517E7410C.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/DC5AF2FD-B75C-E511-9F2A-001517FAAC78.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/E4D59014-B75C-E511-A847-001E675A68BF.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/E80C6F4E-B95C-E511-BF1E-90B11C04FAC6.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/E8CB0512-B95C-E511-8AF1-0026180A8746.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/EA2DE4E6-B55C-E511-9077-0026180A8746.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/F0F49AD0-B65C-E511-81B3-24BE05C6D5B1.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/F6DEA7FF-B75C-E511-884E-485B3919F14E.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/F8473BCE-B85C-E511-9B79-001517FAAC78.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/F87FA43B-B95C-E511-98BD-001517E7410C.root',
       '/store/mc/RunIISpring15FSPremix/SMS-T1bbbb_mGluino-625-650_mLSP-525to600-400to450_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/MINIAODSIM/MCRUN2_74_V9-v1/10000/FE4BF7D2-B65C-E511-B7FE-001517E7410C.root' ] );


secFiles.extend( [
               ] )

