import FWCore.ParameterSet.Config as cms

maxEvents = cms.untracked.PSet( input = cms.untracked.int32(-1) )
readFiles = cms.untracked.vstring()
secFiles = cms.untracked.vstring() 
source = cms.Source ("PoolSource",fileNames = readFiles, secondaryFileNames = secFiles)
readFiles.extend( [
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/008C2397-DF7F-E411-8AC2-0025905A6064.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/0414692A-DF89-E411-BDF0-0025905A612C.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/06E05696-DF7F-E411-9558-0025905A612C.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/06F270B5-C17F-E411-82EA-0025905B855E.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/1404D245-C97F-E411-9834-0025905A60BC.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/1C7672B8-567E-E411-B4D9-0025905B8592.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/26B002CC-DB7F-E411-A95E-0025905B860C.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/287BCA14-EE80-E411-80B7-002618943946.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/2A004137-4D7F-E411-88C2-003048FFCBA8.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/2A1F818B-CB7F-E411-8671-0025905B85E8.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/2ADC9708-5681-E411-BCCE-0025905A7786.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/2C8ECB8B-4C7F-E411-9D89-002618943856.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/2ED9AFF9-4B81-E411-9134-0025905A6134.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/34D1E9EC-CC7F-E411-8201-0025905A6084.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/3629C881-E17F-E411-A3D5-003048FFD736.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/40F5BB97-4681-E411-955B-0025905A60CA.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/44EDBDD9-C67F-E411-B77C-0025905B85D0.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/5279109F-E27F-E411-B58E-0025905A612C.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/583C7DA2-D17F-E411-88AB-0025905A6084.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/64A0FF47-DF7F-E411-B205-0025905A6092.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/76BCF2A5-4C7F-E411-A858-0025905A6134.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/788E2F7C-DD7F-E411-9260-0025905A607E.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/803A0E97-DF7F-E411-94C1-0025905A60DA.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/80FE4B45-DF7F-E411-9A28-0025905A607E.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/86649AF8-547E-E411-87A4-0025905B8590.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/8CBBA966-CE7F-E411-8951-0025905A497A.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/901FABA2-DF87-E411-8CD7-002354EF3BD0.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/920AA527-4089-E411-8C50-0025905A60B8.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/9A99919D-6281-E411-8333-0025905B8598.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/9AD0809C-3F89-E411-BADC-0025905964C4.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/A843F229-4C7F-E411-93AB-0025905964A6.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/AC4F31C6-5481-E411-BCB4-0025905A60B0.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/B6E589B5-467F-E411-8B8A-0025905A6094.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/BA5E38CC-E07F-E411-830F-0025905A6094.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/BCD2C516-847F-E411-BA3F-00259059391E.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/C2E5867E-DD7F-E411-80D3-0025905A612E.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/C8FF0CE6-CF7F-E411-A8FE-0025905A60E4.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/CC33DB8A-DE7F-E411-B614-0025905A6138.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/D00B8C36-7781-E411-A6E4-0025905B85EE.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/DCB11D64-7481-E411-B631-002618FDA26D.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/DCB4E47D-DD7F-E411-98EB-0025905A6076.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/DCD3ADC9-E07F-E411-A7E8-0025905A60EE.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/E055AD43-3F81-E411-A308-0025905A60FE.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/E0ADDFB3-DC7F-E411-8DE6-002590593876.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/E23B3702-7E8A-E411-81DF-0025905B8596.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/E2DE2BC3-D07F-E411-98C5-0025905A6082.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/F07580C5-4D89-E411-B5C8-0025905964BE.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/FA371046-DF7F-E411-A598-0025905A6056.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/FE149427-DF89-E411-A4E9-0026189438D6.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/00000/FE7DA871-4A7F-E411-929F-0025905964A6.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/087503E5-3E7A-E411-A900-0025905A60B8.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/1642E1EE-927C-E411-B1B4-0025905B857C.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/1697BAC3-6B7D-E411-A435-002618943874.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/1C5841D7-0B81-E411-A6C8-0025905A6134.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/2251B4C6-357D-E411-8293-003048FFCB96.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/22A2C9E1-3E7A-E411-8359-0025905A6110.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/22EF59E1-3E7A-E411-B9FB-0025905A6110.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/2495F9C3-6B7D-E411-B634-002618943856.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/2885555C-D57B-E411-869A-0025905822B6.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/38552E49-D57B-E411-91AA-002618943809.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/3C31D5E1-3E7A-E411-AAB7-0025905A6110.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/4EFB5CD2-9B7D-E411-B16D-0025905A60B2.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/525159E1-3E7A-E411-8139-0025905A6110.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/582305E5-3E7A-E411-B629-0025905A60B8.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/5832CCE1-3E7A-E411-824F-0025905A6110.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/5AD5FBE4-3E7A-E411-B821-0025905A60B8.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/5EB0FEE4-3E7A-E411-A730-0025905A60B8.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/605D7B23-4A7D-E411-98FE-002618943857.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/62AB6D1C-C57B-E411-9B7B-0025905A6094.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/6C70FB33-4A7D-E411-9BB7-0025905B8562.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/70E13FF4-417A-E411-9D8D-0025905A60B8.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/7E836AE0-3E7A-E411-8395-0025905A60E0.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/8038FFE4-3E7A-E411-8417-0025905A60B8.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/823180E1-3E7A-E411-9B4E-0025905A6110.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/846F6E48-D57B-E411-9269-002618943809.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/8A93BBE1-3E7A-E411-AC9E-0025905A6110.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/90AA0D52-1D80-E411-A8F3-0025905A610C.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/9CFAB4C1-6B7D-E411-8522-002618943810.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/9E20FEE4-3E7A-E411-B73C-0025905A60B8.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/A06C47DA-9D7F-E411-A8B0-0025905A60F4.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/A0EE86E1-3E7A-E411-8075-0025905A6110.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/A46ABB02-C77B-E411-9C76-0025905A6094.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/A8511699-577D-E411-80C9-0025905A60DE.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/ACA4CC49-357D-E411-BE14-0025905A60F8.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/B2054BA2-FD7B-E411-8B3A-0025905964A6.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/B425DC4E-D57B-E411-BC03-002618943869.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/B460F8E4-3E7A-E411-9B0C-0025905A60B8.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/BAFB63E2-3E7A-E411-8B17-0025905B85A2.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/BEB63CA6-D77B-E411-97D9-002618943885.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/BECEB06B-7681-E411-8BD0-0025905964B2.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/D059B805-1680-E411-AD04-0025905B8562.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/D0CD4765-D57B-E411-BD1B-0026189437F8.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/D650BCE1-3E7A-E411-A6F3-0025905B8592.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/D8C1AD9D-577D-E411-B42B-0025905A6060.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/DA1BD7CE-5A7D-E411-B8CA-0025905A60DE.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/DCAA03E5-3E7A-E411-A1A6-0025905A60B8.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/E68237F4-417A-E411-B83A-0025905A60B8.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/E893F9EB-3D7A-E411-B2B0-0025905B861C.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/EEB16B4E-D57B-E411-ABF2-002618943869.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/F42C7BC1-6B7D-E411-A96B-0026189437E8.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/FA973B29-3D81-E411-AD71-003048FFD754.root',
'file:/fdata/hepx/store/mc/Phys14DR/ZJetsToNuNu_HT-400to600_Tune4C_13TeV-madgraph-tauola/MINIAODSIM/PU20bx25_PHYS14_25_V1-v2/10000/FC6F674F-D57B-E411-9733-002618943869.root'
 ] );


secFiles.extend( [
               ] )

