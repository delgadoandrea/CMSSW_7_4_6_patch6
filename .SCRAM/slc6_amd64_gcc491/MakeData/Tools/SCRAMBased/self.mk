ifeq ($(strip $(RecoParticleFlowPFClusterProducerPlugins)),)
RecoParticleFlowPFClusterProducerPlugins := self/src/RecoParticleFlow/PFClusterProducer/plugins
RecoParticleFlowPFClusterProducerPlugins_LOC_USE := self cmssw CondFormats/HcalObjects CondFormats/EcalObjects CondFormats/DataRecord DataFormats/CaloTowers DataFormats/DetId DataFormats/EcalDetId DataFormats/EcalRecHit DataFormats/HcalDetId DataFormats/HcalRecHit DataFormats/Math DataFormats/ParticleFlowReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CaloGeometry Geometry/CaloTopology Geometry/EcalAlgo Geometry/Records RecoLocalCalo/HcalRecAlgos RecoParticleFlow/PFClusterProducer
RecoParticleFlow/PFClusterProducer_relbigobj+=RecoParticleFlowPFClusterProducerPlugins
endif
ifeq ($(strip $(RecoTrackerNuclearSeedGeneratorPlugins)),)
RecoTrackerNuclearSeedGeneratorPlugins := self/src/RecoTracker/NuclearSeedGenerator/plugins
RecoTrackerNuclearSeedGeneratorPlugins_LOC_USE := self cmssw RecoTracker/NuclearSeedGenerator RecoTracker/TrackProducer DataFormats/TrackReco DataFormats/VertexReco
RecoTracker/NuclearSeedGenerator_relbigobj+=RecoTrackerNuclearSeedGeneratorPlugins
endif
ifeq ($(strip $(SUSYBSMAnalysisHSCPPlugins)),)
SUSYBSMAnalysisHSCPPlugins := self/src/SUSYBSMAnalysis/HSCP/plugins
SUSYBSMAnalysisHSCPPlugins_LOC_USE := self cmssw SUSYBSMAnalysis/HSCP
SUSYBSMAnalysis/HSCP_relbigobj+=SUSYBSMAnalysisHSCPPlugins
endif
ifeq ($(strip $(CalibMuonDTCalibrationPlugins)),)
CalibMuonDTCalibrationPlugins := self/src/CalibMuon/DTCalibration/plugins
CalibMuonDTCalibrationPlugins_LOC_LIB   := Spectrum
CalibMuonDTCalibrationPlugins_LOC_USE := self cmssw FWCore/Framework DataFormats/DTDigi DataFormats/DTRecHit Geometry/DTGeometry Geometry/Records Geometry/MuonNumbering CondFormats/DTObjects CondFormats/DataRecord CondCore/DBOutputService CommonTools/Utils CalibMuon/DTDigiSync CalibMuon/DTCalibration root rootmath rootcore roofit rootgraphics
CalibMuon/DTCalibration_relbigobj+=CalibMuonDTCalibrationPlugins
endif
ifeq ($(strip $(Validation/RecoJets)),)
src_Validation_RecoJets := self/Validation/RecoJets
Validation/RecoJets  := src_Validation_RecoJets
src_Validation_RecoJets_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
src_Validation_RecoJets_EX_USE := $(foreach d, self cmssw RecoHI/HiCentralityAlgos FWCore/MessageLogger JetMETCorrections/Objects RecoHI/HiJetAlgos CommonTools/UtilAlgos FWCore/ServiceRegistry rootgraphics FWCore/ParameterSet,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += src_Validation_RecoJets
endif

ifeq ($(strip $(RecoPixelVertexingPixelTrackFittingPlugins)),)
RecoPixelVertexingPixelTrackFittingPlugins := self/src/RecoPixelVertexing/PixelTrackFitting/plugins
RecoPixelVertexingPixelTrackFittingPlugins_LOC_USE := self cmssw RecoPixelVertexing/PixelTrackFitting
RecoPixelVertexing/PixelTrackFitting_relbigobj+=RecoPixelVertexingPixelTrackFittingPlugins
endif
ifeq ($(strip $(RecoEcal/EgammaClusterProducers)),)
RecoEcalEgammaClusterProducers := self/RecoEcal/EgammaClusterProducers
RecoEcal/EgammaClusterProducers := RecoEcalEgammaClusterProducers
RecoEcalEgammaClusterProducers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoEcalEgammaClusterProducers_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet DataFormats/EcalDigi DataFormats/EcalRecHit DataFormats/EgammaReco CondFormats/EcalObjects CondFormats/EgammaObjects CondFormats/DataRecord RecoLocalCalo/EcalRecAlgos Geometry/CaloGeometry Geometry/CaloTopology RecoEcal/EgammaClusterAlgos Geometry/EcalAlgo DataFormats/Math RecoEcal/EgammaCoreTools RecoEgamma/EgammaTools clhep TrackingTools/TrackAssociator CommonTools/UtilAlgos,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += RecoEcalEgammaClusterProducers
RecoEcalEgammaClusterProducers_CLASS := LIBRARY
RecoEcal/EgammaClusterProducers_relbigobj+=RecoEcalEgammaClusterProducers
endif
ifeq ($(strip $(RecoRomanPot/RecoFP420)),)
RecoRomanPotRecoFP420 := self/RecoRomanPot/RecoFP420
RecoRomanPot/RecoFP420 := RecoRomanPotRecoFP420
RecoRomanPotRecoFP420_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoRomanPotRecoFP420_EX_USE := $(foreach d, self cmssw FWCore/PluginManager DataFormats/Math DataFormats/FP420Digi DataFormats/FP420Cluster DataFormats/Common FWCore/ParameterSet FWCore/Framework Mixing/Base DetectorDescription/Core FWCore/MessageLogger hector boost root clhep hepmc gsl rootmath,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoRomanPotRecoFP420_EX_LIB   := RecoRomanPotRecoFP420
ALL_EXTERNAL_PRODS += RecoRomanPotRecoFP420
RecoRomanPotRecoFP420_CLASS := LIBRARY
RecoRomanPot/RecoFP420_relbigobj+=RecoRomanPotRecoFP420
endif
ifeq ($(strip $(RecoMuon/MuonIdentification)),)
RecoMuonMuonIdentification := self/RecoMuon/MuonIdentification
RecoMuon/MuonIdentification := RecoMuonMuonIdentification
RecoMuonMuonIdentification_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoMuonMuonIdentification_EX_USE := $(foreach d, self cmssw DataFormats/GeometrySurface DataFormats/GeometryVector DataFormats/Math DataFormats/TrajectoryState DataFormats/VertexReco FWCore/ServiceRegistry RecoMuon/Navigation RecoMuon/TransientTrackingRecHit RecoMuon/MuonIsolation RecoTracker/TkDetLayers RecoTracker/TkMSParametrization RecoTracker/TransientTrackingRecHit TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrackFitters TrackingTools/TrackRefitter TrackingTools/TrajectoryState TrackingTools/TransientTrackingRecHit Geometry/DTGeometry DataFormats/DetId DataFormats/MuonDetId DataFormats/MuonReco DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet Geometry/CommonDetUnit Geometry/CSCGeometry Geometry/Records SimDataFormats/Track SimDataFormats/TrackingHit roothistmatrix RecoMuon/TrackingTools DataFormats/CSCRecHit RecoLocalCalo/HcalRecAlgos PhysicsTools/SelectorUtils,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoMuonMuonIdentification_LCGDICTS  := x 
RecoMuonMuonIdentification_EX_LIB   := RecoMuonMuonIdentification
ALL_EXTERNAL_PRODS += RecoMuonMuonIdentification
RecoMuonMuonIdentification_CLASS := LIBRARY
RecoMuon/MuonIdentification_relbigobj+=RecoMuonMuonIdentification
endif
ifeq ($(strip $(DQM/SiStripMonitorClient)),)
DQMSiStripMonitorClient := self/DQM/SiStripMonitorClient
DQM/SiStripMonitorClient := DQMSiStripMonitorClient
DQMSiStripMonitorClient_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMSiStripMonitorClient_EX_USE := $(foreach d, self cmssw FWCore/MessageLogger FWCore/Framework EventFilter/Utilities DQMServices/ClientConfig CalibFormats/SiStripObjects CondFormats/SiStripObjects CondFormats/DataRecord CondFormats/RunInfo CommonTools/TrackerMap CalibTracker/Records DQM/TrackerCommon DQM/SiStripCommon DQM/SiStripMonitorSummary DataFormats/SiStripDetId boost root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DQMSiStripMonitorClient_EX_LIB   := DQMSiStripMonitorClient
ALL_EXTERNAL_PRODS += DQMSiStripMonitorClient
DQMSiStripMonitorClient_CLASS := LIBRARY
DQM/SiStripMonitorClient_relbigobj+=DQMSiStripMonitorClient
endif
ifeq ($(strip $(CommonToolsTriggerUtilsPlugins)),)
CommonToolsTriggerUtilsPlugins := self/src/CommonTools/TriggerUtils/plugins
CommonToolsTriggerUtilsPlugins_LOC_USE := self cmssw CondFormats/DataRecord DataFormats/Common DataFormats/Scalers DataFormats/L1GlobalTrigger FWCore/Framework L1Trigger/GlobalTriggerAnalyzer HLTrigger/HLTcore CommonTools/TriggerUtils
CommonTools/TriggerUtils_relbigobj+=CommonToolsTriggerUtilsPlugins
endif
ifeq ($(strip $(RecoRomanPotRecoFP420Plugins)),)
RecoRomanPotRecoFP420Plugins := self/src/RecoRomanPot/RecoFP420/plugins
RecoRomanPotRecoFP420Plugins_LOC_USE := self cmssw RecoRomanPot/RecoFP420 SimRomanPot/SimFP420 SimG4CMS/FP420 gsl hector
RecoRomanPot/RecoFP420_relbigobj+=RecoRomanPotRecoFP420Plugins
endif
ifeq ($(strip $(CaloOnlineTools/EcalTools)),)
CaloOnlineToolsEcalTools := self/CaloOnlineTools/EcalTools
CaloOnlineTools/EcalTools := CaloOnlineToolsEcalTools
CaloOnlineToolsEcalTools_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CaloOnlineToolsEcalTools_EX_USE := $(foreach d, self cmssw root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CaloOnlineToolsEcalTools_EX_LIB   := CaloOnlineToolsEcalTools
ALL_EXTERNAL_PRODS += CaloOnlineToolsEcalTools
CaloOnlineToolsEcalTools_CLASS := LIBRARY
CaloOnlineTools/EcalTools_relbigobj+=CaloOnlineToolsEcalTools
endif
ifeq ($(strip $(AlcaBeamSpotHarvester)),)
AlcaBeamSpotHarvester := self/src/Calibration/TkAlCaRecoProducers/plugins
AlcaBeamSpotHarvester_LOC_USE := self cmssw FWCore/MessageLogger FWCore/Framework FWCore/ParameterSet CondCore/Utilities FWCore/ServiceRegistry FWCore/PluginManager CondFormats/BeamSpotObjects CondFormats/DataRecord CondCore/DBOutputService RecoVertex/BeamSpotProducer Calibration/TkAlCaRecoProducers
Calibration/TkAlCaRecoProducers_relbigobj+=AlcaBeamSpotHarvester
endif
ifeq ($(strip $(AlcaBeamSpotProducer)),)
AlcaBeamSpotProducer := self/src/Calibration/TkAlCaRecoProducers/plugins
AlcaBeamSpotProducer_LOC_USE := self cmssw FWCore/MessageLogger FWCore/Framework FWCore/ParameterSet CondCore/Utilities FWCore/ServiceRegistry FWCore/PluginManager CondFormats/BeamSpotObjects CondFormats/DataRecord CondCore/DBOutputService RecoVertex/BeamSpotProducer Calibration/TkAlCaRecoProducers
Calibration/TkAlCaRecoProducers_relbigobj+=AlcaBeamSpotProducer
endif
ifeq ($(strip $(CalibrationTrackSelectorModule)),)
CalibrationTrackSelectorModule := self/src/Calibration/TkAlCaRecoProducers/plugins
CalibrationTrackSelectorModule_LOC_USE := self cmssw FWCore/MessageLogger FWCore/Framework FWCore/ParameterSet CondCore/Utilities FWCore/ServiceRegistry FWCore/PluginManager CondFormats/BeamSpotObjects CondFormats/DataRecord CondCore/DBOutputService RecoVertex/BeamSpotProducer Calibration/TkAlCaRecoProducers CommonTools/RecoAlgos PhysicsTools/UtilAlgos
Calibration/TkAlCaRecoProducers_relbigobj+=CalibrationTrackSelectorModule
endif
ifeq ($(strip $(PCLMetadataWriter)),)
PCLMetadataWriter := self/src/Calibration/TkAlCaRecoProducers/plugins
PCLMetadataWriter_LOC_USE := self cmssw FWCore/MessageLogger FWCore/Framework FWCore/ParameterSet CondCore/Utilities FWCore/ServiceRegistry FWCore/PluginManager CondFormats/BeamSpotObjects CondFormats/DataRecord CondCore/DBOutputService RecoVertex/BeamSpotProducer Calibration/TkAlCaRecoProducers
Calibration/TkAlCaRecoProducers_relbigobj+=PCLMetadataWriter
endif
ifeq ($(strip $(AlcaBeamSpotFromDB)),)
AlcaBeamSpotFromDB := self/src/Calibration/TkAlCaRecoProducers/plugins
AlcaBeamSpotFromDB_LOC_USE := self cmssw FWCore/MessageLogger FWCore/Framework FWCore/ParameterSet CondCore/Utilities FWCore/ServiceRegistry FWCore/PluginManager CondFormats/BeamSpotObjects CondFormats/DataRecord CondCore/DBOutputService RecoVertex/BeamSpotProducer Calibration/TkAlCaRecoProducers
Calibration/TkAlCaRecoProducers_relbigobj+=AlcaBeamSpotFromDB
endif
ifeq ($(strip $(DQM/TrigXMonitorClient)),)
DQMTrigXMonitorClient := self/DQM/TrigXMonitorClient
DQM/TrigXMonitorClient := DQMTrigXMonitorClient
DQMTrigXMonitorClient_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMTrigXMonitorClient_EX_USE := $(foreach d, self cmssw FWCore/Framework HLTrigger/HLTcore FWCore/PluginManager FWCore/ParameterSet DQMServices/Core DQMServices/Components,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMTrigXMonitorClient
DQMTrigXMonitorClient_CLASS := LIBRARY
DQM/TrigXMonitorClient_relbigobj+=DQMTrigXMonitorClient
endif
ifeq ($(strip $(DQM/TrackerMonitorTrack)),)
DQMTrackerMonitorTrack := self/DQM/TrackerMonitorTrack
DQM/TrackerMonitorTrack := DQMTrackerMonitorTrack
DQMTrackerMonitorTrack_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMTrackerMonitorTrack_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DQM/SiStripCommon DQMServices/Core CalibFormats/SiStripObjects CalibTracker/Records Geometry/TrackerGeometryBuilder Alignment/OfflineValidation CommonTools/TriggerUtils,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMTrackerMonitorTrack
DQMTrackerMonitorTrack_CLASS := LIBRARY
DQM/TrackerMonitorTrack_relbigobj+=DQMTrackerMonitorTrack
endif
ifeq ($(strip $(BeamMonitorBx)),)
BeamMonitorBx := self/src/DQM/BeamMonitor/plugins
BeamMonitorBx_LOC_USE := self cmssw DQMServices/Components DQMServices/Core DataFormats/TrackReco FWCore/Framework DataFormats/BeamSpot CondFormats/DataRecord CondFormats/BeamSpotObjects RecoVertex/BeamSpotProducer DataFormats/VertexReco DataFormats/TrackerRecHit2D TrackingTools/PatternTools
DQM/BeamMonitor_relbigobj+=BeamMonitorBx
endif
ifeq ($(strip $(AlcaBeamMonitor)),)
AlcaBeamMonitor := self/src/DQM/BeamMonitor/plugins
AlcaBeamMonitor_LOC_USE := self cmssw DQMServices/Components DQMServices/Core DataFormats/TrackReco FWCore/Framework DataFormats/BeamSpot CondFormats/DataRecord CondFormats/BeamSpotObjects RecoVertex/BeamSpotProducer DataFormats/VertexReco DataFormats/TrackerRecHit2D TrackingTools/PatternTools
DQM/BeamMonitor_relbigobj+=AlcaBeamMonitor
endif
ifeq ($(strip $(BeamSpotProblemMonitor)),)
BeamSpotProblemMonitor := self/src/DQM/BeamMonitor/plugins
BeamSpotProblemMonitor_LOC_USE := self cmssw DQMServices/Components DQMServices/Core DataFormats/TrackReco FWCore/Framework DataFormats/BeamSpot CondFormats/DataRecord CondFormats/BeamSpotObjects RecoVertex/BeamSpotProducer DataFormats/VertexReco DataFormats/TrackerRecHit2D TrackingTools/PatternTools
DQM/BeamMonitor_relbigobj+=BeamSpotProblemMonitor
endif
ifeq ($(strip $(AlcaBeamMonitorClient)),)
AlcaBeamMonitorClient := self/src/DQM/BeamMonitor/plugins
AlcaBeamMonitorClient_LOC_USE := self cmssw DQMServices/Components DQMServices/Core DataFormats/TrackReco FWCore/Framework DataFormats/BeamSpot CondFormats/DataRecord CondFormats/BeamSpotObjects RecoVertex/BeamSpotProducer DataFormats/VertexReco DataFormats/TrackerRecHit2D TrackingTools/PatternTools
DQM/BeamMonitor_relbigobj+=AlcaBeamMonitorClient
endif
ifeq ($(strip $(BeamConditionsMonitor)),)
BeamConditionsMonitor := self/src/DQM/BeamMonitor/plugins
BeamConditionsMonitor_LOC_USE := self cmssw DQMServices/Components DQMServices/Core DataFormats/TrackReco FWCore/Framework DataFormats/BeamSpot CondFormats/DataRecord CondFormats/BeamSpotObjects RecoVertex/BeamSpotProducer DataFormats/VertexReco DataFormats/TrackerRecHit2D TrackingTools/PatternTools
DQM/BeamMonitor_relbigobj+=BeamConditionsMonitor
endif
ifeq ($(strip $(PixelVTXMonitor)),)
PixelVTXMonitor := self/src/DQM/BeamMonitor/plugins
PixelVTXMonitor_LOC_USE := self cmssw DQMServices/Components DQMServices/Core DataFormats/TrackReco FWCore/Framework DataFormats/BeamSpot CondFormats/DataRecord CondFormats/BeamSpotObjects RecoVertex/BeamSpotProducer DataFormats/VertexReco DataFormats/TrackerRecHit2D TrackingTools/PatternTools
DQM/BeamMonitor_relbigobj+=PixelVTXMonitor
endif
ifeq ($(strip $(BeamMonitor)),)
BeamMonitor := self/src/DQM/BeamMonitor/plugins
BeamMonitor_LOC_USE := self cmssw DQMServices/Components DQMServices/Core DataFormats/TrackReco FWCore/Framework DataFormats/BeamSpot CondFormats/DataRecord CondFormats/BeamSpotObjects RecoVertex/BeamSpotProducer DataFormats/VertexReco DataFormats/TrackerRecHit2D TrackingTools/PatternTools
DQM/BeamMonitor_relbigobj+=BeamMonitor
endif
ifeq ($(strip $(Vx3DHLTAnalyzer)),)
Vx3DHLTAnalyzer := self/src/DQM/BeamMonitor/plugins
Vx3DHLTAnalyzer_LOC_USE := self cmssw DQMServices/Components DQMServices/Core DataFormats/TrackReco FWCore/Framework DataFormats/BeamSpot CondFormats/DataRecord CondFormats/BeamSpotObjects RecoVertex/BeamSpotProducer DataFormats/VertexReco DataFormats/TrackerRecHit2D TrackingTools/PatternTools
DQM/BeamMonitor_relbigobj+=Vx3DHLTAnalyzer
endif
ifeq ($(strip $(TKStatus)),)
TKStatus := self/src/DQM/BeamMonitor/plugins
TKStatus_LOC_USE := self cmssw DQMServices/Components DQMServices/Core DataFormats/TrackReco FWCore/Framework DataFormats/BeamSpot CondFormats/DataRecord CondFormats/BeamSpotObjects RecoVertex/BeamSpotProducer DataFormats/VertexReco DataFormats/TrackerRecHit2D TrackingTools/PatternTools
DQM/BeamMonitor_relbigobj+=TKStatus
endif
ifeq ($(strip $(EventFilterSiPixelRawToDigiPlugins)),)
EventFilterSiPixelRawToDigiPlugins := self/src/EventFilter/SiPixelRawToDigi/plugins
EventFilterSiPixelRawToDigiPlugins_LOC_USE := self cmssw EventFilter/SiPixelRawToDigi
EventFilter/SiPixelRawToDigi_relbigobj+=EventFilterSiPixelRawToDigiPlugins
endif
ifeq ($(strip $(HLTriggerOffline/SUSYBSM)),)
HLTriggerOfflineSUSYBSM := self/HLTriggerOffline/SUSYBSM
HLTriggerOffline/SUSYBSM := HLTriggerOfflineSUSYBSM
HLTriggerOfflineSUSYBSM_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerOfflineSUSYBSM_EX_USE := $(foreach d, self cmssw DataFormats/BeamSpot DataFormats/BTauReco DataFormats/Candidate DataFormats/Common DataFormats/EgammaCandidates DataFormats/HepMCCandidate DataFormats/HLTReco DataFormats/JetReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/Math DataFormats/METReco DataFormats/MuonReco DataFormats/VertexReco DQMServices/Core FWCore/Common FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry HLTrigger/HLTcore HLTrigger/JetMET RecoEgamma/EgammaTools rootgraphics,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerOfflineSUSYBSM
HLTriggerOfflineSUSYBSM_CLASS := LIBRARY
HLTriggerOffline/SUSYBSM_relbigobj+=HLTriggerOfflineSUSYBSM
endif
ifeq ($(strip $(HLTrigger/HLTfilters)),)
HLTriggerHLTfilters := self/HLTrigger/HLTfilters
HLTrigger/HLTfilters := HLTriggerHLTfilters
HLTriggerHLTfilters_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerHLTfilters_EX_USE := $(foreach d, self cmssw boost CommonTools/Utils CondFormats/DataRecord CondFormats/L1TObjects DataFormats/Candidate DataFormats/Common DataFormats/EgammaCandidates DataFormats/HLTReco DataFormats/TauReco DataFormats/JetReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/METReco DataFormats/RecoCandidate FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities HLTrigger/HLTcore CondFormats/HLTObjects,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerHLTfilters
HLTriggerHLTfilters_CLASS := LIBRARY
HLTrigger/HLTfilters_relbigobj+=HLTriggerHLTfilters
endif
ifeq ($(strip $(PhysicsToolsJetMCAlgosPlugins)),)
PhysicsToolsJetMCAlgosPlugins := self/src/PhysicsTools/JetMCAlgos/plugins
PhysicsToolsJetMCAlgosPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet CommonTools/Utils PhysicsTools/JetMCAlgos PhysicsTools/JetMCUtils PhysicsTools/HepMCCandAlgos SimDataFormats/JetMatching SimDataFormats/GeneratorProducts DataFormats/HepMCCandidate fastjet
PhysicsTools/JetMCAlgos_relbigobj+=PhysicsToolsJetMCAlgosPlugins
endif
ifeq ($(strip $(CommonTools/RecoAlgos)),)
CommonToolsRecoAlgos := self/CommonTools/RecoAlgos
CommonTools/RecoAlgos := CommonToolsRecoAlgos
CommonToolsRecoAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CommonToolsRecoAlgos_EX_USE := $(foreach d, self cmssw SimGeneral/HepPDTRecord DataFormats/RecoCandidate FWCore/Framework FWCore/ParameterSet DataFormats/TrackReco DataFormats/MuonReco DataFormats/TrackingRecHit DataFormats/SiStripCluster DataFormats/SiPixelCluster DataFormats/TrackerRecHit2D DataFormats/METReco TrackingTools/Records TrackingTools/IPTools TrackingTools/TransientTrack fastjet,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CommonToolsRecoAlgos_EX_LIB   := CommonToolsRecoAlgos
ALL_EXTERNAL_PRODS += CommonToolsRecoAlgos
CommonToolsRecoAlgos_CLASS := LIBRARY
CommonTools/RecoAlgos_relbigobj+=CommonToolsRecoAlgos
endif
ifeq ($(strip $(Validation/RecoEgamma)),)
src_Validation_RecoEgamma := self/Validation/RecoEgamma
Validation/RecoEgamma  := src_Validation_RecoEgamma
src_Validation_RecoEgamma_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
src_Validation_RecoEgamma_EX_USE := $(foreach d, FWCore/Framework self cmssw DQMServices/Components DQMServices/Core FWCore/ParameterSet,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += src_Validation_RecoEgamma
endif

ifeq ($(strip $(CalibTracker/SiPixelTools)),)
CalibTrackerSiPixelTools := self/CalibTracker/SiPixelTools
CalibTracker/SiPixelTools := CalibTrackerSiPixelTools
CalibTrackerSiPixelTools_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CalibTrackerSiPixelTools_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry DataFormats/FEDRawData DataFormats/SiPixelDigi CondFormats/DataRecord CondFormats/SiPixelObjects CondCore/DBOutputService Geometry/Records root Geometry/CommonDetUnit Geometry/TrackerGeometryBuilder CalibFormats/SiPixelObjects DQM/SiPixelCommon DQMServices/Core,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CalibTrackerSiPixelTools_EX_LIB   := CalibTrackerSiPixelTools
ALL_EXTERNAL_PRODS += CalibTrackerSiPixelTools
CalibTrackerSiPixelTools_CLASS := LIBRARY
CalibTracker/SiPixelTools_relbigobj+=CalibTrackerSiPixelTools
endif
ifeq ($(strip $(RecoMET/METAlgorithms)),)
RecoMETMETAlgorithms := self/RecoMET/METAlgorithms
RecoMET/METAlgorithms := RecoMETMETAlgorithms
RecoMETMETAlgorithms_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoMETMETAlgorithms_EX_USE := $(foreach d, self cmssw DataFormats/METReco DataFormats/JetReco DataFormats/CaloTowers DataFormats/Common DataFormats/CSCRecHit FWCore/ParameterSet rootphysics MagneticField/Records MagneticField/Engine TrackingTools/GeomPropagators TrackingTools/TrackAssociator Geometry/CaloTopology Geometry/CSCGeometry RecoEcal/EgammaCoreTools DataFormats/ParticleFlowCandidate DataFormats/L1GlobalMuonTrigger DataFormats/MuonReco DataFormats/ParticleFlowReco CondFormats/JetMETObjects RecoMuon/TrackingTools RecoParticleFlow/PFClusterTools,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoMETMETAlgorithms_EX_LIB   := RecoMETMETAlgorithms
ALL_EXTERNAL_PRODS += RecoMETMETAlgorithms
RecoMETMETAlgorithms_CLASS := LIBRARY
RecoMET/METAlgorithms_relbigobj+=RecoMETMETAlgorithms
endif
ifeq ($(strip $(Calibration/IsolatedParticles)),)
CalibrationIsolatedParticles := self/Calibration/IsolatedParticles
Calibration/IsolatedParticles := CalibrationIsolatedParticles
CalibrationIsolatedParticles_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CalibrationIsolatedParticles_EX_USE := $(foreach d, self cmssw clhep boost root FWCore/Utilities FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger CondFormats/DataRecord MagneticField/Engine MagneticField/Records DataFormats/DetId DataFormats/EcalDetId DataFormats/HcalDetId DataFormats/EcalRecHit DataFormats/HcalRecHit DataFormats/Common DataFormats/TrackReco DataFormats/EgammaReco DataFormats/Provenance SimDataFormats/CaloHit SimDataFormats/Track SimDataFormats/GeneratorProducts SimDataFormats/Vertex SimTracker/TrackerHitAssociation SimGeneral/HepPDTRecord Geometry/CaloGeometry Geometry/CommonDetUnit Geometry/TrackerGeometryBuilder Geometry/EcalAlgo Geometry/CaloTopology Geometry/Records RecoLocalCalo/EcalRecAlgos TrackingTools/TrajectoryState TrackingTools/GeomPropagators TrackingTools/TrackAssociator,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CalibrationIsolatedParticles_EX_LIB   := CalibrationIsolatedParticles
ALL_EXTERNAL_PRODS += CalibrationIsolatedParticles
CalibrationIsolatedParticles_CLASS := LIBRARY
Calibration/IsolatedParticles_relbigobj+=CalibrationIsolatedParticles
endif
ifeq ($(strip $(Fireworks/Muons)),)
FireworksMuons := self/Fireworks/Muons
Fireworks/Muons := FireworksMuons
FireworksMuons_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FireworksMuons_EX_USE := $(foreach d, self cmssw DataFormats/MuonDetId DataFormats/MuonReco DataFormats/TrackReco Fireworks/Candidates Fireworks/Core Fireworks/Tracks,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FireworksMuons_EX_LIB   := FireworksMuons
ALL_EXTERNAL_PRODS += FireworksMuons
FireworksMuons_CLASS := LIBRARY
Fireworks/Muons_relbigobj+=FireworksMuons
endif
ifeq ($(strip $(RecoEgammaPhotonIdentificationPlugins_cuts)),)
RecoEgammaPhotonIdentificationPlugins_cuts := self/src/RecoEgamma/PhotonIdentification/plugins
RecoEgammaPhotonIdentificationPlugins_cuts_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager DataFormats/EgammaReco DataFormats/EgammaCandidates DataFormats/PatCandidates CondFormats/PhysicsToolsObjects Geometry/CaloGeometry PhysicsTools/SelectorUtils RecoEgamma/EgammaTools
RecoEgamma/PhotonIdentification_relbigobj+=RecoEgammaPhotonIdentificationPlugins_cuts
endif
ifeq ($(strip $(RecoEgammaPhotonIdentificationPlugins)),)
RecoEgammaPhotonIdentificationPlugins := self/src/RecoEgamma/PhotonIdentification/plugins
RecoEgammaPhotonIdentificationPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager DataFormats/EgammaReco DataFormats/EgammaCandidates DataFormats/PatCandidates CondFormats/PhysicsToolsObjects Geometry/CaloGeometry PhysicsTools/SelectorUtils RecoEgamma/EgammaTools RecoEgamma/PhotonIdentification
RecoEgamma/PhotonIdentification_relbigobj+=RecoEgammaPhotonIdentificationPlugins
endif
ifeq ($(strip $(RecoPixelVertexing/PixelTrackFitting)),)
RecoPixelVertexingPixelTrackFitting := self/RecoPixelVertexing/PixelTrackFitting
RecoPixelVertexing/PixelTrackFitting := RecoPixelVertexingPixelTrackFitting
RecoPixelVertexingPixelTrackFitting_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoPixelVertexingPixelTrackFitting_EX_USE := $(foreach d, self cmssw CommonTools/Statistics DataFormats/GeometrySurface DataFormats/GeometryVector DataFormats/SiPixelDetId DataFormats/TrackerRecHit2D DataFormats/TrackingRecHit DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CommonDetUnit Geometry/Records Geometry/TrackerGeometryBuilder MagneticField/Engine MagneticField/Records RecoTracker/TkMSParametrization RecoTracker/TkTrackingRegions TrackingTools/DetLayers TrackingTools/PatternTools TrackingTools/KalmanUpdators TrackingTools/Records TrackingTools/TrajectoryParametrization TrackingTools/TrajectoryState TrackingTools/TransientTrackingRecHit RecoTracker/TransientTrackingRecHit RecoPixelVertexing/PixelTriplets,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoPixelVertexingPixelTrackFitting_EX_LIB   := RecoPixelVertexingPixelTrackFitting
ALL_EXTERNAL_PRODS += RecoPixelVertexingPixelTrackFitting
RecoPixelVertexingPixelTrackFitting_CLASS := LIBRARY
RecoPixelVertexing/PixelTrackFitting_relbigobj+=RecoPixelVertexingPixelTrackFitting
endif
ifeq ($(strip $(RecoTauTag/RecoTau)),)
RecoTauTagRecoTau := self/RecoTauTag/RecoTau
RecoTauTag/RecoTau := RecoTauTagRecoTau
RecoTauTagRecoTau_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoTauTagRecoTau_EX_USE := $(foreach d, self cmssw MagneticField/Engine MagneticField/Records CondFormats/EgammaObjects DataFormats/Math DataFormats/TauReco DataFormats/VertexReco DataFormats/ParticleFlowCandidate DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CaloGeometry Geometry/CaloTopology Geometry/Records Geometry/CommonDetUnit TrackingTools/TransientTrack TrackingTools/IPTools RecoTauTag/TauTagTools RecoVertex/KalmanVertexFit RecoVertex/AdaptiveVertexFit RecoParticleFlow/PFClusterTools TrackingTools/TrackAssociator PhysicsTools/JetMCUtils CommonTools/Utils roottmva,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoTauTagRecoTau_EX_LIB   := RecoTauTagRecoTau
ALL_EXTERNAL_PRODS += RecoTauTagRecoTau
RecoTauTagRecoTau_CLASS := LIBRARY
RecoTauTag/RecoTau_relbigobj+=RecoTauTagRecoTau
endif
ifeq ($(strip $(RecoTauTagTauTagToolsPlugins)),)
RecoTauTagTauTagToolsPlugins := self/src/RecoTauTag/TauTagTools/plugins
RecoTauTagTauTagToolsPlugins_LOC_USE := self cmssw CondFormats/DataRecord CommonTools/Utils CommonTools/UtilAlgos DataFormats/Candidate TrackingTools/TransientTrack RecoVertex/VertexPrimitives PhysicsTools/IsolationUtils PhysicsTools/MVAComputer PhysicsTools/MVATrainer FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger DataFormats/TauReco CommonTools/CandUtils RecoTauTag/TauTagTools RecoTauTag/RecoTau
RecoTauTag/TauTagTools_relbigobj+=RecoTauTagTauTagToolsPlugins
endif
ifeq ($(strip $(SimRomanPot/SimFP420)),)
SimRomanPotSimFP420 := self/SimRomanPot/SimFP420
SimRomanPot/SimFP420 := SimRomanPotSimFP420
SimRomanPotSimFP420_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimRomanPotSimFP420_EX_USE := $(foreach d, self cmssw FWCore/PluginManager SimDataFormats/TrackingHit DataFormats/Math SimDataFormats/TrackerDigiSimLink SimDataFormats/CrossingFrame DataFormats/FP420Digi DataFormats/Common SimGeneral/HepPDTRecord SimG4Core/Watcher SimG4Core/SensitiveDetector SimG4Core/Notification SimG4Core/Application SimG4CMS/Calo SimG4CMS/FP420 SimDataFormats/SimHitMaker SimDataFormats/CaloHit Mixing/Base DetectorDescription/Core FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger boost geant4core root clhep hepmc gsl,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimRomanPotSimFP420_EX_LIB   := SimRomanPotSimFP420
ALL_EXTERNAL_PRODS += SimRomanPotSimFP420
SimRomanPotSimFP420_CLASS := LIBRARY
SimRomanPot/SimFP420_relbigobj+=SimRomanPotSimFP420
endif
ifeq ($(strip $(Alignment/CommonAlignmentProducer)),)
AlignmentCommonAlignmentProducer := self/Alignment/CommonAlignmentProducer
Alignment/CommonAlignmentProducer := AlignmentCommonAlignmentProducer
AlignmentCommonAlignmentProducer_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
AlignmentCommonAlignmentProducer_EX_USE := $(foreach d, self cmssw DataFormats/MuonDetId DataFormats/SiStripDetId DataFormats/SiPixelDetId DataFormats/TrackReco DataFormats/TrackerRecHit2D DataFormats/TrackingRecHit DataFormats/CSCRecHit DataFormats/DTRecHit DataFormats/RPCRecHit DataFormats/Candidate DataFormats/RecoCandidate DataFormats/Math FWCore/MessageLogger FWCore/Framework FWCore/Utilities FWCore/ParameterSet DataFormats/Alignment Geometry/Records Geometry/TrackerGeometryBuilder rootcore root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
AlignmentCommonAlignmentProducer_EX_LIB   := AlignmentCommonAlignmentProducer
ALL_EXTERNAL_PRODS += AlignmentCommonAlignmentProducer
AlignmentCommonAlignmentProducer_CLASS := LIBRARY
Alignment/CommonAlignmentProducer_relbigobj+=AlignmentCommonAlignmentProducer
endif
ifeq ($(strip $(PhysicsTools/RecoAlgos)),)
PhysicsToolsRecoAlgos := self/PhysicsTools/RecoAlgos
PhysicsTools/RecoAlgos := PhysicsToolsRecoAlgos
PhysicsToolsRecoAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
PhysicsToolsRecoAlgos_EX_USE := $(foreach d, self cmssw PhysicsTools/RecoUtils FWCore/ParameterSet,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsRecoAlgos_EX_LIB   := PhysicsToolsRecoAlgos
ALL_EXTERNAL_PRODS += PhysicsToolsRecoAlgos
PhysicsToolsRecoAlgos_CLASS := LIBRARY
PhysicsTools/RecoAlgos_relbigobj+=PhysicsToolsRecoAlgos
endif
ifeq ($(strip $(DQM/DTMonitorClient)),)
DQMDTMonitorClient := self/DQM/DTMonitorClient
DQM/DTMonitorClient := DQMDTMonitorClient
DQMDTMonitorClient_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMDTMonitorClient_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/MessageLogger DataFormats/FEDRawData DQMServices/Core DataFormats/DTDigi CondFormats/DTObjects CondFormats/DataRecord Geometry/Records Geometry/DTGeometry CondCore/DBOutputService CalibMuon/DTDigiSync CalibMuon/DTCalibration L1TriggerConfig/DTTPGConfig DQM/DTMonitorModule CondFormats/RunInfo boost rootgraphics,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMDTMonitorClient
DQMDTMonitorClient_CLASS := LIBRARY
DQM/DTMonitorClient_relbigobj+=DQMDTMonitorClient
endif
ifeq ($(strip $(DQMServices/Components)),)
DQMServicesComponents := self/DQMServices/Components
DQMServices/Components := DQMServicesComponents
DQMServicesComponents_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMServicesComponents_EX_USE := $(foreach d, self cmssw CondFormats/DataRecord CondFormats/RunInfo DataFormats/Scalers DataFormats/L1GlobalTrigger DQMServices/ClientConfig EventFilter/Utilities DQMServices/Core FWCore/Catalog FWCore/Framework FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Version HLTrigger/HLTcore roothistmatrix,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DQMServicesComponents_EX_LIB   := DQMServicesComponents
ALL_EXTERNAL_PRODS += DQMServicesComponents
DQMServicesComponents_CLASS := LIBRARY
DQMServices/Components_relbigobj+=DQMServicesComponents
endif
ifeq ($(strip $(Validation/MuonIdentification)),)
ValidationMuonIdentification := self/Validation/MuonIdentification
Validation/MuonIdentification := ValidationMuonIdentification
ValidationMuonIdentification_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ValidationMuonIdentification_EX_USE := $(foreach d, self cmssw DataFormats/MuonReco DQMServices/Core FWCore/Framework Geometry/CommonDetUnit RecoMuon/MuonIdentification,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += ValidationMuonIdentification
ValidationMuonIdentification_CLASS := LIBRARY
Validation/MuonIdentification_relbigobj+=ValidationMuonIdentification
endif
ifeq ($(strip $(PhysicsTools/Heppy)),)
PhysicsToolsHeppy := self/PhysicsTools/Heppy
PhysicsTools/Heppy := PhysicsToolsHeppy
PhysicsToolsHeppy_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
PhysicsToolsHeppy_EX_USE := $(foreach d, self cmssw root rootcore rootinteractive rootpy clhepheader DataFormats/Candidate DataFormats/PatCandidates DataFormats/HepMCCandidate fastjet ktjet EgammaAnalysis/ElectronTools boost lhapdf,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsHeppy_LCGDICTS  := x 
PhysicsToolsHeppy_EX_LIB   := PhysicsToolsHeppy
ALL_EXTERNAL_PRODS += PhysicsToolsHeppy
PhysicsToolsHeppy_CLASS := LIBRARY
PhysicsTools/Heppy_relbigobj+=PhysicsToolsHeppy
endif
ifeq ($(strip $(DQM/HLTEvF)),)
src_DQM_HLTEvF := self/DQM/HLTEvF
DQM/HLTEvF  := src_DQM_HLTEvF
src_DQM_HLTEvF_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
src_DQM_HLTEvF_EX_USE := $(foreach d, RecoEcal/EgammaCoreTools DataFormats/HLTReco FWCore/Framework self cmssw Geometry/CaloGeometry Geometry/CaloTopology FWCore/MessageLogger DataFormats/Provenance DataFormats/BTauReco DataFormats/Common DQMServices/Core rootcore FWCore/ServiceRegistry HLTrigger/HLTcore DataFormats/TauReco FWCore/Services FWCore/ParameterSet FWCore/Utilities,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += src_DQM_HLTEvF
endif

ifeq ($(strip $(CaloOnlineToolsEcalToolsPlugins)),)
CaloOnlineToolsEcalToolsPlugins := self/src/CaloOnlineTools/EcalTools/plugins
CaloOnlineToolsEcalToolsPlugins_LOC_USE := self cmssw CaloOnlineTools/EcalTools FWCore/Framework FWCore/ParameterSet FWCore/Utilities CondFormats/EcalObjects CondFormats/L1TObjects DataFormats/DetId DataFormats/EcalDigi DataFormats/EcalRawData DataFormats/EcalRecHit DataFormats/FEDRawData DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalTrigger Geometry/EcalMapping Geometry/CaloTopology HLTrigger/HLTcore CommonTools/UtilAlgos TrackingTools/TrackAssociator rootgraphics rootcore
CaloOnlineTools/EcalTools_relbigobj+=CaloOnlineToolsEcalToolsPlugins
endif
ifeq ($(strip $(RecoVertex/V0Producer)),)
RecoVertexV0Producer := self/RecoVertex/V0Producer
RecoVertex/V0Producer := RecoVertexV0Producer
RecoVertexV0Producer_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoVertexV0Producer_EX_USE := $(foreach d, self cmssw root DataFormats/BeamSpot DataFormats/Candidate DataFormats/Common DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/VertexReco Geometry/CommonDetUnit Geometry/Records Geometry/TrackerGeometryBuilder FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger MagneticField/Records MagneticField/VolumeBasedEngine CommonTools/CandUtils RecoVertex/AdaptiveVertexFit RecoVertex/KalmanVertexFit RecoVertex/VertexPrimitives TrackingTools/TransientTrack TrackingTools/IPTools,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += RecoVertexV0Producer
RecoVertexV0Producer_CLASS := LIBRARY
RecoVertex/V0Producer_relbigobj+=RecoVertexV0Producer
endif
ifeq ($(strip $(PhysicsTools/PatAlgos)),)
PhysicsToolsPatAlgos := self/PhysicsTools/PatAlgos
PhysicsTools/PatAlgos := PhysicsToolsPatAlgos
PhysicsToolsPatAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
PhysicsToolsPatAlgos_EX_USE := $(foreach d, self cmssw DataFormats/Candidate DataFormats/Common DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/JetReco DataFormats/Math DataFormats/METReco DataFormats/MuonReco DataFormats/PatCandidates DataFormats/TauReco DataFormats/TrackReco DataFormats/VertexReco FWCore/Framework FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Utilities PhysicsTools/PatUtils PhysicsTools/Utilities PhysicsTools/IsolationAlgos Geometry/CaloTopology RecoEgamma/EgammaTools clhep,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsPatAlgos_EX_LIB   := PhysicsToolsPatAlgos
ALL_EXTERNAL_PRODS += PhysicsToolsPatAlgos
PhysicsToolsPatAlgos_CLASS := LIBRARY
PhysicsTools/PatAlgos_relbigobj+=PhysicsToolsPatAlgos
endif
ifeq ($(strip $(MuonAnalysisMomentumScaleCalibrationPlugins)),)
MuonAnalysisMomentumScaleCalibrationPlugins := self/src/MuonAnalysis/MomentumScaleCalibration/plugins
MuonAnalysisMomentumScaleCalibrationPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/ServiceRegistry FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities CondCore/DBOutputService DataFormats/Candidate DataFormats/TrackReco DataFormats/MuonReco DataFormats/PatCandidates DataFormats/HepMCCandidate HLTrigger/HLTcore RecoMuon/TrackingTools MuonAnalysis/MomentumScaleCalibration SimGeneral/HepPDTRecord SimDataFormats/Track SimDataFormats/Vertex root clhep heppdt hepmc
MuonAnalysis/MomentumScaleCalibration_relbigobj+=MuonAnalysisMomentumScaleCalibrationPlugins
endif
ifeq ($(strip $(PhysicsToolsPatAlgos_plugins)),)
PhysicsToolsPatAlgos_plugins := self/src/PhysicsTools/PatAlgos/plugins
PhysicsToolsPatAlgos_plugins_LOC_USE := self cmssw PhysicsTools/PatAlgos FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/MessageService L1Trigger/GlobalTriggerAnalyzer HLTrigger/HLTcore DataFormats/PatCandidates DataFormats/BTauReco DataFormats/JetReco DataFormats/TrackReco DataFormats/Candidate DataFormats/HeavyIonEvent PhysicsTools/PatUtils CondFormats/JetMETObjects JetMETCorrections/Objects JetMETCorrections/JetCorrector TrackingTools/TransientTrack SimDataFormats/Track SimDataFormats/Vertex SimGeneral/HepPDTRecord RecoMET/METAlgorithms RecoEgamma/EgammaTools TrackingTools/IPTools root
PhysicsTools/PatAlgos_relbigobj+=PhysicsToolsPatAlgos_plugins
endif
ifeq ($(strip $(SimGeneral/MixingModule)),)
SimGeneralMixingModule := self/SimGeneral/MixingModule
SimGeneral/MixingModule := SimGeneralMixingModule
SimGeneralMixingModule_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimGeneralMixingModule_EX_USE := $(foreach d, self cmssw FWCore/PluginManager FWCore/ParameterSet,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimGeneralMixingModule_EX_LIB   := SimGeneralMixingModule
ALL_EXTERNAL_PRODS += SimGeneralMixingModule
SimGeneralMixingModule_CLASS := LIBRARY
SimGeneral/MixingModule_relbigobj+=SimGeneralMixingModule
endif
ifeq ($(strip $(SimG4Core/MagneticField)),)
SimG4CoreMagneticField := self/SimG4Core/MagneticField
SimG4Core/MagneticField := SimG4CoreMagneticField
SimG4CoreMagneticField_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CoreMagneticField_EX_USE := $(foreach d, self cmssw FWCore/PluginManager FWCore/ParameterSet boost geant4core expat,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimG4CoreMagneticField_EX_LIB   := SimG4CoreMagneticField
ALL_EXTERNAL_PRODS += SimG4CoreMagneticField
SimG4CoreMagneticField_CLASS := LIBRARY
SimG4Core/MagneticField_relbigobj+=SimG4CoreMagneticField
endif
ifeq ($(strip $(ValidationRecoEgammaPlugins)),)
ValidationRecoEgammaPlugins := self/src/Validation/RecoEgamma/plugins
ValidationRecoEgammaPlugins_LOC_USE := self cmssw DQMOffline/EGamma FWCore/Framework FWCore/ParameterSet DataFormats/JetReco DataFormats/VertexReco DataFormats/EgammaReco DataFormats/EgammaCandidates TrackingTools/TransientTrack TrackingTools/PatternTools TrackingTools/Records Geometry/CaloGeometry Geometry/CaloTopology RecoEcal/EgammaClusterAlgos Geometry/EcalAlgo DataFormats/Math CommonTools/Statistics CommonTools/UtilAlgos RecoEgamma/EgammaMCTools RecoEgamma/EgammaTools RecoEgamma/EgammaPhotonAlgos SimTracker/TrackAssociation SimTracker/Records SimTracker/TrackerHitAssociation SimDataFormats/GeneratorProducts SimDataFormats/TrackingHit SimDataFormats/Track SimDataFormats/Vertex TrackingTools/MaterialEffects DQMServices/Components DQMServices/Core clhep
Validation/RecoEgamma_relbigobj+=ValidationRecoEgammaPlugins
endif
ifeq ($(strip $(PhysicsToolsPatUtils_plugins)),)
PhysicsToolsPatUtils_plugins := self/src/PhysicsTools/PatUtils/plugins
PhysicsToolsPatUtils_plugins_LOC_USE := self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities CommonTools/Utils CondFormats/JetMETObjects DataFormats/Candidate DataFormats/JetReco DataFormats/METReco DataFormats/MuonReco DataFormats/ParticleFlowCandidate DataFormats/PatCandidates JetMETCorrections/Objects JetMETCorrections/JetCorrector JetMETCorrections/Type1MET RecoMET/METAlgorithms PhysicsTools/PatUtils PhysicsTools/UtilAlgos
PhysicsTools/PatUtils_relbigobj+=PhysicsToolsPatUtils_plugins
endif
ifeq ($(strip $(HiCentralityPlugins)),)
HiCentralityPlugins := self/src/RecoHI/HiCentralityAlgos/plugins
HiCentralityPlugins_LOC_USE := self cmssw RecoHI/HiCentralityAlgos
RecoHI/HiCentralityAlgos_relbigobj+=HiCentralityPlugins
endif
ifeq ($(strip $(DQMServicesComponentsPlugins)),)
DQMServicesComponentsPlugins := self/src/DQMServices/Components/plugins
DQMServicesComponentsPlugins_LOC_USE := self cmssw DQMServices/Core DQMServices/Components DataFormats/Histograms DataFormats/Provenance FWCore/Framework FWCore/MessageLogger FWCore/Utilities FWCore/Version DataFormats/Luminosity boost
DQMServices/Components_relbigobj+=DQMServicesComponentsPlugins
endif
ifeq ($(strip $(FireworksMuonsPlugins)),)
FireworksMuonsPlugins := self/src/Fireworks/Muons/plugins
FireworksMuonsPlugins_LOC_LIB   := Eve Geom RGL
FireworksMuonsPlugins_LOC_USE := self cmssw DataFormats/CSCDigi DataFormats/CSCRecHit DataFormats/DTDigi DataFormats/RPCDigi DataFormats/GEMRecHit DataFormats/GEMDigi DataFormats/DTRecHit DataFormats/MuonDetId DataFormats/MuonReco DataFormats/RPCRecHit DataFormats/TrackReco Fireworks/Calo Fireworks/Candidates Fireworks/Core Fireworks/Muons rootinteractive
Fireworks/Muons_relbigobj+=FireworksMuonsPlugins
endif
ifeq ($(strip $(PhysicsTools/JetCharge)),)
PhysicsToolsJetCharge := self/PhysicsTools/JetCharge
PhysicsTools/JetCharge := PhysicsToolsJetCharge
PhysicsToolsJetCharge_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
PhysicsToolsJetCharge_EX_USE := $(foreach d, self cmssw DataFormats/Common FWCore/ParameterSet clhep,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsJetCharge_EX_LIB   := PhysicsToolsJetCharge
ALL_EXTERNAL_PRODS += PhysicsToolsJetCharge
PhysicsToolsJetCharge_CLASS := LIBRARY
PhysicsTools/JetCharge_relbigobj+=PhysicsToolsJetCharge
endif
ifeq ($(strip $(FireworksFWInterfacePlugin)),)
FireworksFWInterfacePlugin := self/src/Fireworks/FWInterface/plugins
FireworksFWInterfacePlugin_LOC_LIB   := Geom Eve
FireworksFWInterfacePlugin_LOC_USE := self cmssw FWCore/PluginManager FWCore/Framework Fireworks/FWInterface CondFormats/DataRecord CondFormats/RunInfo SimDataFormats/Track SimDataFormats/TrackingHit SimDataFormats/CaloHit SimDataFormats/Vertex SimDataFormats/TrackingAnalysis SimGeneral/TrackingAnalysis rootcore
Fireworks/FWInterface_relbigobj+=FireworksFWInterfacePlugin
endif
ifeq ($(strip $(RecoEgamma/EgammaHLTProducers)),)
RecoEgammaEgammaHLTProducers := self/RecoEgamma/EgammaHLTProducers
RecoEgamma/EgammaHLTProducers := RecoEgammaEgammaHLTProducers
RecoEgammaEgammaHLTProducers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoEgammaEgammaHLTProducers_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/EgammaCandidates Geometry/CaloGeometry RecoEcal/EgammaClusterAlgos RecoEcal/EgammaCoreTools RecoEgamma/EgammaHLTAlgos RecoEgamma/EgammaElectronAlgos RecoEgamma/EgammaIsolationAlgos MagneticField/Engine MagneticField/Records DataFormats/DetId DataFormats/SiPixelCluster DataFormats/TrackerRecHit2D DataFormats/TrackingRecHit CondFormats/L1TObjects CondFormats/DataRecord Geometry/CommonDetUnit Geometry/TrackerGeometryBuilder DataFormats/FEDRawData Geometry/EcalMapping DataFormats/L1Trigger DataFormats/EcalRawData RecoEgamma/EgammaTools RecoTracker/TkTrackingRegions PhysicsTools/UtilAlgos FWCore/ServiceRegistry,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += RecoEgammaEgammaHLTProducers
RecoEgammaEgammaHLTProducers_CLASS := LIBRARY
RecoEgamma/EgammaHLTProducers_relbigobj+=RecoEgammaEgammaHLTProducers
endif
ifeq ($(strip $(PhysicsTools/PatUtils)),)
PhysicsToolsPatUtils := self/PhysicsTools/PatUtils
PhysicsTools/PatUtils := PhysicsToolsPatUtils
PhysicsToolsPatUtils_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
PhysicsToolsPatUtils_EX_USE := $(foreach d, self cmssw TrackingTools/Records CommonTools/Utils DataFormats/Math DataFormats/Candidate DataFormats/PatCandidates DataFormats/TrackReco DataFormats/MuonReco DataFormats/GsfTrackReco DataFormats/VertexReco TrackingTools/TransientTrack Utilities/General PhysicsTools/UtilAlgos root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsPatUtils_LCGDICTS  := x 
PhysicsToolsPatUtils_EX_LIB   := PhysicsToolsPatUtils
ALL_EXTERNAL_PRODS += PhysicsToolsPatUtils
PhysicsToolsPatUtils_CLASS := LIBRARY
PhysicsTools/PatUtils_relbigobj+=PhysicsToolsPatUtils
endif
ifeq ($(strip $(RecoHIHiTrackingPlugins)),)
RecoHIHiTrackingPlugins := self/src/RecoHI/HiTracking/plugins
RecoHIHiTrackingPlugins_LOC_USE := self cmssw RecoHI/HiTracking RecoPixelVertexing/PixelLowPtUtilities
RecoHI/HiTracking_relbigobj+=RecoHIHiTrackingPlugins
endif
ifeq ($(strip $(Fireworks/Candidates)),)
FireworksCandidates := self/Fireworks/Candidates
Fireworks/Candidates := FireworksCandidates
FireworksCandidates_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FireworksCandidates_EX_USE := $(foreach d, self cmssw DataFormats/Candidate DataFormats/PatCandidates boost_system Fireworks/Core Fireworks/Calo,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FireworksCandidates_EX_LIB   := FireworksCandidates
ALL_EXTERNAL_PRODS += FireworksCandidates
FireworksCandidates_CLASS := LIBRARY
Fireworks/Candidates_relbigobj+=FireworksCandidates
endif
ifeq ($(strip $(RecoEgamma/EgammaElectronAlgos)),)
RecoEgammaEgammaElectronAlgos := self/RecoEgamma/EgammaElectronAlgos
RecoEgamma/EgammaElectronAlgos := RecoEgammaEgammaElectronAlgos
RecoEgammaEgammaElectronAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoEgammaEgammaElectronAlgos_EX_USE := $(foreach d, self cmssw TrackingTools/MaterialEffects FWCore/Framework FWCore/ParameterSet clhep MagneticField/Engine DataFormats/DetId DataFormats/TrackerRecHit2D DataFormats/TrackingRecHit DataFormats/GsfTrackReco DataFormats/TrackReco DataFormats/TrackerCommon DataFormats/EgammaReco DataFormats/EgammaCandidates DataFormats/CaloRecHit Geometry/CommonDetUnit Geometry/TrackerGeometryBuilder Geometry/CaloGeometry RecoTracker/MeasurementDet RecoTracker/TkSeedGenerator RecoTracker/TkDetLayers TrackingTools/DetLayers TrackingTools/GsfTools TrackingTools/GsfTracking RecoTracker/TrackProducer DataFormats/HcalRecHit RecoCaloTools/Selectors RecoEcal/EgammaCoreTools RecoEgamma/EgammaTools RecoEgamma/EgammaIsolationAlgos RecoEgamma/ElectronIdentification TrackingTools/MeasurementDet RecoTracker/TkTrackingRegions CondFormats/EgammaObjects CondFormats/DataRecord,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoEgammaEgammaElectronAlgos_EX_LIB   := RecoEgammaEgammaElectronAlgos
ALL_EXTERNAL_PRODS += RecoEgammaEgammaElectronAlgos
RecoEgammaEgammaElectronAlgos_CLASS := LIBRARY
RecoEgamma/EgammaElectronAlgos_relbigobj+=RecoEgammaEgammaElectronAlgos
endif
ifeq ($(strip $(AnalysisAlgosSiStripClusterInfoProducerPlugins)),)
AnalysisAlgosSiStripClusterInfoProducerPlugins := self/src/AnalysisAlgos/SiStripClusterInfoProducer/plugins
AnalysisAlgosSiStripClusterInfoProducerPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/ParameterSet DataFormats/Common DataFormats/SiStripDigi DataFormats/SiStripCluster DataFormats/SiStripDetId CondFormats/SiStripObjects Geometry/CommonDetUnit Geometry/TrackerGeometryBuilder RecoLocalTracker/SiStripZeroSuppression CalibFormats/SiStripObjects CalibTracker/Records
AnalysisAlgos/SiStripClusterInfoProducer_relbigobj+=AnalysisAlgosSiStripClusterInfoProducerPlugins
endif
ifeq ($(strip $(Fireworks/FWInterface)),)
FireworksFWInterface := self/Fireworks/FWInterface
Fireworks/FWInterface := FireworksFWInterface
FireworksFWInterface_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FireworksFWInterface_EX_USE := $(foreach d, self cmssw FWCore/PluginManager FWCore/Framework DataFormats/Provenance DataFormats/TrackReco TrackingTools/TrajectoryState TrackingTools/PatternTools CondFormats/DataRecord CondFormats/RunInfo Fireworks/Core Fireworks/Geometry rootcore rootinteractive,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FireworksFWInterface_LCGDICTS  := x 
FireworksFWInterface_EX_LIB   := FireworksFWInterface
ALL_EXTERNAL_PRODS += FireworksFWInterface
FireworksFWInterface_CLASS := LIBRARY
Fireworks/FWInterface_relbigobj+=FireworksFWInterface
endif
ifeq ($(strip $(CalibrationIsoTrig)),)
CalibrationIsoTrig := self/src/Calibration/IsolatedParticles/plugins
CalibrationIsoTrig_LOC_USE := self cmssw clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
Calibration/IsolatedParticles_relbigobj+=CalibrationIsoTrig
endif
ifeq ($(strip $(CalibrationIsoTrackCalib)),)
CalibrationIsoTrackCalib := self/src/Calibration/IsolatedParticles/plugins
CalibrationIsoTrackCalib_LOC_USE := self cmssw clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
Calibration/IsolatedParticles_relbigobj+=CalibrationIsoTrackCalib
endif
ifeq ($(strip $(CalibrationIsoTrackCalibration)),)
CalibrationIsoTrackCalibration := self/src/Calibration/IsolatedParticles/plugins
CalibrationIsoTrackCalibration_LOC_USE := self cmssw clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
Calibration/IsolatedParticles_relbigobj+=CalibrationIsoTrackCalibration
endif
ifeq ($(strip $(CalibrationHcalRaddamMuon)),)
CalibrationHcalRaddamMuon := self/src/Calibration/IsolatedParticles/plugins
CalibrationHcalRaddamMuon_LOC_USE := self cmssw clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
Calibration/IsolatedParticles_relbigobj+=CalibrationHcalRaddamMuon
endif
ifeq ($(strip $(CalibrationIsolatedParticlesGeneratedJets)),)
CalibrationIsolatedParticlesGeneratedJets := self/src/Calibration/IsolatedParticles/plugins
CalibrationIsolatedParticlesGeneratedJets_LOC_USE := self cmssw clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
Calibration/IsolatedParticles_relbigobj+=CalibrationIsolatedParticlesGeneratedJets
endif
ifeq ($(strip $(CalibrationIsolatedTracksNxN)),)
CalibrationIsolatedTracksNxN := self/src/Calibration/IsolatedParticles/plugins
CalibrationIsolatedTracksNxN_LOC_USE := self cmssw clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
Calibration/IsolatedParticles_relbigobj+=CalibrationIsolatedTracksNxN
endif
ifeq ($(strip $(CalibrationElectronStudy)),)
CalibrationElectronStudy := self/src/Calibration/IsolatedParticles/plugins
CalibrationElectronStudy_LOC_USE := self cmssw clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
Calibration/IsolatedParticles_relbigobj+=CalibrationElectronStudy
endif
ifeq ($(strip $(CalibrationIsolatedTracksHcalScale)),)
CalibrationIsolatedTracksHcalScale := self/src/Calibration/IsolatedParticles/plugins
CalibrationIsolatedTracksHcalScale_LOC_USE := self cmssw clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
Calibration/IsolatedParticles_relbigobj+=CalibrationIsolatedTracksHcalScale
endif
ifeq ($(strip $(CalibrationIsolatedTracksCone)),)
CalibrationIsolatedTracksCone := self/src/Calibration/IsolatedParticles/plugins
CalibrationIsolatedTracksCone_LOC_USE := self cmssw clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
Calibration/IsolatedParticles_relbigobj+=CalibrationIsolatedTracksCone
endif
ifeq ($(strip $(CalibrationIsolatedGenParticles)),)
CalibrationIsolatedGenParticles := self/src/Calibration/IsolatedParticles/plugins
CalibrationIsolatedGenParticles_LOC_USE := self cmssw clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
Calibration/IsolatedParticles_relbigobj+=CalibrationIsolatedGenParticles
endif
ifeq ($(strip $(CalibrationStudyHLT)),)
CalibrationStudyHLT := self/src/Calibration/IsolatedParticles/plugins
CalibrationStudyHLT_LOC_USE := self cmssw clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
Calibration/IsolatedParticles_relbigobj+=CalibrationStudyHLT
endif
ifeq ($(strip $(RecoLuminosityLumiProducerfPoly)),)
RecoLuminosityLumiProducerfPoly := self/src/RecoLuminosity/LumiProducer/plugins
RecoLuminosityLumiProducerfPoly_LOC_USE := self cmssw FWCore/Framework RecoLuminosity/LumiProducer FWCore/PluginManager
RecoLuminosity/LumiProducer_relbigobj+=RecoLuminosityLumiProducerfPoly
endif
ifeq ($(strip $(CMSRunSummaryDummy2DB)),)
CMSRunSummaryDummy2DB := self/src/RecoLuminosity/LumiProducer/plugins
CMSRunSummaryDummy2DB_LOC_USE := self cmssw FWCore/Framework RecoLuminosity/LumiProducer FWCore/PluginManager
RecoLuminosity/LumiProducer_relbigobj+=CMSRunSummaryDummy2DB
endif
ifeq ($(strip $(TRGScalers2DB)),)
TRGScalers2DB := self/src/RecoLuminosity/LumiProducer/plugins
TRGScalers2DB_LOC_USE := self cmssw FWCore/Framework RecoLuminosity/LumiProducer FWCore/PluginManager
RecoLuminosity/LumiProducer_relbigobj+=TRGScalers2DB
endif
ifeq ($(strip $(ExpressLumiProducer)),)
ExpressLumiProducer := self/src/RecoLuminosity/LumiProducer/plugins
ExpressLumiProducer_LOC_USE := self cmssw FWCore/Framework RecoLuminosity/LumiProducer FWCore/PluginManager DataFormats/Provenance DataFormats/Luminosity
RecoLuminosity/LumiProducer_relbigobj+=ExpressLumiProducer
endif
ifeq ($(strip $(LumiDummy2DB)),)
LumiDummy2DB := self/src/RecoLuminosity/LumiProducer/plugins
LumiDummy2DB_LOC_USE := self cmssw FWCore/Framework RecoLuminosity/LumiProducer FWCore/PluginManager
RecoLuminosity/LumiProducer_relbigobj+=LumiDummy2DB
endif
ifeq ($(strip $(LumiProducer)),)
LumiProducer := self/src/RecoLuminosity/LumiProducer/plugins
LumiProducer_LOC_USE := self cmssw FWCore/Framework RecoLuminosity/LumiProducer FWCore/PluginManager DataFormats/Provenance DataFormats/Luminosity xerces-c
RecoLuminosity/LumiProducer_relbigobj+=LumiProducer
endif
ifeq ($(strip $(RecoLuminosityLumiCalculator)),)
RecoLuminosityLumiCalculator := self/src/RecoLuminosity/LumiProducer/plugins
RecoLuminosityLumiCalculator_LOC_USE := self cmssw FWCore/Framework FWCore/ParameterSet DataFormats/Luminosity HLTrigger/HLTcore
RecoLuminosity/LumiProducer_relbigobj+=RecoLuminosityLumiCalculator
endif
ifeq ($(strip $(DIPLumiProducer)),)
DIPLumiProducer := self/src/RecoLuminosity/LumiProducer/plugins
DIPLumiProducer_LOC_USE := self cmssw FWCore/Framework RecoLuminosity/LumiProducer FWCore/PluginManager xerces-c
RecoLuminosity/LumiProducer_relbigobj+=DIPLumiProducer
endif
ifeq ($(strip $(CMSRunSummary2DB)),)
CMSRunSummary2DB := self/src/RecoLuminosity/LumiProducer/plugins
CMSRunSummary2DB_LOC_USE := self cmssw FWCore/Framework RecoLuminosity/LumiProducer FWCore/PluginManager rootcore
RecoLuminosity/LumiProducer_relbigobj+=CMSRunSummary2DB
endif
ifeq ($(strip $(HLTV32DB)),)
HLTV32DB := self/src/RecoLuminosity/LumiProducer/plugins
HLTV32DB_LOC_USE := self cmssw FWCore/Framework RecoLuminosity/LumiProducer FWCore/PluginManager
RecoLuminosity/LumiProducer_relbigobj+=HLTV32DB
endif
ifeq ($(strip $(TRGDummy2DB)),)
TRGDummy2DB := self/src/RecoLuminosity/LumiProducer/plugins
TRGDummy2DB_LOC_USE := self cmssw FWCore/Framework RecoLuminosity/LumiProducer FWCore/PluginManager
RecoLuminosity/LumiProducer_relbigobj+=TRGDummy2DB
endif
ifeq ($(strip $(TRGWBM2DB)),)
TRGWBM2DB := self/src/RecoLuminosity/LumiProducer/plugins
TRGWBM2DB_LOC_USE := self cmssw FWCore/Framework RecoLuminosity/LumiProducer FWCore/PluginManager
RecoLuminosity/LumiProducer_relbigobj+=TRGWBM2DB
endif
ifeq ($(strip $(HLTDummy2DB)),)
HLTDummy2DB := self/src/RecoLuminosity/LumiProducer/plugins
HLTDummy2DB_LOC_USE := self cmssw FWCore/Framework RecoLuminosity/LumiProducer FWCore/PluginManager
RecoLuminosity/LumiProducer_relbigobj+=HLTDummy2DB
endif
ifeq ($(strip $(HLTConf2DB)),)
HLTConf2DB := self/src/RecoLuminosity/LumiProducer/plugins
HLTConf2DB_LOC_USE := self cmssw FWCore/Framework RecoLuminosity/LumiProducer FWCore/PluginManager
RecoLuminosity/LumiProducer_relbigobj+=HLTConf2DB
endif
ifeq ($(strip $(HLTConfDummy2DB)),)
HLTConfDummy2DB := self/src/RecoLuminosity/LumiProducer/plugins
HLTConfDummy2DB_LOC_USE := self cmssw FWCore/Framework RecoLuminosity/LumiProducer FWCore/PluginManager
RecoLuminosity/LumiProducer_relbigobj+=HLTConfDummy2DB
endif
ifeq ($(strip $(LumiCorrectionSource)),)
LumiCorrectionSource := self/src/RecoLuminosity/LumiProducer/plugins
LumiCorrectionSource_LOC_USE := self cmssw FWCore/Framework RecoLuminosity/LumiProducer FWCore/PluginManager xerces-c
RecoLuminosity/LumiProducer_relbigobj+=LumiCorrectionSource
endif
ifeq ($(strip $(LumiServicesPlugins)),)
LumiServicesPlugins := self/src/RecoLuminosity/LumiProducer/plugins
LumiServicesPlugins_LOC_USE := self cmssw FWCore/Framework RecoLuminosity/LumiProducer
RecoLuminosity/LumiProducer_relbigobj+=LumiServicesPlugins
endif
ifeq ($(strip $(Lumi2DB)),)
Lumi2DB := self/src/RecoLuminosity/LumiProducer/plugins
Lumi2DB_LOC_USE := self cmssw FWCore/Framework RecoLuminosity/LumiProducer FWCore/PluginManager rootcore
RecoLuminosity/LumiProducer_relbigobj+=Lumi2DB
endif
ifeq ($(strip $(EgammaAnalysisElectronToolsPlugins)),)
EgammaAnalysisElectronToolsPlugins := self/src/EgammaAnalysis/ElectronTools/plugins
EgammaAnalysisElectronToolsPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/PatCandidates DataFormats/Common DataFormats/VertexReco PhysicsTools/UtilAlgos FWCore/ServiceRegistry Geometry/CaloTopology Geometry/Records EgammaAnalysis/ElectronTools RecoEcal/EgammaCoreTools PhysicsTools/SelectorUtils
EgammaAnalysis/ElectronTools_relbigobj+=EgammaAnalysisElectronToolsPlugins
endif
ifeq ($(strip $(FastSimulation/EgammaElectronAlgos)),)
FastSimulationEgammaElectronAlgos := self/FastSimulation/EgammaElectronAlgos
FastSimulation/EgammaElectronAlgos := FastSimulationEgammaElectronAlgos
FastSimulationEgammaElectronAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FastSimulationEgammaElectronAlgos_EX_USE := $(foreach d, self cmssw DataFormats/BeamSpot DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/Math DataFormats/SiPixelDetId DataFormats/TrackerRecHit2D DataFormats/TrajectorySeed FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FastSimulation/ParticlePropagator FastSimulation/TrackerSetup FastSimulation/Tracking Geometry/CaloGeometry Geometry/Records Geometry/TrackerGeometryBuilder MagneticField/Records RecoEgamma/EgammaIsolationAlgos RecoTracker/Record RecoTracker/TkDetLayers RecoTracker/TkSeedGenerator SimDataFormats/Track TrackingTools/KalmanUpdators TrackingTools/MaterialEffects TrackingTools/TrajectoryState TrackingTools/TransientTrackingRecHit,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += FastSimulationEgammaElectronAlgos
FastSimulationEgammaElectronAlgos_CLASS := LIBRARY
FastSimulation/EgammaElectronAlgos_relbigobj+=FastSimulationEgammaElectronAlgos
endif
ifeq ($(strip $(IOMC/EventVertexGenerators)),)
IOMCEventVertexGenerators := self/IOMC/EventVertexGenerators
IOMC/EventVertexGenerators := IOMCEventVertexGenerators
IOMCEventVertexGenerators_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
IOMCEventVertexGenerators_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Utilities SimDataFormats/GeneratorProducts boost clhep hepmc CondFormats/DataRecord CondFormats/BeamSpotObjects CondCore/DBOutputService,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += IOMCEventVertexGenerators
IOMCEventVertexGenerators_CLASS := LIBRARY
IOMC/EventVertexGenerators_relbigobj+=IOMCEventVertexGenerators
endif
ifeq ($(strip $(RecoBTag/SecondaryVertex)),)
RecoBTagSecondaryVertex := self/RecoBTag/SecondaryVertex
RecoBTag/SecondaryVertex := RecoBTagSecondaryVertex
RecoBTagSecondaryVertex_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoBTagSecondaryVertex_EX_USE := $(foreach d, self cmssw FWCore/ParameterSet FWCore/Utilities CommonTools/Utils DataFormats/Math DataFormats/TrackReco DataFormats/VertexReco DataFormats/BTauReco DataFormats/PatCandidates RecoVertex/VertexTools RecoBTau/JetTagComputer rootmath fastjet fastjet-contrib,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoBTagSecondaryVertex_EX_LIB   := RecoBTagSecondaryVertex
ALL_EXTERNAL_PRODS += RecoBTagSecondaryVertex
RecoBTagSecondaryVertex_CLASS := LIBRARY
RecoBTag/SecondaryVertex_relbigobj+=RecoBTagSecondaryVertex
endif
ifeq ($(strip $(GammaConversionTrackingForConversionPlugins)),)
GammaConversionTrackingForConversionPlugins := self/src/RecoTracker/ConversionSeedGenerators/plugins
GammaConversionTrackingForConversionPlugins_LOC_USE := self cmssw root FWCore/Framework FWCore/PluginManager DataFormats/Common FWCore/ParameterSet Geometry/Records Geometry/CommonDetUnit DataFormats/TrajectorySeed DataFormats/TrackerRecHit2D Geometry/CommonTopologies Geometry/TrackerGeometryBuilder DataFormats/DetId DataFormats/SiStripDetId TrackingTools/PatternTools MagneticField/Records MagneticField/Engine TrackingTools/KalmanUpdators TrackingTools/Records RecoLocalTracker/ClusterParameterEstimator RecoTracker/TransientTrackingRecHit RecoTracker/TkSeedGenerator RecoTracker/TkSeedingLayers TrackingTools/TransientTrackingRecHit RecoTracker/TkMSParametrization TrackingTools/DetLayers RecoTracker/TkHitPairs RecoTracker/TkTrackingRegions
RecoTracker/ConversionSeedGenerators_relbigobj+=GammaConversionTrackingForConversionPlugins
endif
ifeq ($(strip $(RecoBTagSoftLeptonPlugins)),)
RecoBTagSoftLeptonPlugins := self/src/RecoBTag/SoftLepton/plugins
RecoBTagSoftLeptonPlugins_LOC_USE := self cmssw DataFormats/BTauReco DataFormats/BeamSpot DataFormats/Common DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/GeometryVector DataFormats/GsfTrackReco DataFormats/HcalRecHit DataFormats/JetReco DataFormats/Math DataFormats/MuonReco DataFormats/Provenance DataFormats/TrackReco DataFormats/VertexReco DataFormats/PatCandidates FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities RecoBTag/SoftLepton RecoBTau/JetTagComputer RecoCaloTools/Selectors TrackingTools/IPTools TrackingTools/Records TrackingTools/TrackAssociator TrackingTools/TransientTrack RecoEcal/EgammaCoreTools RecoEgamma/EgammaTools boost_regex rootmath
RecoBTag/SoftLepton_relbigobj+=RecoBTagSoftLeptonPlugins
endif
ifeq ($(strip $(Validation/RecoMuon)),)
ValidationRecoMuon := self/Validation/RecoMuon
Validation/RecoMuon := ValidationRecoMuon
ValidationRecoMuon_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ValidationRecoMuon_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/Utilities FWCore/ParameterSet RecoMuon/TrackingTools DataFormats/MuonReco TrackingTools/TransientTrack SimDataFormats/Track CommonTools/Statistics RecoVertex/VertexTools RecoVertex/KalmanVertexFit PhysicsTools/UtilAlgos SimTracker/TrackAssociation SimMuon/MCTruth SimTracker/Records clhep root DQMServices/Core,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += ValidationRecoMuon
ValidationRecoMuon_CLASS := LIBRARY
Validation/RecoMuon_relbigobj+=ValidationRecoMuon
endif
ifeq ($(strip $(GeneratorInterfaceExhumeFilter)),)
GeneratorInterfaceExhumeFilter := self/src/GeneratorInterface/ExhumeInterface/plugins
GeneratorInterfaceExhumeFilter_LOC_USE := self cmssw GeneratorInterface/ExhumeInterface pydata GeneratorInterface/Core GeneratorInterface/ExternalDecays
GeneratorInterface/ExhumeInterface_relbigobj+=GeneratorInterfaceExhumeFilter
endif
ifeq ($(strip $(RecoPixelVertexingPixelLowPtUtilitiesPlugins)),)
RecoPixelVertexingPixelLowPtUtilitiesPlugins := self/src/RecoPixelVertexing/PixelLowPtUtilities/plugins
RecoPixelVertexingPixelLowPtUtilitiesPlugins_LOC_USE := self cmssw DataFormats/VertexReco RecoPixelVertexing/PixelLowPtUtilities FWCore/Concurrency
RecoPixelVertexing/PixelLowPtUtilities_relbigobj+=RecoPixelVertexingPixelLowPtUtilitiesPlugins
endif
ifeq ($(strip $(L1Trigger/RegionalCaloTrigger)),)
L1TriggerRegionalCaloTrigger := self/L1Trigger/RegionalCaloTrigger
L1Trigger/RegionalCaloTrigger := L1TriggerRegionalCaloTrigger
L1TriggerRegionalCaloTrigger_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
L1TriggerRegionalCaloTrigger_EX_USE := $(foreach d, self cmssw boost FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities DataFormats/L1CaloTrigger DataFormats/EcalDigi DataFormats/EcalDetId DataFormats/HcalDigi DataFormats/HcalDetId CalibFormats/CaloTPG CalibCalorimetry/EcalTPGTools CondFormats/L1TObjects CondFormats/DataRecord clhep DataFormats/JetReco DataFormats/EgammaCandidates DataFormats/HepMCCandidate CalibFormats/HcalObjects CondFormats/RunInfo root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerRegionalCaloTrigger_EX_LIB   := L1TriggerRegionalCaloTrigger
ALL_EXTERNAL_PRODS += L1TriggerRegionalCaloTrigger
L1TriggerRegionalCaloTrigger_CLASS := LIBRARY
L1Trigger/RegionalCaloTrigger_relbigobj+=L1TriggerRegionalCaloTrigger
endif
ifeq ($(strip $(RecoJets/JetAssociationProducers)),)
RecoJetsJetAssociationProducers := self/RecoJets/JetAssociationProducers
RecoJets/JetAssociationProducers := RecoJetsJetAssociationProducers
RecoJetsJetAssociationProducers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoJetsJetAssociationProducers_EX_USE := $(foreach d, self cmssw boost RecoJets/JetAssociationAlgorithms FWCore/Framework DataFormats/JetReco DataFormats/TrackReco DataFormats/Math MagneticField/Engine MagneticField/Records TrackingTools/TransientTrack TrackingTools/Records TrackingTools/TrackAssociator,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += RecoJetsJetAssociationProducers
RecoJetsJetAssociationProducers_CLASS := LIBRARY
RecoJets/JetAssociationProducers_relbigobj+=RecoJetsJetAssociationProducers
endif
ifeq ($(strip $(RecoMuonGlobalTrackingToolsPlugins)),)
RecoMuonGlobalTrackingToolsPlugins := self/src/RecoMuon/GlobalTrackingTools/plugins
RecoMuonGlobalTrackingToolsPlugins_LOC_USE := self cmssw DataFormats/Common DataFormats/MuonDetId DataFormats/MuonReco DataFormats/RecoCandidate DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CommonDetUnit Geometry/Records PhysicsTools/IsolationAlgos RecoMuon/TrackingTools RecoMuon/GlobalTrackingTools TrackingTools/Records TrackingTools/TrackAssociator TrackingTools/TransientTrackingRecHit boost_regex
RecoMuon/GlobalTrackingTools_relbigobj+=RecoMuonGlobalTrackingToolsPlugins
endif
ifeq ($(strip $(GeneratorInterfaceHiGenCommonPlugins)),)
GeneratorInterfaceHiGenCommonPlugins := self/src/GeneratorInterface/HiGenCommon/plugins
GeneratorInterfaceHiGenCommonPlugins_LOC_USE := self cmssw GeneratorInterface/HiGenCommon FWCore/Framework FWCore/PluginManager FWCore/ServiceRegistry FWCore/Utilities SimGeneral/HepPDTRecord heppdt clhep
GeneratorInterface/HiGenCommon_relbigobj+=GeneratorInterfaceHiGenCommonPlugins
endif
ifeq ($(strip $(GeneratorInterface/Pythia6Interface)),)
GeneratorInterfacePythia6Interface := self/GeneratorInterface/Pythia6Interface
GeneratorInterface/Pythia6Interface := GeneratorInterfacePythia6Interface
GeneratorInterfacePythia6Interface_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
GeneratorInterfacePythia6Interface_EX_USE := $(foreach d, self cmssw boost FWCore/Framework FWCore/ServiceRegistry SimDataFormats/GeneratorProducts GeneratorInterface/Core clhep pythia6 f77compiler,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
GeneratorInterfacePythia6Interface_EX_LIB   := GeneratorInterfacePythia6Interface
ALL_EXTERNAL_PRODS += GeneratorInterfacePythia6Interface
GeneratorInterfacePythia6Interface_CLASS := LIBRARY
GeneratorInterface/Pythia6Interface_relbigobj+=GeneratorInterfacePythia6Interface
endif
ifeq ($(strip $(AlignmentMonitorMuonSystemMap1D)),)
AlignmentMonitorMuonSystemMap1D := self/src/Alignment/CommonAlignmentMonitor/plugins
AlignmentMonitorMuonSystemMap1D_LOC_USE := self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Alignment/MuonAlignmentAlgorithms Alignment/CommonAlignmentMonitor Geometry/CommonDetUnit Geometry/Records
Alignment/CommonAlignmentMonitor_relbigobj+=AlignmentMonitorMuonSystemMap1D
endif
ifeq ($(strip $(AlignmentStats)),)
AlignmentStats := self/src/Alignment/CommonAlignmentMonitor/plugins
AlignmentStats_LOC_USE := self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities Geometry/TrackerGeometryBuilder Geometry/Records Alignment/CommonAlignment Alignment/TrackerAlignment DataFormats/Common DataFormats/SiPixelDetId DataFormats/SiStripDetId DataFormats/Alignment DataFormats/TrackReco DataFormats/TrackerRecHit2D rootcore
Alignment/CommonAlignmentMonitor_relbigobj+=AlignmentStats
endif
ifeq ($(strip $(AlignmentMonitorSegmentDifferences)),)
AlignmentMonitorSegmentDifferences := self/src/Alignment/CommonAlignmentMonitor/plugins
AlignmentMonitorSegmentDifferences_LOC_USE := self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Alignment/MuonAlignmentAlgorithms Alignment/CommonAlignmentMonitor Geometry/CommonDetUnit Geometry/Records
Alignment/CommonAlignmentMonitor_relbigobj+=AlignmentMonitorSegmentDifferences
endif
ifeq ($(strip $(AlignmentMonitorSurvey)),)
AlignmentMonitorSurvey := self/src/Alignment/CommonAlignmentMonitor/plugins
AlignmentMonitorSurvey_LOC_USE := self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Alignment/CommonAlignment Alignment/CommonAlignmentMonitor
Alignment/CommonAlignmentMonitor_relbigobj+=AlignmentMonitorSurvey
endif
ifeq ($(strip $(AlignmentMonitorMuonVsCurvature)),)
AlignmentMonitorMuonVsCurvature := self/src/Alignment/CommonAlignmentMonitor/plugins
AlignmentMonitorMuonVsCurvature_LOC_USE := self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Alignment/MuonAlignmentAlgorithms Alignment/CommonAlignmentMonitor Geometry/CommonDetUnit Geometry/Records MagneticField/Engine MagneticField/Records
Alignment/CommonAlignmentMonitor_relbigobj+=AlignmentMonitorMuonVsCurvature
endif
ifeq ($(strip $(AlignmentMonitorAsAnalyzer)),)
AlignmentMonitorAsAnalyzer := self/src/Alignment/CommonAlignmentMonitor/plugins
AlignmentMonitorAsAnalyzer_LOC_USE := self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Alignment/CommonAlignment Alignment/CommonAlignmentAlgorithm Alignment/CommonAlignmentMonitor Alignment/MuonAlignment CondFormats/AlignmentRecord CondFormats/Alignment
Alignment/CommonAlignmentMonitor_relbigobj+=AlignmentMonitorAsAnalyzer
endif
ifeq ($(strip $(TrackerToMuonPropagator)),)
TrackerToMuonPropagator := self/src/Alignment/CommonAlignmentMonitor/plugins
TrackerToMuonPropagator_LOC_USE := self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager TrackingTools/PatternTools TrackingTools/GeomPropagators TrackingTools/TrajectoryState TrackingTools/TrackRefitter TrackingTools/Records DataFormats/TrackReco DataFormats/MuonDetId DataFormats/CSCRecHit DataFormats/DTRecHit DataFormats/TrackingRecHit Geometry/TrackerGeometryBuilder Geometry/DTGeometry Geometry/CSCGeometry Geometry/CommonDetUnit Geometry/Records MagneticField/Engine MagneticField/Records RecoMuon/TransientTrackingRecHit
Alignment/CommonAlignmentMonitor_relbigobj+=TrackerToMuonPropagator
endif
ifeq ($(strip $(AlignmentMonitorMuonResiduals)),)
AlignmentMonitorMuonResiduals := self/src/Alignment/CommonAlignmentMonitor/plugins
AlignmentMonitorMuonResiduals_LOC_USE := self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Alignment/CommonAlignmentMonitor TrackingTools/TrackFitters Alignment/MuonAlignment DataFormats/MuonDetId rootcore roothistmatrix
Alignment/CommonAlignmentMonitor_relbigobj+=AlignmentMonitorMuonResiduals
endif
ifeq ($(strip $(AlignmentMonitorTemplate)),)
AlignmentMonitorTemplate := self/src/Alignment/CommonAlignmentMonitor/plugins
AlignmentMonitorTemplate_LOC_USE := self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Alignment/CommonAlignmentMonitor TrackingTools/TrackFitters rootcore roothistmatrix
Alignment/CommonAlignmentMonitor_relbigobj+=AlignmentMonitorTemplate
endif
ifeq ($(strip $(AlignmentMonitorGeneric)),)
AlignmentMonitorGeneric := self/src/Alignment/CommonAlignmentMonitor/plugins
AlignmentMonitorGeneric_LOC_USE := self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Alignment/CommonAlignment Alignment/CommonAlignmentMonitor TrackingTools/TrackFitters DataFormats/GeometrySurface rootcore roothistmatrix
Alignment/CommonAlignmentMonitor_relbigobj+=AlignmentMonitorGeneric
endif
ifeq ($(strip $(EventFilterUtilitiesPlugins)),)
EventFilterUtilitiesPlugins := self/src/EventFilter/Utilities/plugins
EventFilterUtilitiesPlugins_LOC_USE := self cmssw FWCore/MessageLogger FWCore/ServiceRegistry FWCore/Framework FWCore/Sources FWCore/Utilities IOPool/Streamer EventFilter/Utilities DataFormats/FEDRawData root boost clhep
EventFilter/Utilities_relbigobj+=EventFilterUtilitiesPlugins
endif
ifeq ($(strip $(RecoJets/JetAnalyzers)),)
RecoJetsJetAnalyzers := self/RecoJets/JetAnalyzers
RecoJets/JetAnalyzers := RecoJetsJetAnalyzers
RecoJetsJetAnalyzers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoJetsJetAnalyzers_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet root DataFormats/Candidate Geometry/CaloGeometry Geometry/Records DataFormats/JetReco DataFormats/HepMCCandidate DataFormats/CaloTowers DataFormats/HcalRecHit DataFormats/HcalDigi DataFormats/HcalDetId DataFormats/FEDRawData DataFormats/StdDictionaries DataFormats/WrappedStdDictionaries TBDataFormats/HcalTBObjects SimDataFormats/GeneratorProducts JetMETCorrections/Objects JetMETCorrections/MCJet CommonTools/UtilAlgos FWCore/ServiceRegistry FWCore/Utilities PhysicsTools/PatUtils PhysicsTools/PatAlgos,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += RecoJetsJetAnalyzers
RecoJetsJetAnalyzers_CLASS := LIBRARY
RecoJets/JetAnalyzers_relbigobj+=RecoJetsJetAnalyzers
endif
ifeq ($(strip $(GeneratorInterfacePythia8Guns)),)
GeneratorInterfacePythia8Guns := self/src/GeneratorInterface/Pythia8Interface/plugins
GeneratorInterfacePythia8Guns_LOC_USE := self cmssw GeneratorInterface/Pythia8Interface GeneratorInterface/ExternalDecays
GeneratorInterface/Pythia8Interface_relbigobj+=GeneratorInterfacePythia8Guns
endif
ifeq ($(strip $(GeneratorInterfacePythia8Filters)),)
GeneratorInterfacePythia8Filters := self/src/GeneratorInterface/Pythia8Interface/plugins
GeneratorInterfacePythia8Filters_LOC_USE := self cmssw GeneratorInterface/Pythia8Interface GeneratorInterface/PartonShowerVeto GeneratorInterface/ExternalDecays
GeneratorInterface/Pythia8Interface_relbigobj+=GeneratorInterfacePythia8Filters
endif
ifeq ($(strip $(GeneratorInterface/PyquenInterface)),)
GeneratorInterfacePyquenInterface := self/GeneratorInterface/PyquenInterface
GeneratorInterface/PyquenInterface := GeneratorInterfacePyquenInterface
GeneratorInterfacePyquenInterface_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
GeneratorInterfacePyquenInterface_EX_USE := $(foreach d, self cmssw boost FWCore/Concurrency FWCore/Framework GeneratorInterface/Core GeneratorInterface/HiGenCommon SimDataFormats/GeneratorProducts clhep f77compiler GeneratorInterface/Pythia6Interface GeneratorInterface/ExternalDecays,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
GeneratorInterfacePyquenInterface_EX_LIB   := GeneratorInterfacePyquenInterface
ALL_EXTERNAL_PRODS += GeneratorInterfacePyquenInterface
GeneratorInterfacePyquenInterface_CLASS := LIBRARY
GeneratorInterface/PyquenInterface_relbigobj+=GeneratorInterfacePyquenInterface
endif
ifeq ($(strip $(RecoTrackerDeDxPlugins)),)
RecoTrackerDeDxPlugins := self/src/RecoTracker/DeDx/plugins
RecoTrackerDeDxPlugins_LOC_USE := self cmssw RecoTracker/DeDx
RecoTracker/DeDx_relbigobj+=RecoTrackerDeDxPlugins
endif
ifeq ($(strip $(Validation/EcalHits)),)
ValidationEcalHits := self/Validation/EcalHits
Validation/EcalHits := ValidationEcalHits
ValidationEcalHits_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ValidationEcalHits_EX_USE := $(foreach d, self cmssw DataFormats/Common root geant4core boost FWCore/ParameterSet SimG4Core/Watcher DataFormats/EcalDetId SimDataFormats/GeneratorProducts SimDataFormats/ValidationFormats DQMServices/Core rootmath DataFormats/Math,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += ValidationEcalHits
ValidationEcalHits_CLASS := LIBRARY
Validation/EcalHits_relbigobj+=ValidationEcalHits
endif
ifeq ($(strip $(RecoParticleFlowPFTrackingPlugins)),)
RecoParticleFlowPFTrackingPlugins := self/src/RecoParticleFlow/PFTracking/plugins
RecoParticleFlowPFTrackingPlugins_LOC_USE := self cmssw CommonTools/UtilAlgos DataFormats/Common DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/GsfTrackReco DataFormats/ParticleFlowReco DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/TrajectorySeed DataFormats/DTRecHit DataFormats/CSCRecHit FWCore/Framework FWCore/MessageLogger FWCore/Utilities MagneticField/Engine MagneticField/Records RecoEgamma/EgammaTools RecoParticleFlow/PFTracking RecoTracker/TkSeedGenerator TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrackFitters roottmva
RecoParticleFlow/PFTracking_relbigobj+=RecoParticleFlowPFTrackingPlugins
endif
ifeq ($(strip $(L1TriggerL1TGlobalPlugins)),)
L1TriggerL1TGlobalPlugins := self/src/L1Trigger/L1TGlobal/plugins
L1TriggerL1TGlobalPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/L1Trigger CondFormats/L1TObjects CondFormats/DataRecord CondTools/L1Trigger xerces-c L1TriggerConfig/L1GtConfigProducers L1Trigger/L1TGlobal L1Trigger/GlobalTrigger
L1Trigger/L1TGlobal_relbigobj+=L1TriggerL1TGlobalPlugins
endif
ifeq ($(strip $(JetMETCorrections/TauJet)),)
JetMETCorrectionsTauJet := self/JetMETCorrections/TauJet
JetMETCorrections/TauJet := JetMETCorrectionsTauJet
JetMETCorrectionsTauJet_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
JetMETCorrectionsTauJet_EX_USE := $(foreach d, self cmssw clhep DataFormats/Common FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/JetReco DataFormats/TauReco JetMETCorrections/Objects TrackingTools/TransientTrack Geometry/CaloGeometry DataFormats/BTauReco RecoTauTag/TauTagTools TrackingTools/TrackAssociator RecoTauTag/RecoTau,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
JetMETCorrectionsTauJet_EX_LIB   := JetMETCorrectionsTauJet
ALL_EXTERNAL_PRODS += JetMETCorrectionsTauJet
JetMETCorrectionsTauJet_CLASS := LIBRARY
JetMETCorrections/TauJet_relbigobj+=JetMETCorrectionsTauJet
endif
ifeq ($(strip $(Alignment/LaserAlignment)),)
AlignmentLaserAlignment := self/Alignment/LaserAlignment
Alignment/LaserAlignment := AlignmentLaserAlignment
AlignmentLaserAlignment_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
AlignmentLaserAlignment_EX_USE := $(foreach d, self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities DataFormats/GeometrySurface clhepheader rootcore rootminuit,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
AlignmentLaserAlignment_LCGDICTS  := x 
AlignmentLaserAlignment_ROOTDICTS  := y 
AlignmentLaserAlignment_EX_LIB   := AlignmentLaserAlignment
ALL_EXTERNAL_PRODS += AlignmentLaserAlignment
AlignmentLaserAlignment_CLASS := LIBRARY
Alignment/LaserAlignment_relbigobj+=AlignmentLaserAlignment
endif
ifeq ($(strip $(DQMTrackerCommonPlugins)),)
DQMTrackerCommonPlugins := self/src/DQM/TrackerCommon/plugins
DQMTrackerCommonPlugins_LOC_USE := self cmssw DataFormats/Scalers FWCore/Framework
DQM/TrackerCommon_relbigobj+=DQMTrackerCommonPlugins
endif
ifeq ($(strip $(TrackHistoryPlugins)),)
TrackHistoryPlugins := self/src/SimTracker/TrackHistory/plugins
TrackHistoryPlugins_LOC_USE := self cmssw root TrackingTools/IPTools SimTracker/TrackHistory DataFormats/BTauReco RecoVertex/PrimaryVertexProducer CommonTools/UtilAlgos CommonTools/Utils
SimTracker/TrackHistory_relbigobj+=TrackHistoryPlugins
endif
ifeq ($(strip $(SUSYBSMAnalysis/HSCP)),)
SUSYBSMAnalysisHSCP := self/SUSYBSMAnalysis/HSCP
SUSYBSMAnalysis/HSCP := SUSYBSMAnalysisHSCP
SUSYBSMAnalysisHSCP_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SUSYBSMAnalysisHSCP_EX_USE := $(foreach d, self cmssw AnalysisDataFormats/SUSYBSMObjects CommonTools/UtilAlgos DataFormats/Candidate DataFormats/Common DataFormats/DTRecHit DataFormats/EcalRecHit DataFormats/HLTReco DataFormats/JetReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/METReco DataFormats/MuonReco DataFormats/RPCRecHit DataFormats/RecoCandidate DataFormats/TrackReco FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/ServiceRegistry Geometry/CSCGeometry Geometry/CaloTopology Geometry/DTGeometry Geometry/EcalMapping Geometry/RPCGeometry Geometry/Records PhysicsTools/UtilAlgos RecoLocalCalo/EcalRecAlgos RecoMuon/GlobalTrackFinder RecoMuon/TrackingTools RecoTracker/DeDx SimDataFormats/GeneratorProducts SimDataFormats/Track SimDataFormats/TrackingHit SimDataFormats/Vertex SimGeneral/HepPDTRecord TrackingTools/TrackAssociator TrackingTools/TransientTrack hepmc root rootcore rootgraphics,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SUSYBSMAnalysisHSCP_EX_LIB   := SUSYBSMAnalysisHSCP
ALL_EXTERNAL_PRODS += SUSYBSMAnalysisHSCP
SUSYBSMAnalysisHSCP_CLASS := LIBRARY
SUSYBSMAnalysis/HSCP_relbigobj+=SUSYBSMAnalysisHSCP
endif
ifeq ($(strip $(TopQuarkAnalysis/TopKinFitter)),)
TopQuarkAnalysisTopKinFitter := self/TopQuarkAnalysis/TopKinFitter
TopQuarkAnalysis/TopKinFitter := TopQuarkAnalysisTopKinFitter
TopQuarkAnalysisTopKinFitter_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
TopQuarkAnalysisTopKinFitter_EX_USE := $(foreach d, self cmssw CommonTools/Utils FWCore/ParameterSet PhysicsTools/KinFitter AnalysisDataFormats/TopObjects,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
TopQuarkAnalysisTopKinFitter_EX_LIB   := TopQuarkAnalysisTopKinFitter
ALL_EXTERNAL_PRODS += TopQuarkAnalysisTopKinFitter
TopQuarkAnalysisTopKinFitter_CLASS := LIBRARY
TopQuarkAnalysis/TopKinFitter_relbigobj+=TopQuarkAnalysisTopKinFitter
endif
ifeq ($(strip $(RecoMuon/TrackerSeedGenerator)),)
RecoMuonTrackerSeedGenerator := self/RecoMuon/TrackerSeedGenerator
RecoMuon/TrackerSeedGenerator := RecoMuonTrackerSeedGenerator
RecoMuonTrackerSeedGenerator_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoMuonTrackerSeedGenerator_EX_USE := $(foreach d, self cmssw DataFormats/BeamSpot DataFormats/Common DataFormats/GeometryCommonDetAlgo DataFormats/GeometryVector DataFormats/L1GlobalMuonTrigger DataFormats/TrackReco DataFormats/TrackerRecHit2D DataFormats/TrackingRecHit DataFormats/TrajectorySeed FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager MagneticField/Engine MagneticField/Records RecoPixelVertexing/PixelTrackFitting RecoTracker/TkMSParametrization RecoTracker/TkSeedingLayers RecoTracker/TkTrackingRegions RecoTracker/TransientTrackingRecHit TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrajectoryState TrackingTools/TransientTrackingRecHit,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoMuonTrackerSeedGenerator_EX_LIB   := RecoMuonTrackerSeedGenerator
ALL_EXTERNAL_PRODS += RecoMuonTrackerSeedGenerator
RecoMuonTrackerSeedGenerator_CLASS := LIBRARY
RecoMuon/TrackerSeedGenerator_relbigobj+=RecoMuonTrackerSeedGenerator
endif
ifeq ($(strip $(SimTracker/TrackHistory)),)
SimTrackerTrackHistory := self/SimTracker/TrackHistory
SimTracker/TrackHistory := SimTrackerTrackHistory
SimTrackerTrackHistory_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimTrackerTrackHistory_EX_USE := $(foreach d, self cmssw clhep boost root DataFormats/Math DataFormats/VertexReco DataFormats/JetReco SimTracker/VertexAssociation FWCore/Framework FWCore/ParameterSet FWCore/Utilities MagneticField/Records MagneticField/Engine SimDataFormats/TrackingAnalysis SimGeneral/HepPDTRecord SimTracker/Records SimTracker/TrackAssociation SimTracker/TrackerHitAssociation TrackingTools/TransientTrack DataFormats/TrackerCommon,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimTrackerTrackHistory_LCGDICTS  := x 
SimTrackerTrackHistory_EX_LIB   := SimTrackerTrackHistory
ALL_EXTERNAL_PRODS += SimTrackerTrackHistory
SimTrackerTrackHistory_CLASS := LIBRARY
SimTracker/TrackHistory_relbigobj+=SimTrackerTrackHistory
endif
ifeq ($(strip $(EventFilter/SiStripRawToDigi)),)
EventFilterSiStripRawToDigi := self/EventFilter/SiStripRawToDigi
EventFilter/SiStripRawToDigi := EventFilterSiStripRawToDigi
EventFilterSiStripRawToDigi_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
EventFilterSiStripRawToDigi_EX_USE := $(foreach d, self cmssw CondFormats/DataRecord CondFormats/SiStripObjects DataFormats/Common DataFormats/DetId DataFormats/FEDRawData DataFormats/SiStripDigi DataFormats/SiStripCluster DataFormats/SiStripCommon FWCore/Framework FWCore/MessageLogger FWCore/Utilities boost,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
EventFilterSiStripRawToDigi_EX_LIB   := EventFilterSiStripRawToDigi
ALL_EXTERNAL_PRODS += EventFilterSiStripRawToDigi
EventFilterSiStripRawToDigi_CLASS := LIBRARY
EventFilter/SiStripRawToDigi_relbigobj+=EventFilterSiStripRawToDigi
endif
ifeq ($(strip $(RecoJets/FFTJetProducers)),)
RecoJetsFFTJetProducers := self/RecoJets/FFTJetProducers
RecoJets/FFTJetProducers := RecoJetsFFTJetProducers
RecoJetsFFTJetProducers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoJetsFFTJetProducers_EX_USE := $(foreach d, self cmssw FWCore/Framework RecoJets/FFTJetAlgorithms RecoJets/JetProducers,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoJetsFFTJetProducers_EX_LIB   := RecoJetsFFTJetProducers
ALL_EXTERNAL_PRODS += RecoJetsFFTJetProducers
RecoJetsFFTJetProducers_CLASS := LIBRARY
RecoJets/FFTJetProducers_relbigobj+=RecoJetsFFTJetProducers
endif
ifeq ($(strip $(DQM/Physics)),)
DQMPhysics := self/DQM/Physics
DQM/Physics := DQMPhysics
DQMPhysics_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMPhysics_EX_USE := $(foreach d, self cmssw DQMServices/Core FWCore/Framework DataFormats/MuonReco DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/BTauReco DataFormats/TauReco DataFormats/JetReco DataFormats/METReco DataFormats/VertexReco DataFormats/TrackerRecHit2D DataFormats/HeavyIonEvent HLTrigger/HLTcore Geometry/Records Geometry/TrackerGeometryBuilder JetMETCorrections/Objects RecoEcal/EgammaCoreTools DataFormats/EcalRecHit CondFormats/DataRecord CondFormats/EcalObjects RecoJets/JetProducers RecoJets/JetAlgorithms,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMPhysics
DQMPhysics_CLASS := LIBRARY
DQM/Physics_relbigobj+=DQMPhysics
endif
ifeq ($(strip $(GeneratorInterface/Hydjet2Interface)),)
GeneratorInterfaceHydjet2Interface := self/GeneratorInterface/Hydjet2Interface
GeneratorInterface/Hydjet2Interface := GeneratorInterfaceHydjet2Interface
GeneratorInterfaceHydjet2Interface_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
GeneratorInterfaceHydjet2Interface_EX_USE := $(foreach d, self cmssw boost GeneratorInterface/Core FWCore/Framework SimDataFormats/GeneratorProducts GeneratorInterface/Pythia6Interface GeneratorInterface/PyquenInterface GeneratorInterface/ExternalDecays GeneratorInterface/HiGenCommon FWCore/Concurrency clhep f77compiler DataFormats/Math DataFormats/Common DataFormats/Provenance FWCore/Common FWCore/FWLite FWCore/ParameterSet FWCore/Utilities CommonTools/UtilAlgos root rootmath rootcore,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
GeneratorInterfaceHydjet2Interface_EX_LIB   := GeneratorInterfaceHydjet2Interface
ALL_EXTERNAL_PRODS += GeneratorInterfaceHydjet2Interface
GeneratorInterfaceHydjet2Interface_CLASS := LIBRARY
GeneratorInterface/Hydjet2Interface_relbigobj+=GeneratorInterfaceHydjet2Interface
endif
ifeq ($(strip $(CalibrationHcalCalibAlgosPlugins)),)
CalibrationHcalCalibAlgosPlugins := self/src/Calibration/HcalCalibAlgos/plugins
CalibrationHcalCalibAlgosPlugins_LOC_USE := self cmssw SimDataFormats/Track CondFormats/HcalObjects DQMServices/Core DataFormats/Common DataFormats/DetId DataFormats/EcalDetId DataFormats/Math DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities Geometry/Records Geometry/CaloGeometry rootphysics boost root DataFormats/CaloRecHit SimDataFormats/GeneratorProducts clhep hepmc CommonTools/UtilAlgos TrackPropagation/SteppingHelixPropagator TrackingTools/TrackAssociator
Calibration/HcalCalibAlgos_relbigobj+=CalibrationHcalCalibAlgosPlugins
endif
ifeq ($(strip $(Fireworks/ParticleFlow)),)
FireworksParticleFlow := self/Fireworks/ParticleFlow
Fireworks/ParticleFlow := FireworksParticleFlow
FireworksParticleFlow_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FireworksParticleFlow_EX_USE := $(foreach d, self cmssw DataFormats/ParticleFlowCandidate Fireworks/Core Fireworks/Candidates Fireworks/Tracks Fireworks/Calo,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FireworksParticleFlow_EX_LIB   := FireworksParticleFlow
ALL_EXTERNAL_PRODS += FireworksParticleFlow
FireworksParticleFlow_CLASS := LIBRARY
Fireworks/ParticleFlow_relbigobj+=FireworksParticleFlow
endif
ifeq ($(strip $(GeneratorInterfaceAMPTInterfacePlugins)),)
GeneratorInterfaceAMPTInterfacePlugins := self/src/GeneratorInterface/AMPTInterface/plugins
GeneratorInterfaceAMPTInterfacePlugins_LOC_USE := self cmssw GeneratorInterface/AMPTInterface
GeneratorInterface/AMPTInterface_relbigobj+=GeneratorInterfaceAMPTInterfacePlugins
endif
ifeq ($(strip $(RecoHI/HiTracking)),)
RecoHIHiTracking := self/RecoHI/HiTracking
RecoHI/HiTracking := RecoHIHiTracking
RecoHIHiTracking_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoHIHiTracking_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities Geometry/Records Geometry/TrackerGeometryBuilder TrackingTools/PatternTools RecoPixelVertexing/PixelTriplets RecoPixelVertexing/PixelTrackFitting RecoPixelVertexing/PixelLowPtUtilities SimDataFormats/GeneratorProducts RecoVertex/VertexTools TrackingTools/TrajectoryCleaning TrackingTools/TrajectoryFiltering TrackingTools/Records RecoLocalTracker/Records MagneticField/Records DataFormats/ParticleFlowReco DataFormats/ParticleFlowCandidate,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoHIHiTracking_EX_LIB   := RecoHIHiTracking
ALL_EXTERNAL_PRODS += RecoHIHiTracking
RecoHIHiTracking_CLASS := LIBRARY
RecoHI/HiTracking_relbigobj+=RecoHIHiTracking
endif
ifeq ($(strip $(RecoMuonTrackerSeedGeneratorPlugins)),)
RecoMuonTrackerSeedGeneratorPlugins := self/src/RecoMuon/TrackerSeedGenerator/plugins
RecoMuonTrackerSeedGeneratorPlugins_LOC_USE := self cmssw DataFormats/Common DataFormats/L1Trigger DataFormats/MuonSeed DataFormats/TrackReco DataFormats/TrajectorySeed FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/ServiceRegistry Geometry/CommonDetUnit Geometry/Records MagneticField/Engine MagneticField/Records CommonTools/UtilAlgos RecoMuon/GlobalTrackingTools RecoMuon/TrackerSeedGenerator RecoMuon/TrackingTools RecoPixelVertexing/PixelTrackFitting RecoTracker/MeasurementDet RecoTracker/Record RecoTracker/TkDetLayers RecoTracker/TkSeedGenerator RecoTracker/TkTrackingRegions TrackPropagation/SteppingHelixPropagator TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/KalmanUpdators TrackingTools/MeasurementDet TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrajectoryState TrackingTools/TransientTrack roothistmatrix
RecoMuon/TrackerSeedGenerator_relbigobj+=RecoMuonTrackerSeedGeneratorPlugins
endif
ifeq ($(strip $(Validation/MuonRPCDigis)),)
ValidationMuonRPCDigis := self/Validation/MuonRPCDigis
Validation/MuonRPCDigis := ValidationMuonRPCDigis
ValidationMuonRPCDigis_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ValidationMuonRPCDigis_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager DataFormats/RPCDigi Geometry/Records Geometry/RPCGeometry DQMServices/Core DataFormats/Common FWCore/ParameterSet FWCore/ServiceRegistry SimDataFormats/CrossingFrame CommonTools/UtilAlgos rootcore root FWCore/Utilities,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += ValidationMuonRPCDigis
ValidationMuonRPCDigis_CLASS := LIBRARY
Validation/MuonRPCDigis_relbigobj+=ValidationMuonRPCDigis
endif
ifeq ($(strip $(RecoTauTagReco3ProngTauPlugins)),)
RecoTauTagReco3ProngTauPlugins := self/src/RecoTauTag/ImpactParameter/plugins
RecoTauTagReco3ProngTauPlugins_LOC_USE := self cmssw TrackingTools/Records FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common DataFormats/BTauReco DataFormats/VertexReco DataFormats/Math boost root RecoBTag/BTagTools TrackingTools/TransientTrack RecoTauTag/ImpactParameter RecoTauTag/RecoTau DataFormats/TauReco CommonTools/Utils RecoVertex/KinematicFit RecoVertex/KinematicFitPrimitives DataFormats/BeamSpot DataFormats/MuonReco DataFormats/TrackReco DataFormats/GsfTrackReco
RecoTauTag/ImpactParameter_relbigobj+=RecoTauTagReco3ProngTauPlugins
endif
ifeq ($(strip $(LaserAlignmentPlugins)),)
LaserAlignmentPlugins := self/src/Alignment/LaserAlignment/plugins
LaserAlignmentPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry EventFilter/SiStripRawToDigi Geometry/CommonTopologies Geometry/TrackerGeometryBuilder Geometry/TrackerNumberingBuilder MagneticField/Engine MagneticField/Records CondFormats/SiStripObjects CondFormats/Alignment CondCore/DBOutputService DataFormats/Common DataFormats/DetId DataFormats/Alignment DataFormats/SiStripDetId TrackingTools/TrajectoryState Alignment/LaserAlignment Alignment/TrackerAlignment CommonTools/UtilAlgos boost clhep rootcore
Alignment/LaserAlignment_relbigobj+=LaserAlignmentPlugins
endif
ifeq ($(strip $(DQMOffline/CalibCalo)),)
DQMOfflineCalibCalo := self/DQMOffline/CalibCalo
DQMOffline/CalibCalo := DQMOfflineCalibCalo
DQMOfflineCalibCalo_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMOfflineCalibCalo_EX_USE := $(foreach d, self cmssw DQMServices/Components DQMServices/Core Geometry/Records Geometry/CaloGeometry DataFormats/Common DataFormats/DetId DataFormats/EcalDetId DataFormats/EcalRecHit DataFormats/EgammaReco DataFormats/HLTReco DataFormats/JetReco DataFormats/HcalIsolatedTrack DataFormats/Math DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/FEDRawData FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet Geometry/CaloTopology EventFilter/HcalRawToDigi HLTrigger/HLTcore RecoEcal/EgammaCoreTools rootphysics,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DQMOfflineCalibCalo_EX_LIB   := DQMOfflineCalibCalo
ALL_EXTERNAL_PRODS += DQMOfflineCalibCalo
DQMOfflineCalibCalo_CLASS := LIBRARY
DQMOffline/CalibCalo_relbigobj+=DQMOfflineCalibCalo
endif
ifeq ($(strip $(HLTriggerOffline/Tau)),)
HLTriggerOfflineTau := self/HLTriggerOffline/Tau
HLTriggerOffline/Tau := HLTriggerOfflineTau
HLTriggerOfflineTau_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerOfflineTau_EX_USE := $(foreach d, self cmssw DataFormats/BTauReco DataFormats/TauReco FWCore/ServiceRegistry DataFormats/Candidate DataFormats/Common DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/HLTReco DataFormats/HepMCCandidate DataFormats/JetReco DataFormats/L1Trigger DataFormats/L1GlobalTrigger DataFormats/METReco DataFormats/Math DataFormats/MuonReco DataFormats/TrackReco DataFormats/VertexReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager CommonTools/UtilAlgos SimDataFormats/GeneratorProducts Geometry/Records Geometry/TrackerGeometryBuilder TrackingTools/Records DQMServices/Components clhep hepmc rootcore rootmath,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerOfflineTau
HLTriggerOfflineTau_CLASS := LIBRARY
HLTriggerOffline/Tau_relbigobj+=HLTriggerOfflineTau
endif
ifeq ($(strip $(Fireworks/Calo)),)
FireworksCalo := self/Fireworks/Calo
Fireworks/Calo := FireworksCalo
FireworksCalo_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FireworksCalo_EX_USE := $(foreach d, self cmssw DataFormats/CaloRecHit DataFormats/CaloTowers DataFormats/DetId DataFormats/EcalDetId DataFormats/EcalRecHit DataFormats/EgammaReco DataFormats/FWLite DataFormats/JetReco Fireworks/Core Fireworks/Tracks boost_system rootgpad rootphysics,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FireworksCalo_EX_LIB   := FireworksCalo
ALL_EXTERNAL_PRODS += FireworksCalo
FireworksCalo_CLASS := LIBRARY
Fireworks/Calo_relbigobj+=FireworksCalo
endif
ifeq ($(strip $(RecoVertex/ConfigurableVertexReco)),)
RecoVertexConfigurableVertexReco := self/RecoVertex/ConfigurableVertexReco
RecoVertex/ConfigurableVertexReco := RecoVertexConfigurableVertexReco
RecoVertexConfigurableVertexReco_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoVertexConfigurableVertexReco_EX_USE := $(foreach d, self cmssw FWCore/ParameterSet RecoVertex/AdaptiveVertexFit RecoVertex/TrimmedKalmanVertexFinder RecoVertex/AdaptiveVertexFinder RecoVertex/MultiVertexFit DataFormats/Math,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoVertexConfigurableVertexReco_EX_LIB   := RecoVertexConfigurableVertexReco
ALL_EXTERNAL_PRODS += RecoVertexConfigurableVertexReco
RecoVertexConfigurableVertexReco_CLASS := LIBRARY
RecoVertex/ConfigurableVertexReco_relbigobj+=RecoVertexConfigurableVertexReco
endif
ifeq ($(strip $(GeneratorInterfaceHydjetInterfacePlugins)),)
GeneratorInterfaceHydjetInterfacePlugins := self/src/GeneratorInterface/HydjetInterface/plugins
GeneratorInterfaceHydjetInterfacePlugins_LOC_USE := self cmssw GeneratorInterface/HydjetInterface pydata
GeneratorInterface/HydjetInterface_relbigobj+=GeneratorInterfaceHydjetInterfacePlugins
endif
ifeq ($(strip $(RecoHIHiEgammaAlgosPlugins)),)
RecoHIHiEgammaAlgosPlugins := self/src/RecoHI/HiEgammaAlgos/plugins
RecoHIHiEgammaAlgosPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/ParameterSet FWCore/Utilities FWCore/ServiceRegistry DataFormats/Common DataFormats/BTauReco DataFormats/EgammaCandidates RecoHI/HiEgammaAlgos RecoLocalCalo/EcalRecAlgos RecoEcal/EgammaCoreTools CondFormats/DataRecord CondFormats/EcalObjects FWCore/MessageLogger  root
RecoHI/HiEgammaAlgos_relbigobj+=RecoHIHiEgammaAlgosPlugins
endif
ifeq ($(strip $(SimG4CMS/HcalTestBeam)),)
SimG4CMSHcalTestBeam := self/SimG4CMS/HcalTestBeam
SimG4CMS/HcalTestBeam := SimG4CMSHcalTestBeam
SimG4CMSHcalTestBeam_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CMSHcalTestBeam_EX_USE := $(foreach d, self cmssw SimG4Core/Notification SimG4Core/Watcher SimG4CMS/Calo Geometry/EcalCommonData Geometry/HcalCommonData DataFormats/HcalDetId DataFormats/Math SimDataFormats/HcalTestBeam FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry CommonTools/UtilAlgos geant4core boost root hepmc rootmath,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimG4CMSHcalTestBeam_EX_LIB   := SimG4CMSHcalTestBeam
ALL_EXTERNAL_PRODS += SimG4CMSHcalTestBeam
SimG4CMSHcalTestBeam_CLASS := LIBRARY
SimG4CMS/HcalTestBeam_relbigobj+=SimG4CMSHcalTestBeam
endif
ifeq ($(strip $(DQMOfflineJetMETPlugins)),)
DQMOfflineJetMETPlugins := self/src/DQMOffline/JetMET/plugins
DQMOfflineJetMETPlugins_LOC_USE := self cmssw DQMServices/Components DQMServices/Core FWCore/Utilities FWCore/Framework DataFormats/Common CommonTools/UtilAlgos DataFormats/EgammaCandidates DataFormats/CaloTowers DataFormats/Candidate DataFormats/VertexReco RecoJets/JetAlgorithms RecoJets/JetProducers Validation/RecoJets DataFormats/JetReco
DQMOffline/JetMET_relbigobj+=DQMOfflineJetMETPlugins
endif
ifeq ($(strip $(EgammaAnalysis/ElectronTools)),)
EgammaAnalysisElectronTools := self/EgammaAnalysis/ElectronTools
EgammaAnalysis/ElectronTools := EgammaAnalysisElectronTools
EgammaAnalysisElectronTools_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
EgammaAnalysisElectronTools_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ServiceRegistry FWCore/Utilities FWCore/MessageLogger FWCore/ParameterSet Geometry/CaloTopology CondCore/DBOutputService CondFormats/EgammaObjects CondFormats/PhysicsToolsObjects RecoEgamma/EgammaTools RecoEcal/EgammaCoreTools DataFormats/Candidate DataFormats/Common DataFormats/EgammaCandidates DataFormats/PatCandidates DataFormats/EgammaReco DataFormats/TrackReco TrackingTools/IPTools PhysicsTools/UtilAlgos PhysicsTools/SelectorUtils clhep root rootcore roottmva,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
EgammaAnalysisElectronTools_EX_LIB   := EgammaAnalysisElectronTools
ALL_EXTERNAL_PRODS += EgammaAnalysisElectronTools
EgammaAnalysisElectronTools_CLASS := LIBRARY
EgammaAnalysis/ElectronTools_relbigobj+=EgammaAnalysisElectronTools
endif
ifeq ($(strip $(L1Trigger/CSCTrackFinder)),)
L1TriggerCSCTrackFinder := self/L1Trigger/CSCTrackFinder
L1Trigger/CSCTrackFinder := L1TriggerCSCTrackFinder
L1TriggerCSCTrackFinder_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
L1TriggerCSCTrackFinder_LOC_FLAGS_CXXFLAGS   := -O1
L1TriggerCSCTrackFinder_LOC_FLAGS_REM_CXXFLAGS   := -flto
L1TriggerCSCTrackFinder_EX_USE := $(foreach d, self cmssw L1Trigger/CSCCommonTrigger L1Trigger/DTUtilities L1Trigger/DTTrackFinder Geometry/CSCGeometry Geometry/Records DataFormats/MuonDetId DataFormats/CSCDigi DataFormats/L1CSCTrackFinder DataFormats/L1DTTrackFinder DataFormats/L1GlobalMuonTrigger boost,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerCSCTrackFinder_EX_LIB   := L1TriggerCSCTrackFinder
ALL_EXTERNAL_PRODS += L1TriggerCSCTrackFinder
L1TriggerCSCTrackFinder_CLASS := LIBRARY
L1Trigger/CSCTrackFinder_relbigobj+=L1TriggerCSCTrackFinder
endif
ifeq ($(strip $(RecoBTag/PerformanceDB)),)
RecoBTagPerformanceDB := self/RecoBTag/PerformanceDB
RecoBTag/PerformanceDB := RecoBTagPerformanceDB
RecoBTagPerformanceDB_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoBTagPerformanceDB_EX_USE := $(foreach d, self cmssw FWCore/PluginManager FWCore/ParameterSet FWCore/Utilities FWCore/MessageLogger boost_serialization,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoBTagPerformanceDB_EX_LIB   := RecoBTagPerformanceDB
ALL_EXTERNAL_PRODS += RecoBTagPerformanceDB
RecoBTagPerformanceDB_CLASS := LIBRARY
RecoBTag/PerformanceDB_relbigobj+=RecoBTagPerformanceDB
endif
ifeq ($(strip $(HLTrigger/btau)),)
HLTriggerbtau := self/HLTrigger/btau
HLTrigger/btau := HLTriggerbtau
HLTriggerbtau_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerbtau_EX_USE := $(foreach d, self cmssw DataFormats/BTauReco DataFormats/Candidate DataFormats/Common DataFormats/HLTReco DataFormats/JetReco DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/VertexReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet HLTrigger/HLTcore RecoTracker/TkTrackingRegions RecoVertex/KalmanVertexFit RecoVertex/VertexPrimitives TrackingTools/Records TrackingTools/TransientTrack,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerbtau
HLTriggerbtau_CLASS := LIBRARY
HLTrigger/btau_relbigobj+=HLTriggerbtau
endif
ifeq ($(strip $(DQM/SiStripMonitorTrack)),)
DQMSiStripMonitorTrack := self/DQM/SiStripMonitorTrack
DQM/SiStripMonitorTrack := DQMSiStripMonitorTrack
DQMSiStripMonitorTrack_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMSiStripMonitorTrack_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet FWCore/PluginManager Geometry/TrackerGeometryBuilder DQMServices/Core DQM/SiStripCommon CalibFormats/SiStripObjects CalibTracker/Records DataFormats/SiStripCluster DataFormats/TrackingRecHit DataFormats/TrackerRecHit2D DataFormats/RecoCandidate RecoTracker/TransientTrackingRecHit RecoLocalTracker/SiStripClusterizer DataFormats/TrackReco TrackingTools/TrajectoryState CommonTools/TriggerUtils,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMSiStripMonitorTrack
DQMSiStripMonitorTrack_CLASS := LIBRARY
DQM/SiStripMonitorTrack_relbigobj+=DQMSiStripMonitorTrack
endif
ifeq ($(strip $(DQMOffline/EGamma)),)
DQMOfflineEGamma := self/DQMOffline/EGamma
DQMOffline/EGamma := DQMOfflineEGamma
DQMOfflineEGamma_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMOfflineEGamma_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet DQMServices/Components DQMServices/Core,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DQMOfflineEGamma_EX_LIB   := DQMOfflineEGamma
ALL_EXTERNAL_PRODS += DQMOfflineEGamma
DQMOfflineEGamma_CLASS := LIBRARY
DQMOffline/EGamma_relbigobj+=DQMOfflineEGamma
endif
ifeq ($(strip $(Validation/RecoVertex)),)
ValidationRecoVertex := self/Validation/RecoVertex
Validation/RecoVertex := ValidationRecoVertex
ValidationRecoVertex_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ValidationRecoVertex_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/ServiceRegistry FWCore/Utilities FWCore/Version DataFormats/BeamSpot DataFormats/Candidate DataFormats/Common DataFormats/Luminosity DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/VertexReco DQMServices/Core SimDataFormats/Track SimDataFormats/GeneratorProducts SimDataFormats/PileupSummaryInfo SimDataFormats/TrackerDigiSimLink DataFormats/SiStripDetId RecoTracker/TkSeedGenerator TrackingTools/TrackFitters TrackingTools/TransientTrack Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Records MagneticField/Engine SimDataFormats/Vertex SimDataFormats/TrackingAnalysis SimTracker/TrackAssociation SimTracker/TrackerHitAssociation SimTracker/TrackHistory CommonTools/Statistics CommonTools/TriggerUtils CommonTools/UtilAlgos clhep boost hepmc RecoVertex/PrimaryVertexProducer RecoVertex/VertexTools root gsl SimGeneral/HepPDTRecord DPGAnalysis/SiStripTools,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += ValidationRecoVertex
ValidationRecoVertex_CLASS := LIBRARY
Validation/RecoVertex_relbigobj+=ValidationRecoVertex
endif
ifeq ($(strip $(RecoVertexAdaptiveVertexFinderPlugins)),)
RecoVertexAdaptiveVertexFinderPlugins := self/src/RecoVertex/AdaptiveVertexFinder/plugins
RecoVertexAdaptiveVertexFinderPlugins_LOC_USE := self cmssw FWCore/Framework DataFormats/Common DataFormats/VertexReco DataFormats/JetReco DataFormats/BTauReco DataFormats/BeamSpot RecoVertex/ConfigurableVertexReco RecoBTag/SecondaryVertex TrackingTools/Records TrackingTools/TransientTrack TrackingTools/IPTools FWCore/Utilities
RecoVertex/AdaptiveVertexFinder_relbigobj+=RecoVertexAdaptiveVertexFinderPlugins
endif
ifeq ($(strip $(SimG4CMSFP420Plugins)),)
SimG4CMSFP420Plugins := self/src/SimG4CMS/FP420/plugins
SimG4CMSFP420Plugins_LOC_USE := self cmssw SimG4CMS/FP420
SimG4CMS/FP420_relbigobj+=SimG4CMSFP420Plugins
endif
ifeq ($(strip $(DQMServices/StreamerIO)),)
src_DQMServices_StreamerIO := self/DQMServices/StreamerIO
DQMServices/StreamerIO  := src_DQMServices_StreamerIO
src_DQMServices_StreamerIO_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
src_DQMServices_StreamerIO_EX_USE := $(foreach d, FWCore/Sources DataFormats/Streamer boost Utilities/StorageFactory FWCore/Framework self HLTrigger/HLTanalyzers cmssw IOPool/Stramer zlib FWCore/PluginManager FWCore/Catalog FWCore/Version DataFormats/Provenance DataFormats/Common rootcore FWCore/ServiceRegistry FWCore/Utilities FWCore/ParameterSet,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += src_DQMServices_StreamerIO
endif

ifeq ($(strip $(RecoMuon/GlobalTrackingTools)),)
RecoMuonGlobalTrackingTools := self/RecoMuon/GlobalTrackingTools
RecoMuon/GlobalTrackingTools := RecoMuonGlobalTrackingTools
RecoMuonGlobalTrackingTools_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoMuonGlobalTrackingTools_EX_USE := $(foreach d, self cmssw CommonTools/Statistics DataFormats/BeamSpot DataFormats/Common DataFormats/DetId DataFormats/GeometrySurface DataFormats/GeometryVector DataFormats/Math DataFormats/MuonDetId DataFormats/TrackReco DataFormats/TrajectoryState DataFormats/VertexReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry Geometry/CommonDetUnit Geometry/CSCGeometry Geometry/DTGeometry PhysicsTools/UtilAlgos RecoMuon/Navigation RecoMuon/TrackingTools RecoMuon/TransientTrackingRecHit RecoTracker/TkDetLayers RecoTracker/TkMSParametrization RecoTracker/TkTrackingRegions RecoTracker/TransientTrackingRecHit TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrackFitters TrackingTools/TrackRefitter TrackingTools/TrajectoryState TrackingTools/TransientTrack TrackingTools/TransientTrackingRecHit CondCore/DBOutputService CondFormats/RecoMuonObjects Utilities/General CondFormats/Alignment root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoMuonGlobalTrackingTools_EX_LIB   := RecoMuonGlobalTrackingTools
ALL_EXTERNAL_PRODS += RecoMuonGlobalTrackingTools
RecoMuonGlobalTrackingTools_CLASS := LIBRARY
RecoMuon/GlobalTrackingTools_relbigobj+=RecoMuonGlobalTrackingTools
endif
ifeq ($(strip $(MuonAnalysisMuonAssociators_plugins)),)
MuonAnalysisMuonAssociators_plugins := self/src/MuonAnalysis/MuonAssociators/plugins
MuonAnalysisMuonAssociators_plugins_LOC_USE := self cmssw CommonTools/Utils DataFormats/PatCandidates FWCore/MessageLogger SimMuon/MCTruth SimTracker/Records SimTracker/TrackAssociation MuonAnalysis/MuonAssociators
MuonAnalysis/MuonAssociators_relbigobj+=MuonAnalysisMuonAssociators_plugins
endif
ifeq ($(strip $(CalibTrackerSiPixelToolsPlugin)),)
CalibTrackerSiPixelToolsPlugin := self/src/CalibTracker/SiPixelTools/plugins
CalibTrackerSiPixelToolsPlugin_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry DataFormats/FEDRawData DataFormats/Common DataFormats/SiPixelDigi DQMServices/Core CondFormats/SiPixelObjects DQM/SiPixelCommon Geometry/Records Geometry/CommonDetUnit Geometry/TrackerGeometryBuilder CommonTools/UtilAlgos
CalibTracker/SiPixelTools_relbigobj+=CalibTrackerSiPixelToolsPlugin
endif
ifeq ($(strip $(DQM/Integration)),)
DQMIntegration := self/DQM/Integration
DQM/Integration := DQMIntegration
DQMIntegration_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMIntegration_EX_USE := $(foreach d, self cmssw CoralBase DataFormats/Provenance FWCore/Catalog FWCore/Framework FWCore/ParameterSet FWCore/ServiceRegistry RelationalAccess,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DQMIntegration_EX_LIB   := DQMIntegration
ALL_EXTERNAL_PRODS += DQMIntegration
DQMIntegration_CLASS := LIBRARY
DQM/Integration_relbigobj+=DQMIntegration
endif
ifeq ($(strip $(DQM/L1TMonitorClient)),)
DQML1TMonitorClient := self/DQM/L1TMonitorClient
DQM/L1TMonitorClient := DQML1TMonitorClient
DQML1TMonitorClient_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQML1TMonitorClient_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DQMServices/Core DQMServices/Components DQMServices/ClientConfig boost root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQML1TMonitorClient
DQML1TMonitorClient_CLASS := LIBRARY
DQM/L1TMonitorClient_relbigobj+=DQML1TMonitorClient
endif
ifeq ($(strip $(Calibration/HcalCalibAlgos)),)
CalibrationHcalCalibAlgos := self/Calibration/HcalCalibAlgos
Calibration/HcalCalibAlgos := CalibrationHcalCalibAlgos
CalibrationHcalCalibAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CalibrationHcalCalibAlgos_EX_USE := $(foreach d, self cmssw root rootgraphics rootminuit hepmc FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/Utilities FWCore/Concurrency CommonTools/UtilAlgos DataFormats/EcalDetId DataFormats/HcalDetId DataFormats/DetId DataFormats/HcalDigi DataFormats/HcalRecHit CondFormats/HcalObjects DataFormats/L1GlobalTrigger DataFormats/Math DataFormats/JetReco DataFormats/ParticleFlowReco Geometry/CaloTopology Geometry/CaloGeometry Geometry/Records JetMETCorrections/Objects JetMETCorrections/Type1MET CondTools/Hcal HLTrigger/HLTcore Calibration/IsolatedParticles SimDataFormats/GeneratorProducts TrackPropagation/SteppingHelixPropagator TrackingTools/TrackAssociator CondFormats/L1TObjects,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CalibrationHcalCalibAlgos_ROOTDICTS  := y 
ALL_EXTERNAL_PRODS += CalibrationHcalCalibAlgos
CalibrationHcalCalibAlgos_CLASS := LIBRARY
Calibration/HcalCalibAlgos_relbigobj+=CalibrationHcalCalibAlgos
endif
ifeq ($(strip $(GeneratorInterfacePythia6Guns)),)
GeneratorInterfacePythia6Guns := self/src/GeneratorInterface/Pythia6Interface/plugins
GeneratorInterfacePythia6Guns_LOC_USE := self cmssw GeneratorInterface/Pythia6Interface heppdt
GeneratorInterface/Pythia6Interface_relbigobj+=GeneratorInterfacePythia6Guns
endif
ifeq ($(strip $(GeneratorInterfacePythia6Filters)),)
GeneratorInterfacePythia6Filters := self/src/GeneratorInterface/Pythia6Interface/plugins
GeneratorInterfacePythia6Filters_LOC_USE := self cmssw GeneratorInterface/Pythia6Interface GeneratorInterface/PartonShowerVeto GeneratorInterface/ExternalDecays heppdt
GeneratorInterface/Pythia6Interface_relbigobj+=GeneratorInterfacePythia6Filters
endif
ifeq ($(strip $(Fireworks/Vertices)),)
FireworksVertices := self/Fireworks/Vertices
Fireworks/Vertices := FireworksVertices
FireworksVertices_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FireworksVertices_EX_USE := $(foreach d, self cmssw DataFormats/VertexReco Fireworks/Core rootcore opengl,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FireworksVertices_LCGDICTS  := x 
FireworksVertices_EX_LIB   := FireworksVertices
ALL_EXTERNAL_PRODS += FireworksVertices
FireworksVertices_CLASS := LIBRARY
Fireworks/Vertices_relbigobj+=FireworksVertices
endif
ifeq ($(strip $(PhysicsToolsRecoUtilsPlugins)),)
PhysicsToolsRecoUtilsPlugins := self/src/PhysicsTools/RecoUtils/plugins
PhysicsToolsRecoUtilsPlugins_LOC_USE := self cmssw CommonTools/Utils FWCore/Framework FWCore/PluginManager FWCore/ParameterSet PhysicsTools/UtilAlgos PhysicsTools/Utilities DataFormats/Candidate DataFormats/HepMCCandidate DataFormats/L1GlobalTrigger HLTrigger/HLTcore
PhysicsTools/RecoUtils_relbigobj+=PhysicsToolsRecoUtilsPlugins
endif
ifeq ($(strip $(QCDAnalysis/UEAnalysis)),)
QCDAnalysisUEAnalysis := self/QCDAnalysis/UEAnalysis
QCDAnalysis/UEAnalysis := QCDAnalysisUEAnalysis
QCDAnalysisUEAnalysis_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
QCDAnalysisUEAnalysis_EX_USE := $(foreach d, self cmssw SimDataFormats/GeneratorProducts DataFormats/JetReco DataFormats/Candidate DataFormats/Common DataFormats/HepMCCandidate DataFormats/TrackCandidate DataFormats/HLTReco CommonTools/UtilAlgos FWCore/Framework FWCore/PluginManager FWCore/ServiceRegistry clhep root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += QCDAnalysisUEAnalysis
QCDAnalysisUEAnalysis_CLASS := LIBRARY
QCDAnalysis/UEAnalysis_relbigobj+=QCDAnalysisUEAnalysis
endif
ifeq ($(strip $(PhysicsToolsUtilAlgos_plugins)),)
PhysicsToolsUtilAlgos_plugins := self/src/PhysicsTools/UtilAlgos/plugins
PhysicsToolsUtilAlgos_plugins_LOC_USE := self cmssw FWCore/Framework FWCore/ParameterSet CommonTools/UtilAlgos PhysicsTools/UtilAlgos FWCore/ServiceRegistry DataFormats/CLHEP DataFormats/PatCandidates PhysicsTools/SelectorUtils
PhysicsTools/UtilAlgos_relbigobj+=PhysicsToolsUtilAlgos_plugins
endif
ifeq ($(strip $(L1TriggerRegionalCaloTriggerPlugins)),)
L1TriggerRegionalCaloTriggerPlugins := self/src/L1Trigger/RegionalCaloTrigger/plugins
L1TriggerRegionalCaloTriggerPlugins_LOC_USE := self cmssw L1Trigger/RegionalCaloTrigger CommonTools/UtilAlgos FWCore/ServiceRegistry
L1Trigger/RegionalCaloTrigger_relbigobj+=L1TriggerRegionalCaloTriggerPlugins
endif
ifeq ($(strip $(FastSimulation/Tracking)),)
FastSimulationTracking := self/FastSimulation/Tracking
FastSimulation/Tracking := FastSimulationTracking
FastSimulationTracking_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FastSimulationTracking_EX_USE := $(foreach d, self cmssw DataFormats/GeometryVector DataFormats/SiPixelDetId DataFormats/SiStripDetId DataFormats/TrackerCommon DataFormats/TrackingRecHit DataFormats/TrackerRecHit2D DataFormats/EgammaTrackReco Geometry/CommonDetUnit Geometry/TrackerGeometryBuilder Geometry/Records DataFormats/EgammaReco,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FastSimulationTracking_EX_LIB   := FastSimulationTracking
ALL_EXTERNAL_PRODS += FastSimulationTracking
FastSimulationTracking_CLASS := LIBRARY
FastSimulation/Tracking_relbigobj+=FastSimulationTracking
endif
ifeq ($(strip $(FastSimulation/Calorimetry)),)
FastSimulationCalorimetry := self/FastSimulation/Calorimetry
FastSimulation/Calorimetry := FastSimulationCalorimetry
FastSimulationCalorimetry_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FastSimulationCalorimetry_EX_USE := $(foreach d, self cmssw DataFormats/DetId DataFormats/HcalDetId FWCore/MessageLogger FWCore/ParameterSet SimG4CMS/Calo FastSimulation/CaloGeometryTools FastSimulation/CaloHitMakers FastSimulation/Event FastSimulation/Particle FastSimulation/ParticlePropagator FastSimulation/ShowerDevelopment FastSimulation/Utilities FastSimulation/MaterialEffects CondFormats/DataRecord FWCore/ServiceRegistry DQMServices/Core SimG4Core/GFlash,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FastSimulationCalorimetry_EX_LIB   := FastSimulationCalorimetry
ALL_EXTERNAL_PRODS += FastSimulationCalorimetry
FastSimulationCalorimetry_CLASS := LIBRARY
FastSimulation/Calorimetry_relbigobj+=FastSimulationCalorimetry
endif
ifeq ($(strip $(DQMTrackingMonitorClientAuto)),)
DQMTrackingMonitorClientAuto := self/src/DQM/TrackingMonitorClient/plugins
DQMTrackingMonitorClientAuto_LOC_USE := self cmssw FWCore/MessageLogger FWCore/Framework EventFilter/Utilities DQMServices/ClientConfig CalibFormats/SiStripObjects CondFormats/SiStripObjects CondFormats/DataRecord CondFormats/RunInfo CommonTools/TrackerMap CalibTracker/Records DQM/TrackerCommon DQM/SiStripCommon DQM/SiStripMonitorSummary DQM/SiStripMonitorClient DQM/TrackingMonitorClient DataFormats/SiStripDetId boost root
DQM/TrackingMonitorClient_relbigobj+=DQMTrackingMonitorClientAuto
endif
ifeq ($(strip $(HLTrigger/JetMET)),)
HLTriggerJetMET := self/HLTrigger/JetMET
HLTrigger/JetMET := HLTriggerJetMET
HLTriggerJetMET_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerJetMET_EX_USE := $(foreach d, self cmssw DataFormats/Common DataFormats/BTauReco DataFormats/HLTReco DataFormats/HcalRecHit DataFormats/JetReco DataFormats/METReco DataFormats/Math Geometry/Records Geometry/CaloTopology FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities RecoMET/METAlgorithms HLTrigger/HLTcore RecoJets/JetProducers TrackingTools/IPTools TrackingTools/TransientTrack,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
HLTriggerJetMET_EX_LIB   := HLTriggerJetMET
ALL_EXTERNAL_PRODS += HLTriggerJetMET
HLTriggerJetMET_CLASS := LIBRARY
HLTrigger/JetMET_relbigobj+=HLTriggerJetMET
endif
ifeq ($(strip $(PFPUAssoMapPlugins)),)
PFPUAssoMapPlugins := self/src/CommonTools/RecoUtils/plugins
PFPUAssoMapPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry CommonTools/UtilAlgos CommonTools/RecoUtils DataFormats/BeamSpot DataFormats/Common DataFormats/TrackReco DataFormats/VertexReco DataFormats/EgammaCandidates DataFormats/RecoCandidate DataFormats/ParticleFlowCandidate DataFormats/ParticleFlowReco MagneticField/Records MagneticField/Engine SimDataFormats/TrackingAnalysis SimDataFormats/GeneratorProducts SimTracker/TrackAssociation TrackingTools/TransientTrack TrackingTools/IPTools
CommonTools/RecoUtils_relbigobj+=PFPUAssoMapPlugins
endif
ifeq ($(strip $(RecoPixelVertexing/PixelVertexFinding)),)
RecoPixelVertexingPixelVertexFinding := self/RecoPixelVertexing/PixelVertexFinding
RecoPixelVertexing/PixelVertexFinding := RecoPixelVertexingPixelVertexFinding
RecoPixelVertexingPixelVertexFinding_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoPixelVertexingPixelVertexFinding_EX_USE := $(foreach d, self cmssw DataFormats/VertexReco FWCore/Framework FWCore/ParameterSet FWCore/PluginManager Geometry/Records Geometry/TrackerGeometryBuilder DataFormats/GeometryCommonDetAlgo CommonTools/Clustering1D DataFormats/TrackReco RecoPixelVertexing/PixelTriplets RecoPixelVertexing/PixelTrackFitting DataFormats/SiPixelCluster DataFormats/JetReco RecoLocalTracker/Records RecoLocalTracker/ClusterParameterEstimator DataFormats/TrackerRecHit2D,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += RecoPixelVertexingPixelVertexFinding
RecoPixelVertexingPixelVertexFinding_CLASS := LIBRARY
RecoPixelVertexing/PixelVertexFinding_relbigobj+=RecoPixelVertexingPixelVertexFinding
endif
ifeq ($(strip $(FastSimulation/CaloGeometryTools)),)
FastSimulationCaloGeometryTools := self/FastSimulation/CaloGeometryTools
FastSimulation/CaloGeometryTools := FastSimulationCaloGeometryTools
FastSimulationCaloGeometryTools_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FastSimulationCaloGeometryTools_EX_USE := $(foreach d, self cmssw DataFormats/DetId DataFormats/EcalDetId DataFormats/GeometryVector DataFormats/Math FWCore/MessageLogger FWCore/ParameterSet FastSimulation/CalorimeterProperties Geometry/CaloGeometry Geometry/CaloTopology Geometry/EcalAlgo clhep rootmath,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FastSimulationCaloGeometryTools_EX_LIB   := FastSimulationCaloGeometryTools
ALL_EXTERNAL_PRODS += FastSimulationCaloGeometryTools
FastSimulationCaloGeometryTools_CLASS := LIBRARY
FastSimulation/CaloGeometryTools_relbigobj+=FastSimulationCaloGeometryTools
endif
ifeq ($(strip $(HiggsAnalysis/HiggsToGammaGamma)),)
HiggsAnalysisHiggsToGammaGamma := self/HiggsAnalysis/HiggsToGammaGamma
HiggsAnalysis/HiggsToGammaGamma := HiggsAnalysisHiggsToGammaGamma
HiggsAnalysisHiggsToGammaGamma_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HiggsAnalysisHiggsToGammaGamma_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet FWCore/ServiceRegistry DataFormats/EgammaReco DataFormats/EgammaCandidates DataFormats/VertexReco DataFormats/HepMCCandidate SimDataFormats/PileupSummaryInfo DataFormats/Math Geometry/CaloGeometry Geometry/CaloTopology RecoEcal/EgammaCoreTools RecoLocalCalo/EcalRecAlgos Geometry/Records CommonTools/UtilAlgos clhep root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HiggsAnalysisHiggsToGammaGamma
HiggsAnalysisHiggsToGammaGamma_CLASS := LIBRARY
HiggsAnalysis/HiggsToGammaGamma_relbigobj+=HiggsAnalysisHiggsToGammaGamma
endif
ifeq ($(strip $(TopQuarkAnalysis/TopObjectResolutions)),)
TopQuarkAnalysisTopObjectResolutions := self/TopQuarkAnalysis/TopObjectResolutions
TopQuarkAnalysis/TopObjectResolutions := TopQuarkAnalysisTopObjectResolutions
TopQuarkAnalysisTopObjectResolutions_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
TopQuarkAnalysisTopObjectResolutions_EX_USE := $(foreach d, self cmssw CommonTools/UtilAlgos FWCore/Framework FWCore/PluginManager FWCore/ParameterSet root AnalysisDataFormats/TopObjects,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += TopQuarkAnalysisTopObjectResolutions
TopQuarkAnalysisTopObjectResolutions_CLASS := LIBRARY
TopQuarkAnalysis/TopObjectResolutions_relbigobj+=TopQuarkAnalysisTopObjectResolutions
endif
ifeq ($(strip $(DQMServicesExamplesPlugins)),)
DQMServicesExamplesPlugins := self/src/DQMServices/Examples/plugins
DQMServicesExamplesPlugins_LOC_USE := self cmssw DQMServices/Examples FWCore/MessageLogger FWCore/Framework DQMServices/Core
DQMServices/Examples_relbigobj+=DQMServicesExamplesPlugins
endif
ifeq ($(strip $(RecoEgamma/ElectronIdentification)),)
RecoEgammaElectronIdentification := self/RecoEgamma/ElectronIdentification
RecoEgamma/ElectronIdentification := RecoEgammaElectronIdentification
RecoEgammaElectronIdentification_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoEgammaElectronIdentification_EX_USE := $(foreach d, self cmssw FWCore/Framework DataFormats/EgammaReco Geometry/CaloGeometry RecoEcal/EgammaCoreTools DataFormats/TrackReco MagneticField/Records MagneticField/Engine RecoEgamma/EgammaTools PhysicsTools/SelectorUtils,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoEgammaElectronIdentification_LCGDICTS  := x 
RecoEgammaElectronIdentification_EX_LIB   := RecoEgammaElectronIdentification
ALL_EXTERNAL_PRODS += RecoEgammaElectronIdentification
RecoEgammaElectronIdentification_CLASS := LIBRARY
RecoEgamma/ElectronIdentification_relbigobj+=RecoEgammaElectronIdentification
endif
ifeq ($(strip $(GeneratorInterface/HiGenCommon)),)
GeneratorInterfaceHiGenCommon := self/GeneratorInterface/HiGenCommon
GeneratorInterface/HiGenCommon := GeneratorInterfaceHiGenCommon
GeneratorInterfaceHiGenCommon_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
GeneratorInterfaceHiGenCommon_EX_USE := $(foreach d, self cmssw GeneratorInterface/Core SimDataFormats/GeneratorProducts SimGeneral/HepPDTRecord FWCore/ParameterSet,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
GeneratorInterfaceHiGenCommon_EX_LIB   := GeneratorInterfaceHiGenCommon
ALL_EXTERNAL_PRODS += GeneratorInterfaceHiGenCommon
GeneratorInterfaceHiGenCommon_CLASS := LIBRARY
GeneratorInterface/HiGenCommon_relbigobj+=GeneratorInterfaceHiGenCommon
endif
ifeq ($(strip $(CondTools/SiPixel)),)
CondToolsSiPixel := self/CondTools/SiPixel
CondTools/SiPixel := CondToolsSiPixel
CondToolsSiPixel_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CondToolsSiPixel_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger CondFormats/DataRecord CondFormats/SiPixelObjects CondCore/PopCon,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CondToolsSiPixel_EX_LIB   := CondToolsSiPixel
ALL_EXTERNAL_PRODS += CondToolsSiPixel
CondToolsSiPixel_CLASS := LIBRARY
CondTools/SiPixel_relbigobj+=CondToolsSiPixel
endif
ifeq ($(strip $(PhysicsToolsPatExamples_plugins)),)
PhysicsToolsPatExamples_plugins := self/src/PhysicsTools/PatExamples/plugins
PhysicsToolsPatExamples_plugins_LOC_USE := self cmssw FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/MessageService FWCore/ServiceRegistry FWCore/Utilities DataFormats/Common DataFormats/BeamSpot DataFormats/TrackReco DataFormats/VertexReco DataFormats/BTauReco DataFormats/PatCandidates HLTrigger/HLTcore PhysicsTools/PatExamples PhysicsTools/PatAlgos PhysicsTools/PatUtils PhysicsTools/CandUtils PhysicsTools/UtilAlgos root
PhysicsTools/PatExamples_relbigobj+=PhysicsToolsPatExamples_plugins
endif
ifeq ($(strip $(RecoLocalCalo/EcalDeadChannelRecoveryAlgos)),)
RecoLocalCaloEcalDeadChannelRecoveryAlgos := self/RecoLocalCalo/EcalDeadChannelRecoveryAlgos
RecoLocalCalo/EcalDeadChannelRecoveryAlgos := RecoLocalCaloEcalDeadChannelRecoveryAlgos
RecoLocalCaloEcalDeadChannelRecoveryAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoLocalCaloEcalDeadChannelRecoveryAlgos_EX_USE := $(foreach d, self cmssw DataFormats/EcalDetId DataFormats/EcalRecHit Geometry/CaloGeometry Geometry/CaloTopology Geometry/Records root rootmath rootcore rootmlp,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoLocalCaloEcalDeadChannelRecoveryAlgos_EX_LIB   := RecoLocalCaloEcalDeadChannelRecoveryAlgos
ALL_EXTERNAL_PRODS += RecoLocalCaloEcalDeadChannelRecoveryAlgos
RecoLocalCaloEcalDeadChannelRecoveryAlgos_CLASS := LIBRARY
RecoLocalCalo/EcalDeadChannelRecoveryAlgos_relbigobj+=RecoLocalCaloEcalDeadChannelRecoveryAlgos
endif
ifeq ($(strip $(SimG4Core/SensitiveDetector)),)
SimG4CoreSensitiveDetector := self/SimG4Core/SensitiveDetector
SimG4Core/SensitiveDetector := SimG4CoreSensitiveDetector
SimG4CoreSensitiveDetector_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CoreSensitiveDetector_EX_USE := $(foreach d, self cmssw SimG4Core/Geometry boost geant4core sigcpp,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimG4CoreSensitiveDetector_EX_LIB   := SimG4CoreSensitiveDetector
ALL_EXTERNAL_PRODS += SimG4CoreSensitiveDetector
SimG4CoreSensitiveDetector_CLASS := LIBRARY
SimG4Core/SensitiveDetector_relbigobj+=SimG4CoreSensitiveDetector
endif
ifeq ($(strip $(DQMOfflineCalibCaloPlugins)),)
DQMOfflineCalibCaloPlugins := self/src/DQMOffline/CalibCalo/plugins
DQMOfflineCalibCaloPlugins_LOC_USE := self cmssw DQMOffline/CalibCalo
DQMOffline/CalibCalo_relbigobj+=DQMOfflineCalibCaloPlugins
endif
ifeq ($(strip $(RecoVertex/NuclearInteractionProducer)),)
RecoVertexNuclearInteractionProducer := self/RecoVertex/NuclearInteractionProducer
RecoVertex/NuclearInteractionProducer := RecoVertexNuclearInteractionProducer
RecoVertexNuclearInteractionProducer_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoVertexNuclearInteractionProducer_EX_USE := $(foreach d, self cmssw RecoVertex/KalmanVertexFit DataFormats/GeometryVector DataFormats/TrackReco DataFormats/VertexReco FWCore/Framework FWCore/ParameterSet MagneticField/Engine MagneticField/Records RecoVertex/AdaptiveVertexFit RecoVertex/VertexPrimitives TrackingTools/PatternTools TrackingTools/TrajectoryState TrackingTools/TransientTrack,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoVertexNuclearInteractionProducer_EX_LIB   := RecoVertexNuclearInteractionProducer
ALL_EXTERNAL_PRODS += RecoVertexNuclearInteractionProducer
RecoVertexNuclearInteractionProducer_CLASS := LIBRARY
RecoVertex/NuclearInteractionProducer_relbigobj+=RecoVertexNuclearInteractionProducer
endif
ifeq ($(strip $(SimG4CMSCaloPlugins)),)
SimG4CMSCaloPlugins := self/src/SimG4CMS/Calo/plugins
SimG4CMSCaloPlugins_LOC_USE := self cmssw FWCore/PluginManager SimG4Core/Watcher SimG4CMS/Calo SimDataFormats/GeneratorProducts
SimG4CMS/Calo_relbigobj+=SimG4CMSCaloPlugins
endif
ifeq ($(strip $(PhysicsToolsHepMCCandAlgos_plugins)),)
PhysicsToolsHepMCCandAlgos_plugins := self/src/PhysicsTools/HepMCCandAlgos/plugins
PhysicsToolsHepMCCandAlgos_plugins_LOC_USE := self cmssw FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger DataFormats/HepMCCandidate SimDataFormats/GeneratorProducts SimGeneral/HepPDTRecord SimDataFormats/Track PhysicsTools/HepMCCandAlgos PhysicsTools/JetMCUtils CommonTools/Utils
PhysicsTools/HepMCCandAlgos_relbigobj+=PhysicsToolsHepMCCandAlgos_plugins
endif
ifeq ($(strip $(DQMCSCMonitorModulePlugins)),)
DQMCSCMonitorModulePlugins := self/src/DQM/CSCMonitorModule/plugins
DQMCSCMonitorModulePlugins_LOC_FLAGS_CPPDEFINES   := -DDQMGLOBAL
DQMCSCMonitorModulePlugins_LOC_USE := self cmssw DQMServices/ClientConfig DQMServices/Components DQMServices/Core EventFilter/CSCRawToDigi FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager xerces-c
DQM/CSCMonitorModule_relbigobj+=DQMCSCMonitorModulePlugins
endif
ifeq ($(strip $(EgammaAnalysis/CSA07Skims)),)
EgammaAnalysisCSA07Skims := self/EgammaAnalysis/CSA07Skims
EgammaAnalysis/CSA07Skims := EgammaAnalysisCSA07Skims
EgammaAnalysisCSA07Skims_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
EgammaAnalysisCSA07Skims_EX_USE := $(foreach d, self cmssw DataFormats/Common DataFormats/CLHEP FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities Geometry/Records SimDataFormats/GeneratorProducts DataFormats/EgammaCandidates DataFormats/TrackReco DataFormats/JetReco clhep root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += EgammaAnalysisCSA07Skims
EgammaAnalysisCSA07Skims_CLASS := LIBRARY
EgammaAnalysis/CSA07Skims_relbigobj+=EgammaAnalysisCSA07Skims
endif
ifeq ($(strip $(SimDataFormats/ValidationFormats)),)
SimDataFormatsValidationFormats := self/SimDataFormats/ValidationFormats
SimDataFormats/ValidationFormats := SimDataFormatsValidationFormats
SimDataFormatsValidationFormats_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimDataFormatsValidationFormats_EX_USE := $(foreach d, self cmssw DataFormats/Common DataFormats/GeometryVector clhep geant4core expat,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimDataFormatsValidationFormats_LCGDICTS  := x 
SimDataFormatsValidationFormats_EX_LIB   := SimDataFormatsValidationFormats
ALL_EXTERNAL_PRODS += SimDataFormatsValidationFormats
SimDataFormatsValidationFormats_CLASS := LIBRARY
SimDataFormats/ValidationFormats_relbigobj+=SimDataFormatsValidationFormats
endif
ifeq ($(strip $(HLTriggerOffline/B2G)),)
HLTriggerOfflineB2G := self/HLTriggerOffline/B2G
HLTriggerOffline/B2G := HLTriggerOfflineB2G
HLTriggerOfflineB2G_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerOfflineB2G_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/Common FWCore/PluginManager FWCore/ParameterSet DQMServices/Core DataFormats/Common CommonTools/UtilAlgos PhysicsTools/UtilAlgos SimDataFormats/GeneratorProducts DataFormats/Math SimDataFormats/Track DataFormats/TrackReco DataFormats/TrackingRecHit DataFormats/MuonReco DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/RecoCandidate DataFormats/TauReco DataFormats/JetReco DataFormats/METReco DataFormats/VertexReco DataFormats/TrackerRecHit2D HLTrigger/HLTcore Geometry/Records Geometry/TrackerGeometryBuilder JetMETCorrections/Objects RecoEcal/EgammaCoreTools DataFormats/EcalRecHit CondFormats/DataRecord CondFormats/EcalObjects clhep root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerOfflineB2G
HLTriggerOfflineB2G_CLASS := LIBRARY
HLTriggerOffline/B2G_relbigobj+=HLTriggerOfflineB2G
endif
ifeq ($(strip $(DQM/SiStripMonitorDigi)),)
DQMSiStripMonitorDigi := self/DQM/SiStripMonitorDigi
DQM/SiStripMonitorDigi := DQMSiStripMonitorDigi
DQMSiStripMonitorDigi_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMSiStripMonitorDigi_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DQMServices/Core CalibFormats/SiStripObjects CalibTracker/Records DPGAnalysis/SiStripTools DQM/SiStripCommon DataFormats/L1GlobalTrigger CondFormats/RunInfo Geometry/Records Geometry/TrackerGeometryBuilder,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMSiStripMonitorDigi
DQMSiStripMonitorDigi_CLASS := LIBRARY
DQM/SiStripMonitorDigi_relbigobj+=DQMSiStripMonitorDigi
endif
ifeq ($(strip $(RecoLocalTrackerSiPixelClusterizerPlugins)),)
RecoLocalTrackerSiPixelClusterizerPlugins := self/src/RecoLocalTracker/SiPixelClusterizer/plugins
RecoLocalTrackerSiPixelClusterizerPlugins_LOC_USE := self cmssw DataFormats/Common FWCore/ParameterSet DataFormats/SiPixelDetId DataFormats/SiPixelCluster boost_serialization CalibTracker/SiPixelESProducers
RecoLocalTracker/SiPixelClusterizer_relbigobj+=RecoLocalTrackerSiPixelClusterizerPlugins
endif
ifeq ($(strip $(HLTriggerHLTcorePlugins)),)
HLTriggerHLTcorePlugins := self/src/HLTrigger/HLTcore/plugins
HLTriggerHLTcorePlugins_LOC_USE := self cmssw DataFormats/Candidate DataFormats/EgammaCandidates DataFormats/HcalIsolatedTrack DataFormats/HLTReco DataFormats/JetReco DataFormats/L1Trigger DataFormats/METReco DataFormats/Provenance DataFormats/RecoCandidate DataFormats/TauReco HLTrigger/HLTcore FWCore/PrescaleService FWCore/ServiceRegistry FWCore/Utilities
HLTrigger/HLTcore_relbigobj+=HLTriggerHLTcorePlugins
endif
ifeq ($(strip $(RecoMuon/CosmicMuonProducer)),)
RecoMuonCosmicMuonProducer := self/RecoMuon/CosmicMuonProducer
RecoMuon/CosmicMuonProducer := RecoMuonCosmicMuonProducer
RecoMuonCosmicMuonProducer_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoMuonCosmicMuonProducer_EX_USE := $(foreach d, self cmssw DataFormats/CSCRecHit DataFormats/Common DataFormats/DTRecHit DataFormats/GeometryCommonDetAlgo DataFormats/GeometrySurface DataFormats/MuonDetId DataFormats/MuonReco DataFormats/TrackReco DataFormats/TrackerRecHit2D DataFormats/TrackingRecHit DataFormats/TrajectorySeed FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet Geometry/CommonDetUnit RecoMuon/MeasurementDet RecoMuon/Navigation RecoMuon/TrackingTools RecoMuon/GlobalTrackingTools RecoMuon/TransientTrackingRecHit TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/KalmanUpdators TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrackFitters TrackingTools/TrackRefitter TrackingTools/TrajectoryState TrackingTools/TransientTrackingRecHit,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += RecoMuonCosmicMuonProducer
RecoMuonCosmicMuonProducer_CLASS := LIBRARY
RecoMuon/CosmicMuonProducer_relbigobj+=RecoMuonCosmicMuonProducer
endif
ifeq ($(strip $(MuonAnalysis/MuonAssociators)),)
MuonAnalysisMuonAssociators := self/MuonAnalysis/MuonAssociators
MuonAnalysis/MuonAssociators := MuonAnalysisMuonAssociators
MuonAnalysisMuonAssociators_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
MuonAnalysisMuonAssociators_EX_USE := $(foreach d, self cmssw CommonTools/Utils DataFormats/CLHEP DataFormats/Candidate DataFormats/GeometrySurface DataFormats/HepMCCandidate DataFormats/L1Trigger DataFormats/Math DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/CSCRecHit DataFormats/CSCDigi DataFormats/L1CSCTrackFinder FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities Geometry/CommonDetUnit Geometry/Records L1Trigger/CSCTrackFinder MagneticField/Engine MagneticField/Records RecoMuon/DetLayers RecoMuon/Records TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/KalmanUpdators TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrajectoryState SimDataFormats/Track SimDataFormats/Vertex,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
MuonAnalysisMuonAssociators_EX_LIB   := MuonAnalysisMuonAssociators
ALL_EXTERNAL_PRODS += MuonAnalysisMuonAssociators
MuonAnalysisMuonAssociators_CLASS := LIBRARY
MuonAnalysis/MuonAssociators_relbigobj+=MuonAnalysisMuonAssociators
endif
ifeq ($(strip $(RecoParticleFlow/PFClusterProducer)),)
RecoParticleFlowPFClusterProducer := self/RecoParticleFlow/PFClusterProducer
RecoParticleFlow/PFClusterProducer := RecoParticleFlowPFClusterProducer
RecoParticleFlowPFClusterProducer_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoParticleFlowPFClusterProducer_EX_USE := $(foreach d, self cmssw CondFormats/HcalObjects CondFormats/EcalObjects CondFormats/EgammaObjects CondFormats/DataRecord DataFormats/Common DataFormats/ParticleFlowReco RecoLocalCalo/HcalRecAlgos DataFormats/HcalDetId RecoEcal/EgammaCoreTools RecoParticleFlow/PFClusterTools vdt_headers rootmath root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoParticleFlowPFClusterProducer_EX_LIB   := RecoParticleFlowPFClusterProducer
ALL_EXTERNAL_PRODS += RecoParticleFlowPFClusterProducer
RecoParticleFlowPFClusterProducer_CLASS := LIBRARY
RecoParticleFlow/PFClusterProducer_relbigobj+=RecoParticleFlowPFClusterProducer
endif
ifeq ($(strip $(L1TriggerCSCTrackFinderPlugins)),)
L1TriggerCSCTrackFinderPlugins := self/src/L1Trigger/CSCTrackFinder/plugins
L1TriggerCSCTrackFinderPlugins_LOC_USE := self cmssw L1Trigger/CSCTrackFinder
L1Trigger/CSCTrackFinder_relbigobj+=L1TriggerCSCTrackFinderPlugins
endif
ifeq ($(strip $(Calibration/HcalIsolatedTrackReco)),)
CalibrationHcalIsolatedTrackReco := self/Calibration/HcalIsolatedTrackReco
Calibration/HcalIsolatedTrackReco := CalibrationHcalIsolatedTrackReco
CalibrationHcalIsolatedTrackReco_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CalibrationHcalIsolatedTrackReco_EX_USE := $(foreach d, self cmssw DataFormats/Common DataFormats/HcalIsolatedTrack DataFormats/L1Trigger DataFormats/L1GlobalTrigger FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities DataFormats/DetId DataFormats/EcalRecHit DataFormats/EcalDetId Geometry/CaloGeometry Geometry/CaloTopology RecoPixelVertexing/PixelTrackFitting DataFormats/HLTReco DataFormats/VertexReco CondFormats/EcalObjects Geometry/EcalMapping Geometry/EcalAlgo DataFormats/EcalRawData DataFormats/FEDRawData RecoEcal/EgammaCoreTools MagneticField/VolumeBasedEngine rootmath,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += CalibrationHcalIsolatedTrackReco
CalibrationHcalIsolatedTrackReco_CLASS := LIBRARY
Calibration/HcalIsolatedTrackReco_relbigobj+=CalibrationHcalIsolatedTrackReco
endif
ifeq ($(strip $(Fireworks/Geometry)),)
FireworksGeometry := self/Fireworks/Geometry
Fireworks/Geometry := FireworksGeometry
FireworksGeometry_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FireworksGeometry_EX_USE := $(foreach d, self cmssw FWCore/PluginManager FWCore/Framework FWCore/MessageLogger Geometry/CommonDetUnit Geometry/MuonNumbering Geometry/EcalCommonData Geometry/CSCGeometryBuilder DetectorDescription/Core Geometry/CaloGeometry Geometry/DTGeometry Geometry/CSCGeometry Geometry/RPCGeometry Geometry/GEMGeometry Geometry/TrackerGeometryBuilder Geometry/Records DataFormats/GeometrySurface DataFormats/MuonDetId DataFormats/SiStripDetId DataFormats/SiPixelDetId Fireworks/Core rootcore,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FireworksGeometry_EX_LIB   := FireworksGeometry
ALL_EXTERNAL_PRODS += FireworksGeometry
FireworksGeometry_CLASS := LIBRARY
Fireworks/Geometry_relbigobj+=FireworksGeometry
endif
ifeq ($(strip $(Geometry/EcalTestBeam)),)
GeometryEcalTestBeam := self/Geometry/EcalTestBeam
Geometry/EcalTestBeam := GeometryEcalTestBeam
GeometryEcalTestBeam_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
GeometryEcalTestBeam_EX_USE := $(foreach d, self cmssw FWCore/Utilities FWCore/MessageLogger Geometry/CaloGeometry Geometry/EcalCommonData SimDataFormats/EcalTestBeam clhep,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
GeometryEcalTestBeam_EX_LIB   := GeometryEcalTestBeam
ALL_EXTERNAL_PRODS += GeometryEcalTestBeam
GeometryEcalTestBeam_CLASS := LIBRARY
Geometry/EcalTestBeam_relbigobj+=GeometryEcalTestBeam
endif
ifeq ($(strip $(ElectroWeakAnalysis/WMuNu)),)
ElectroWeakAnalysisWMuNu := self/ElectroWeakAnalysis/WMuNu
ElectroWeakAnalysis/WMuNu := ElectroWeakAnalysisWMuNu
ElectroWeakAnalysisWMuNu_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ElectroWeakAnalysisWMuNu_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common DataFormats/Candidate DataFormats/JetReco DataFormats/METReco AnalysisDataFormats/EWK CommonTools/CandUtils CommonTools/UtilAlgos CommonTools/RecoAlgos clhep,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += ElectroWeakAnalysisWMuNu
ElectroWeakAnalysisWMuNu_CLASS := LIBRARY
ElectroWeakAnalysis/WMuNu_relbigobj+=ElectroWeakAnalysisWMuNu
endif
ifeq ($(strip $(HLTrigger/Muon)),)
HLTriggerMuon := self/HLTrigger/Muon
HLTrigger/Muon := HLTriggerMuon
HLTriggerMuon_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerMuon_EX_USE := $(foreach d, self cmssw DataFormats/Common DataFormats/HLTReco DataFormats/L1GlobalMuonTrigger DataFormats/L1Trigger DataFormats/MuonReco DataFormats/MuonSeed DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/TrajectorySeed DataFormats/BeamSpot FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities HLTrigger/HLTcore RecoMuon/MuonIsolation L1Trigger/CSCTrackFinder TrackingTools/PatternTools TrackingTools/TransientTrack MagneticField/Engine MagneticField/Records,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerMuon
HLTriggerMuon_CLASS := LIBRARY
HLTrigger/Muon_relbigobj+=HLTriggerMuon
endif
ifeq ($(strip $(RecoTauTag/TauTagTools)),)
RecoTauTagTauTagTools := self/RecoTauTag/TauTagTools
RecoTauTag/TauTagTools := RecoTauTagTauTagTools
RecoTauTagTauTagTools_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoTauTagTauTagTools_EX_USE := $(foreach d, self cmssw DataFormats/Math DataFormats/TauReco DataFormats/Candidate FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager PhysicsTools/IsolationUtils PhysicsTools/MVAComputer TrackingTools/GeomPropagators TrackingTools/TransientTrack RecoVertex/VertexPrimitives DataFormats/HepMCCandidate root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoTauTagTauTagTools_EX_LIB   := RecoTauTagTauTagTools
ALL_EXTERNAL_PRODS += RecoTauTagTauTagTools
RecoTauTagTauTagTools_CLASS := LIBRARY
RecoTauTag/TauTagTools_relbigobj+=RecoTauTagTauTagTools
endif
ifeq ($(strip $(RecoHI/HiCentralityAlgos)),)
src_RecoHI_HiCentralityAlgos := self/RecoHI/HiCentralityAlgos
RecoHI/HiCentralityAlgos  := src_RecoHI_HiCentralityAlgos
src_RecoHI_HiCentralityAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
src_RecoHI_HiCentralityAlgos_EX_USE := $(foreach d, DataFormats/HeavyIonEvent FWCore/Framework self DataFormats/VertexReco cmssw Geometry/CaloGeometry DataFormats/HcalRecHit CondCore/DBOutputService CondFormats/DataRecord root FWCore/PluginManager Geometry/TrackerGeometryBuilder DataFormats/Common CondCore/DBCommon DataFormats/Candidate CommonTools/UtilAlgos CondFormats/HIObjects DataFormats/TrackReco DataFormats/TrackerRecHit2D CondCore/PopCon DataFormats/TrackingRecHit FWCore/Utilities FWCore/ParameterSet,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += src_RecoHI_HiCentralityAlgos
endif

ifeq ($(strip $(Validation/TrackerRecHits)),)
ValidationTrackerRecHits := self/Validation/TrackerRecHits
Validation/TrackerRecHits := ValidationTrackerRecHits
ValidationTrackerRecHits_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ValidationTrackerRecHits_EX_USE := $(foreach d, self cmssw FWCore/Framework DQMServices/Core SimDataFormats/TrackerDigiSimLink SimTracker/TrackerHitAssociation CommonTools/TriggerUtils DQM/SiStripCommon CalibTracker/Records CalibFormats/SiStripObjects Geometry/TrackerGeometryBuilder Geometry/Records boost root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += ValidationTrackerRecHits
ValidationTrackerRecHits_CLASS := LIBRARY
Validation/TrackerRecHits_relbigobj+=ValidationTrackerRecHits
endif
ifeq ($(strip $(HLTrigger/Egamma)),)
HLTriggerEgamma := self/HLTrigger/Egamma
HLTrigger/Egamma := HLTriggerEgamma
HLTriggerEgamma_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerEgamma_EX_USE := $(foreach d, self cmssw DataFormats/Candidate DataFormats/Common DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/HLTReco DataFormats/JetReco DataFormats/L1Trigger DataFormats/Math DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/TrajectorySeed FWCore/Framework FWCore/MessageLogger FWCore/PluginManager HLTrigger/HLTcore CondFormats/L1TObjects CondFormats/DataRecord RecoEgamma/EgammaTools MagneticField/Engine MagneticField/Records RecoEcal/EgammaCoreTools RecoEgamma/EgammaElectronAlgos,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerEgamma
HLTriggerEgamma_CLASS := LIBRARY
HLTrigger/Egamma_relbigobj+=HLTriggerEgamma
endif
ifeq ($(strip $(HLTriggerOffline/Exotica)),)
HLTriggerOfflineExotica := self/HLTriggerOffline/Exotica
HLTriggerOffline/Exotica := HLTriggerOfflineExotica
HLTriggerOfflineExotica_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerOfflineExotica_EX_USE := $(foreach d, self cmssw root FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/MessageLogger FWCore/Utilities HLTrigger/HLTcore CommonTools/Utils DQMServices/Core DataFormats/MuonReco DataFormats/EgammaCandidates DataFormats/METReco DataFormats/TauReco DataFormats/TrackReco DataFormats/HepMCCandidate hepmc,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerOfflineExotica
HLTriggerOfflineExotica_CLASS := LIBRARY
HLTriggerOffline/Exotica_relbigobj+=HLTriggerOfflineExotica
endif
ifeq ($(strip $(SimG4CMS/Calo)),)
SimG4CMSCalo := self/SimG4CMS/Calo
SimG4CMS/Calo := SimG4CMSCalo
SimG4CMSCalo_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CMSCalo_EX_USE := $(foreach d, self cmssw FWCore/PluginManager SimGeneral/GFlash SimG4Core/SensitiveDetector SimG4Core/Notification DataFormats/EcalDetId DataFormats/HcalDetId DataFormats/Math DataFormats/HcalCalibObjects SimDataFormats/SimHitMaker SimDataFormats/CaloHit SimDataFormats/CaloTest Geometry/HcalCommonData Geometry/EcalCommonData DetectorDescription/Core FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry CommonTools/UtilAlgos boost clhep geant4core hepmc root rootmath,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimG4CMSCalo_EX_LIB   := SimG4CMSCalo
ALL_EXTERNAL_PRODS += SimG4CMSCalo
SimG4CMSCalo_CLASS := LIBRARY
SimG4CMS/Calo_relbigobj+=SimG4CMSCalo
endif
ifeq ($(strip $(RecoLocalTrackerSiStripClusterizerPlugins)),)
RecoLocalTrackerSiStripClusterizerPlugins := self/src/RecoLocalTracker/SiStripClusterizer/plugins
RecoLocalTrackerSiStripClusterizerPlugins_LOC_USE := self cmssw RecoLocalTracker/SiStripClusterizer RecoLocalTracker/SiStripZeroSuppression
RecoLocalTracker/SiStripClusterizer_relbigobj+=RecoLocalTrackerSiStripClusterizerPlugins
endif
ifeq ($(strip $(HLTrigger/HLTcore)),)
HLTriggerHLTcore := self/HLTrigger/HLTcore
HLTrigger/HLTcore := HLTriggerHLTcore
HLTriggerHLTcore_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerHLTcore_EX_USE := $(foreach d, self cmssw tbb boost DataFormats/Common FWCore/Framework FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Services FWCore/MessageLogger L1Trigger/GlobalTriggerAnalyzer CondCore/DBOutputService CondFormats/HLTObjects CondFormats/DataRecord,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
HLTriggerHLTcore_EX_LIB   := HLTriggerHLTcore
ALL_EXTERNAL_PRODS += HLTriggerHLTcore
HLTriggerHLTcore_CLASS := LIBRARY
HLTrigger/HLTcore_relbigobj+=HLTriggerHLTcore
endif
ifeq ($(strip $(PhysicsTools/JetMCAlgos)),)
PhysicsToolsJetMCAlgos := self/PhysicsTools/JetMCAlgos
PhysicsTools/JetMCAlgos := PhysicsToolsJetMCAlgos
PhysicsToolsJetMCAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
PhysicsToolsJetMCAlgos_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet PhysicsTools/JetMCUtils,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsJetMCAlgos_EX_LIB   := PhysicsToolsJetMCAlgos
ALL_EXTERNAL_PRODS += PhysicsToolsJetMCAlgos
PhysicsToolsJetMCAlgos_CLASS := LIBRARY
PhysicsTools/JetMCAlgos_relbigobj+=PhysicsToolsJetMCAlgos
endif
ifeq ($(strip $(L1TriggerGlobalCaloTriggerPlugins)),)
L1TriggerGlobalCaloTriggerPlugins := self/src/L1Trigger/GlobalCaloTrigger/plugins
L1TriggerGlobalCaloTriggerPlugins_LOC_USE := self cmssw L1Trigger/GlobalCaloTrigger root CommonTools/UtilAlgos
L1Trigger/GlobalCaloTrigger_relbigobj+=L1TriggerGlobalCaloTriggerPlugins
endif
ifeq ($(strip $(PhysicsTools/FWLite)),)
PhysicsToolsFWLite := self/PhysicsTools/FWLite
PhysicsTools/FWLite := PhysicsToolsFWLite
PhysicsToolsFWLite_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
PhysicsToolsFWLite_EX_USE := $(foreach d, self cmssw boost rootcore roothistmatrix CommonTools/Utils DataFormats/FWLite DataFormats/MuonReco,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsFWLite_LCGDICTS  := x 
PhysicsToolsFWLite_EX_LIB   := PhysicsToolsFWLite
ALL_EXTERNAL_PRODS += PhysicsToolsFWLite
PhysicsToolsFWLite_CLASS := LIBRARY
PhysicsTools/FWLite_relbigobj+=PhysicsToolsFWLite
endif
ifeq ($(strip $(GeometryEcalTestBeamPlugins)),)
GeometryEcalTestBeamPlugins := self/src/Geometry/EcalTestBeam/plugins
GeometryEcalTestBeamPlugins_LOC_USE := self cmssw DetectorDescription/Algorithm DetectorDescription/Base DetectorDescription/Core DetectorDescription/ExprAlgo FWCore/Framework FWCore/MessageLogger FWCore/Utilities FWCore/PluginManager Geometry/CaloGeometry Geometry/EcalCommonData Geometry/Records SimDataFormats/EcalTestBeam Geometry/EcalTestBeam boost clhep
Geometry/EcalTestBeam_relbigobj+=GeometryEcalTestBeamPlugins
endif
ifeq ($(strip $(SimG4CMS/Tracker)),)
SimG4CMSTracker := self/SimG4CMS/Tracker
SimG4CMS/Tracker := SimG4CMSTracker
SimG4CMSTracker_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CMSTracker_EX_USE := $(foreach d, self cmssw FWCore/ParameterSet SimG4Core/SensitiveDetector SimG4Core/Notification Geometry/TrackerNumberingBuilder boost geant4core SimDataFormats/SimHitMaker SimG4Core/Application,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimG4CMSTracker_EX_LIB   := SimG4CMSTracker
ALL_EXTERNAL_PRODS += SimG4CMSTracker
SimG4CMSTracker_CLASS := LIBRARY
SimG4CMS/Tracker_relbigobj+=SimG4CMSTracker
endif
ifeq ($(strip $(CommonTools/CandAlgos)),)
CommonToolsCandAlgos := self/CommonTools/CandAlgos
CommonTools/CandAlgos := CommonToolsCandAlgos
CommonToolsCandAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CommonToolsCandAlgos_EX_USE := $(foreach d, self cmssw SimGeneral/HepPDTRecord FWCore/Framework FWCore/ParameterSet,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CommonToolsCandAlgos_EX_LIB   := CommonToolsCandAlgos
ALL_EXTERNAL_PRODS += CommonToolsCandAlgos
CommonToolsCandAlgos_CLASS := LIBRARY
CommonTools/CandAlgos_relbigobj+=CommonToolsCandAlgos
endif
ifeq ($(strip $(RecoPixelVertexingPixelTripletsPlugins)),)
RecoPixelVertexingPixelTripletsPlugins := self/src/RecoPixelVertexing/PixelTriplets/plugins
RecoPixelVertexingPixelTripletsPlugins_LOC_FLAGS_CXXFLAGS   := -Ofast -fno-math-errno
RecoPixelVertexingPixelTripletsPlugins_LOC_USE := self cmssw RecoTracker/TkTrackingRegions RecoPixelVertexing/PixelTriplets RecoTracker/TkSeedingLayers
RecoPixelVertexing/PixelTriplets_relbigobj+=RecoPixelVertexingPixelTripletsPlugins
endif
ifeq ($(strip $(Fireworks/Tracks)),)
FireworksTracks := self/Fireworks/Tracks
Fireworks/Tracks := FireworksTracks
FireworksTracks_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FireworksTracks_EX_USE := $(foreach d, self cmssw DataFormats/CaloTowers DataFormats/EcalDetId DataFormats/GsfTrackReco DataFormats/HcalDetId DataFormats/MuonDetId DataFormats/SiPixelCluster DataFormats/SiPixelDetId DataFormats/SiStripCluster DataFormats/SiStripDetId DataFormats/TrackReco DataFormats/TrackerRecHit2D DataFormats/TrackingRecHit Fireworks/Core rootmath rootphysics,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FireworksTracks_EX_LIB   := FireworksTracks
ALL_EXTERNAL_PRODS += FireworksTracks
FireworksTracks_CLASS := LIBRARY
Fireworks/Tracks_relbigobj+=FireworksTracks
endif
ifeq ($(strip $(L1TriggerL1TCalorimeterPlugins)),)
L1TriggerL1TCalorimeterPlugins := self/src/L1Trigger/L1TCalorimeter/plugins
L1TriggerL1TCalorimeterPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/Utilities FWCore/ServiceRegistry CommonTools/UtilAlgos DataFormats/EcalDigi DataFormats/EcalDetId DataFormats/HcalDigi DataFormats/HcalDetId CalibFormats/CaloTPG CalibCalorimetry/EcalTPGTools DataFormats/L1Trigger DataFormats/L1CaloTrigger DataFormats/L1TCalorimeter DataFormats/JetReco DataFormats/METReco CondFormats/L1TObjects CondFormats/DataRecord L1Trigger/L1TCalorimeter CondTools/L1Trigger
L1Trigger/L1TCalorimeter_relbigobj+=L1TriggerL1TCalorimeterPlugins
endif
ifeq ($(strip $(L1Trigger/L1TCalorimeter)),)
L1TriggerL1TCalorimeter := self/L1Trigger/L1TCalorimeter
L1Trigger/L1TCalorimeter := L1TriggerL1TCalorimeter
L1TriggerL1TCalorimeter_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
L1TriggerL1TCalorimeter_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/L1TCalorimeter DataFormats/L1GlobalCaloTrigger CondFormats/L1TObjects CondFormats/DataRecord,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TCalorimeter_EX_LIB   := L1TriggerL1TCalorimeter
ALL_EXTERNAL_PRODS += L1TriggerL1TCalorimeter
L1TriggerL1TCalorimeter_CLASS := LIBRARY
L1Trigger/L1TCalorimeter_relbigobj+=L1TriggerL1TCalorimeter
endif
ifeq ($(strip $(SimGeneralDataMixingModulePlugins)),)
SimGeneralDataMixingModulePlugins := self/src/SimGeneral/DataMixingModule/plugins
SimGeneralDataMixingModulePlugins_LOC_USE := self cmssw DataFormats/TrackerCommon CalibFormats/HcalObjects CondFormats/EcalObjects CondFormats/SiStripObjects CalibTracker/Records CalibFormats/SiStripObjects DataFormats/CSCDigi DataFormats/Common DataFormats/DTDigi DataFormats/EcalDigi DataFormats/EcalRecHit DataFormats/HcalDigi DataFormats/HcalRecHit DataFormats/Provenance DataFormats/RPCDigi DataFormats/SiPixelDigi DataFormats/SiStripDigi DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/ServiceRegistry FWCore/Utilities Mixing/Base SimTracker/SiStripDigitizer RecoLocalTracker/SiStripZeroSuppression SimCalorimetry/CaloSimAlgos SimCalorimetry/HcalSimAlgos SimCalorimetry/HcalSimProducers SimCalorimetry/EcalSimAlgos SimCalorimetry/EcalSimProducers SimDataFormats/PileupSummaryInfo SimDataFormats/CrossingFrame
SimGeneral/DataMixingModule_relbigobj+=SimGeneralDataMixingModulePlugins
endif
ifeq ($(strip $(RecoBTag/SoftLepton)),)
RecoBTagSoftLepton := self/RecoBTag/SoftLepton
RecoBTag/SoftLepton := RecoBTagSoftLepton
RecoBTagSoftLepton_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoBTagSoftLepton_EX_USE := $(foreach d, self cmssw FWCore/ParameterSet DataFormats/BTauReco RecoBTau/JetTagComputer CommonTools/Utils roottmva,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoBTagSoftLepton_EX_LIB   := RecoBTagSoftLepton
ALL_EXTERNAL_PRODS += RecoBTagSoftLepton
RecoBTagSoftLepton_CLASS := LIBRARY
RecoBTag/SoftLepton_relbigobj+=RecoBTagSoftLepton
endif
ifeq ($(strip $(RecoEgamma/EgammaPhotonProducers)),)
RecoEgammaEgammaPhotonProducers := self/RecoEgamma/EgammaPhotonProducers
RecoEgamma/EgammaPhotonProducers := RecoEgammaEgammaPhotonProducers
RecoEgammaEgammaPhotonProducers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoEgammaEgammaPhotonProducers_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet FWCore/PluginManager DataFormats/ParticleFlowCandidate DataFormats/EgammaCandidates DataFormats/TrajectorySeed DataFormats/Common DataFormats/TrackCandidate DataFormats/TrackReco DataFormats/EgammaTrackReco DataFormats/CaloRecHit DataFormats/Math Geometry/CaloGeometry Geometry/CaloTopology RecoEcal/EgammaCoreTools RecoEgamma/EgammaIsolationAlgos RecoEgamma/EgammaPhotonAlgos RecoEgamma/PhotonIdentification RecoEgamma/EgammaTools RecoTracker/MeasurementDet RecoTracker/CkfPattern RecoTracker/TrackProducer RecoVertex/KinematicFitPrimitives RecoVertex/KinematicFit DataFormats/HcalRecHit RecoCaloTools/Selectors clhep,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += RecoEgammaEgammaPhotonProducers
RecoEgammaEgammaPhotonProducers_CLASS := LIBRARY
RecoEgamma/EgammaPhotonProducers_relbigobj+=RecoEgammaEgammaPhotonProducers
endif
ifeq ($(strip $(FastSimulation/CaloHitMakers)),)
FastSimulationCaloHitMakers := self/FastSimulation/CaloHitMakers
FastSimulation/CaloHitMakers := FastSimulationCaloHitMakers
FastSimulationCaloHitMakers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FastSimulationCaloHitMakers_EX_USE := $(foreach d, self cmssw DataFormats/DetId DataFormats/EcalDetId DataFormats/HcalDetId DataFormats/Math SimG4CMS/Calo FastSimulation/CaloGeometryTools FastSimulation/CalorimeterProperties FastSimulation/Event FastSimulation/Utilities Geometry/CaloTopology Geometry/EcalAlgo FWCore/MessageLogger rootmath,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FastSimulationCaloHitMakers_EX_LIB   := FastSimulationCaloHitMakers
ALL_EXTERNAL_PRODS += FastSimulationCaloHitMakers
FastSimulationCaloHitMakers_CLASS := LIBRARY
FastSimulation/CaloHitMakers_relbigobj+=FastSimulationCaloHitMakers
endif
ifeq ($(strip $(CalibrationToolsPlugins)),)
CalibrationToolsPlugins := self/src/Calibration/Tools/plugins
CalibrationToolsPlugins_LOC_USE := self cmssw Calibration/Tools CommonTools/RecoAlgos DataFormats/Candidate DataFormats/Common DataFormats/DetId DataFormats/EcalDetId DataFormats/EcalRecHit DataFormats/EgammaCandidates DataFormats/GeometryVector DataFormats/GsfTrackReco DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities Geometry/CaloGeometry Geometry/CaloTopology CommonTools/UtilAlgos TrackingTools/PatternTools TrackingTools/TrajectoryState clhep rootcore rootmath
Calibration/Tools_relbigobj+=CalibrationToolsPlugins
endif
ifeq ($(strip $(JetMETCorrections/Modules)),)
JetMETCorrectionsModules := self/JetMETCorrections/Modules
JetMETCorrections/Modules := JetMETCorrectionsModules
JetMETCorrectionsModules_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
JetMETCorrectionsModules_EX_USE := $(foreach d, self cmssw CondCore/PluginSystem CondFormats/DataRecord CondFormats/JetMETObjects CondCore/DBCommon CondCore/DBOutputService CommonTools/Utils DataFormats/Common DataFormats/JetReco DataFormats/BTauReco FWCore/Framework FWCore/ParameterSet JetMETCorrections/Objects JetMETCorrections/Algorithms JetMETCorrections/JetCorrector boost,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
JetMETCorrectionsModules_EX_LIB   := JetMETCorrectionsModules
ALL_EXTERNAL_PRODS += JetMETCorrectionsModules
JetMETCorrectionsModules_CLASS := LIBRARY
JetMETCorrections/Modules_relbigobj+=JetMETCorrectionsModules
endif
ifeq ($(strip $(RecoEgammaExamplesPlugins)),)
RecoEgammaExamplesPlugins := self/src/RecoEgamma/Examples/plugins
RecoEgammaExamplesPlugins_LOC_USE := self cmssw RecoEgamma/Examples RecoEgamma/EgammaElectronAlgos RecoEgamma/EgammaMCTools RecoEcal/EgammaCoreTools RecoTracker/TkDetLayers SimTracker/TrackAssociation Geometry/CaloGeometry Geometry/CaloTopology Geometry/CommonDetUnit Geometry/Records Geometry/TrackerGeometryBuilder MagneticField/Engine MagneticField/Records CommonTools/UtilAlgos TrackingTools/MaterialEffects TrackingTools/TrajectoryState FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/ServiceRegistry FWCore/Utilities DataFormats/BeamSpot DataFormats/CaloRecHit DataFormats/Common DataFormats/DetId DataFormats/EcalDetId DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/GeometryCommonDetAlgo DataFormats/GeometryVector DataFormats/GsfTrackReco DataFormats/JetReco DataFormats/Math DataFormats/PatCandidates DataFormats/SiPixelDetId DataFormats/SiStripDetId DataFormats/TrackerRecHit2D DataFormats/TrackingRecHit DataFormats/TrackReco DataFormats/TrajectoryState DataFormats/VertexReco SimDataFormats/CrossingFrame SimDataFormats/GeneratorProducts SimDataFormats/Track SimDataFormats/TrackingAnalysis SimDataFormats/Vertex
RecoEgamma/Examples_relbigobj+=RecoEgammaExamplesPlugins
endif
ifeq ($(strip $(CommonTools/PileupAlgos)),)
CommonToolsPileupAlgos := self/CommonTools/PileupAlgos
CommonTools/PileupAlgos := CommonToolsPileupAlgos
CommonToolsPileupAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CommonToolsPileupAlgos_EX_USE := $(foreach d, self cmssw DataFormats/Common DataFormats/ParticleFlowCandidate FWCore/ParameterSet root rootcore fastjet,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CommonToolsPileupAlgos_EX_LIB   := CommonToolsPileupAlgos
ALL_EXTERNAL_PRODS += CommonToolsPileupAlgos
CommonToolsPileupAlgos_CLASS := LIBRARY
CommonTools/PileupAlgos_relbigobj+=CommonToolsPileupAlgos
endif
ifeq ($(strip $(FastSimulation/ShowerDevelopment)),)
FastSimulationShowerDevelopment := self/FastSimulation/ShowerDevelopment
FastSimulation/ShowerDevelopment := FastSimulationShowerDevelopment
FastSimulationShowerDevelopment_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FastSimulationShowerDevelopment_EX_USE := $(foreach d, self cmssw DataFormats/Math FWCore/MessageLogger FWCore/ParameterSet FastSimulation/CaloHitMakers FastSimulation/CalorimeterProperties FastSimulation/Particle FastSimulation/Utilities DQMServices/Core clhep,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FastSimulationShowerDevelopment_EX_LIB   := FastSimulationShowerDevelopment
ALL_EXTERNAL_PRODS += FastSimulationShowerDevelopment
FastSimulationShowerDevelopment_CLASS := LIBRARY
FastSimulation/ShowerDevelopment_relbigobj+=FastSimulationShowerDevelopment
endif
ifeq ($(strip $(RecoVertexNuclearInteractionProducerPlugins)),)
RecoVertexNuclearInteractionProducerPlugins := self/src/RecoVertex/NuclearInteractionProducer/plugins
RecoVertexNuclearInteractionProducerPlugins_LOC_USE := self cmssw TrackingTools/Records RecoTracker/NuclearSeedGenerator RecoVertex/NuclearInteractionProducer
RecoVertex/NuclearInteractionProducer_relbigobj+=RecoVertexNuclearInteractionProducerPlugins
endif
ifeq ($(strip $(Simulation)),)
Simulation:=Simulation
Simulation_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ALL_BIGPRODS += Simulation
Simulation_SUBSYSTEM:=BigProducts
Simulation_LOC_FLAGS_REM_CXXFLAGS   := -Werror=unused-variable
Simulation_LOC_FLAGS_BIGOBJ_CXXFLAGS   := -fno-lto
Simulation_LOC_FLAGS_REM_BIGOBJ_CXXFLAGS   := -flto
Simulation_PACKAGES := SimG4CMS/Calo SimG4CMS/FP420 SimG4CMS/Forward SimG4CMS/Muon SimG4CMS/Tracker SimG4Core/Application SimG4Core/CustomPhysics SimG4Core/Generators SimG4Core/Geometry SimG4Core/HelpfulWatchers SimG4Core/MagneticField SimG4Core/Notification SimG4Core/Physics SimG4Core/PhysicsLists SimG4Core/SensitiveDetector SimRomanPot/SimFP420 Validation/HcalHits Validation/EcalHits SimDataFormats/ValidationFormats geant4static
Simulation_DROP_DEP := geant4core
Simulation_LOC_USE := self cmssw SimG4CMS/Calo SimG4CMS/FP420 SimG4CMS/Forward SimG4CMS/Muon SimG4CMS/Tracker SimG4Core/Application SimG4Core/CustomPhysics SimG4Core/Generators SimG4Core/Geometry SimG4Core/HelpfulWatchers SimG4Core/MagneticField SimG4Core/Notification SimG4Core/Physics SimG4Core/PhysicsLists SimG4Core/SensitiveDetector SimRomanPot/SimFP420 Validation/HcalHits Validation/EcalHits SimDataFormats/ValidationFormats geant4static
Simulation_INIT_FUNC += $$(eval $$(call BigProductRule,Simulation,src/BigProducts/Simulation,src_BigProducts_Simulation))
endif
ifeq ($(strip $(RecoBTag/Skimming)),)
RecoBTagSkimming := self/RecoBTag/Skimming
RecoBTag/Skimming := RecoBTagSkimming
RecoBTagSkimming_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoBTagSkimming_EX_USE := $(foreach d, self cmssw DataFormats/Common DataFormats/EgammaCandidates DataFormats/JetReco DataFormats/MuonReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += RecoBTagSkimming
RecoBTagSkimming_CLASS := LIBRARY
RecoBTag/Skimming_relbigobj+=RecoBTagSkimming
endif
ifeq ($(strip $(PhysicsTools/TagAndProbe)),)
PhysicsToolsTagAndProbe := self/PhysicsTools/TagAndProbe
PhysicsTools/TagAndProbe := PhysicsToolsTagAndProbe
PhysicsToolsTagAndProbe_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
PhysicsToolsTagAndProbe_EX_USE := $(foreach d, self cmssw roofit FWCore/MessageLogger FWCore/PluginManager FWCore/ParameterSet DataFormats/TrackReco DataFormats/EgammaReco DataFormats/METReco DataFormats/Math DataFormats/RecoCandidate DataFormats/Candidate DataFormats/Common CommonTools/Utils CommonTools/UtilAlgos PhysicsTools/UtilAlgos,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsTagAndProbe_ROOTDICTS  := y 
PhysicsToolsTagAndProbe_EX_LIB   := PhysicsToolsTagAndProbe
ALL_EXTERNAL_PRODS += PhysicsToolsTagAndProbe
PhysicsToolsTagAndProbe_CLASS := LIBRARY
PhysicsTools/TagAndProbe_relbigobj+=PhysicsToolsTagAndProbe
endif
ifeq ($(strip $(AlignmentOfflinevalidationPlugins)),)
AlignmentOfflinevalidationPlugins := self/src/Alignment/OfflineValidation/plugins
AlignmentOfflinevalidationPlugins_LOC_USE := self cmssw FWCore/MessageLogger TrackPropagation/SteppingHelixPropagator Alignment/CommonAlignment Alignment/TrackerAlignment CondCore/DBOutputService CondFormats/Alignment DataFormats/TrackReco DataFormats/MuonReco FWCore/PluginManager FWCore/Framework FWCore/Utilities FWCore/ParameterSet FWCore/ServiceRegistry Geometry/TrackerGeometryBuilder CommonTools/TrackerMap CommonTools/UtilAlgos CommonTools/Utils RecoMuon/TrackingTools TrackingTools/TransientTrack SimDataFormats/Track SimDataFormats/GeneratorProducts SimTracker/Records SimTracker/TrackAssociation DataFormats/DetId DataFormats/MuonDetId Geometry/CommonDetUnit Geometry/CommonTopologies Geometry/Records Geometry/TrackerNumberingBuilder DataFormats/SiStripDetId DataFormats/SiPixelDetId DataFormats/TrackerRecHit2D DataFormats/TrackingRecHit TrackingTools/TrackFitters TrackingTools/TrajectoryState TrackingTools/IPTools DataFormats/TrajectorySeed DataFormats/VertexReco SimDataFormats/Vertex DataFormats/BeamSpot RecoVertex/PrimaryVertexProducer MagneticField/Records DQM/SiStripCommon DQMServices/Core clhep root TrackingTools/TrackAssociator Geometry/CaloGeometry Alignment/OfflineValidation
Alignment/OfflineValidation_relbigobj+=AlignmentOfflinevalidationPlugins
endif
ifeq ($(strip $(HLTriggerOffline/Higgs)),)
HLTriggerOfflineHiggs := self/HLTriggerOffline/Higgs
HLTriggerOffline/Higgs := HLTriggerOfflineHiggs
HLTriggerOfflineHiggs_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerOfflineHiggs_EX_USE := $(foreach d, self cmssw root FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/MessageLogger FWCore/Utilities HLTrigger/HLTcore CommonTools/Utils DQMServices/Core DataFormats/MuonReco DataFormats/EgammaCandidates DataFormats/METReco DataFormats/TauReco DataFormats/TrackReco DataFormats/HepMCCandidate hepmc,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerOfflineHiggs
HLTriggerOfflineHiggs_CLASS := LIBRARY
HLTriggerOffline/Higgs_relbigobj+=HLTriggerOfflineHiggs
endif
ifeq ($(strip $(ValidationRecoJetsPlugins)),)
ValidationRecoJetsPlugins := self/src/Validation/RecoJets/plugins
ValidationRecoJetsPlugins_LOC_USE := self cmssw DQMServices/Core FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry CommonTools/UtilAlgos DataFormats/EgammaCandidates RecoJets/JetAlgorithms RecoJets/JetProducers Validation/RecoJets DataFormats/JetReco DataFormats/PatCandidates root
Validation/RecoJets_relbigobj+=ValidationRecoJetsPlugins
endif
ifeq ($(strip $(RecoHIHiMuonAlgosPlugins)),)
RecoHIHiMuonAlgosPlugins := self/src/RecoHI/HiMuonAlgos/plugins
RecoHIHiMuonAlgosPlugins_LOC_USE := self cmssw boost FWCore/Framework FWCore/PluginManager FWCore/ParameterSet Geometry/Records Geometry/TrackerGeometryBuilder RecoTracker/Record MagneticField/Records MagneticField/Engine DataFormats/VertexReco DataFormats/Common TrackingTools/TrajectoryState TrackingTools/GeomPropagators TrackingTools/DetLayers DataFormats/TrajectorySeed TrackingTools/MeasurementDet RecoTracker/MeasurementDet TrackingTools/TrajectoryFiltering TrackingTools/TrajectoryCleaning TrackingTools/MaterialEffects TrackingTools/TrackFitters RecoVertex/KalmanVertexFit RecoVertex/VertexPrimitives TrackingTools/TransientTrack HLTrigger/HLTcore RecoMuon/GlobalTrackingTools RecoMuon/TrackingTools hepmc RecoHI/HiMuonAlgos
RecoHI/HiMuonAlgos_relbigobj+=RecoHIHiMuonAlgosPlugins
endif
ifeq ($(strip $(EventFilter/SiPixelRawToDigi)),)
EventFilterSiPixelRawToDigi := self/EventFilter/SiPixelRawToDigi
EventFilter/SiPixelRawToDigi := EventFilterSiPixelRawToDigi
EventFilterSiPixelRawToDigi_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
EventFilterSiPixelRawToDigi_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/FEDRawData DataFormats/SiPixelDigi DataFormats/SiPixelRawData CondFormats/SiPixelObjects DataFormats/Candidate CondFormats/DataRecord root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
EventFilterSiPixelRawToDigi_EX_LIB   := EventFilterSiPixelRawToDigi
ALL_EXTERNAL_PRODS += EventFilterSiPixelRawToDigi
EventFilterSiPixelRawToDigi_CLASS := LIBRARY
EventFilter/SiPixelRawToDigi_relbigobj+=EventFilterSiPixelRawToDigi
endif
ifeq ($(strip $(DQMOffline/Muon)),)
DQMOfflineMuon := self/DQMOffline/Muon
DQMOffline/Muon := DQMOfflineMuon
DQMOfflineMuon_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMOfflineMuon_EX_USE := $(foreach d, self cmssw Geometry/CSCGeometry FWCore/Framework DQMServices/Core DQMServices/Components FWCore/PluginManager DataFormats/MuonReco DataFormats/L1GlobalMuonTrigger DataFormats/FEDRawData RecoMuon/TrackingTools TrackingTools/TransientTrack DataFormats/CSCDigi DataFormats/CSCRecHit DataFormats/DTRecHit DataFormats/RPCDigi CondFormats/DTObjects CondFormats/CSCObjects CondFormats/DataRecord EventFilter/CSCRawToDigi CommonTools/TriggerUtils,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMOfflineMuon
DQMOfflineMuon_CLASS := LIBRARY
DQMOffline/Muon_relbigobj+=DQMOfflineMuon
endif
ifeq ($(strip $(AnalysisDataFormats/EWK)),)
AnalysisDataFormatsEWK := self/AnalysisDataFormats/EWK
AnalysisDataFormats/EWK := AnalysisDataFormatsEWK
AnalysisDataFormatsEWK_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
AnalysisDataFormatsEWK_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common DataFormats/Candidate DataFormats/JetReco DataFormats/METReco CommonTools/CandUtils CommonTools/UtilAlgos CommonTools/RecoAlgos clhep,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
AnalysisDataFormatsEWK_LCGDICTS  := x 
AnalysisDataFormatsEWK_EX_LIB   := AnalysisDataFormatsEWK
ALL_EXTERNAL_PRODS += AnalysisDataFormatsEWK
AnalysisDataFormatsEWK_CLASS := LIBRARY
AnalysisDataFormats/EWK_relbigobj+=AnalysisDataFormatsEWK
endif
ifeq ($(strip $(CalibCalorimetry/EcalTrivialCondModules)),)
CalibCalorimetryEcalTrivialCondModules := self/CalibCalorimetry/EcalTrivialCondModules
CalibCalorimetry/EcalTrivialCondModules := CalibCalorimetryEcalTrivialCondModules
CalibCalorimetryEcalTrivialCondModules_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CalibCalorimetryEcalTrivialCondModules_EX_USE := $(foreach d, self cmssw rootcore root boost FWCore/Framework FWCore/ParameterSet CondTools/Ecal SimG4CMS/Calo CondFormats/EcalObjects CondFormats/ESObjects CondFormats/DataRecord DataFormats/EcalDetId clhep,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += CalibCalorimetryEcalTrivialCondModules
CalibCalorimetryEcalTrivialCondModules_CLASS := LIBRARY
CalibCalorimetry/EcalTrivialCondModules_relbigobj+=CalibCalorimetryEcalTrivialCondModules
endif
ifeq ($(strip $(RecoLocalTracker/SiStripClusterizer)),)
RecoLocalTrackerSiStripClusterizer := self/RecoLocalTracker/SiStripClusterizer
RecoLocalTracker/SiStripClusterizer := RecoLocalTrackerSiStripClusterizer
RecoLocalTrackerSiStripClusterizer_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoLocalTrackerSiStripClusterizer_EX_USE := $(foreach d, self cmssw DataFormats/Common FWCore/Framework FWCore/ParameterSet DataFormats/SiStripDigi DataFormats/SiStripCluster DataFormats/SiStripDetId CondFormats/DataRecord CondFormats/SiStripObjects CalibFormats/SiStripObjects CalibTracker/Records EventFilter/SiStripRawToDigi,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoLocalTrackerSiStripClusterizer_EX_LIB   := RecoLocalTrackerSiStripClusterizer
ALL_EXTERNAL_PRODS += RecoLocalTrackerSiStripClusterizer
RecoLocalTrackerSiStripClusterizer_CLASS := LIBRARY
RecoLocalTracker/SiStripClusterizer_relbigobj+=RecoLocalTrackerSiStripClusterizer
endif
ifeq ($(strip $(RecoTauTag/HLTProducers)),)
RecoTauTagHLTProducers := self/RecoTauTag/HLTProducers
RecoTauTag/HLTProducers := RecoTauTagHLTProducers
RecoTauTagHLTProducers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoTauTagHLTProducers_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common DataFormats/BTauReco DataFormats/TauReco DataFormats/TrackReco DataFormats/Math DataFormats/Candidate DataFormats/JetReco DataFormats/GeometryVector DataFormats/CaloTowers DataFormats/DetId DataFormats/EcalDetId DataFormats/EcalRecHit DataFormats/EgammaReco Geometry/CaloGeometry Geometry/Records DataFormats/VertexReco DataFormats/L1Trigger DataFormats/HLTReco HLTrigger/HLTcore DataFormats/L1GlobalTrigger RecoPixelVertexing/PixelTrackFitting root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += RecoTauTagHLTProducers
RecoTauTagHLTProducers_CLASS := LIBRARY
RecoTauTag/HLTProducers_relbigobj+=RecoTauTagHLTProducers
endif
ifeq ($(strip $(RecoLocalCalo/EcalRecAlgos)),)
RecoLocalCaloEcalRecAlgos := self/RecoLocalCalo/EcalRecAlgos
RecoLocalCalo/EcalRecAlgos := RecoLocalCaloEcalRecAlgos
RecoLocalCaloEcalRecAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoLocalCaloEcalRecAlgos_LOC_FLAGS_CXXFLAGS   := -Ofast
RecoLocalCaloEcalRecAlgos_EX_USE := $(foreach d, self cmssw clhep DataFormats/EcalRecHit DataFormats/EcalDigi FWCore/MessageLogger FWCore/ParameterSet FWCore/Framework CondFormats/ESObjects CondFormats/EcalObjects CondFormats/DataRecord vdt_headers root rootminuit eigen,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoLocalCaloEcalRecAlgos_EX_LIB   := RecoLocalCaloEcalRecAlgos
ALL_EXTERNAL_PRODS += RecoLocalCaloEcalRecAlgos
RecoLocalCaloEcalRecAlgos_CLASS := LIBRARY
RecoLocalCalo/EcalRecAlgos_relbigobj+=RecoLocalCaloEcalRecAlgos
endif
ifeq ($(strip $(Validation/Performance)),)
ValidationPerformance := self/Validation/Performance
Validation/Performance := ValidationPerformance
ValidationPerformance_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ValidationPerformance_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet DataFormats/Common DataFormats/HLTReco DQMServices/Core root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += ValidationPerformance
ValidationPerformance_CLASS := LIBRARY
Validation/Performance_relbigobj+=ValidationPerformance
endif
ifeq ($(strip $(RecoLocalTrackerSiStripRecHitConverterPlugins)),)
RecoLocalTrackerSiStripRecHitConverterPlugins := self/src/RecoLocalTracker/SiStripRecHitConverter/plugins
RecoLocalTrackerSiStripRecHitConverterPlugins_LOC_USE := self cmssw MagneticField/Engine RecoLocalTracker/SiStripRecHitConverter CalibTracker/Records
RecoLocalTracker/SiStripRecHitConverter_relbigobj+=RecoLocalTrackerSiStripRecHitConverterPlugins
endif
ifeq ($(strip $(DQMDataScoutingPlugins)),)
DQMDataScoutingPlugins := self/src/DQM/DataScouting/plugins
DQMDataScoutingPlugins_LOC_USE := self cmssw DQM/DataScouting DQMServices/Components DQMServices/Core DataFormats/TrackingRecHit DataFormats/CSCRecHit DataFormats/TrackReco
DQM/DataScouting_relbigobj+=DQMDataScoutingPlugins
endif
ifeq ($(strip $(HLTriggerOffline/Btag)),)
HLTriggerOfflineBtag := self/HLTriggerOffline/Btag
HLTriggerOffline/Btag := HLTriggerOfflineBtag
HLTriggerOfflineBtag_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerOfflineBtag_EX_USE := $(foreach d, self cmssw DQMOffline/RecoB HLTrigger/HLTcore,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerOfflineBtag
HLTriggerOfflineBtag_CLASS := LIBRARY
HLTriggerOffline/Btag_relbigobj+=HLTriggerOfflineBtag
endif
ifeq ($(strip $(JetMETCorrectionsModulesPlugins)),)
JetMETCorrectionsModulesPlugins := self/src/JetMETCorrections/Modules/plugins
JetMETCorrectionsModulesPlugins_LOC_USE := self cmssw CondCore/PluginSystem CondFormats/DataRecord CondFormats/JetMETObjects CondCore/DBCommon CondCore/DBOutputService DataFormats/JetReco FWCore/Framework FWCore/PluginManager FWCore/ServiceRegistry JetMETCorrections/Algorithms JetMETCorrections/Objects JetMETCorrections/Modules PhysicsTools/UtilAlgos
JetMETCorrections/Modules_relbigobj+=JetMETCorrectionsModulesPlugins
endif
ifeq ($(strip $(SimG4Core/Application)),)
SimG4CoreApplication := self/SimG4Core/Application
SimG4Core/Application := SimG4CoreApplication
SimG4CoreApplication_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CoreApplication_EX_USE := $(foreach d, self cmssw DataFormats/Common DataFormats/Math SimDataFormats/GeneratorProducts SimDataFormats/Forward SimDataFormats/Track SimDataFormats/Vertex SimG4Core/Generators SimG4Core/Geometry SimG4Core/MagneticField SimG4Core/Notification SimG4Core/Physics SimG4Core/SensitiveDetector SimG4Core/Watcher SimGeneral/HepPDTRecord SimGeneral/GFlash FWCore/ParameterSet FWCore/PluginManager FWCore/Framework FWCore/Utilities MagneticField/Engine MagneticField/Records clhep xerces-c geant4core hepmc heppdt,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimG4CoreApplication_EX_LIB   := SimG4CoreApplication
ALL_EXTERNAL_PRODS += SimG4CoreApplication
SimG4CoreApplication_CLASS := LIBRARY
SimG4Core/Application_relbigobj+=SimG4CoreApplication
endif
ifeq ($(strip $(RecoParticleFlowPFProducerPlugins)),)
RecoParticleFlowPFProducerPlugins := self/src/RecoParticleFlow/PFProducer/plugins
RecoParticleFlowPFProducerPlugins_LOC_USE := self cmssw CondFormats/DataRecord CondFormats/PhysicsToolsObjects DataFormats/CaloRecHit DataFormats/Common DataFormats/EgammaReco DataFormats/EgammaTrackReco DataFormats/GsfTrackReco DataFormats/MuonReco DataFormats/ParticleFlowCandidate DataFormats/ParticleFlowReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities RecoParticleFlow/PFClusterTools RecoParticleFlow/PFProducer RecoEcal/EgammaCoreTools Geometry/CaloTopology RecoEgamma/EgammaIsolationAlgos RecoEgamma/PhotonIdentification
RecoParticleFlow/PFProducer_relbigobj+=RecoParticleFlowPFProducerPlugins
endif
ifeq ($(strip $(RecoParticleFlowPFProducerPlugins_importers)),)
RecoParticleFlowPFProducerPlugins_importers := self/src/RecoParticleFlow/PFProducer/plugins
RecoParticleFlowPFProducerPlugins_importers_LOC_USE := self cmssw CondFormats/DataRecord CondFormats/PhysicsToolsObjects DataFormats/CaloRecHit DataFormats/Common DataFormats/EgammaReco DataFormats/EgammaTrackReco DataFormats/GsfTrackReco DataFormats/MuonReco DataFormats/ParticleFlowCandidate DataFormats/ParticleFlowReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities RecoParticleFlow/PFClusterTools RecoParticleFlow/PFProducer RecoEcal/EgammaCoreTools Geometry/CaloTopology RecoEgamma/EgammaIsolationAlgos RecoEgamma/PhotonIdentification
RecoParticleFlow/PFProducer_relbigobj+=RecoParticleFlowPFProducerPlugins_importers
endif
ifeq ($(strip $(RecoParticleFlowPFProducerPlugins_linkers)),)
RecoParticleFlowPFProducerPlugins_linkers := self/src/RecoParticleFlow/PFProducer/plugins
RecoParticleFlowPFProducerPlugins_linkers_LOC_USE := self cmssw CondFormats/DataRecord CondFormats/PhysicsToolsObjects DataFormats/CaloRecHit DataFormats/Common DataFormats/EgammaReco DataFormats/EgammaTrackReco DataFormats/GsfTrackReco DataFormats/MuonReco DataFormats/ParticleFlowCandidate DataFormats/ParticleFlowReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities RecoParticleFlow/PFClusterTools RecoParticleFlow/PFProducer RecoEcal/EgammaCoreTools Geometry/CaloTopology RecoEgamma/EgammaIsolationAlgos RecoEgamma/PhotonIdentification
RecoParticleFlow/PFProducer_relbigobj+=RecoParticleFlowPFProducerPlugins_linkers
endif
ifeq ($(strip $(RecoParticleFlowPFProducerPlugins_kdtrees)),)
RecoParticleFlowPFProducerPlugins_kdtrees := self/src/RecoParticleFlow/PFProducer/plugins
RecoParticleFlowPFProducerPlugins_kdtrees_LOC_USE := self cmssw CondFormats/DataRecord CondFormats/PhysicsToolsObjects DataFormats/CaloRecHit DataFormats/Common DataFormats/EgammaReco DataFormats/EgammaTrackReco DataFormats/GsfTrackReco DataFormats/MuonReco DataFormats/ParticleFlowCandidate DataFormats/ParticleFlowReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities RecoParticleFlow/PFClusterTools RecoParticleFlow/PFProducer RecoEcal/EgammaCoreTools Geometry/CaloTopology RecoEgamma/EgammaIsolationAlgos RecoEgamma/PhotonIdentification
RecoParticleFlow/PFProducer_relbigobj+=RecoParticleFlowPFProducerPlugins_kdtrees
endif
ifeq ($(strip $(RecoVertex/AdaptiveVertexFinder)),)
RecoVertexAdaptiveVertexFinder := self/RecoVertex/AdaptiveVertexFinder
RecoVertex/AdaptiveVertexFinder := RecoVertexAdaptiveVertexFinder
RecoVertexAdaptiveVertexFinder_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoVertexAdaptiveVertexFinder_EX_USE := $(foreach d, self cmssw RecoVertex/KalmanVertexFit RecoVertex/AdaptiveVertexFit RecoVertex/VertexPrimitives TrackingTools/IPTools RecoVertex/VertexTools,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoVertexAdaptiveVertexFinder_EX_LIB   := RecoVertexAdaptiveVertexFinder
ALL_EXTERNAL_PRODS += RecoVertexAdaptiveVertexFinder
RecoVertexAdaptiveVertexFinder_CLASS := LIBRARY
RecoVertex/AdaptiveVertexFinder_relbigobj+=RecoVertexAdaptiveVertexFinder
endif
ifeq ($(strip $(RecoTracker/SpecialSeedGenerators)),)
RecoTrackerSpecialSeedGenerators := self/RecoTracker/SpecialSeedGenerators
RecoTracker/SpecialSeedGenerators := RecoTrackerSpecialSeedGenerators
RecoTrackerSpecialSeedGenerators_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoTrackerSpecialSeedGenerators_EX_USE := $(foreach d, self cmssw DataFormats/CLHEP DataFormats/Common DataFormats/GeometrySurface DataFormats/GeometryVector DataFormats/RecoCandidate DataFormats/SiStripDetId DataFormats/TrackerCommon DataFormats/TrackerRecHit2D DataFormats/DTRecHit DataFormats/CSCRecHit DataFormats/TrackingRecHit DataFormats/TrajectorySeed FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CommonDetUnit Geometry/TrackerGeometryBuilder MagneticField/Engine RecoPixelVertexing/PixelTriplets RecoTracker/Record RecoTracker/TkHitPairs RecoTracker/TkSeedGenerator RecoTracker/TkSeedingLayers RecoTracker/TkTrackingRegions RecoTracker/TransientTrackingRecHit TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/KalmanUpdators TrackingTools/Records TrackingTools/TrajectoryState TrackingTools/TransientTrackingRecHit TrackingTools/MaterialEffects CommonTools/Utils DataFormats/MuonReco TrackingTools/PatternTools TrackingTools/TrackRefitter,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += RecoTrackerSpecialSeedGenerators
RecoTrackerSpecialSeedGenerators_CLASS := LIBRARY
RecoTracker/SpecialSeedGenerators_relbigobj+=RecoTrackerSpecialSeedGenerators
endif
ifeq ($(strip $(MuonAnalysis/MomentumScaleCalibration)),)
MuonAnalysisMomentumScaleCalibration := self/MuonAnalysis/MomentumScaleCalibration
MuonAnalysis/MomentumScaleCalibration := MuonAnalysisMomentumScaleCalibration
MuonAnalysisMomentumScaleCalibration_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
MuonAnalysisMomentumScaleCalibration_EX_USE := $(foreach d, self cmssw hepmc heppdt clhep rootminuit roothistmatrix FWCore/Framework FWCore/Utilities FWCore/ParameterSet FWCore/PluginManager DataFormats/Candidate DataFormats/Common SimDataFormats/Track SimDataFormats/GeneratorProducts CondFormats/RecoMuonObjects DataFormats/PatCandidates PhysicsTools/TagAndProbe,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
MuonAnalysisMomentumScaleCalibration_ROOTDICTS  := y 
MuonAnalysisMomentumScaleCalibration_EX_LIB   := MuonAnalysisMomentumScaleCalibration
ALL_EXTERNAL_PRODS += MuonAnalysisMomentumScaleCalibration
MuonAnalysisMomentumScaleCalibration_CLASS := LIBRARY
MuonAnalysis/MomentumScaleCalibration_relbigobj+=MuonAnalysisMomentumScaleCalibration
endif
ifeq ($(strip $(RecoLocalTrackerSiStripZeroSuppressionPlugins)),)
RecoLocalTrackerSiStripZeroSuppressionPlugins := self/src/RecoLocalTracker/SiStripZeroSuppression/plugins
RecoLocalTrackerSiStripZeroSuppressionPlugins_LOC_USE := self cmssw RecoLocalTracker/SiStripZeroSuppression
RecoLocalTracker/SiStripZeroSuppression_relbigobj+=RecoLocalTrackerSiStripZeroSuppressionPlugins
endif
ifeq ($(strip $(CalibTracker/SiStripCommon)),)
CalibTrackerSiStripCommon := self/CalibTracker/SiStripCommon
CalibTracker/SiStripCommon := CalibTrackerSiStripCommon
CalibTrackerSiStripCommon_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CalibTrackerSiStripCommon_EX_USE := $(foreach d, self cmssw CondFormats/SiStripObjects DataFormats/Common DataFormats/SiStripDetId FWCore/Framework FWCore/MessageLogger FWCore/ServiceRegistry FWCore/Utilities CondFormats/DataRecord Geometry/TrackerGeometryBuilder Geometry/Records clhep,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CalibTrackerSiStripCommon_EX_LIB   := CalibTrackerSiStripCommon
ALL_EXTERNAL_PRODS += CalibTrackerSiStripCommon
CalibTrackerSiStripCommon_CLASS := LIBRARY
CalibTracker/SiStripCommon_relbigobj+=CalibTrackerSiStripCommon
endif
ifeq ($(strip $(SimG4CMSShowerLibraryProducerPlugins)),)
SimG4CMSShowerLibraryProducerPlugins := self/src/SimG4CMS/ShowerLibraryProducer/plugins
SimG4CMSShowerLibraryProducerPlugins_LOC_USE := self cmssw root FWCore/Framework FWCore/PluginManager FWCore/ParameterSet SimDataFormats/CaloHit SimG4CMS/ShowerLibraryProducer
SimG4CMS/ShowerLibraryProducer_relbigobj+=SimG4CMSShowerLibraryProducerPlugins
endif
ifeq ($(strip $(SimG4CMSHcalForwardLibWriter)),)
SimG4CMSHcalForwardLibWriter := self/src/SimG4CMS/ShowerLibraryProducer/plugins
SimG4CMSHcalForwardLibWriter_LOC_USE := self cmssw root FWCore/Framework FWCore/PluginManager FWCore/ParameterSet SimDataFormats/CaloHit SimG4CMS/ShowerLibraryProducer
SimG4CMS/ShowerLibraryProducer_relbigobj+=SimG4CMSHcalForwardLibWriter
endif
ifeq ($(strip $(HiggsAnalysis/Skimming)),)
HiggsAnalysisSkimming := self/HiggsAnalysis/Skimming
HiggsAnalysis/Skimming := HiggsAnalysisSkimming
HiggsAnalysisSkimming_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HiggsAnalysisSkimming_EX_USE := $(foreach d, self cmssw DataFormats/Common DataFormats/CLHEP FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities Geometry/Records SimDataFormats/GeneratorProducts DataFormats/EgammaCandidates DataFormats/TrackReco DataFormats/JetReco DataFormats/BTauReco DataFormats/MuonReco clhep root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HiggsAnalysisSkimming
HiggsAnalysisSkimming_CLASS := LIBRARY
HiggsAnalysis/Skimming_relbigobj+=HiggsAnalysisSkimming
endif
ifeq ($(strip $(RecoHI/HiMuonAlgos)),)
src_RecoHI_HiMuonAlgos := self/RecoHI/HiMuonAlgos
RecoHI/HiMuonAlgos  := src_RecoHI_HiMuonAlgos
src_RecoHI_HiMuonAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
src_RecoHI_HiMuonAlgos_EX_USE := $(foreach d, RecoTracker/TransientTrackingRecHit TrackingTools/TransientTrack clhep FWCore/Framework self DataFormats/VertexReco cmssw TrackingTools/TrackFitters DataFormats/L1GlobalMuonTrigger TrackingTools/MaterialEffects DataFormats/Math RecoVertex/KalmanVertexFit TrackingTools/PatternTools TrackingTools/KalmanUpdators MagneticField/Records RecoTracker/TkNavigation TrackingTools/MeasurementDet Geometry/TrackerGeometryBuilder RecoVertex/VertexPrimitives DataFormats/Common RecoTracker/MeasurementDet RecoTracker/CkfPattern Geometry/Records DataFormats/TrackReco TrackingTools/TrajectoryCleaning DataFormats/GsfTrackReco MagneticField/Engine FWCore/ParameterSet,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += src_RecoHI_HiMuonAlgos
endif

ifeq ($(strip $(QCDAnalysisSkimmingPlugins)),)
QCDAnalysisSkimmingPlugins := self/src/QCDAnalysis/Skimming/plugins
QCDAnalysisSkimmingPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/ParameterSet QCDAnalysis/Skimming
QCDAnalysis/Skimming_relbigobj+=QCDAnalysisSkimmingPlugins
endif
ifeq ($(strip $(RecoHI/HiJetAlgos)),)
RecoHIHiJetAlgos := self/RecoHI/HiJetAlgos
RecoHI/HiJetAlgos := RecoHIHiJetAlgos
RecoHIHiJetAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoHIHiJetAlgos_EX_USE := $(foreach d, self cmssw boost FWCore/Framework RecoJets/JetProducers DataFormats/HeavyIonEvent,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoHIHiJetAlgos_EX_LIB   := RecoHIHiJetAlgos
ALL_EXTERNAL_PRODS += RecoHIHiJetAlgos
RecoHIHiJetAlgos_CLASS := LIBRARY
RecoHI/HiJetAlgos_relbigobj+=RecoHIHiJetAlgos
endif
ifeq ($(strip $(SimTracker/SiStripDigitizer)),)
SimTrackerSiStripDigitizer := self/SimTracker/SiStripDigitizer
SimTracker/SiStripDigitizer := SimTrackerSiStripDigitizer
SimTrackerSiStripDigitizer_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimTrackerSiStripDigitizer_EX_USE := $(foreach d, self cmssw CalibFormats/SiStripObjects CalibTracker/Records DataFormats/Common DataFormats/SiStripDigi FWCore/Framework FWCore/ParameterSet Geometry/TrackerGeometryBuilder MagneticField/Engine MagneticField/Records RecoLocalTracker/SiStripZeroSuppression SimDataFormats/CrossingFrame SimDataFormats/TrackerDigiSimLink SimDataFormats/TrackingHit SimGeneral/HepPDTRecord SimGeneral/MixingModule SimGeneral/NoiseGenerators SimTracker/Common boost gsl vdt,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimTrackerSiStripDigitizer_EX_LIB   := SimTrackerSiStripDigitizer
ALL_EXTERNAL_PRODS += SimTrackerSiStripDigitizer
SimTrackerSiStripDigitizer_CLASS := LIBRARY
SimTracker/SiStripDigitizer_relbigobj+=SimTrackerSiStripDigitizer
endif
ifeq ($(strip $(DQM/SiPixelMonitorClient)),)
DQMSiPixelMonitorClient := self/DQM/SiPixelMonitorClient
DQM/SiPixelMonitorClient := DQMSiPixelMonitorClient
DQMSiPixelMonitorClient_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMSiPixelMonitorClient_EX_USE := $(foreach d, self cmssw FWCore/MessageLogger FWCore/Framework FWCore/PluginManager FWCore/ParameterSet CondFormats/RunInfo CondFormats/DataRecord CondFormats/SiPixelObjects Geometry/CommonDetUnit Geometry/Records Geometry/TrackerGeometryBuilder DQMServices/Core DQMServices/Components DQMServices/ClientConfig CommonTools/TrackerMap DQM/SiPixelCommon DQM/SiStripCommon DQM/TrackerCommon DataFormats/SiPixelCluster DataFormats/BeamSpot DataFormats/Common DataFormats/MuonReco DataFormats/MuonSeed DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/TrajectorySeed MagneticField/Records MagneticField/Engine TrackingTools/TrajectoryState TrackingTools/Records RecoLocalTracker/ClusterParameterEstimator RecoLocalTracker/Records RecoTracker/TransientTrackingRecHit CalibTracker/Records rootcore boost,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMSiPixelMonitorClient
DQMSiPixelMonitorClient_CLASS := LIBRARY
DQM/SiPixelMonitorClient_relbigobj+=DQMSiPixelMonitorClient
endif
ifeq ($(strip $(DQMOffline/L1Trigger)),)
DQMOfflineL1Trigger := self/DQMOffline/L1Trigger
DQMOffline/L1Trigger := DQMOfflineL1Trigger
DQMOfflineL1Trigger_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMOfflineL1Trigger_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DQMServices/Core DQMServices/Components DQMServices/ClientConfig DataFormats/L1Trigger DataFormats/L1GlobalTrigger DataFormats/L1GlobalMuonTrigger DataFormats/RecoCandidate DataFormats/MuonReco DataFormats/EgammaReco DataFormats/TauReco DataFormats/METReco DataFormats/JetReco DataFormats/FEDRawData CondFormats/DataRecord CondFormats/L1TObjects L1Trigger/GlobalTriggerAnalyzer Geometry/TrackerGeometryBuilder TrackingTools/TransientTrack TrackingTools/TrajectoryState RecoMuon/TrackingTools HLTrigger/HLTcore DQM/L1TMonitor,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMOfflineL1Trigger
DQMOfflineL1Trigger_CLASS := LIBRARY
DQMOffline/L1Trigger_relbigobj+=DQMOfflineL1Trigger
endif
ifeq ($(strip $(CommonToolsRecoAlgos_plugins)),)
CommonToolsRecoAlgos_plugins := self/src/CommonTools/RecoAlgos/plugins
CommonToolsRecoAlgos_plugins_LOC_USE := self cmssw MagneticField/Engine FWCore/Framework FWCore/ParameterSet DataFormats/RecoCandidate DataFormats/BTauReco DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/MuonReco DataFormats/JetReco DataFormats/METReco DataFormats/PatCandidates DataFormats/HcalRecHit SimDataFormats/TrackingAnalysis TrackingTools/PatternTools CommonTools/Utils CommonTools/RecoAlgos MagneticField/Records Geometry/Records Geometry/TrackerGeometryBuilder
CommonTools/RecoAlgos_relbigobj+=CommonToolsRecoAlgos_plugins
endif
ifeq ($(strip $(Validation/Geometry)),)
ValidationGeometry := self/Validation/Geometry
Validation/Geometry := ValidationGeometry
ValidationGeometry_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ValidationGeometry_EX_USE := $(foreach d, self cmssw root geant4core boost FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry DetectorDescription/Core Geometry/Records SimG4Core/Notification SimG4Core/Watcher CommonTools/UtilAlgos DQMServices/Core,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += ValidationGeometry
ValidationGeometry_CLASS := LIBRARY
Validation/Geometry_relbigobj+=ValidationGeometry
endif
ifeq ($(strip $(ElectroWeakAnalysis/ZEE)),)
ElectroWeakAnalysisZEE := self/ElectroWeakAnalysis/ZEE
ElectroWeakAnalysis/ZEE := ElectroWeakAnalysisZEE
ElectroWeakAnalysisZEE_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ElectroWeakAnalysisZEE_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/PatCandidates DataFormats/Common Geometry/CaloGeometry Geometry/CaloTopology CommonTools/UtilAlgos L1Trigger/GlobalTriggerAnalyzer MagneticField/Records MagneticField/Engine RecoEgamma/EgammaTools RecoEcal/EgammaCoreTools RecoLocalCalo/EcalRecAlgos HLTrigger/HLTcore root rootmath rootcore,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += ElectroWeakAnalysisZEE
ElectroWeakAnalysisZEE_CLASS := LIBRARY
ElectroWeakAnalysis/ZEE_relbigobj+=ElectroWeakAnalysisZEE
endif
ifeq ($(strip $(SimG4CMS/Forward)),)
SimG4CMSForward := self/SimG4CMS/Forward
SimG4CMS/Forward := SimG4CMSForward
SimG4CMSForward_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CMSForward_EX_USE := $(foreach d, self cmssw FWCore/PluginManager SimG4Core/Watcher SimG4Core/SensitiveDetector SimG4Core/Notification SimG4Core/Application SimG4CMS/Calo DataFormats/Math SimDataFormats/SimHitMaker SimDataFormats/CaloHit SimDataFormats/Forward DetectorDescription/Core FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger boost geant4core root rootmath,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimG4CMSForward_EX_LIB   := SimG4CMSForward
ALL_EXTERNAL_PRODS += SimG4CMSForward
SimG4CMSForward_CLASS := LIBRARY
SimG4CMS/Forward_relbigobj+=SimG4CMSForward
endif
ifeq ($(strip $(RecoLocalTracker/SiStripRecHitConverter)),)
RecoLocalTrackerSiStripRecHitConverter := self/RecoLocalTracker/SiStripRecHitConverter
RecoLocalTracker/SiStripRecHitConverter := RecoLocalTrackerSiStripRecHitConverter
RecoLocalTrackerSiStripRecHitConverter_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoLocalTrackerSiStripRecHitConverter_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet DataFormats/Common DataFormats/TrackerRecHit2D DataFormats/SiStripCluster DataFormats/SiStripDetId DataFormats/GeometrySurface RecoLocalTracker/Records RecoLocalTracker/ClusterParameterEstimator Geometry/CommonDetUnit Geometry/Records Geometry/TrackerGeometryBuilder MagneticField/Records CondFormats/SiStripObjects CalibFormats/SiStripObjects CalibTracker/Records TrackingTools/TransientTrackingRecHit vdt_headers,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoLocalTrackerSiStripRecHitConverter_EX_LIB   := RecoLocalTrackerSiStripRecHitConverter
ALL_EXTERNAL_PRODS += RecoLocalTrackerSiStripRecHitConverter
RecoLocalTrackerSiStripRecHitConverter_CLASS := LIBRARY
RecoLocalTracker/SiStripRecHitConverter_relbigobj+=RecoLocalTrackerSiStripRecHitConverter
endif
ifeq ($(strip $(HLTriggerJSONMonitoringPlugins)),)
HLTriggerJSONMonitoringPlugins := self/src/HLTrigger/JSONMonitoring/plugins
HLTriggerJSONMonitoringPlugins_LOC_USE := self cmssw FWCore/PrescaleService FWCore/ServiceRegistry FWCore/Utilities HLTrigger/HLTcore EventFilter/Utilities
HLTrigger/JSONMonitoring_relbigobj+=HLTriggerJSONMonitoringPlugins
endif
ifeq ($(strip $(CommonToolsCandAlgos_plugins)),)
CommonToolsCandAlgos_plugins := self/src/CommonTools/CandAlgos/plugins
CommonToolsCandAlgos_plugins_LOC_USE := self cmssw FWCore/Framework FWCore/ParameterSet DataFormats/Candidate DataFormats/HepMCCandidate CommonTools/UtilAlgos CommonTools/Utils CommonTools/CandAlgos CommonTools/CandUtils
CommonTools/CandAlgos_relbigobj+=CommonToolsCandAlgos_plugins
endif
ifeq ($(strip $(Validation/HcalHits)),)
ValidationHcalHits := self/Validation/HcalHits
Validation/HcalHits := ValidationHcalHits
ValidationHcalHits_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ValidationHcalHits_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger geant4core boost SimG4Core/Notification SimG4Core/Watcher SimG4CMS/Calo Geometry/HcalCommonData DataFormats/HcalDetId SimDataFormats/CaloHit SimDataFormats/ValidationFormats SimDataFormats/GeneratorProducts hepmc DataFormats/Math rootmath DQMServices/Core DataFormats/HepMCCandidate,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += ValidationHcalHits
ValidationHcalHits_CLASS := LIBRARY
Validation/HcalHits_relbigobj+=ValidationHcalHits
endif
ifeq ($(strip $(GeneratorInterface/HydjetInterface)),)
GeneratorInterfaceHydjetInterface := self/GeneratorInterface/HydjetInterface
GeneratorInterface/HydjetInterface := GeneratorInterfaceHydjetInterface
GeneratorInterfaceHydjetInterface_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
GeneratorInterfaceHydjetInterface_EX_USE := $(foreach d, self cmssw boost GeneratorInterface/Core FWCore/Concurrency FWCore/Framework SimDataFormats/GeneratorProducts GeneratorInterface/Pythia6Interface GeneratorInterface/PyquenInterface GeneratorInterface/ExternalDecays f77compiler,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
GeneratorInterfaceHydjetInterface_EX_LIB   := GeneratorInterfaceHydjetInterface
ALL_EXTERNAL_PRODS += GeneratorInterfaceHydjetInterface
GeneratorInterfaceHydjetInterface_CLASS := LIBRARY
GeneratorInterface/HydjetInterface_relbigobj+=GeneratorInterfaceHydjetInterface
endif
ifeq ($(strip $(DQMOffline/JetMET)),)
DQMOfflineJetMET := self/DQMOffline/JetMET
DQMOffline/JetMET := DQMOfflineJetMET
DQMOfflineJetMET_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMOfflineJetMET_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/Utilities MagneticField/Engine DQMServices/Core DQMServices/Components FWCore/PluginManager DataFormats/JetReco DataFormats/METReco DataFormats/CaloTowers DataFormats/HcalRecHit DataFormats/HcalDetId DataFormats/EgammaReco DataFormats/EgammaCandidates HLTrigger/HLTcore RecoJets/JetAlgorithms RecoJets/JetProducers RecoHI/HiJetAlgos RecoHI/HiCentralityAlgos DataFormats/CSCRecHit DataFormats/EcalDetId DataFormats/DetId DataFormats/RecoCandidate Geometry/CaloTopology Geometry/CaloGeometry Geometry/CSCGeometry Geometry/CSCGeometryBuilder DataFormats/TrackReco DataFormats/Common DataFormats/Math RecoJets/JetAssociationAlgorithms MagneticField/Records TrackingTools/Records DataFormats/TrackingRecHit DataFormats/TrackerRecHit2D DataFormats/SiStripCluster DataFormats/SiStripDetId DataFormats/PatCandidates CalibFormats/SiStripObjects CondFormats/SiStripObjects CalibTracker/Records CondFormats/DataRecord CommonTools/TriggerUtils RecoMuon/TrackingTools CommonTools/RecoAlgos JetMETCorrections/Objects,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMOfflineJetMET
DQMOfflineJetMET_CLASS := LIBRARY
DQMOffline/JetMET_relbigobj+=DQMOfflineJetMET
endif
ifeq ($(strip $(DQMOffline/CalibMuon)),)
DQMOfflineCalibMuon := self/DQMOffline/CalibMuon
DQMOffline/CalibMuon := DQMOfflineCalibMuon
DQMOfflineCalibMuon_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMOfflineCalibMuon_EX_USE := $(foreach d, self cmssw FWCore/Framework DQMServices/Core DQMServices/Components Geometry/Records Geometry/DTGeometry DataFormats/MuonDetId FWCore/ParameterSet CondFormats/DTObjects DataFormats/DTDigi DataFormats/DTRecHit CondFormats/DataRecord CondCore/DBOutputService,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMOfflineCalibMuon
DQMOfflineCalibMuon_CLASS := LIBRARY
DQMOffline/CalibMuon_relbigobj+=DQMOfflineCalibMuon
endif
ifeq ($(strip $(HLTriggerOffline/Common)),)
HLTriggerOfflineCommon := self/HLTriggerOffline/Common
HLTriggerOffline/Common := HLTriggerOfflineCommon
HLTriggerOfflineCommon_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerOfflineCommon_EX_USE := $(foreach d, self cmssw DQMServices/Core FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/MuonReco FWCore/ServiceRegistry DataFormats/RecoCandidate DataFormats/StdDictionaries DataFormats/HLTReco DataFormats/EgammaReco DataFormats/TrackReco DataFormats/TrajectorySeed DataFormats/BTauReco DataFormats/TauReco DataFormats/METReco DataFormats/JetReco DataFormats/L1GlobalTrigger RecoEcal/EgammaCoreTools HLTrigger/HLTcore CondFormats/DataRecord SimGeneral/HepPDTRecord heppdt clhep DataFormats/HepMCCandidate root boost CommonTools/UtilAlgos,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerOfflineCommon
HLTriggerOfflineCommon_CLASS := LIBRARY
HLTriggerOffline/Common_relbigobj+=HLTriggerOfflineCommon
endif
ifeq ($(strip $(L1TriggerGlobalTriggerAnalyzerPlugins)),)
L1TriggerGlobalTriggerAnalyzerPlugins := self/src/L1Trigger/GlobalTriggerAnalyzer/plugins
L1TriggerGlobalTriggerAnalyzerPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager L1Trigger/GlobalTriggerAnalyzer
L1Trigger/GlobalTriggerAnalyzer_relbigobj+=L1TriggerGlobalTriggerAnalyzerPlugins
endif
ifeq ($(strip $(PhysicsToolsTagAndProbe_plugins)),)
PhysicsToolsTagAndProbe_plugins := self/src/PhysicsTools/TagAndProbe/plugins
PhysicsToolsTagAndProbe_plugins_LOC_USE := self cmssw roofit PhysicsTools/RooStatsCms FWCore/Framework FWCore/MessageLogger FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry DataFormats/TrackReco DataFormats/EgammaReco DataFormats/Math DataFormats/MuonReco DataFormats/EgammaCandidates RecoEcal/EgammaCoreTools RecoEgamma/EgammaTools DataFormats/RecoCandidate DataFormats/Candidate DataFormats/Common PhysicsTools/TagAndProbe DataFormats/BTauReco DataFormats/PatCandidates DataFormats/HLTReco HLTrigger/HLTcore L1Trigger/GlobalTriggerAnalyzer DataFormats/HcalIsolatedTrack PhysicsTools/HepMCCandAlgos PhysicsTools/PatUtils PhysicsTools/PatAlgos
PhysicsTools/TagAndProbe_relbigobj+=PhysicsToolsTagAndProbe_plugins
endif
ifeq ($(strip $(RecoJets/JetProducers)),)
RecoJetsJetProducers := self/RecoJets/JetProducers
RecoJets/JetProducers := RecoJetsJetProducers
RecoJetsJetProducers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoJetsJetProducers_EX_USE := $(foreach d, self cmssw boost FWCore/Framework DataFormats/JetReco DataFormats/PatCandidates Geometry/CaloGeometry Geometry/CaloTopology Geometry/Records Geometry/CommonDetUnit SimDataFormats/CaloHit RecoJets/JetAlgorithms DataFormats/CastorReco CommonTools/Utils fastjet roottmva vdt_headers boost_serialization CondFormats/DataRecord,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoJetsJetProducers_EX_LIB   := RecoJetsJetProducers
ALL_EXTERNAL_PRODS += RecoJetsJetProducers
RecoJetsJetProducers_CLASS := LIBRARY
RecoJets/JetProducers_relbigobj+=RecoJetsJetProducers
endif
ifeq ($(strip $(DQM/HcalMonitorTasks)),)
DQMHcalMonitorTasks := self/DQM/HcalMonitorTasks
DQM/HcalMonitorTasks := DQMHcalMonitorTasks
DQMHcalMonitorTasks_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMHcalMonitorTasks_EX_USE := $(foreach d, self cmssw DataFormats/HcalRecHit DataFormats/HcalDigi TBDataFormats/HcalTBObjects EventFilter/HcalRawToDigi CalibFormats/HcalObjects CalibCalorimetry/HcalAlgos Geometry/HcalTowerAlgo FWCore/ParameterSet FWCore/Framework FWCore/MessageLogger DQMServices/Core rootmath DataFormats/L1GlobalTrigger DataFormats/L1GlobalMuonTrigger DataFormats/Math DataFormats/Common DataFormats/L1Trigger DataFormats/L1GlobalCaloTrigger DataFormats/Candidate L1Trigger/RegionalCaloTrigger DataFormats/L1CaloTrigger DataFormats/EcalDigi DataFormats/METReco DataFormats/JetReco DataFormats/TrackReco RecoMET/METAlgorithms CondFormats/RunInfo,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DQMHcalMonitorTasks_EX_LIB   := DQMHcalMonitorTasks
ALL_EXTERNAL_PRODS += DQMHcalMonitorTasks
DQMHcalMonitorTasks_CLASS := LIBRARY
DQM/HcalMonitorTasks_relbigobj+=DQMHcalMonitorTasks
endif
ifeq ($(strip $(DQM/L1TMonitor)),)
DQML1TMonitor := self/DQM/L1TMonitor
DQM/L1TMonitor := DQML1TMonitor
DQML1TMonitor_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQML1TMonitor_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DQMServices/Core DQMServices/Components DQMServices/ClientConfig DataFormats/L1Trigger DataFormats/LTCDigi DataFormats/CSCDigi DataFormats/L1CSCTrackFinder DataFormats/L1DTTrackFinder DataFormats/RPCDigi DataFormats/RPCRecHit DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalTrigger DataFormats/FEDRawData DataFormats/HcalDetId DataFormats/HcalDigi DataFormats/HcalRecHit DataFormats/CSCRecHit DataFormats/DTRecHit Geometry/EcalMapping Geometry/CaloGeometry Geometry/CaloTopology Geometry/HcalTowerAlgo Geometry/RPCGeometry RecoMuon/DetLayers Geometry/Records DataFormats/EcalDigi CondFormats/DataRecord CondFormats/L1TObjects L1Trigger/CSCTrackFinder L1Trigger/GlobalTriggerAnalyzer CondTools/L1Trigger root boost,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DQML1TMonitor_EX_LIB   := DQML1TMonitor
ALL_EXTERNAL_PRODS += DQML1TMonitor
DQML1TMonitor_CLASS := LIBRARY
DQM/L1TMonitor_relbigobj+=DQML1TMonitor
endif
ifeq ($(strip $(Alignment/CommonAlignmentMonitor)),)
AlignmentCommonAlignmentMonitor := self/Alignment/CommonAlignmentMonitor
Alignment/CommonAlignmentMonitor := AlignmentCommonAlignmentMonitor
AlignmentCommonAlignmentMonitor_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
AlignmentCommonAlignmentMonitor_EX_USE := $(foreach d, self cmssw FWCore/ParameterSet FWCore/PluginManager FWCore/MessageLogger Alignment/CommonAlignment roothistmatrix CommonTools/Utils CommonTools/UtilAlgos,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
AlignmentCommonAlignmentMonitor_EX_LIB   := AlignmentCommonAlignmentMonitor
ALL_EXTERNAL_PRODS += AlignmentCommonAlignmentMonitor
AlignmentCommonAlignmentMonitor_CLASS := LIBRARY
Alignment/CommonAlignmentMonitor_relbigobj+=AlignmentCommonAlignmentMonitor
endif
ifeq ($(strip $(RecoMuon/GlobalTrackFinder)),)
RecoMuonGlobalTrackFinder := self/RecoMuon/GlobalTrackFinder
RecoMuon/GlobalTrackFinder := RecoMuonGlobalTrackFinder
RecoMuonGlobalTrackFinder_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoMuonGlobalTrackFinder_EX_USE := $(foreach d, self cmssw DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry RecoMuon/GlobalTrackingTools RecoMuon/TrackingTools TrackingTools/PatternTools,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoMuonGlobalTrackFinder_EX_LIB   := RecoMuonGlobalTrackFinder
ALL_EXTERNAL_PRODS += RecoMuonGlobalTrackFinder
RecoMuonGlobalTrackFinder_CLASS := LIBRARY
RecoMuon/GlobalTrackFinder_relbigobj+=RecoMuonGlobalTrackFinder
endif
ifeq ($(strip $(SimMuon/RPCDigitizer)),)
SimMuonRPCDigitizer := self/SimMuon/RPCDigitizer
SimMuon/RPCDigitizer := SimMuonRPCDigitizer
SimMuonRPCDigitizer_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimMuonRPCDigitizer_EX_USE := $(foreach d, self cmssw boost CondCore/DBCommon CondCore/DBOutputService CondCore/IOVService CondCore/MetaDataService CondCore/PopCon CondFormats/DataRecord CondFormats/RPCObjects CoralBase DataFormats/MuonDetId DataFormats/Provenance DataFormats/RPCDigi FWCore/Catalog FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/ServiceRegistry FWCore/Utilities Geometry/CommonDetUnit Geometry/Records Geometry/RPCGeometry PhysicsTools/UtilAlgos RelationalAccess root SimDataFormats/CrossingFrame SimDataFormats/RPCDigiSimLink SimDataFormats/TrackerDigiSimLink SimDataFormats/TrackingHit SimGeneral/HepPDTRecord Utilities/General SimMuon/Neutron,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += SimMuonRPCDigitizer
SimMuonRPCDigitizer_CLASS := LIBRARY
SimMuon/RPCDigitizer_relbigobj+=SimMuonRPCDigitizer
endif
ifeq ($(strip $(RecoLocalTracker/SubCollectionProducers)),)
RecoLocalTrackerSubCollectionProducers := self/RecoLocalTracker/SubCollectionProducers
RecoLocalTracker/SubCollectionProducers := RecoLocalTrackerSubCollectionProducers
RecoLocalTrackerSubCollectionProducers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoLocalTrackerSubCollectionProducers_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet DataFormats/TrackerRecHit2D DataFormats/TrackerCommon DataFormats/Common DataFormats/SiStripDigi DataFormats/SiStripCluster DataFormats/TrackReco DataFormats/Candidate CalibTracker/Records CommonTools/UtilAlgos CommonTools/Utils Geometry/Records Geometry/TrackerGeometryBuilder Geometry/CommonDetUnit MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrajectoryState TrackingTools/Records SimDataFormats/TrackerDigiSimLink DataFormats/SiPixelCluster RecoLocalTracker/SiPixelRecHits RecoLocalTracker/SiStripRecHitConverter SimTracker/TrackerHitAssociation RecoLocalTracker/SiStripClusterizer,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += RecoLocalTrackerSubCollectionProducers
RecoLocalTrackerSubCollectionProducers_CLASS := LIBRARY
RecoLocalTracker/SubCollectionProducers_relbigobj+=RecoLocalTrackerSubCollectionProducers
endif
ifeq ($(strip $(SimRomanPotSimFP420Plugins)),)
SimRomanPotSimFP420Plugins := self/src/SimRomanPot/SimFP420/plugins
SimRomanPotSimFP420Plugins_LOC_USE := self cmssw SimRomanPot/SimFP420
SimRomanPot/SimFP420_relbigobj+=SimRomanPotSimFP420Plugins
endif
ifeq ($(strip $(RecoLocalCalo_EcalRecAlgos_plugins)),)
RecoLocalCalo_EcalRecAlgos_plugins := self/src/RecoLocalCalo/EcalRecAlgos/plugins
RecoLocalCalo_EcalRecAlgos_plugins_LOC_USE := self cmssw RecoLocalCalo/EcalRecAlgos FWCore/ParameterSet FWCore/Framework FWCore/PluginManager
RecoLocalCalo/EcalRecAlgos_relbigobj+=RecoLocalCalo_EcalRecAlgos_plugins
endif
ifeq ($(strip $(JetMETCorrectionsType1MET_plugins)),)
JetMETCorrectionsType1MET_plugins := self/src/JetMETCorrections/Type1MET/plugins
JetMETCorrectionsType1MET_plugins_LOC_USE := self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities CommonTools/Utils DataFormats/Candidate DataFormats/JetReco DataFormats/METReco DataFormats/MuonReco DataFormats/ParticleFlowCandidate DataFormats/PatCandidates DataFormats/TauReco DataFormats/VertexReco JetMETCorrections/Objects JetMETCorrections/Type1MET
JetMETCorrections/Type1MET_relbigobj+=JetMETCorrectionsType1MET_plugins
endif
ifeq ($(strip $(SimG4Core/CustomPhysics)),)
SimG4CoreCustomPhysics := self/SimG4Core/CustomPhysics
SimG4Core/CustomPhysics := SimG4CoreCustomPhysics
SimG4CoreCustomPhysics_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CoreCustomPhysics_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/MessageLogger SimG4Core/Physics SimG4Core/PhysicsLists geant4core clhep boost,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimG4CoreCustomPhysics_EX_LIB   := SimG4CoreCustomPhysics
ALL_EXTERNAL_PRODS += SimG4CoreCustomPhysics
SimG4CoreCustomPhysics_CLASS := LIBRARY
SimG4Core/CustomPhysics_relbigobj+=SimG4CoreCustomPhysics
endif
ifeq ($(strip $(ElectroWeakAnalysisZMuMu_plugins)),)
ElectroWeakAnalysisZMuMu_plugins := self/src/ElectroWeakAnalysis/ZMuMu/plugins
ElectroWeakAnalysisZMuMu_plugins_LOC_USE := self cmssw PhysicsTools/RooStatsCms CommonTools/Utils FWCore/Framework CommonTools/UtilAlgos DataFormats/MuonReco FWCore/ParameterSet FWCore/Utilities DataFormats/HepMCCandidate DataFormats/Candidate DataFormats/PatCandidates root DataFormats/BTauReco
ElectroWeakAnalysis/ZMuMu_relbigobj+=ElectroWeakAnalysisZMuMu_plugins
endif
ifeq ($(strip $(RecoParticleFlow/PFProducer)),)
RecoParticleFlowPFProducer := self/RecoParticleFlow/PFProducer
RecoParticleFlow/PFProducer := RecoParticleFlowPFProducer
RecoParticleFlowPFProducer_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoParticleFlowPFProducer_EX_USE := $(foreach d, self cmssw CondFormats/DataRecord CondFormats/EgammaObjects DataFormats/CaloRecHit DataFormats/Common DataFormats/EgammaCandidates DataFormats/ParticleFlowCandidate DataFormats/ParticleFlowReco DataFormats/Provenance DataFormats/TrackReco DataFormats/VertexReco DataFormats/MuonReco DataFormats/EcalDetId RecoParticleFlow/PFClusterTools RecoEcal/EgammaCoreTools RecoEgamma/ElectronIdentification boost clhep rootmath roottmva,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoParticleFlowPFProducer_EX_LIB   := RecoParticleFlowPFProducer
ALL_EXTERNAL_PRODS += RecoParticleFlowPFProducer
RecoParticleFlowPFProducer_CLASS := LIBRARY
RecoParticleFlow/PFProducer_relbigobj+=RecoParticleFlowPFProducer
endif
ifeq ($(strip $(Fireworks/Eve)),)
FireworksEve := self/Fireworks/Eve
Fireworks/Eve := FireworksEve
FireworksEve_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FireworksEve_EX_USE := $(foreach d, self cmssw FWCore/PluginManager FWCore/Framework CondFormats/DataRecord CondFormats/RunInfo rootcore rootinteractive,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FireworksEve_LCGDICTS  := x 
FireworksEve_EX_LIB   := FireworksEve
ALL_EXTERNAL_PRODS += FireworksEve
FireworksEve_CLASS := LIBRARY
Fireworks/Eve_relbigobj+=FireworksEve
endif
ifeq ($(strip $(RecoLocalTracker/SiPixelRecHits)),)
RecoLocalTrackerSiPixelRecHits := self/RecoLocalTracker/SiPixelRecHits
RecoLocalTracker/SiPixelRecHits := RecoLocalTrackerSiPixelRecHits
RecoLocalTrackerSiPixelRecHits_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoLocalTrackerSiPixelRecHits_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet CondFormats/SiPixelObjects CalibTracker/SiPixelESProducers DataFormats/TrackerCommon DataFormats/SiPixelCluster DataFormats/TrackerRecHit2D TrackingTools/TrajectoryState boost vdt_headers,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoLocalTrackerSiPixelRecHits_EX_LIB   := RecoLocalTrackerSiPixelRecHits
ALL_EXTERNAL_PRODS += RecoLocalTrackerSiPixelRecHits
RecoLocalTrackerSiPixelRecHits_CLASS := LIBRARY
RecoLocalTracker/SiPixelRecHits_relbigobj+=RecoLocalTrackerSiPixelRecHits
endif
ifeq ($(strip $(RecoParticleFlowPFClusterToolsPlugins)),)
RecoParticleFlowPFClusterToolsPlugins := self/src/RecoParticleFlow/PFClusterTools/plugins
RecoParticleFlowPFClusterToolsPlugins_LOC_USE := self cmssw DataFormats/Math DataFormats/ParticleFlowCandidate DataFormats/ParticleFlowReco CommonTools/UtilAlgos DataFormats/TrackReco FWCore/Framework FWCore/PluginManager RecoParticleFlow/PFClusterTools
RecoParticleFlow/PFClusterTools_relbigobj+=RecoParticleFlowPFClusterToolsPlugins
endif
ifeq ($(strip $(SimG4Core/Physics)),)
SimG4CorePhysics := self/SimG4Core/Physics
SimG4Core/Physics := SimG4CorePhysics
SimG4CorePhysics_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CorePhysics_EX_USE := $(foreach d, self cmssw DetectorDescription/Core FWCore/ParameterSet geant4core heppdt boost sigcpp expat,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimG4CorePhysics_EX_LIB   := SimG4CorePhysics
ALL_EXTERNAL_PRODS += SimG4CorePhysics
SimG4CorePhysics_CLASS := LIBRARY
SimG4Core/Physics_relbigobj+=SimG4CorePhysics
endif
ifeq ($(strip $(CommonTools/Utils)),)
CommonToolsUtils := self/CommonTools/Utils
CommonTools/Utils := CommonToolsUtils
CommonToolsUtils_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CommonToolsUtils_EX_USE := $(foreach d, self cmssw FWCore/Utilities FWCore/MessageLogger boost roothistmatrix roottmva,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CommonToolsUtils_EX_LIB   := CommonToolsUtils
ALL_EXTERNAL_PRODS += CommonToolsUtils
CommonToolsUtils_CLASS := LIBRARY
CommonTools/Utils_relbigobj+=CommonToolsUtils
endif
ifeq ($(strip $(CSCOverlapsAlignmentAlgorithm)),)
CSCOverlapsAlignmentAlgorithm := self/src/Alignment/MuonAlignmentAlgorithms/plugins
CSCOverlapsAlignmentAlgorithm_LOC_USE := self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry Geometry/CommonDetUnit Geometry/Records Geometry/CSCGeometry MagneticField/Engine MagneticField/Records TrackingTools/PatternTools TrackingTools/TrackFitters TrackingTools/TrackRefitter TrackingTools/TrajectoryState TrackingTools/TransientTrack TrackingTools/Records TrackingTools/GeomPropagators RecoMuon/TransientTrackingRecHit DataFormats/TrackingRecHit DataFormats/TrackReco DataFormats/GeometrySurface DataFormats/MuonDetId CondFormats/Alignment Alignment/CommonAlignment Alignment/CommonAlignmentAlgorithm Alignment/MuonAlignment CommonTools/UtilAlgos clhep root
Alignment/MuonAlignmentAlgorithms_relbigobj+=CSCOverlapsAlignmentAlgorithm
endif
ifeq ($(strip $(MuonMillepedeAlgorithm)),)
MuonMillepedeAlgorithm := self/src/Alignment/MuonAlignmentAlgorithms/plugins
MuonMillepedeAlgorithm_LOC_USE := self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry Geometry/CommonDetUnit MagneticField/Engine MagneticField/Records DataFormats/GeometrySurface DataFormats/MuonDetId DataFormats/TrackReco TrackingTools/PatternTools TrackingTools/TransientTrack RecoMuon/TransientTrackingRecHit Alignment/CommonAlignment Alignment/CommonAlignmentAlgorithm Alignment/MuonAlignment CommonTools/UtilAlgos clhep
Alignment/MuonAlignmentAlgorithms_relbigobj+=MuonMillepedeAlgorithm
endif
ifeq ($(strip $(MuonAlignmentPreFilter)),)
MuonAlignmentPreFilter := self/src/Alignment/MuonAlignmentAlgorithms/plugins
MuonAlignmentPreFilter_LOC_USE := self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry Alignment/MuonAlignmentAlgorithms DataFormats/MuonDetId DataFormats/TrackReco DataFormats/TrackingRecHit root
Alignment/MuonAlignmentAlgorithms_relbigobj+=MuonAlignmentPreFilter
endif
ifeq ($(strip $(MuonAlignmentFromReference)),)
MuonAlignmentFromReference := self/src/Alignment/MuonAlignmentAlgorithms/plugins
MuonAlignmentFromReference_LOC_USE := self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry Alignment/CommonAlignment Alignment/CommonAlignmentAlgorithm Alignment/MuonAlignment Alignment/MuonAlignmentAlgorithms CommonTools/UtilAlgos DataFormats/MuonDetId DataFormats/TrackReco Geometry/CommonDetUnit Geometry/Records TrackingTools/PatternTools root
Alignment/MuonAlignmentAlgorithms_relbigobj+=MuonAlignmentFromReference
endif
ifeq ($(strip $(RecoEgamma/PhotonIdentification)),)
RecoEgammaPhotonIdentification := self/RecoEgamma/PhotonIdentification
RecoEgamma/PhotonIdentification := RecoEgammaPhotonIdentification
RecoEgammaPhotonIdentification_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoEgammaPhotonIdentification_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager DataFormats/HcalRecHit DataFormats/EgammaReco DataFormats/PatCandidates DataFormats/ParticleFlowCandidate RecoEcal/EgammaCoreTools DataFormats/BeamSpot Geometry/CaloGeometry RecoEgamma/EgammaIsolationAlgos PhysicsTools/SelectorUtils,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoEgammaPhotonIdentification_LCGDICTS  := x 
RecoEgammaPhotonIdentification_EX_LIB   := RecoEgammaPhotonIdentification
ALL_EXTERNAL_PRODS += RecoEgammaPhotonIdentification
RecoEgammaPhotonIdentification_CLASS := LIBRARY
RecoEgamma/PhotonIdentification_relbigobj+=RecoEgammaPhotonIdentification
endif
ifeq ($(strip $(CalibTrackerSiStripHitEffPlugins)),)
CalibTrackerSiStripHitEffPlugins := self/src/CalibTracker/SiStripHitEfficiency/plugins
CalibTrackerSiStripHitEffPlugins_LOC_USE := self cmssw AnalysisDataFormats/SiStripClusterInfo CommonTools/TrackerMap CommonTools/UtilAlgos CondCore/DBOutputService CondFormats/SiStripObjects DataFormats/DetId DataFormats/SiStripDetId DataFormats/TrackingRecHit DataFormats/CSCRecHit DataFormats/DTRecHit DataFormats/TrackReco DataFormats/Common FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/ServiceRegistry Geometry/CommonDetUnit Geometry/Records Geometry/TrackerGeometryBuilder MagneticField/Engine MagneticField/Records RecoTracker/Record RecoTracker/MeasurementDet RecoTracker/TkSeedGenerator SimDataFormats/TrackingAnalysis SimTracker/TrackerHitAssociation TrackingTools/PatternTools TrackingTools/TrackFitters TrackingTools/MeasurementDet RecoTracker/TransientTrackingRecHit
CalibTracker/SiStripHitEfficiency_relbigobj+=CalibTrackerSiStripHitEffPlugins
endif
ifeq ($(strip $(DQMDTMonitorModulePlugins)),)
DQMDTMonitorModulePlugins := self/src/DQM/DTMonitorModule/plugins
DQMDTMonitorModulePlugins_LOC_USE := self cmssw DQM/DTMonitorModule
DQM/DTMonitorModule_relbigobj+=DQMDTMonitorModulePlugins
endif
ifeq ($(strip $(CommonTools/UtilAlgos)),)
CommonToolsUtilAlgos := self/CommonTools/UtilAlgos
CommonTools/UtilAlgos := CommonToolsUtilAlgos
CommonToolsUtilAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CommonToolsUtilAlgos_EX_USE := $(foreach d, self cmssw CommonTools/Utils FWCore/ServiceRegistry FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities DataFormats/Provenance DataFormats/DetId roothistmatrix,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CommonToolsUtilAlgos_EX_LIB   := CommonToolsUtilAlgos
ALL_EXTERNAL_PRODS += CommonToolsUtilAlgos
CommonToolsUtilAlgos_CLASS := LIBRARY
CommonTools/UtilAlgos_relbigobj+=CommonToolsUtilAlgos
endif
ifeq ($(strip $(DQM/DataScouting)),)
DQMDataScouting := self/DQM/DataScouting
DQM/DataScouting := DQMDataScouting
DQMDataScouting_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMDataScouting_EX_USE := $(foreach d, self cmssw clhep root FWCore/Framework FWCore/ParameterSet DataFormats/Math DQMServices/Components DQMServices/Core,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DQMDataScouting_EX_LIB   := DQMDataScouting
ALL_EXTERNAL_PRODS += DQMDataScouting
DQMDataScouting_CLASS := LIBRARY
DQM/DataScouting_relbigobj+=DQMDataScouting
endif
ifeq ($(strip $(CalibTrackerSiStripChannelGainPlugins)),)
CalibTrackerSiStripChannelGainPlugins := self/src/CalibTracker/SiStripChannelGain/plugins
CalibTrackerSiStripChannelGainPlugins_LOC_USE := self cmssw DQMServices/Core CalibTracker/SiStripCommon CalibFormats/SiStripObjects CalibTracker/Records CondCore/DBOutputService CondFormats/SiStripObjects DataFormats/DetId DataFormats/FEDRawData DataFormats/GeometrySurface DataFormats/SiStripCluster DataFormats/SiStripDetId DataFormats/TrackReco DataFormats/TrackerRecHit2D DataFormats/TrajectorySeed DataFormats/MuonReco RecoTracker/DeDx Geometry/CommonDetUnit Geometry/CommonTopologies Geometry/Records Geometry/TrackerGeometryBuilder Geometry/TrackerNumberingBuilder TrackingTools/PatternTools rootcore root FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos
CalibTracker/SiStripChannelGain_relbigobj+=CalibTrackerSiStripChannelGainPlugins
endif
ifeq ($(strip $(TopQuarkAnalysis/Examples)),)
src_TopQuarkAnalysis_Examples := self/TopQuarkAnalysis/Examples
TopQuarkAnalysis/Examples  := src_TopQuarkAnalysis_Examples
src_TopQuarkAnalysis_Examples_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
src_TopQuarkAnalysis_Examples_EX_USE := $(foreach d, AnalysisDataFormats/TopObjects FWCore/Framework self cmssw root DataFormats/PatCandidates DataFormats/Provenance DataFormats/RecoCandidate CommonTools/UtilAlgos DataFormats/Candidate FWCore/ServiceRegistry CommonTools/CandUtils,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += src_TopQuarkAnalysis_Examples
endif

ifeq ($(strip $(DQM/SiStripMonitorHardware)),)
DQMSiStripMonitorHardware := self/DQM/SiStripMonitorHardware
DQM/SiStripMonitorHardware := DQMSiStripMonitorHardware
DQMSiStripMonitorHardware_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMSiStripMonitorHardware_EX_USE := $(foreach d, self cmssw RecoLocalTracker/SiStripZeroSuppression FWCore/MessageLogger FWCore/Framework FWCore/ParameterSet FWCore/Utilities FWCore/ServiceRegistry FWCore/Sources DQMServices/Core DataFormats/SiStripCommon DataFormats/SiStripDigi DataFormats/Common DataFormats/FEDRawData CondFormats/SiStripObjects CommonTools/UtilAlgos EventFilter/SiStripRawToDigi DQM/SiStripCommon boost CondFormats/DataRecord DPGAnalysis/SiStripTools CommonTools/TrackerMap Geometry/Records Geometry/TrackerGeometryBuilder,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMSiStripMonitorHardware
DQMSiStripMonitorHardware_CLASS := LIBRARY
DQM/SiStripMonitorHardware_relbigobj+=DQMSiStripMonitorHardware
endif
ifeq ($(strip $(SimTrackerSiStripDigitizerPlugins)),)
SimTrackerSiStripDigitizerPlugins := self/src/SimTracker/SiStripDigitizer/plugins
SimTrackerSiStripDigitizerPlugins_LOC_USE := self cmssw SimTracker/SiStripDigitizer
SimTracker/SiStripDigitizer_relbigobj+=SimTrackerSiStripDigitizerPlugins
endif
ifeq ($(strip $(GeneratorInterfacePomwigFilter)),)
GeneratorInterfacePomwigFilter := self/src/GeneratorInterface/PomwigInterface/plugins
GeneratorInterfacePomwigFilter_LOC_USE := self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities SimDataFormats/GeneratorProducts boost heppdt clhep GeneratorInterface/PomwigInterface GeneratorInterface/Core GeneratorInterface/ExternalDecays
GeneratorInterface/PomwigInterface_relbigobj+=GeneratorInterfacePomwigFilter
endif
ifeq ($(strip $(DQMTrackingMonitorSourcePlugins)),)
DQMTrackingMonitorSourcePlugins := self/src/DQM/TrackingMonitorSource/plugins
DQMTrackingMonitorSourcePlugins_LOC_USE := self cmssw TrackingTools/Records FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DQMServices/Core CommonTools/TriggerUtils DataFormats/TrackReco DataFormats/Luminosity DataFormats/VertexReco TrackingTools/TransientTrackingRecHit TrackingTools/TransientTrack TrackingTools/DetLayers TrackPropagation/SteppingHelixPropagator DataFormats/MuonReco Geometry/RPCGeometry RecoMuon/GlobalTrackingTools RecoLocalTracker/SiStripClusterizer
DQM/TrackingMonitorSource_relbigobj+=DQMTrackingMonitorSourcePlugins
endif
ifeq ($(strip $(SimG4CMSEcalTestBeamAuto)),)
SimG4CMSEcalTestBeamAuto := self/src/SimG4CMS/EcalTestBeam/plugins
SimG4CMSEcalTestBeamAuto_LOC_USE := self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet SimG4CMS/EcalTestBeam
SimG4CMS/EcalTestBeam_relbigobj+=SimG4CMSEcalTestBeamAuto
endif
ifeq ($(strip $(RecoEgamma/Examples)),)
src_RecoEgamma_Examples := self/RecoEgamma/Examples
RecoEgamma/Examples  := src_RecoEgamma_Examples
src_RecoEgamma_Examples_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
src_RecoEgamma_Examples_EX_USE := $(foreach d, SimDataFormats/GeneratorProducts clhep RecoEcal/EgammaCoreTools FWCore/Framework self DataFormats/JetReco DataFormats/DetId cmssw DataFormats/EgammaReco DQMServices/Components root DataFormats/EgammaCandidates FWCore/PluginManager MagneticField/Records RecoEgamma/EgammaMCTools hepmc DataFormats/Common DQMServices/Core RecoEgamma/EgammaElectronAlgos CommonTools/UtilAlgos FWCore/ServiceRegistry DataFormats/TrackingRecHit FWCore/ParameterSet MagneticField/Engine,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += src_RecoEgamma_Examples
endif

ifeq ($(strip $(CommonTools/RecoUtils)),)
CommonToolsRecoUtils := self/CommonTools/RecoUtils
CommonTools/RecoUtils := CommonToolsRecoUtils
CommonToolsRecoUtils_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CommonToolsRecoUtils_EX_USE := $(foreach d, self cmssw DataFormats/Common DataFormats/EgammaCandidates DataFormats/L1GlobalTrigger DataFormats/RecoCandidate DataFormats/Scalers DataFormats/TrackReco DataFormats/VertexReco DataFormats/ParticleFlowReco DataFormats/ParticleFlowCandidate L1Trigger/GlobalTriggerAnalyzer MagneticField/Records MagneticField/Engine HLTrigger/HLTcore RecoEgamma/EgammaTools RecoVertex/KinematicFit RecoVertex/KinematicFitPrimitives TrackingTools/TransientTrack TrackingTools/IPTools TrackingTools/Records FWCore/Framework,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CommonToolsRecoUtils_EX_LIB   := CommonToolsRecoUtils
ALL_EXTERNAL_PRODS += CommonToolsRecoUtils
CommonToolsRecoUtils_CLASS := LIBRARY
CommonTools/RecoUtils_relbigobj+=CommonToolsRecoUtils
endif
ifeq ($(strip $(RecoMET/METPUSubtraction)),)
RecoMETMETPUSubtraction := self/RecoMET/METPUSubtraction
RecoMET/METPUSubtraction := RecoMETMETPUSubtraction
RecoMETMETPUSubtraction_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoMETMETPUSubtraction_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities CondFormats/EgammaObjects DataFormats/Candidate DataFormats/JetReco DataFormats/Math DataFormats/METReco DataFormats/MuonReco DataFormats/ParticleFlowCandidate DataFormats/PatCandidates DataFormats/TauReco DataFormats/TrackReco RecoMET/METAlgorithms RecoJets/JetProducers JetMETCorrections/Algorithms root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoMETMETPUSubtraction_EX_LIB   := RecoMETMETPUSubtraction
ALL_EXTERNAL_PRODS += RecoMETMETPUSubtraction
RecoMETMETPUSubtraction_CLASS := LIBRARY
RecoMET/METPUSubtraction_relbigobj+=RecoMETMETPUSubtraction
endif
ifeq ($(strip $(FWCore/ParameterSet)),)
FWCoreParameterSet := self/FWCore/ParameterSet
FWCore/ParameterSet := FWCoreParameterSet
FWCoreParameterSet_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FWCoreParameterSet_EX_USE := $(foreach d, self cmssw DataFormats/Provenance FWCore/MessageLogger FWCore/PluginManager FWCore/Utilities tbb boost boost_filesystem,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FWCoreParameterSet_EX_LIB   := FWCoreParameterSet
ALL_EXTERNAL_PRODS += FWCoreParameterSet
FWCoreParameterSet_CLASS := LIBRARY
FWCore/ParameterSet_relbigobj+=FWCoreParameterSet
endif
ifeq ($(strip $(DQM/HcalMonitorClient)),)
DQMHcalMonitorClient := self/DQM/HcalMonitorClient
DQM/HcalMonitorClient := DQMHcalMonitorClient
DQMHcalMonitorClient_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMHcalMonitorClient_EX_USE := $(foreach d, self cmssw boost rootgraphics FWCore/Framework DQMServices/Core DQMServices/Components DQMServices/ClientConfig CalibCalorimetry/HcalAlgos Geometry/CaloGeometry CondFormats/RunInfo xerces-c,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMHcalMonitorClient
DQMHcalMonitorClient_CLASS := LIBRARY
DQM/HcalMonitorClient_relbigobj+=DQMHcalMonitorClient
endif
ifeq ($(strip $(PhysicsTools/PatExamples)),)
PhysicsToolsPatExamples := self/PhysicsTools/PatExamples
PhysicsTools/PatExamples := PhysicsToolsPatExamples
PhysicsToolsPatExamples_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
PhysicsToolsPatExamples_EX_USE := $(foreach d, self cmssw DataFormats/Math DataFormats/Common DataFormats/JetReco DataFormats/MuonReco DataFormats/PatCandidates FWCore/Utilities FWCore/Framework FWCore/ParameterSet FWCore/ServiceRegistry PhysicsTools/PatUtils PhysicsTools/UtilAlgos PhysicsTools/Utilities clhep,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsPatExamples_EX_LIB   := PhysicsToolsPatExamples
ALL_EXTERNAL_PRODS += PhysicsToolsPatExamples
PhysicsToolsPatExamples_CLASS := LIBRARY
PhysicsTools/PatExamples_relbigobj+=PhysicsToolsPatExamples
endif
ifeq ($(strip $(FireworksEveDummyEvelyserPlugin)),)
FireworksEveDummyEvelyserPlugin := self/src/Fireworks/Eve/plugins
FireworksEveDummyEvelyserPlugin_LOC_LIB   := Eve Geom
FireworksEveDummyEvelyserPlugin_LOC_USE := self cmssw FWCore/Framework DataFormats/TrackReco Fireworks/Geometry Fireworks/Eve Fireworks/Tracks
Fireworks/Eve_relbigobj+=FireworksEveDummyEvelyserPlugin
endif
ifeq ($(strip $(FireworksEveEveServicePlugin)),)
FireworksEveEveServicePlugin := self/src/Fireworks/Eve/plugins
FireworksEveEveServicePlugin_LOC_LIB   := Eve Geom
FireworksEveEveServicePlugin_LOC_USE := self cmssw Fireworks/Eve
Fireworks/Eve_relbigobj+=FireworksEveEveServicePlugin
endif
ifeq ($(strip $(TopQuarkAnalysis/TopTools)),)
TopQuarkAnalysisTopTools := self/TopQuarkAnalysis/TopTools
TopQuarkAnalysis/TopTools := TopQuarkAnalysisTopTools
TopQuarkAnalysisTopTools_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
TopQuarkAnalysisTopTools_EX_USE := $(foreach d, self cmssw rootgpad DataFormats/PatCandidates,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
TopQuarkAnalysisTopTools_EX_LIB   := TopQuarkAnalysisTopTools
ALL_EXTERNAL_PRODS += TopQuarkAnalysisTopTools
TopQuarkAnalysisTopTools_CLASS := LIBRARY
TopQuarkAnalysis/TopTools_relbigobj+=TopQuarkAnalysisTopTools
endif
ifeq ($(strip $(RecoParticleFlowPFProducerSimPlugins)),)
RecoParticleFlowPFProducerSimPlugins := self/src/RecoParticleFlow/PFSimProducer/plugins
RecoParticleFlowPFProducerSimPlugins_LOC_USE := self cmssw DataFormats/EcalDetId DataFormats/EcalRecHit DataFormats/GeometrySurface DataFormats/GeometryVector DataFormats/ParticleFlowReco DataFormats/TrackReco DataFormats/TrackerRecHit2D FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities FastSimulation/Event FastSimulation/Particle Geometry/CommonDetUnit Geometry/Records Geometry/TrackerGeometryBuilder MagneticField/Engine MagneticField/Records RecoParticleFlow/PFClusterTools RecoParticleFlow/PFProducer RecoTracker/TrackProducer SimDataFormats/CaloHit SimGeneral/HepPDTRecord TrackingTools/GeomPropagators TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrajectoryState
RecoParticleFlow/PFSimProducer_relbigobj+=RecoParticleFlowPFProducerSimPlugins
endif
ifeq ($(strip $(RecoParticleFlowPFTrackingSimPlugins)),)
RecoParticleFlowPFTrackingSimPlugins := self/src/RecoParticleFlow/PFSimProducer/plugins
RecoParticleFlowPFTrackingSimPlugins_LOC_USE := self cmssw DataFormats/GeometrySurface DataFormats/GsfTrackReco DataFormats/ParticleFlowReco DataFormats/TrackingRecHit DataFormats/TrajectorySeed FWCore/Framework FWCore/MessageLogger FastSimulation/ParticlePropagator FastSimulation/TrackerSetup FastSimulation/TrajectoryManager Geometry/Records Geometry/TrackerGeometryBuilder MagneticField/Engine MagneticField/Records RecoParticleFlow/PFTracking RecoTracker/Record RecoTracker/TkDetLayers RecoTracker/TkSeedGenerator RecoTracker/TransientTrackingRecHit TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/KalmanUpdators TrackingTools/MaterialEffects TrackingTools/Records TrackingTools/TrajectoryState
RecoParticleFlow/PFSimProducer_relbigobj+=RecoParticleFlowPFTrackingSimPlugins
endif
ifeq ($(strip $(CondEmptyIOVSource)),)
CondEmptyIOVSource := self/src/CondCore/Utilities/plugins
CondEmptyIOVSource_LOC_USE := self cmssw CondCore/CondDB FWCore/Sources
CondCore/Utilities_relbigobj+=CondEmptyIOVSource
endif
ifeq ($(strip $(CondDBPyInterface)),)
CondDBPyInterface := self/src/CondCore/Utilities/plugins
CondDBPyInterface_LOC_USE := self cmssw CondCore/Utilities boost boost_filesystem boost_python boost_regex
CondCore/Utilities_relbigobj+=CondDBPyInterface
endif
ifeq ($(strip $(TopQuarkAnalysisTopKinFitterPlugins)),)
TopQuarkAnalysisTopKinFitterPlugins := self/src/TopQuarkAnalysis/TopKinFitter/plugins
TopQuarkAnalysisTopKinFitterPlugins_LOC_USE := self cmssw TopQuarkAnalysis/TopKinFitter PhysicsTools/KinFitter DataFormats/PatCandidates FWCore/ParameterSet FWCore/Framework
TopQuarkAnalysis/TopKinFitter_relbigobj+=TopQuarkAnalysisTopKinFitterPlugins
endif
ifeq ($(strip $(Calibration/EcalAlCaRecoProducers)),)
CalibrationEcalAlCaRecoProducers := self/Calibration/EcalAlCaRecoProducers
Calibration/EcalAlCaRecoProducers := CalibrationEcalAlCaRecoProducers
CalibrationEcalAlCaRecoProducers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CalibrationEcalAlCaRecoProducers_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/MessageLogger FWCore/PluginManager FWCore/ParameterSet DataFormats/EgammaCandidates DataFormats/HLTReco DataFormats/Math DataFormats/EcalDetId DataFormats/TrackReco,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += CalibrationEcalAlCaRecoProducers
CalibrationEcalAlCaRecoProducers_CLASS := LIBRARY
Calibration/EcalAlCaRecoProducers_relbigobj+=CalibrationEcalAlCaRecoProducers
endif
ifeq ($(strip $(RecoJetsJetProducers_plugins)),)
RecoJetsJetProducers_plugins := self/src/RecoJets/JetProducers/plugins
RecoJetsJetProducers_plugins_LOC_USE := self cmssw RecoJets/JetProducers RecoJets/JetAlgorithms FWCore/Framework DataFormats/BTauReco DataFormats/JetReco DataFormats/VertexReco Geometry/CaloGeometry Geometry/Records CommonTools/UtilAlgos CondFormats/JetMETObjects PhysicsTools/UtilAlgos JetMETCorrections/Objects fastjet fastjet-contrib
RecoJets/JetProducers_relbigobj+=RecoJetsJetProducers_plugins
endif
ifeq ($(strip $(RecoEgammaEgammaElectronProducersPlugins)),)
RecoEgammaEgammaElectronProducersPlugins := self/src/RecoEgamma/EgammaElectronProducers/plugins
RecoEgammaEgammaElectronProducersPlugins_LOC_USE := self cmssw RecoEgamma/EgammaElectronAlgos RecoEgamma/EgammaIsolationAlgos RecoTracker/CkfPattern RecoTracker/TrackProducer Geometry/CommonDetUnit Geometry/TrackerGeometryBuilder MagneticField/Engine MagneticField/Records FWCore/Framework FWCore/ParameterSet FWCore/PluginManager DataFormats/EgammaCandidates DataFormats/DetId DataFormats/SiPixelCluster DataFormats/TrackerRecHit2D DataFormats/TrackingRecHit DataFormats/ParticleFlowCandidate hepmc clhep root
RecoEgamma/EgammaElectronProducers_relbigobj+=RecoEgammaEgammaElectronProducersPlugins
endif
ifeq ($(strip $(ValidationRecoMuonPlugins)),)
ValidationRecoMuonPlugins := self/src/Validation/RecoMuon/plugins
ValidationRecoMuonPlugins_LOC_LIB   := MathMore
ValidationRecoMuonPlugins_LOC_USE := self cmssw RecoParticleFlow/PFClusterTools RecoParticleFlow/PFProducer FWCore/MessageLogger FWCore/Utilities FWCore/Framework DataFormats/Common DataFormats/TrackReco DataFormats/MuonReco clhep boost DQMServices/Core SimDataFormats/TrackerDigiSimLink DataFormats/SiStripDetId FWCore/ParameterSet Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Records MagneticField/Engine SimDataFormats/Vertex SimDataFormats/TrackingAnalysis SimTracker/Common SimTracker/Records RecoLocalTracker/ClusterParameterEstimator root SimTracker/TrackAssociation SimTracker/TrackerHitAssociation DQMServices/ClientConfig
Validation/RecoMuon_relbigobj+=ValidationRecoMuonPlugins
endif
ifeq ($(strip $(PhysicsToolsSelectorUtils_plugins)),)
PhysicsToolsSelectorUtils_plugins := self/src/PhysicsTools/SelectorUtils/plugins
PhysicsToolsSelectorUtils_plugins_LOC_USE := self cmssw PhysicsTools/SelectorUtils CommonTools/Utils DataFormats/Candidate DataFormats/TauReco DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities
PhysicsTools/SelectorUtils_relbigobj+=PhysicsToolsSelectorUtils_plugins
endif
ifeq ($(strip $(DQMOffline/Trigger)),)
DQMOfflineTrigger := self/DQMOffline/Trigger
DQMOffline/Trigger := DQMOfflineTrigger
DQMOfflineTrigger_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMOfflineTrigger_EX_USE := $(foreach d, self cmssw DQMServices/Core FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Utilities DataFormats/RecoCandidate DataFormats/HLTReco DataFormats/MuonReco DataFormats/EgammaReco DataFormats/TrackReco DataFormats/TrajectorySeed DataFormats/BTauReco DataFormats/TauReco DataFormats/METReco DataFormats/JetReco DataFormats/CaloTowers CommonTools/Utils RecoEcal/EgammaCoreTools RecoEgamma/EgammaHLTAlgos RecoEgamma/EgammaIsolationAlgos HLTrigger/HLTcore CondFormats/DataRecord DQM/HLTEvF RecoJets/JetAssociationAlgorithms RecoJets/JetAlgorithms RecoJets/JetProducers JetMETCorrections/Objects root boost,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMOfflineTrigger
DQMOfflineTrigger_CLASS := LIBRARY
DQMOffline/Trigger_relbigobj+=DQMOfflineTrigger
endif
ifeq ($(strip $(EventFilterSiStripRawToDigiPlugins)),)
EventFilterSiStripRawToDigiPlugins := self/src/EventFilter/SiStripRawToDigi/plugins
EventFilterSiStripRawToDigiPlugins_LOC_USE := self cmssw CalibFormats/SiStripObjects CalibTracker/Records CalibTracker/SiStripESProducers CondFormats/SiStripObjects CondFormats/DataRecord DataFormats/Common DataFormats/DetId DataFormats/FEDRawData DataFormats/SiStripCommon DataFormats/SiStripCluster DataFormats/SiStripDigi DataFormats/EgammaReco DataFormats/TrackReco DataFormats/JetReco SimDataFormats/GeneratorProducts EventFilter/SiStripRawToDigi FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet boost
EventFilter/SiStripRawToDigi_relbigobj+=EventFilterSiStripRawToDigiPlugins
endif
ifeq ($(strip $(RecoMuon/L3MuonProducer)),)
RecoMuonL3MuonProducer := self/RecoMuon/L3MuonProducer
RecoMuon/L3MuonProducer := RecoMuonL3MuonProducer
RecoMuonL3MuonProducer_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoMuonL3MuonProducer_EX_USE := $(foreach d, self cmssw DataFormats/Common DataFormats/MuonReco DataFormats/RecoCandidate DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager RecoMuon/L3TrackFinder RecoMuon/TrackingTools TrackingTools/PatternTools,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += RecoMuonL3MuonProducer
RecoMuonL3MuonProducer_CLASS := LIBRARY
RecoMuon/L3MuonProducer_relbigobj+=RecoMuonL3MuonProducer
endif
ifeq ($(strip $(SimG4Core/PhysicsLists)),)
SimG4CorePhysicsLists := self/SimG4Core/PhysicsLists
SimG4Core/PhysicsLists := SimG4CorePhysicsLists
SimG4CorePhysicsLists_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CorePhysicsLists_EX_USE := $(foreach d, self cmssw FWCore/MessageLogger SimG4Core/Physics SimG4Core/MagneticField geant4core clhep heppdt boost,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimG4CorePhysicsLists_EX_LIB   := SimG4CorePhysicsLists
ALL_EXTERNAL_PRODS += SimG4CorePhysicsLists
SimG4CorePhysicsLists_CLASS := LIBRARY
SimG4Core/PhysicsLists_relbigobj+=SimG4CorePhysicsLists
endif
ifeq ($(strip $(L1Trigger/GlobalCaloTrigger)),)
L1TriggerGlobalCaloTrigger := self/L1Trigger/GlobalCaloTrigger
L1Trigger/GlobalCaloTrigger := L1TriggerGlobalCaloTrigger
L1TriggerGlobalCaloTrigger_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
L1TriggerGlobalCaloTrigger_EX_USE := $(foreach d, self cmssw boost DataFormats/L1GlobalCaloTrigger CondFormats/L1TObjects CondFormats/DataRecord,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerGlobalCaloTrigger_EX_LIB   := L1TriggerGlobalCaloTrigger
ALL_EXTERNAL_PRODS += L1TriggerGlobalCaloTrigger
L1TriggerGlobalCaloTrigger_CLASS := LIBRARY
L1Trigger/GlobalCaloTrigger_relbigobj+=L1TriggerGlobalCaloTrigger
endif
ifeq ($(strip $(DQMOffline/Alignment)),)
DQMOfflineAlignment := self/DQMOffline/Alignment
DQMOffline/Alignment := DQMOfflineAlignment
DQMOfflineAlignment_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMOfflineAlignment_EX_USE := $(foreach d, self cmssw FWCore/Framework DQMServices/Core DQMServices/Components FWCore/PluginManager DataFormats/MuonReco RecoMuon/TrackingTools TrackingTools/TransientTrack TrackPropagation/SteppingHelixPropagator Alignment/LaserAlignment MagneticField/Engine,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMOfflineAlignment
DQMOfflineAlignment_CLASS := LIBRARY
DQMOffline/Alignment_relbigobj+=DQMOfflineAlignment
endif
ifeq ($(strip $(RecoTrackerFinalTrackSelectorsPlugins)),)
RecoTrackerFinalTrackSelectorsPlugins := self/src/RecoTracker/FinalTrackSelectors/plugins
RecoTrackerFinalTrackSelectorsPlugins_LOC_FLAGS_CXXFLAGS   := -Ofast
RecoTrackerFinalTrackSelectorsPlugins_LOC_USE := self cmssw DataFormats/Common DataFormats/DetId DataFormats/Math DataFormats/TrackerCommon DataFormats/SiPixelDetId DataFormats/SiStripDetId DataFormats/TrackCandidate DataFormats/TrackReco DataFormats/TrackerRecHit2D DataFormats/TrackingRecHit DataFormats/TrajectorySeed DataFormats/VertexReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CommonDetUnit Geometry/CommonTopologies Geometry/Records Geometry/TrackerGeometryBuilder TrackingTools/Records RecoTracker/TransientTrackingRecHit MagneticField/Engine MagneticField/Records TrackingTools/PatternTools RecoLocalTracker/SiStripClusterizer TrackingTools/TransientTrack CondFormats/EgammaObjects CommonTools/Utils CommonTools/Statistics clhep roottmva
RecoTracker/FinalTrackSelectors_relbigobj+=RecoTrackerFinalTrackSelectorsPlugins
endif
ifeq ($(strip $(RecoTracker/NuclearSeedGenerator)),)
RecoTrackerNuclearSeedGenerator := self/RecoTracker/NuclearSeedGenerator
RecoTracker/NuclearSeedGenerator := RecoTrackerNuclearSeedGenerator
RecoTrackerNuclearSeedGenerator_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoTrackerNuclearSeedGenerator_EX_USE := $(foreach d, self cmssw DataFormats/Common DataFormats/GeometryVector DataFormats/TrackReco DataFormats/TrajectorySeed FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities Geometry/Records Geometry/TrackerGeometryBuilder MagneticField/Engine RecoTracker/MeasurementDet RecoTracker/Record RecoTracker/TkDetLayers RecoTracker/TkSeedGenerator TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/KalmanUpdators TrackingTools/MeasurementDet TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrajectoryState TrackingTools/TransientTrackingRecHit boost,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoTrackerNuclearSeedGenerator_EX_LIB   := RecoTrackerNuclearSeedGenerator
ALL_EXTERNAL_PRODS += RecoTrackerNuclearSeedGenerator
RecoTrackerNuclearSeedGenerator_CLASS := LIBRARY
RecoTracker/NuclearSeedGenerator_relbigobj+=RecoTrackerNuclearSeedGenerator
endif
ifeq ($(strip $(TauJetCorrectorExample)),)
TauJetCorrectorExample := self/src/JetMETCorrections/TauJet/plugins
TauJetCorrectorExample_LOC_USE := self cmssw clhep DataFormats/Common FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/JetReco JetMETCorrections/Objects RecoTauTag/RecoTau
JetMETCorrections/TauJet_relbigobj+=TauJetCorrectorExample
endif
ifeq ($(strip $(RecoTauTag/ImpactParameter)),)
RecoTauTagImpactParameter := self/RecoTauTag/ImpactParameter
RecoTauTag/ImpactParameter := RecoTauTagImpactParameter
RecoTauTagImpactParameter_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoTauTagImpactParameter_EX_USE := $(foreach d, self cmssw TrackingTools/Records FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common DataFormats/BTauReco DataFormats/VertexReco DataFormats/Math boost root RecoBTag/BTagTools TrackingTools/TransientTrack rootcore rootminuit2,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoTauTagImpactParameter_EX_LIB   := RecoTauTagImpactParameter
ALL_EXTERNAL_PRODS += RecoTauTagImpactParameter
RecoTauTagImpactParameter_CLASS := LIBRARY
RecoTauTag/ImpactParameter_relbigobj+=RecoTauTagImpactParameter
endif
ifeq ($(strip $(ValidationRecoTauPlugin)),)
ValidationRecoTauPlugin := self/src/Validation/RecoTau/plugins
ValidationRecoTauPlugin_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager classlib FWCore/ParameterSet DQMServices/Core rootgraphics DataFormats/RecoCandidate DataFormats/TauReco DataFormats/MuonReco DataFormats/JetReco DataFormats/EgammaCandidates DataFormats/HepMCCandidate CommonTools/UtilAlgos
Validation/RecoTau_relbigobj+=ValidationRecoTauPlugin
endif
ifeq ($(strip $(Validation/RecoTrack)),)
ValidationRecoTrack := self/Validation/RecoTrack
Validation/RecoTrack := ValidationRecoTrack
ValidationRecoTrack_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ValidationRecoTrack_EX_USE := $(foreach d, self cmssw DQMServices/ClientConfig DQMServices/Core SimDataFormats/TrackingAnalysis DataFormats/TrackReco root SimTracker/TrackAssociation SimTracker/TrackerHitAssociation DQM/SiStripCommon CalibTracker/Records CommonTools/TriggerUtils RecoLocalTracker/ClusterParameterEstimator SimTracker/Records,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ValidationRecoTrack_EX_LIB   := ValidationRecoTrack
ALL_EXTERNAL_PRODS += ValidationRecoTrack
ValidationRecoTrack_CLASS := LIBRARY
Validation/RecoTrack_relbigobj+=ValidationRecoTrack
endif
ifeq ($(strip $(CommonToolsPileupAlgos_plugins)),)
CommonToolsPileupAlgos_plugins := self/src/CommonTools/PileupAlgos/plugins
CommonToolsPileupAlgos_plugins_LOC_USE := self cmssw DataFormats/ParticleFlowCandidate DataFormats/JetReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet JetMETCorrections/Objects CommonTools/Utils CommonTools/ParticleFlow CommonTools/PileupAlgos fastjet fastjet-contrib
CommonTools/PileupAlgos_relbigobj+=CommonToolsPileupAlgos_plugins
endif
ifeq ($(strip $(CalibTrackerSiStripCommonPlugins)),)
CalibTrackerSiStripCommonPlugins := self/src/CalibTracker/SiStripCommon/plugins
CalibTrackerSiStripCommonPlugins_LOC_USE := self cmssw RecoLocalTracker/SiStripClusterizer CommonTools/UtilAlgos SimTracker/TrackAssociation SimTracker/Records TrackingTools/TrackFitters CalibTracker/SiStripCommon Geometry/TrackerGeometryBuilder CondFormats/L1TObjects
CalibTracker/SiStripCommon_relbigobj+=CalibTrackerSiStripCommonPlugins
endif
ifeq ($(strip $(Alignment/MuonAlignmentAlgorithms)),)
AlignmentMuonAlignmentAlgorithms := self/Alignment/MuonAlignmentAlgorithms
Alignment/MuonAlignmentAlgorithms := AlignmentMuonAlignmentAlgorithms
AlignmentMuonAlignmentAlgorithms_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
AlignmentMuonAlignmentAlgorithms_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/ServiceRegistry FWCore/Utilities CommonTools/Utils DataFormats/TrackReco Geometry/CSCGeometry Geometry/CommonDetUnit TrackingTools/TrackFitters Alignment/CommonAlignment RecoMuon/TransientTrackingRecHit clhep root rootcore rootminuit,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
AlignmentMuonAlignmentAlgorithms_EX_LIB   := AlignmentMuonAlignmentAlgorithms
ALL_EXTERNAL_PRODS += AlignmentMuonAlignmentAlgorithms
AlignmentMuonAlignmentAlgorithms_CLASS := LIBRARY
Alignment/MuonAlignmentAlgorithms_relbigobj+=AlignmentMuonAlignmentAlgorithms
endif
ifeq ($(strip $(AlignmentCommonAlignmentFakeProducers)),)
AlignmentCommonAlignmentFakeProducers := self/src/Alignment/CommonAlignmentProducer/plugins
AlignmentCommonAlignmentFakeProducers_LOC_USE := self cmssw FWCore/MessageLogger FWCore/Framework FWCore/ParameterSet CondFormats/Alignment CondFormats/AlignmentRecord
Alignment/CommonAlignmentProducer_relbigobj+=AlignmentCommonAlignmentFakeProducers
endif
ifeq ($(strip $(AlignmentCommonAlignmentProducerGlobal)),)
AlignmentCommonAlignmentProducerGlobal := self/src/Alignment/CommonAlignmentProducer/plugins
AlignmentCommonAlignmentProducerGlobal_LOC_USE := self cmssw FWCore/MessageLogger FWCore/Framework FWCore/ParameterSet root FWCore/PluginManager FWCore/ServiceRegistry Geometry/Records Geometry/CommonDetUnit MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/Records TrackingTools/TransientTrack TrackingTools/TrackFitters TrackingTools/KalmanUpdators TrackPropagation/SteppingHelixPropagator TrackPropagation/RungeKutta CondFormats/AlignmentRecord CondFormats/Alignment CondCore/DBOutputService DataFormats/DetId DataFormats/TrackReco RecoMuon/TransientTrackingRecHit DataFormats/CSCRecHit DataFormats/DTRecHit DataFormats/RPCRecHit
Alignment/CommonAlignmentProducer_relbigobj+=AlignmentCommonAlignmentProducerGlobal
endif
ifeq ($(strip $(CommonAlignmentProducerSelectors)),)
CommonAlignmentProducerSelectors := self/src/Alignment/CommonAlignmentProducer/plugins
CommonAlignmentProducerSelectors_LOC_USE := self cmssw FWCore/MessageLogger FWCore/Framework FWCore/ParameterSet Alignment/CommonAlignmentProducer DataFormats/DetId DataFormats/MuonDetId DataFormats/TrackingRecHit DataFormats/TrackReco DataFormats/Alignment FWCore/ServiceRegistry CommonTools/UtilAlgos CommonTools/RecoAlgos TrackingTools/PatternTools TrackingTools/TrackFitters TrackingTools/TransientTrackingRecHit root
Alignment/CommonAlignmentProducer_relbigobj+=CommonAlignmentProducerSelectors
endif
ifeq ($(strip $(AlignmentCommonAlignmentProducerPlugin)),)
AlignmentCommonAlignmentProducerPlugin := self/src/Alignment/CommonAlignmentProducer/plugins
AlignmentCommonAlignmentProducerPlugin_LOC_USE := self cmssw FWCore/MessageLogger FWCore/Framework FWCore/ParameterSet Alignment/CommonAlignment Alignment/CommonAlignmentAlgorithm Alignment/CommonAlignmentMonitor Alignment/CommonAlignmentParametrization Alignment/MuonAlignment Alignment/TrackerAlignment CondCore/DBOutputService CondFormats/Alignment CondFormats/AlignmentRecord FWCore/ServiceRegistry boost
Alignment/CommonAlignmentProducer_relbigobj+=AlignmentCommonAlignmentProducerPlugin
endif
ifeq ($(strip $(DQM/HcalMonitorModule)),)
DQMHcalMonitorModule := self/DQM/HcalMonitorModule
DQM/HcalMonitorModule := DQMHcalMonitorModule
DQMHcalMonitorModule_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMHcalMonitorModule_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet FWCore/Utilities DQMServices/Core DQMServices/Components DQM/HcalMonitorTasks DataFormats/FEDRawData DataFormats/L1GlobalTrigger DataFormats/L1GlobalMuonTrigger CondFormats/DataRecord CondFormats/L1TObjects CondFormats/RunInfo,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMHcalMonitorModule
DQMHcalMonitorModule_CLASS := LIBRARY
DQM/HcalMonitorModule_relbigobj+=DQMHcalMonitorModule
endif
ifeq ($(strip $(RecoPixelVertexing/PixelTriplets)),)
RecoPixelVertexingPixelTriplets := self/RecoPixelVertexing/PixelTriplets
RecoPixelVertexing/PixelTriplets := RecoPixelVertexingPixelTriplets
RecoPixelVertexingPixelTriplets_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoPixelVertexingPixelTriplets_LOC_FLAGS_CXXFLAGS   := -O3 -fno-math-errno
RecoPixelVertexingPixelTriplets_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet FWCore/PluginManager Geometry/Records Geometry/TrackerGeometryBuilder Geometry/CommonDetUnit Geometry/CommonTopologies RecoTracker/TkHitPairs MagneticField/Records MagneticField/Engine RecoTracker/TkSeedingLayers TrackingTools/TransientTrackingRecHit RecoTracker/TkSeedGenerator,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoPixelVertexingPixelTriplets_EX_LIB   := RecoPixelVertexingPixelTriplets
ALL_EXTERNAL_PRODS += RecoPixelVertexingPixelTriplets
RecoPixelVertexingPixelTriplets_CLASS := LIBRARY
RecoPixelVertexing/PixelTriplets_relbigobj+=RecoPixelVertexingPixelTriplets
endif
ifeq ($(strip $(GeneratorInterface/ExhumeInterface)),)
GeneratorInterfaceExhumeInterface := self/GeneratorInterface/ExhumeInterface
GeneratorInterface/ExhumeInterface := GeneratorInterfaceExhumeInterface
GeneratorInterfaceExhumeInterface_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
GeneratorInterfaceExhumeInterface_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/Concurrency GeneratorInterface/Core GeneratorInterface/Pythia6Interface SimDataFormats/GeneratorProducts boost clhep f77compiler heppdt,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
GeneratorInterfaceExhumeInterface_EX_LIB   := GeneratorInterfaceExhumeInterface
ALL_EXTERNAL_PRODS += GeneratorInterfaceExhumeInterface
GeneratorInterfaceExhumeInterface_CLASS := LIBRARY
GeneratorInterface/ExhumeInterface_relbigobj+=GeneratorInterfaceExhumeInterface
endif
ifeq ($(strip $(SimMuon/GEMDigitizer)),)
SimMuonGEMDigitizer := self/SimMuon/GEMDigitizer
SimMuon/GEMDigitizer := SimMuonGEMDigitizer
SimMuonGEMDigitizer_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimMuonGEMDigitizer_EX_USE := $(foreach d, self cmssw boost CondCore/DBCommon CondCore/DBOutputService CondCore/IOVService CondCore/MetaDataService CondCore/PopCon CondFormats/DataRecord CondFormats/RPCObjects CoralBase DataFormats/MuonDetId DataFormats/Provenance DataFormats/GEMDigi FWCore/Catalog FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/ServiceRegistry FWCore/Utilities Geometry/CommonDetUnit Geometry/Records Geometry/GEMGeometry PhysicsTools/UtilAlgos RelationalAccess root SimDataFormats/CrossingFrame SimGeneral/HepPDTRecord Utilities/General CommonTools/UtilAlgos,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += SimMuonGEMDigitizer
SimMuonGEMDigitizer_CLASS := LIBRARY
SimMuon/GEMDigitizer_relbigobj+=SimMuonGEMDigitizer
endif
ifeq ($(strip $(TauAnalysisMCEmbeddingToolsPlugins)),)
TauAnalysisMCEmbeddingToolsPlugins := self/src/TauAnalysis/MCEmbeddingTools/plugins
TauAnalysisMCEmbeddingToolsPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet CommonTools/UtilAlgos CommonTools/Utils DataFormats/CSCRecHit DataFormats/DTRecHit DataFormats/EcalRecHit DataFormats/HepMCCandidate DataFormats/HcalRecHit DataFormats/METReco DataFormats/MuonDetId DataFormats/MuonReco DataFormats/ParticleFlowCandidate DataFormats/PatCandidates DataFormats/RPCRecHit PhysicsTools/JetMCUtils RecoEcal/EgammaCoreTools RecoMuon/MuonIsolation SimDataFormats/GeneratorProducts TrackingTools/TransientTrack DQMServices/Core rootmath TauAnalysis/MCEmbeddingTools
TauAnalysis/MCEmbeddingTools_relbigobj+=TauAnalysisMCEmbeddingToolsPlugins
endif
ifeq ($(strip $(RecoMuonMuonIdentificationPlugins)),)
RecoMuonMuonIdentificationPlugins := self/src/RecoMuon/MuonIdentification/plugins
RecoMuonMuonIdentificationPlugins_LOC_USE := self cmssw DataFormats/Common DataFormats/MuonDetId DataFormats/MuonReco DataFormats/RecoCandidate DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CommonDetUnit Geometry/Records Geometry/CaloTopology PhysicsTools/IsolationAlgos RecoMuon/MuonIdentification RecoMuon/TrackingTools TrackingTools/Records TrackingTools/TrackAssociator TrackingTools/TransientTrackingRecHit boost_regex CommonTools/Utils DataFormats/ParticleFlowCandidate
RecoMuon/MuonIdentification_relbigobj+=RecoMuonMuonIdentificationPlugins
endif
ifeq ($(strip $(RecoMuonMuonIdentificationPlugins_cuts)),)
RecoMuonMuonIdentificationPlugins_cuts := self/src/RecoMuon/MuonIdentification/plugins
RecoMuonMuonIdentificationPlugins_cuts_LOC_USE := self cmssw DataFormats/Common DataFormats/MuonDetId DataFormats/MuonReco DataFormats/RecoCandidate DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CommonDetUnit Geometry/Records Geometry/CaloTopology PhysicsTools/IsolationAlgos RecoMuon/MuonIdentification RecoMuon/TrackingTools TrackingTools/Records TrackingTools/TrackAssociator TrackingTools/TransientTrackingRecHit boost_regex CommonTools/Utils DataFormats/ParticleFlowCandidate PhysicsTools/SelectorUtils
RecoMuon/MuonIdentification_relbigobj+=RecoMuonMuonIdentificationPlugins_cuts
endif
ifeq ($(strip $(FireworksCandidatesPlugins)),)
FireworksCandidatesPlugins := self/src/Fireworks/Candidates/plugins
FireworksCandidatesPlugins_LOC_LIB   := Eve
FireworksCandidatesPlugins_LOC_USE := self cmssw DataFormats/Candidate Fireworks/Candidates Fireworks/Core
Fireworks/Candidates_relbigobj+=FireworksCandidatesPlugins
endif
ifeq ($(strip $(GeometryCaloEventSetupPlugins)),)
GeometryCaloEventSetupPlugins := self/src/Geometry/CaloEventSetup/plugins
GeometryCaloEventSetupPlugins_LOC_USE := self cmssw FWCore/PluginManager FWCore/Framework Geometry/Records Geometry/CaloGeometry Geometry/EcalAlgo Geometry/CaloTopology Geometry/HcalTowerAlgo CondFormats/Alignment FWCore/MessageLogger FWCore/ParameterSet zlib
Geometry/CaloEventSetup_relbigobj+=GeometryCaloEventSetupPlugins
endif
ifeq ($(strip $(DQMOfflineTriggerPlugins)),)
DQMOfflineTriggerPlugins := self/src/DQMOffline/Trigger/plugins
DQMOfflineTriggerPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry DataFormats/RecoCandidate DataFormats/HLTReco DataFormats/MuonReco DataFormats/EgammaReco DataFormats/TrackReco DataFormats/TrajectorySeed DataFormats/BTauReco DataFormats/TauReco DataFormats/METReco DataFormats/JetReco RecoEcal/EgammaCoreTools RecoEgamma/EgammaHLTAlgos HLTrigger/HLTcore CondFormats/DataRecord DQM/HLTEvF root roofit boost
DQMOffline/Trigger_relbigobj+=DQMOfflineTriggerPlugins
endif
ifeq ($(strip $(GeneratorInterfaceLHEIO)),)
GeneratorInterfaceLHEIO := self/src/GeneratorInterface/LHEInterface/plugins
GeneratorInterfaceLHEIO_LOC_USE := self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Utilities GeneratorInterface/LHEInterface GeneratorInterface/Core boost FWCore/Framework FWCore/Sources SimDataFormats/GeneratorProducts mcdb
GeneratorInterface/LHEInterface_relbigobj+=GeneratorInterfaceLHEIO
endif
ifeq ($(strip $(GeneratorInterfaceLHEProducer)),)
GeneratorInterfaceLHEProducer := self/src/GeneratorInterface/LHEInterface/plugins
GeneratorInterfaceLHEProducer_LOC_USE := self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Utilities GeneratorInterface/LHEInterface GeneratorInterface/Core boost FWCore/Framework SimDataFormats/GeneratorProducts
GeneratorInterface/LHEInterface_relbigobj+=GeneratorInterfaceLHEProducer
endif
ifeq ($(strip $(GeneratorInterfaceLHECOMWeightProducer)),)
GeneratorInterfaceLHECOMWeightProducer := self/src/GeneratorInterface/LHEInterface/plugins
GeneratorInterfaceLHECOMWeightProducer_LOC_USE := self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Utilities GeneratorInterface/LHEInterface GeneratorInterface/Core boost FWCore/Framework SimDataFormats/GeneratorProducts lhapdf
GeneratorInterface/LHEInterface_relbigobj+=GeneratorInterfaceLHECOMWeightProducer
endif
ifeq ($(strip $(GeneratorInterfaceLHEAnalyzer)),)
GeneratorInterfaceLHEAnalyzer := self/src/GeneratorInterface/LHEInterface/plugins
GeneratorInterfaceLHEAnalyzer_LOC_USE := self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Utilities GeneratorInterface/LHEInterface GeneratorInterface/Core boost FWCore/Framework DataFormats/StdDictionaries SimDataFormats/GeneratorProducts CommonTools/UtilAlgos
GeneratorInterface/LHEInterface_relbigobj+=GeneratorInterfaceLHEAnalyzer
endif
ifeq ($(strip $(DQM/TrigXMonitor)),)
DQMTrigXMonitor := self/DQM/TrigXMonitor
DQM/TrigXMonitor := DQMTrigXMonitor
DQMTrigXMonitor_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMTrigXMonitor_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DQMServices/Core DataFormats/HLTReco DataFormats/HcalDetId DataFormats/CaloRecHit DataFormats/FEDRawData DQMServices/Components DataFormats/L1GlobalTrigger DataFormats/Scalers HLTrigger/HLTcore L1Trigger/GlobalTriggerAnalyzer,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMTrigXMonitor
DQMTrigXMonitor_CLASS := LIBRARY
DQM/TrigXMonitor_relbigobj+=DQMTrigXMonitor
endif
ifeq ($(strip $(RecoHI/HiEgammaAlgos)),)
RecoHIHiEgammaAlgos := self/RecoHI/HiEgammaAlgos
RecoHI/HiEgammaAlgos := RecoHIHiEgammaAlgos
RecoHIHiEgammaAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoHIHiEgammaAlgos_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet DataFormats/EgammaReco DataFormats/Candidate DataFormats/HepMCCandidate Geometry/CaloGeometry RecoEcal/EgammaClusterAlgos DataFormats/EgammaCandidates clhep root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoHIHiEgammaAlgos_EX_LIB   := RecoHIHiEgammaAlgos
ALL_EXTERNAL_PRODS += RecoHIHiEgammaAlgos
RecoHIHiEgammaAlgos_CLASS := LIBRARY
RecoHI/HiEgammaAlgos_relbigobj+=RecoHIHiEgammaAlgos
endif
ifeq ($(strip $(SimG4CMSCherenkovAnalysisPlugins)),)
SimG4CMSCherenkovAnalysisPlugins := self/src/SimG4CMS/CherenkovAnalysis/plugins
SimG4CMSCherenkovAnalysisPlugins_LOC_USE := self cmssw FWCore/PluginManager SimG4Core/SensitiveDetector SimG4Core/Notification SimG4Core/Application SimG4CMS/Calo SimDataFormats/SimHitMaker SimDataFormats/CaloHit DetectorDescription/Core FWCore/ParameterSet FWCore/MessageLogger boost geant4core root SimG4CMS/CherenkovAnalysis
SimG4CMS/CherenkovAnalysis_relbigobj+=SimG4CMSCherenkovAnalysisPlugins
endif
ifeq ($(strip $(Fireworks/Core)),)
FireworksCore := self/Fireworks/Core
Fireworks/Core := FireworksCore
FireworksCore_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FireworksCore_EX_USE := $(foreach d, self cmssw CommonTools/Utils DataFormats/Candidate DataFormats/Common DataFormats/DetId DataFormats/EcalDetId DataFormats/EcalRecHit DataFormats/FWLite DataFormats/L1GlobalTrigger DataFormats/Math DataFormats/MuonDetId DataFormats/SiPixelDetId DataFormats/Scalers DataFormats/TrackReco FWCore/Common FWCore/FWLite FWCore/PluginManager FWCore/Utilities Fireworks/TableWidget boost boost_program_options boost_regex boost_system opengl rootinteractive rootgraphics sigcpp,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FireworksCore_LCGDICTS  := x 
FireworksCore_EX_LIB   := FireworksCore
ALL_EXTERNAL_PRODS += FireworksCore
FireworksCore_CLASS := LIBRARY
Fireworks/Core_relbigobj+=FireworksCore
endif
ifeq ($(strip $(PhysicsTools/UtilAlgos)),)
PhysicsToolsUtilAlgos := self/PhysicsTools/UtilAlgos
PhysicsTools/UtilAlgos := PhysicsToolsUtilAlgos
PhysicsToolsUtilAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
PhysicsToolsUtilAlgos_EX_USE := $(foreach d, self cmssw FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Framework FWCore/ParameterSet FWCore/Services FWCore/Utilities FWCore/Common DataFormats/Common DataFormats/Provenance CommonTools/UtilAlgos DataFormats/MuonReco DataFormats/PatCandidates root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsUtilAlgos_EX_LIB   := PhysicsToolsUtilAlgos
ALL_EXTERNAL_PRODS += PhysicsToolsUtilAlgos
PhysicsToolsUtilAlgos_CLASS := LIBRARY
PhysicsTools/UtilAlgos_relbigobj+=PhysicsToolsUtilAlgos
endif
ifeq ($(strip $(FastSimulation/Event)),)
FastSimulationEvent := self/FastSimulation/Event
FastSimulation/Event := FastSimulationEvent
FastSimulationEvent_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FastSimulationEvent_EX_USE := $(foreach d, self cmssw DataFormats/HepMCCandidate DataFormats/Candidate DataFormats/Math DataFormats/Provenance FWCore/ParameterSet FastSimulation/BaseParticlePropagator FastSimulation/Particle FastSimulation/Utilities SimDataFormats/Track SimDataFormats/Vertex SimDataFormats/GeneratorProducts FastSimDataFormats/NuclearInteractions SimGeneral/HepPDTRecord hepmc,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FastSimulationEvent_EX_LIB   := FastSimulationEvent
ALL_EXTERNAL_PRODS += FastSimulationEvent
FastSimulationEvent_CLASS := LIBRARY
FastSimulation/Event_relbigobj+=FastSimulationEvent
endif
ifeq ($(strip $(DQM/HLXMonitor)),)
DQMHLXMonitor := self/DQM/HLXMonitor
DQM/HLXMonitor := DQMHLXMonitor
DQMHLXMonitor_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMHLXMonitor_EX_USE := $(foreach d, self cmssw DQMServices/Components DQMServices/Core RecoLuminosity/TCPReceiver,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMHLXMonitor
DQMHLXMonitor_CLASS := LIBRARY
DQM/HLXMonitor_relbigobj+=DQMHLXMonitor
endif
ifeq ($(strip $(HLTrigger/special)),)
HLTriggerspecial := self/HLTrigger/special
HLTrigger/special := HLTriggerspecial
HLTriggerspecial_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerspecial_EX_USE := $(foreach d, self cmssw root CalibCalorimetry/EcalLaserCorrection Calibration/Tools CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects DataFormats/CSCDigi DataFormats/CSCRecHit DataFormats/TrackerRecHit2D DataFormats/Common DataFormats/DTDigi DataFormats/DetId DataFormats/EcalDetId DataFormats/EcalRecHit DataFormats/EcalDigi DataFormats/EgammaReco DataFormats/FEDRawData DataFormats/HLTReco DataFormats/HcalIsolatedTrack DataFormats/JetReco DataFormats/L1DTTrackFinder DataFormats/L1Trigger DataFormats/METReco DataFormats/Math DataFormats/MuonDetId DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/VertexReco DataFormats/MuonReco EventFilter/HcalRawToDigi FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry Geometry/CommonTopologies Geometry/CSCGeometry Geometry/RPCGeometry Geometry/CaloGeometry Geometry/CaloTopology Geometry/EcalMapping Geometry/DTGeometry Geometry/Records Geometry/TrackerGeometryBuilder HLTrigger/HLTcore CommonTools/UtilAlgos RecoEcal/EgammaClusterAlgos RecoEcal/EgammaCoreTools RecoMuon/TrackingTools Geometry/EcalAlgo SimGeneral/HepPDTRecord TrackingTools/TransientTrack,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerspecial
HLTriggerspecial_CLASS := LIBRARY
HLTrigger/special_relbigobj+=HLTriggerspecial
endif
ifeq ($(strip $(RecoMuonL3TrackFinderPlugins)),)
RecoMuonL3TrackFinderPlugins := self/src/RecoMuon/L3TrackFinder/plugins
RecoMuonL3TrackFinderPlugins_LOC_USE := self cmssw FWCore/Framework RecoMuon/L3TrackFinder RecoTracker/MeasurementDet TrackingTools/GeomPropagators TrackingTools/KalmanUpdators TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrajectoryFiltering TrackingTools/TransientTrackingRecHit
RecoMuon/L3TrackFinder_relbigobj+=RecoMuonL3TrackFinderPlugins
endif
ifeq ($(strip $(CommonToolsParticleFlow_plugins)),)
CommonToolsParticleFlow_plugins := self/src/CommonTools/ParticleFlow/plugins
CommonToolsParticleFlow_plugins_LOC_USE := self cmssw DataFormats/ParticleFlowCandidate DataFormats/JetReco DataFormats/TauReco DataFormats/METReco DataFormats/TrackReco DataFormats/VertexReco PhysicsTools/IsolationAlgos FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet JetMETCorrections/Objects CommonTools/Utils CommonTools/ParticleFlow
CommonTools/ParticleFlow_relbigobj+=CommonToolsParticleFlow_plugins
endif
ifeq ($(strip $(PhysicsToolsIsolationAlgos_plugins)),)
PhysicsToolsIsolationAlgos_plugins := self/src/PhysicsTools/IsolationAlgos/plugins
PhysicsToolsIsolationAlgos_plugins_LOC_USE := self cmssw CommonTools/Utils DataFormats/Candidate DataFormats/TauReco DataFormats/TrackReco PhysicsTools/IsolationAlgos
PhysicsTools/IsolationAlgos_relbigobj+=PhysicsToolsIsolationAlgos_plugins
endif
ifeq ($(strip $(PhysicsTools/SelectorUtils)),)
PhysicsToolsSelectorUtils := self/PhysicsTools/SelectorUtils
PhysicsTools/SelectorUtils := PhysicsToolsSelectorUtils
PhysicsToolsSelectorUtils_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
PhysicsToolsSelectorUtils_EX_USE := $(foreach d, self cmssw CommonTools/Utils DataFormats/Math DataFormats/Candidate DataFormats/PatCandidates DataFormats/EgammaCandidates DataFormats/MuonReco DataFormats/TauReco DataFormats/BeamSpot DataFormats/Common DataFormats/Provenance DataFormats/VertexReco FWCore/Common FWCore/FWLite FWCore/ParameterSet FWCore/Utilities rootcore root openssl,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsSelectorUtils_LCGDICTS  := x 
PhysicsToolsSelectorUtils_EX_LIB   := PhysicsToolsSelectorUtils
ALL_EXTERNAL_PRODS += PhysicsToolsSelectorUtils
PhysicsToolsSelectorUtils_CLASS := LIBRARY
PhysicsTools/SelectorUtils_relbigobj+=PhysicsToolsSelectorUtils
endif
ifeq ($(strip $(DQMOfflineEGammaPlugins)),)
DQMOfflineEGammaPlugins := self/src/DQMOffline/EGamma/plugins
DQMOfflineEGammaPlugins_LOC_USE := self cmssw DQMOffline/EGamma DataFormats/EgammaReco DataFormats/EgammaCandidates DataFormats/EcalRecHit DataFormats/MuonReco RecoEcal/EgammaCoreTools DataFormats/Math RecoEgamma/EgammaIsolationAlgos Geometry/CaloTopology Geometry/CaloGeometry DQMServices/Components DQMServices/Core HLTrigger/HLTcore clhep CommonTools/Statistics CommonTools/UtilAlgos root roofit boost
DQMOffline/EGamma_relbigobj+=DQMOfflineEGammaPlugins
endif
ifeq ($(strip $(TauAnalysis/MCEmbeddingTools)),)
TauAnalysisMCEmbeddingTools := self/TauAnalysis/MCEmbeddingTools
TauAnalysis/MCEmbeddingTools := TauAnalysisMCEmbeddingTools
TauAnalysisMCEmbeddingTools_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
TauAnalysisMCEmbeddingTools_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet rootmath boost SimDataFormats/GeneratorProducts DataFormats/HepMCCandidate RecoMuon/MuonIsolation DataFormats/DetId TrackingTools/TrackAssociator DataFormats/VertexReco CommonTools/Utils CommonTools/UtilAlgos GeneratorInterface/ExternalDecays DataFormats/MuonReco DataFormats/EcalRecHit pythia6 GeneratorInterface/Pythia6Interface GeneratorInterface/Core,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
TauAnalysisMCEmbeddingTools_EX_LIB   := TauAnalysisMCEmbeddingTools
ALL_EXTERNAL_PRODS += TauAnalysisMCEmbeddingTools
TauAnalysisMCEmbeddingTools_CLASS := LIBRARY
TauAnalysis/MCEmbeddingTools_relbigobj+=TauAnalysisMCEmbeddingTools
endif
ifeq ($(strip $(SimCalorimetry/EcalTestBeam)),)
SimCalorimetryEcalTestBeam := self/SimCalorimetry/EcalTestBeam
SimCalorimetry/EcalTestBeam := SimCalorimetryEcalTestBeam
SimCalorimetryEcalTestBeam_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimCalorimetryEcalTestBeam_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger SimCalorimetry/EcalSimAlgos SimCalorimetry/EcalTestBeamAlgos SimGeneral/NoiseGenerators SimDataFormats/CrossingFrame SimDataFormats/EcalTestBeam CondFormats/DataRecord TBDataFormats/EcalTBObjects SimCalorimetry/EcalSimProducers,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += SimCalorimetryEcalTestBeam
SimCalorimetryEcalTestBeam_CLASS := LIBRARY
SimCalorimetry/EcalTestBeam_relbigobj+=SimCalorimetryEcalTestBeam
endif
ifeq ($(strip $(JetMETCorrections/Type1MET)),)
JetMETCorrectionsType1MET := self/JetMETCorrections/Type1MET
JetMETCorrections/Type1MET := JetMETCorrectionsType1MET
JetMETCorrectionsType1MET_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
JetMETCorrectionsType1MET_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities CondFormats/EgammaObjects CondFormats/JetMETObjects DataFormats/Candidate DataFormats/JetReco DataFormats/ParticleFlowCandidate DataFormats/Math DataFormats/METReco DataFormats/MuonReco DataFormats/TauReco DataFormats/VertexReco JetMETCorrections/Objects root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
JetMETCorrectionsType1MET_EX_LIB   := JetMETCorrectionsType1MET
ALL_EXTERNAL_PRODS += JetMETCorrectionsType1MET
JetMETCorrectionsType1MET_CLASS := LIBRARY
JetMETCorrections/Type1MET_relbigobj+=JetMETCorrectionsType1MET
endif
ifeq ($(strip $(CommonTools/TriggerUtils)),)
CommonToolsTriggerUtils := self/CommonTools/TriggerUtils
CommonTools/TriggerUtils := CommonToolsTriggerUtils
CommonToolsTriggerUtils_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CommonToolsTriggerUtils_EX_USE := $(foreach d, self cmssw CondFormats/DataRecord CondFormats/L1TObjects DataFormats/Common DataFormats/Scalers DataFormats/L1GlobalTrigger FWCore/Framework L1Trigger/GlobalTriggerAnalyzer HLTrigger/HLTcore,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CommonToolsTriggerUtils_EX_LIB   := CommonToolsTriggerUtils
ALL_EXTERNAL_PRODS += CommonToolsTriggerUtils
CommonToolsTriggerUtils_CLASS := LIBRARY
CommonTools/TriggerUtils_relbigobj+=CommonToolsTriggerUtils
endif
ifeq ($(strip $(GeneratorInterfacePyquenInterfacePlugins)),)
GeneratorInterfacePyquenInterfacePlugins := self/src/GeneratorInterface/PyquenInterface/plugins
GeneratorInterfacePyquenInterfacePlugins_LOC_USE := self cmssw GeneratorInterface/PyquenInterface pydata
GeneratorInterface/PyquenInterface_relbigobj+=GeneratorInterfacePyquenInterfacePlugins
endif
ifeq ($(strip $(PhysicsTools/RecoUtils)),)
PhysicsToolsRecoUtils := self/PhysicsTools/RecoUtils
PhysicsTools/RecoUtils := PhysicsToolsRecoUtils
PhysicsToolsRecoUtils_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
PhysicsToolsRecoUtils_EX_USE := $(foreach d, self cmssw RecoVertex/VertexPrimitives RecoVertex/KinematicFit TrackingTools/TransientTrack MagneticField/Records DataFormats/RecoCandidate heppdt PhysicsTools/KinFitter FWCore/ParameterSet boost RecoTracker/DebugTools DataFormats/VertexReco,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsRecoUtils_EX_LIB   := PhysicsToolsRecoUtils
ALL_EXTERNAL_PRODS += PhysicsToolsRecoUtils
PhysicsToolsRecoUtils_CLASS := LIBRARY
PhysicsTools/RecoUtils_relbigobj+=PhysicsToolsRecoUtils
endif
ifeq ($(strip $(DPGAnalysis/Skims)),)
DPGAnalysisSkims := self/DPGAnalysis/Skims
DPGAnalysis/Skims := DPGAnalysisSkims
DPGAnalysisSkims_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DPGAnalysisSkims_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/MessageLogger FWCore/Utilities Geometry/Records Geometry/CSCGeometry DataFormats/CSCDigi DataFormats/CSCRecHit DataFormats/Common DataFormats/MuonDetId CondFormats/CSCObjects DataFormats/DTDigi CondFormats/DTObjects DataFormats/RPCRecHit DataFormats/EcalDetId DataFormats/EcalRecHit DataFormats/L1GlobalTrigger DataFormats/Scalers Geometry/EcalMapping DataFormats/TrackReco DataFormats/MuonReco DataFormats/VertexReco DataFormats/METReco DataFormats/JetReco DataFormats/EgammaCandidates DataFormats/HcalIsolatedTrack Geometry/RPCGeometry DataFormats/L1Trigger DataFormats/TrackerRecHit2D root HLTrigger/HLTcore DataFormats/HcalRecHit RecoEcal/EgammaCoreTools DataFormats/EgammaReco PhysicsTools/SelectorUtils DataFormats/Provenance,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DPGAnalysisSkims
DPGAnalysisSkims_CLASS := LIBRARY
DPGAnalysis/Skims_relbigobj+=DPGAnalysisSkims
endif
ifeq ($(strip $(TopQuarkAnalysisTopToolsPlugins)),)
TopQuarkAnalysisTopToolsPlugins := self/src/TopQuarkAnalysis/TopTools/plugins
TopQuarkAnalysisTopToolsPlugins_LOC_USE := self cmssw AnalysisDataFormats/TopObjects DataFormats/PatCandidates DataFormats/VertexReco TopQuarkAnalysis/TopTools FWCore/ParameterSet FWCore/Framework HLTrigger/HLTcore boost root
TopQuarkAnalysis/TopTools_relbigobj+=TopQuarkAnalysisTopToolsPlugins
endif
ifeq ($(strip $(FireworksGeometryMFProducerPlugin)),)
FireworksGeometryMFProducerPlugin := self/src/Fireworks/Geometry/plugins
FireworksGeometryMFProducerPlugin_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet clhep MagneticField/Engine MagneticField/Records rootgpad
Fireworks/Geometry_relbigobj+=FireworksGeometryMFProducerPlugin
endif
ifeq ($(strip $(FireworksGeometryFWRecoGeometryESProducerPlugin)),)
FireworksGeometryFWRecoGeometryESProducerPlugin := self/src/Fireworks/Geometry/plugins
FireworksGeometryFWRecoGeometryESProducerPlugin_LOC_USE := self cmssw Fireworks/Geometry
Fireworks/Geometry_relbigobj+=FireworksGeometryFWRecoGeometryESProducerPlugin
endif
ifeq ($(strip $(FireworksGeometryDumpSimGeometryPlugin)),)
FireworksGeometryDumpSimGeometryPlugin := self/src/Fireworks/Geometry/plugins
FireworksGeometryDumpSimGeometryPlugin_LOC_LIB   := Geom
FireworksGeometryDumpSimGeometryPlugin_LOC_USE := self cmssw Fireworks/Geometry FWCore/Framework FWCore/PluginManager FWCore/ParameterSet
Fireworks/Geometry_relbigobj+=FireworksGeometryDumpSimGeometryPlugin
endif
ifeq ($(strip $(FireworksGeometryDumpFWRecoGeometryPlugin)),)
FireworksGeometryDumpFWRecoGeometryPlugin := self/src/Fireworks/Geometry/plugins
FireworksGeometryDumpFWRecoGeometryPlugin_LOC_LIB   := Eve Geom
FireworksGeometryDumpFWRecoGeometryPlugin_LOC_USE := self cmssw Fireworks/Geometry rootcore FWCore/Framework FWCore/PluginManager FWCore/ParameterSet Geometry/CaloGeometry Geometry/DTGeometry Geometry/CSCGeometry Geometry/RPCGeometry Geometry/TrackerGeometryBuilder Geometry/Records
Fireworks/Geometry_relbigobj+=FireworksGeometryDumpFWRecoGeometryPlugin
endif
ifeq ($(strip $(FireworksGeometryPlugins)),)
FireworksGeometryPlugins := self/src/Fireworks/Geometry/plugins
FireworksGeometryPlugins_LOC_LIB   := Eve Geom
FireworksGeometryPlugins_LOC_USE := self cmssw Geometry/Records Fireworks/Geometry rootgpad
Fireworks/Geometry_relbigobj+=FireworksGeometryPlugins
endif
ifeq ($(strip $(FireworksGeometryDumpFWTGeoRecoGeometryPlugin)),)
FireworksGeometryDumpFWTGeoRecoGeometryPlugin := self/src/Fireworks/Geometry/plugins
FireworksGeometryDumpFWTGeoRecoGeometryPlugin_LOC_LIB   := Eve Geom
FireworksGeometryDumpFWTGeoRecoGeometryPlugin_LOC_USE := self cmssw Fireworks/Geometry rootcore FWCore/Framework FWCore/PluginManager FWCore/ParameterSet Geometry/CaloGeometry Geometry/DTGeometry Geometry/CSCGeometry Geometry/RPCGeometry Geometry/TrackerGeometryBuilder Geometry/Records
Fireworks/Geometry_relbigobj+=FireworksGeometryDumpFWTGeoRecoGeometryPlugin
endif
ifeq ($(strip $(FireworksDisplayGeomPlugin)),)
FireworksDisplayGeomPlugin := self/src/Fireworks/Geometry/plugins
FireworksDisplayGeomPlugin_LOC_LIB   := Eve Geom Physics
FireworksDisplayGeomPlugin_LOC_USE := self cmssw FWCore/Framework Fireworks/Geometry Fireworks/Eve MagneticField/Engine MagneticField/Records
Fireworks/Geometry_relbigobj+=FireworksDisplayGeomPlugin
endif
ifeq ($(strip $(FireworksGeometryValidateGeometryPlugin)),)
FireworksGeometryValidateGeometryPlugin := self/src/Fireworks/Geometry/plugins
FireworksGeometryValidateGeometryPlugin_LOC_LIB   := Geom
FireworksGeometryValidateGeometryPlugin_LOC_USE := self cmssw FWCore/Framework Geometry/RPCGeometry Geometry/DTGeometry Geometry/CSCGeometry Geometry/CaloGeometry Geometry/TrackerGeometryBuilder Geometry/Records Fireworks/Core Fireworks/Tracks rootcore
Fireworks/Geometry_relbigobj+=FireworksGeometryValidateGeometryPlugin
endif
ifeq ($(strip $(FireworksGeometryTGeoMgrFromDddPlugin)),)
FireworksGeometryTGeoMgrFromDddPlugin := self/src/Fireworks/Geometry/plugins
FireworksGeometryTGeoMgrFromDddPlugin_LOC_USE := self cmssw Fireworks/Geometry
Fireworks/Geometry_relbigobj+=FireworksGeometryTGeoMgrFromDddPlugin
endif
ifeq ($(strip $(FireworksGeometryFWTGeoRecoGeometryESProducerPlugin)),)
FireworksGeometryFWTGeoRecoGeometryESProducerPlugin := self/src/Fireworks/Geometry/plugins
FireworksGeometryFWTGeoRecoGeometryESProducerPlugin_LOC_USE := self cmssw Fireworks/Geometry
Fireworks/Geometry_relbigobj+=FireworksGeometryFWTGeoRecoGeometryESProducerPlugin
endif
ifeq ($(strip $(Configuration/Skimming)),)
ConfigurationSkimming := self/Configuration/Skimming
Configuration/Skimming := ConfigurationSkimming
ConfigurationSkimming_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ConfigurationSkimming_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/Common DataFormats/EgammaCandidates DataFormats/MuonReco DataFormats/JetReco DataFormats/Common Geometry/CaloTopology Geometry/Records RecoEcal/EgammaCoreTools RecoJets/JetAlgorithms HLTrigger/HLTcore,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += ConfigurationSkimming
ConfigurationSkimming_CLASS := LIBRARY
Configuration/Skimming_relbigobj+=ConfigurationSkimming
endif
ifeq ($(strip $(RecoParticleFlow/PFTracking)),)
RecoParticleFlowPFTracking := self/RecoParticleFlow/PFTracking
RecoParticleFlow/PFTracking := RecoParticleFlowPFTracking
RecoParticleFlowPFTracking_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoParticleFlowPFTracking_EX_USE := $(foreach d, self cmssw RecoVertex/KalmanVertexFit DataFormats/EgammaCandidates DataFormats/GeometrySurface DataFormats/GeometryVector DataFormats/GsfTrackReco DataFormats/Math DataFormats/ParticleFlowReco DataFormats/TrackReco DataFormats/TrackerRecHit2D DataFormats/TrackingRecHit DataFormats/TrajectorySeed DataFormats/SiPixelDetId DataFormats/SiStripDetId DataFormats/BeamSpot Geometry/CommonDetUnit Geometry/TrackerGeometryBuilder Geometry/Records Utilities/General FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FastSimulation/BaseParticlePropagator RecoParticleFlow/PFClusterTools TrackingTools/GsfTools TrackingTools/PatternTools TrackingTools/TrajectoryState TrackingTools/TransientTrack TrackingTools/TrajectoryParametrization RecoVertex/VertexPrimitives RecoVertex/AdaptiveVertexFit TrackingTools/IPTools DataFormats/VertexReco rootcore roottmva,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoParticleFlowPFTracking_EX_LIB   := RecoParticleFlowPFTracking
ALL_EXTERNAL_PRODS += RecoParticleFlowPFTracking
RecoParticleFlowPFTracking_CLASS := LIBRARY
RecoParticleFlow/PFTracking_relbigobj+=RecoParticleFlowPFTracking
endif
ifeq ($(strip $(DQM/TrackerCommon)),)
DQMTrackerCommon := self/DQM/TrackerCommon
DQM/TrackerCommon := DQMTrackerCommon
DQMTrackerCommon_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMTrackerCommon_EX_USE := $(foreach d, self cmssw DQMServices/Core FWCore/Framework CondFormats/DataRecord DataFormats/Common DataFormats/Scalers DataFormats/L1GlobalTrigger L1Trigger/GlobalTriggerAnalyzer HLTrigger/HLTcore rootgraphics,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DQMTrackerCommon_EX_LIB   := DQMTrackerCommon
ALL_EXTERNAL_PRODS += DQMTrackerCommon
DQMTrackerCommon_CLASS := LIBRARY
DQM/TrackerCommon_relbigobj+=DQMTrackerCommon
endif
ifeq ($(strip $(GeneratorInterface/GenFilters)),)
GeneratorInterfaceGenFilters := self/GeneratorInterface/GenFilters
GeneratorInterface/GenFilters := GeneratorInterfaceGenFilters
GeneratorInterfaceGenFilters_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
GeneratorInterfaceGenFilters_EX_USE := $(foreach d, self cmssw boost FWCore/PluginManager FWCore/ParameterSet FWCore/Framework FWCore/Utilities SimDataFormats/GeneratorProducts heppdt clhep root GeneratorInterface/Pythia6Interface GeneratorInterface/Core SimGeneral/HepPDTRecord DataFormats/GeometryVector DataFormats/GeometrySurface TrackPropagation/SteppingHelixPropagator MagneticField/Records TrackingTools/TrajectoryState TrackingTools/TrajectoryParametrization TrackingTools/Records CommonTools/UtilAlgos FWCore/ServiceRegistry FastSimulation/Particle FastSimulation/BaseParticlePropagator TrackingTools/GeomPropagators DataFormats/HepMCCandidate DataFormats/JetReco DataFormats/EgammaReco,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += GeneratorInterfaceGenFilters
GeneratorInterfaceGenFilters_CLASS := LIBRARY
GeneratorInterface/GenFilters_relbigobj+=GeneratorInterfaceGenFilters
endif
ifeq ($(strip $(PhysicsTools/IsolationAlgos)),)
PhysicsToolsIsolationAlgos := self/PhysicsTools/IsolationAlgos
PhysicsTools/IsolationAlgos := PhysicsToolsIsolationAlgos
PhysicsToolsIsolationAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
PhysicsToolsIsolationAlgos_EX_USE := $(foreach d, self cmssw DataFormats/GeometryVector DataFormats/GeometrySurface TrackPropagation/SteppingHelixPropagator MagneticField/Records TrackingTools/TrajectoryState TrackingTools/TrajectoryParametrization FWCore/Framework FWCore/ParameterSet DataFormats/RecoCandidate,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsIsolationAlgos_EX_LIB   := PhysicsToolsIsolationAlgos
ALL_EXTERNAL_PRODS += PhysicsToolsIsolationAlgos
PhysicsToolsIsolationAlgos_CLASS := LIBRARY
PhysicsTools/IsolationAlgos_relbigobj+=PhysicsToolsIsolationAlgos
endif
ifeq ($(strip $(RecoEgamma/EgammaPhotonAlgos)),)
RecoEgammaEgammaPhotonAlgos := self/RecoEgamma/EgammaPhotonAlgos
RecoEgamma/EgammaPhotonAlgos := RecoEgammaEgammaPhotonAlgos
RecoEgammaEgammaPhotonAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoEgammaEgammaPhotonAlgos_LOC_FLAGS_CXXFLAGS   := -Ofast
RecoEgammaEgammaPhotonAlgos_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet Geometry/CaloGeometry Geometry/CaloTopology DataFormats/CaloRecHit DataFormats/DetId RecoEgamma/EgammaTools DataFormats/Math DataFormats/EgammaCandidates DataFormats/Common DataFormats/TrajectorySeed TrackingTools/MaterialEffects TrackingTools/GeomPropagators TrackingTools/KalmanUpdators TrackingTools/TrajectoryState TrackingTools/PatternTools TrackingTools/DetLayers TrackingTools/TransientTrack RecoTracker/MeasurementDet RecoTracker/TkTrackingRegions RecoTracker/CkfPattern RecoTracker/TkSeedGenerator RecoVertex/VertexPrimitives RecoVertex/KalmanVertexFit RecoVertex/KinematicFitPrimitives RecoVertex/KinematicFit MagneticField/Engine Utilities/General clhep,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoEgammaEgammaPhotonAlgos_EX_LIB   := RecoEgammaEgammaPhotonAlgos
ALL_EXTERNAL_PRODS += RecoEgammaEgammaPhotonAlgos
RecoEgammaEgammaPhotonAlgos_CLASS := LIBRARY
RecoEgamma/EgammaPhotonAlgos_relbigobj+=RecoEgammaEgammaPhotonAlgos
endif
ifeq ($(strip $(GeneratorInterface/Pythia8Interface)),)
GeneratorInterfacePythia8Interface := self/GeneratorInterface/Pythia8Interface
GeneratorInterface/Pythia8Interface := GeneratorInterfacePythia8Interface
GeneratorInterfacePythia8Interface_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
GeneratorInterfacePythia8Interface_EX_USE := $(foreach d, self cmssw FWCore/Concurrency FWCore/Framework FWCore/MessageLogger FWCore/Utilities SimDataFormats/GeneratorProducts GeneratorInterface/Core boost pythia8 hepmc clhep,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
GeneratorInterfacePythia8Interface_EX_LIB   := GeneratorInterfacePythia8Interface
ALL_EXTERNAL_PRODS += GeneratorInterfacePythia8Interface
GeneratorInterfacePythia8Interface_CLASS := LIBRARY
GeneratorInterface/Pythia8Interface_relbigobj+=GeneratorInterfacePythia8Interface
endif
ifeq ($(strip $(Geometry/CSCGeometry)),)
GeometryCSCGeometry := self/Geometry/CSCGeometry
Geometry/CSCGeometry := GeometryCSCGeometry
GeometryCSCGeometry_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
GeometryCSCGeometry_EX_USE := $(foreach d, self cmssw DataFormats/GeometrySurface DataFormats/GeometryVector DataFormats/MuonDetId FWCore/MessageLogger FWCore/Utilities Geometry/CommonDetUnit Geometry/CommonTopologies clhep,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
GeometryCSCGeometry_EX_LIB   := GeometryCSCGeometry
ALL_EXTERNAL_PRODS += GeometryCSCGeometry
GeometryCSCGeometry_CLASS := LIBRARY
Geometry/CSCGeometry_relbigobj+=GeometryCSCGeometry
endif
ifeq ($(strip $(ElectroWeakAnalysis/ZMuMu)),)
ElectroWeakAnalysisZMuMu := self/ElectroWeakAnalysis/ZMuMu
ElectroWeakAnalysis/ZMuMu := ElectroWeakAnalysisZMuMu
ElectroWeakAnalysisZMuMu_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ElectroWeakAnalysisZMuMu_EX_USE := $(foreach d, self cmssw PhysicsTools/Utilities,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ElectroWeakAnalysisZMuMu_EX_LIB   := ElectroWeakAnalysisZMuMu
ALL_EXTERNAL_PRODS += ElectroWeakAnalysisZMuMu
ElectroWeakAnalysisZMuMu_CLASS := LIBRARY
ElectroWeakAnalysis/ZMuMu_relbigobj+=ElectroWeakAnalysisZMuMu
endif
ifeq ($(strip $(Validation/MuonIsolation)),)
ValidationMuonIsolation := self/Validation/MuonIsolation
Validation/MuonIsolation := ValidationMuonIsolation
ValidationMuonIsolation_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ValidationMuonIsolation_EX_USE := $(foreach d, self cmssw FWCore/Framework root FWCore/PluginManager FWCore/ParameterSet PhysicsTools/UtilAlgos FWCore/ServiceRegistry DataFormats/TrackReco FWCore/MessageLogger DataFormats/MuonReco DQMServices/Core,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += ValidationMuonIsolation
ValidationMuonIsolation_CLASS := LIBRARY
Validation/MuonIsolation_relbigobj+=ValidationMuonIsolation
endif
ifeq ($(strip $(Calibration/Tools)),)
CalibrationTools := self/Calibration/Tools
Calibration/Tools := CalibrationTools
CalibrationTools_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CalibrationTools_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet DataFormats/EcalRecHit DataFormats/EgammaReco DataFormats/CaloTowers DataFormats/HcalDetId DataFormats/EgammaCandidates rootcore rootminuit rootgraphics Geometry/CaloGeometry Geometry/CommonDetUnit Geometry/TrackerGeometryBuilder DataFormats/GeometrySurface Geometry/Records DataFormats/DetId TrackingTools/GeomPropagators MagneticField/Engine MagneticField/Records TrackPropagation/SteppingHelixPropagator,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CalibrationTools_EX_LIB   := CalibrationTools
ALL_EXTERNAL_PRODS += CalibrationTools
CalibrationTools_CLASS := LIBRARY
Calibration/Tools_relbigobj+=CalibrationTools
endif
ifeq ($(strip $(Fireworks/Electrons)),)
FireworksElectrons := self/Fireworks/Electrons
Fireworks/Electrons := FireworksElectrons
FireworksElectrons_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FireworksElectrons_EX_USE := $(foreach d, self cmssw DataFormats/EgammaReco Fireworks/Core rootcore,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FireworksElectrons_EX_LIB   := FireworksElectrons
ALL_EXTERNAL_PRODS += FireworksElectrons
FireworksElectrons_CLASS := LIBRARY
Fireworks/Electrons_relbigobj+=FireworksElectrons
endif
ifeq ($(strip $(QCDAnalysis/Skimming)),)
QCDAnalysisSkimming := self/QCDAnalysis/Skimming
QCDAnalysis/Skimming := QCDAnalysisSkimming
QCDAnalysisSkimming_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
QCDAnalysisSkimming_EX_USE := $(foreach d, self cmssw DataFormats/Common FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities Geometry/Records SimDataFormats/GeneratorProducts DataFormats/EgammaCandidates DataFormats/TrackReco DataFormats/JetReco clhep root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
QCDAnalysisSkimming_EX_LIB   := QCDAnalysisSkimming
ALL_EXTERNAL_PRODS += QCDAnalysisSkimming
QCDAnalysisSkimming_CLASS := LIBRARY
QCDAnalysis/Skimming_relbigobj+=QCDAnalysisSkimming
endif
ifeq ($(strip $(L1Trigger/L1GctAnalyzer)),)
L1TriggerL1GctAnalyzer := self/L1Trigger/L1GctAnalyzer
L1Trigger/L1GctAnalyzer := L1TriggerL1GctAnalyzer
L1TriggerL1GctAnalyzer_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
L1TriggerL1GctAnalyzer_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/L1GlobalCaloTrigger CommonTools/UtilAlgos root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += L1TriggerL1GctAnalyzer
L1TriggerL1GctAnalyzer_CLASS := LIBRARY
L1Trigger/L1GctAnalyzer_relbigobj+=L1TriggerL1GctAnalyzer
endif
ifeq ($(strip $(PhysicsToolsJetChargePlugins)),)
PhysicsToolsJetChargePlugins := self/src/PhysicsTools/JetCharge/plugins
PhysicsToolsJetChargePlugins_LOC_USE := self cmssw FWCore/Framework PhysicsTools/JetCharge DataFormats/JetReco DataFormats/TrackReco
PhysicsTools/JetCharge_relbigobj+=PhysicsToolsJetChargePlugins
endif
ifeq ($(strip $(DQMHLTEvFPlugins)),)
DQMHLTEvFPlugins := self/src/DQM/HLTEvF/plugins
DQMHLTEvFPlugins_LOC_USE := self cmssw DQM/HLTEvF HLTrigger/HLTcore CondFormats/HLTObjects DQMServices/Core DQMServices/Components DQMServices/ClientConfig DataFormats/BeamSpot DataFormats/BTauReco DataFormats/Common DataFormats/Math DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/HLTReco DataFormats/JetReco DataFormats/L1GlobalMuonTrigger DataFormats/L1Trigger DataFormats/MuonReco DataFormats/MuonSeed DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/TrajectorySeed FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/ServiceRegistry Geometry/Records Geometry/CommonDetUnit MagneticField/Records MagneticField/Engine TrackingTools/TrajectoryState rootcore
DQM/HLTEvF_relbigobj+=DQMHLTEvFPlugins
endif
ifeq ($(strip $(CalibTrackerSiPixelGainCalibrationPlugin)),)
CalibTrackerSiPixelGainCalibrationPlugin := self/src/CalibTracker/SiPixelGainCalibration/plugins
CalibTrackerSiPixelGainCalibrationPlugin_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry DataFormats/FEDRawData DataFormats/SiPixelDigi DataFormats/SiPixelRawData CalibTracker/SiPixelESProducers CondFormats/DataRecord CondFormats/SiPixelObjects CondCore/DBOutputService PhysicsTools/UtilAlgos root rootminuit Geometry/Records Geometry/CommonDetUnit Geometry/TrackerGeometryBuilder CalibFormats/SiPixelObjects CalibTracker/SiPixelTools
CalibTracker/SiPixelGainCalibration_relbigobj+=CalibTrackerSiPixelGainCalibrationPlugin
endif
ifeq ($(strip $(Calibration/TkAlCaRecoProducers)),)
CalibrationTkAlCaRecoProducers := self/Calibration/TkAlCaRecoProducers
Calibration/TkAlCaRecoProducers := CalibrationTkAlCaRecoProducers
CalibrationTkAlCaRecoProducers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CalibrationTkAlCaRecoProducers_EX_USE := $(foreach d, self cmssw DataFormats/DetId DataFormats/MuonDetId DataFormats/MuonReco DataFormats/SiStripDetId DataFormats/SiPixelDetId DataFormats/TrackReco DataFormats/TrackerRecHit2D DataFormats/TrackingRecHit DataFormats/SiStripCluster DataFormats/TrajectorySeed DataFormats/Candidate DataFormats/JetReco DataFormats/METReco DataFormats/RecoCandidate DataFormats/Math DataFormats/BeamSpot FWCore/MessageLogger FWCore/Framework FWCore/Utilities FWCore/ParameterSet PhysicsTools/RecoAlgos rootcore,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CalibrationTkAlCaRecoProducers_EX_LIB   := CalibrationTkAlCaRecoProducers
ALL_EXTERNAL_PRODS += CalibrationTkAlCaRecoProducers
CalibrationTkAlCaRecoProducers_CLASS := LIBRARY
Calibration/TkAlCaRecoProducers_relbigobj+=CalibrationTkAlCaRecoProducers
endif
ifeq ($(strip $(HLTriggerOffline/JetMET)),)
HLTriggerOfflineJetMET := self/HLTriggerOffline/JetMET
HLTriggerOffline/JetMET := HLTriggerOfflineJetMET
HLTriggerOfflineJetMET_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerOfflineJetMET_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet HLTrigger/HLTcore FWCore/ServiceRegistry DQMServices/Core DataFormats/Common DataFormats/CLHEP DataFormats/L1GlobalTrigger FWCore/MessageLogger,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerOfflineJetMET
HLTriggerOfflineJetMET_CLASS := LIBRARY
HLTriggerOffline/JetMET_relbigobj+=HLTriggerOfflineJetMET
endif
ifeq ($(strip $(L1Trigger/CSCTriggerPrimitives)),)
L1TriggerCSCTriggerPrimitives := self/L1Trigger/CSCTriggerPrimitives
L1Trigger/CSCTriggerPrimitives := L1TriggerCSCTriggerPrimitives
L1TriggerCSCTriggerPrimitives_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
L1TriggerCSCTriggerPrimitives_EX_USE := $(foreach d, self cmssw CondFormats/CSCObjects DataFormats/CSCDigi DataFormats/L1CSCTrackFinder DataFormats/MuonDetId FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities L1Trigger/CSCCommonTrigger,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerCSCTriggerPrimitives_EX_LIB   := L1TriggerCSCTriggerPrimitives
ALL_EXTERNAL_PRODS += L1TriggerCSCTriggerPrimitives
L1TriggerCSCTriggerPrimitives_CLASS := LIBRARY
L1Trigger/CSCTriggerPrimitives_relbigobj+=L1TriggerCSCTriggerPrimitives
endif
ifeq ($(strip $(Alignment/MillePedeAlignmentAlgorithm)),)
AlignmentMillePedeAlignmentAlgorithm := self/Alignment/MillePedeAlignmentAlgorithm
Alignment/MillePedeAlignmentAlgorithm := AlignmentMillePedeAlignmentAlgorithm
AlignmentMillePedeAlignmentAlgorithm_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
AlignmentMillePedeAlignmentAlgorithm_EX_USE := $(foreach d, self cmssw Alignment/CommonAlignment Alignment/CommonAlignmentAlgorithm Alignment/CommonAlignmentParametrization Alignment/MuonAlignment Alignment/SurveyAnalysis Alignment/ReferenceTrajectories DataFormats/CLHEP DataFormats/SiStripDetId DataFormats/GeometryVector DataFormats/TrackReco FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CommonDetUnit rootcore,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += AlignmentMillePedeAlignmentAlgorithm
AlignmentMillePedeAlignmentAlgorithm_CLASS := LIBRARY
Alignment/MillePedeAlignmentAlgorithm_relbigobj+=AlignmentMillePedeAlignmentAlgorithm
endif
ifeq ($(strip $(GeneratorInterfaceHerwig6Hadronizer)),)
GeneratorInterfaceHerwig6Hadronizer := self/src/GeneratorInterface/Herwig6Interface/plugins
GeneratorInterfaceHerwig6Hadronizer_LOC_USE := self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities SimDataFormats/GeneratorProducts boost heppdt clhep GeneratorInterface/Core GeneratorInterface/Herwig6Interface GeneratorInterface/ExternalDecays photos
GeneratorInterface/Herwig6Interface_relbigobj+=GeneratorInterfaceHerwig6Hadronizer
endif
ifeq ($(strip $(GeneratorInterface/LHEInterface)),)
GeneratorInterfaceLHEInterface := self/GeneratorInterface/LHEInterface
GeneratorInterface/LHEInterface := GeneratorInterfaceLHEInterface
GeneratorInterfaceLHEInterface_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
GeneratorInterfaceLHEInterface_EX_USE := $(foreach d, self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities FWCore/Concurrency SimDataFormats/GeneratorProducts Utilities/StorageFactory hepmc boost sigcpp xerces-c rootmath libhepml fastjet xz,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
GeneratorInterfaceLHEInterface_EX_LIB   := GeneratorInterfaceLHEInterface
ALL_EXTERNAL_PRODS += GeneratorInterfaceLHEInterface
GeneratorInterfaceLHEInterface_CLASS := LIBRARY
GeneratorInterface/LHEInterface_relbigobj+=GeneratorInterfaceLHEInterface
endif
ifeq ($(strip $(CalibMuon/DTCalibration)),)
CalibMuonDTCalibration := self/CalibMuon/DTCalibration
CalibMuon/DTCalibration := CalibMuonDTCalibration
CalibMuonDTCalibration_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CalibMuonDTCalibration_EX_USE := $(foreach d, self cmssw FWCore/Framework DataFormats/DTDigi DataFormats/DTRecHit DataFormats/CSCRecHit DataFormats/TrackReco Geometry/DTGeometry Geometry/Records CondFormats/DTObjects CondFormats/DataRecord CondCore/DBOutputService CalibMuon/DTDigiSync root rootmath rootcore roofit,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CalibMuonDTCalibration_EX_LIB   := CalibMuonDTCalibration
ALL_EXTERNAL_PRODS += CalibMuonDTCalibration
CalibMuonDTCalibration_CLASS := LIBRARY
CalibMuon/DTCalibration_relbigobj+=CalibMuonDTCalibration
endif
ifeq ($(strip $(ElectroWeakAnalysis/Utilities)),)
ElectroWeakAnalysisUtilities := self/ElectroWeakAnalysis/Utilities
ElectroWeakAnalysis/Utilities := ElectroWeakAnalysisUtilities
ElectroWeakAnalysisUtilities_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ElectroWeakAnalysisUtilities_EX_USE := $(foreach d, self cmssw CommonTools/Utils FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common DataFormats/Candidate DataFormats/PatCandidates CommonTools/UtilAlgos CommonTools/CandUtils RecoMuon/Records CondFormats/RecoMuonObjects MuonAnalysis/MomentumScaleCalibration lhapdf,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += ElectroWeakAnalysisUtilities
ElectroWeakAnalysisUtilities_CLASS := LIBRARY
ElectroWeakAnalysis/Utilities_relbigobj+=ElectroWeakAnalysisUtilities
endif
ifeq ($(strip $(FireworksCaloPlugins)),)
FireworksCaloPlugins := self/src/Fireworks/Calo/plugins
FireworksCaloPlugins_LOC_LIB   := Eve RGL Geom
FireworksCaloPlugins_LOC_USE := self cmssw DataFormats/CaloRecHit DataFormats/CaloTowers DataFormats/EcalDetId DataFormats/EcalRecHit DataFormats/HcalRecHit DataFormats/JetReco DataFormats/L1Trigger DataFormats/METReco DataFormats/PatCandidates DataFormats/TauReco DataFormats/TrackReco Fireworks/Calo Fireworks/Core Fireworks/Tracks rootinteractive
Fireworks/Calo_relbigobj+=FireworksCaloPlugins
endif
ifeq ($(strip $(METFilters_plugins)),)
METFilters_plugins := self/src/RecoMET/METFilters/plugins
METFilters_plugins_LOC_USE := self cmssw FWCore/Framework FWCore/ServiceRegistry FWCore/PluginManager FWCore/ParameterSet DataFormats/EcalRecHit DataFormats/EcalDetId Geometry/CaloTopology Geometry/CaloGeometry Geometry/Records CalibCalorimetry/EcalTPGTools CondFormats/EcalObjects DataFormats/PatCandidates DataFormats/ParticleFlowCandidate RecoParticleFlow/PFProducer DataFormats/ParticleFlowReco DataFormats/DetId CondFormats/DataRecord CommonTools/UtilAlgos CondFormats/HcalObjects DataFormats/HcalDetId DataFormats/HcalRecHit DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/StdDictionaries DataFormats/WrappedStdDictionaries RecoJets/JetAlgorithms RecoJets/JetProducers RecoMET/METAlgorithms root
RecoMET/METFilters_relbigobj+=METFilters_plugins
endif
ifeq ($(strip $(RecoLocalTrackerSiPixelRecHitsPlugins)),)
RecoLocalTrackerSiPixelRecHitsPlugins := self/src/RecoLocalTracker/SiPixelRecHits/plugins
RecoLocalTrackerSiPixelRecHitsPlugins_LOC_USE := self cmssw RecoLocalTracker/ClusterParameterEstimator RecoLocalTracker/Records RecoLocalTracker/SiPixelRecHits DataFormats/TrackerCommon
RecoLocalTracker/SiPixelRecHits_relbigobj+=RecoLocalTrackerSiPixelRecHitsPlugins
endif
ifeq ($(strip $(Tau3MuSkim)),)
Tau3MuSkim := self/src/HeavyFlavorAnalysis/Skimming/plugins
Tau3MuSkim_LOC_USE := self cmssw FWCore/Framework FWCore/ParameterSet HeavyFlavorAnalysis/Skimming
HeavyFlavorAnalysis/Skimming_relbigobj+=Tau3MuSkim
endif
ifeq ($(strip $(SimTracker/VertexAssociation)),)
SimTrackerVertexAssociation := self/SimTracker/VertexAssociation
SimTracker/VertexAssociation := SimTrackerVertexAssociation
SimTrackerVertexAssociation_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimTrackerVertexAssociation_EX_USE := $(foreach d, self cmssw SimDataFormats/Track FWCore/ParameterSet DataFormats/TrackReco DataFormats/VertexReco DataFormats/Common DataFormats/Math FWCore/Utilities SimDataFormats/TrackingAnalysis SimTracker/Common,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimTrackerVertexAssociation_EX_LIB   := SimTrackerVertexAssociation
ALL_EXTERNAL_PRODS += SimTrackerVertexAssociation
SimTrackerVertexAssociation_CLASS := LIBRARY
SimTracker/VertexAssociation_relbigobj+=SimTrackerVertexAssociation
endif
ifeq ($(strip $(DataFormats/CSCRecHit)),)
DataFormatsCSCRecHit := self/DataFormats/CSCRecHit
DataFormats/CSCRecHit := DataFormatsCSCRecHit
DataFormatsCSCRecHit_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DataFormatsCSCRecHit_EX_USE := $(foreach d, self cmssw DataFormats/Common DataFormats/MuonDetId DataFormats/GeometryVector DataFormats/TrackingRecHit,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsCSCRecHit_LCGDICTS  := x 
DataFormatsCSCRecHit_EX_LIB   := DataFormatsCSCRecHit
ALL_EXTERNAL_PRODS += DataFormatsCSCRecHit
DataFormatsCSCRecHit_CLASS := LIBRARY
DataFormats/CSCRecHit_relbigobj+=DataFormatsCSCRecHit
endif
ifeq ($(strip $(CalibrationHcalAlCaRecoProducersPlugins)),)
CalibrationHcalAlCaRecoProducersPlugins := self/src/Calibration/HcalAlCaRecoProducers/plugins
CalibrationHcalAlCaRecoProducersPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet HLTrigger/HLTcore Calibration/IsolatedParticles rootphysics
Calibration/HcalAlCaRecoProducers_relbigobj+=CalibrationHcalAlCaRecoProducersPlugins
endif
ifeq ($(strip $(DQM/DTMonitorModule)),)
DQMDTMonitorModule := self/DQM/DTMonitorModule
DQM/DTMonitorModule := DQMDTMonitorModule
DQMDTMonitorModule_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMDTMonitorModule_EX_USE := $(foreach d, self cmssw FWCore/Framework DQMServices/Core DQMServices/Components DataFormats/FEDRawData DataFormats/DTDigi DataFormats/L1DTTrackFinder DataFormats/L1GlobalMuonTrigger L1TriggerConfig/DTTPGConfig CondFormats/DTObjects CondFormats/DataRecord Geometry/Records Geometry/DTGeometry DataFormats/DTRecHit HLTrigger/HLTcore CalibMuon/DTDigiSync RecoMuon/MeasurementDet RecoMuon/TrackingTools TrackPropagation/SteppingHelixPropagator boost rootgraphics,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DQMDTMonitorModule_EX_LIB   := DQMDTMonitorModule
ALL_EXTERNAL_PRODS += DQMDTMonitorModule
DQMDTMonitorModule_CLASS := LIBRARY
DQM/DTMonitorModule_relbigobj+=DQMDTMonitorModule
endif
ifeq ($(strip $(HLTriggerOffline/Top)),)
HLTriggerOfflineTop := self/HLTriggerOffline/Top
HLTriggerOffline/Top := HLTriggerOfflineTop
HLTriggerOfflineTop_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerOfflineTop_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/Common FWCore/PluginManager FWCore/ParameterSet DQMServices/Core DataFormats/Common CommonTools/UtilAlgos PhysicsTools/UtilAlgos SimDataFormats/GeneratorProducts DataFormats/Math SimDataFormats/Track DataFormats/TrackReco DataFormats/TrackingRecHit DataFormats/MuonReco DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/RecoCandidate DataFormats/TauReco DataFormats/JetReco DataFormats/METReco DataFormats/VertexReco DataFormats/TrackerRecHit2D HLTrigger/HLTcore Geometry/Records Geometry/TrackerGeometryBuilder JetMETCorrections/Objects RecoEcal/EgammaCoreTools DataFormats/EcalRecHit CondFormats/DataRecord CondFormats/EcalObjects clhep root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerOfflineTop
HLTriggerOfflineTop_CLASS := LIBRARY
HLTriggerOffline/Top_relbigobj+=HLTriggerOfflineTop
endif
ifeq ($(strip $(SimG4CMS/FP420)),)
SimG4CMSFP420 := self/SimG4CMS/FP420
SimG4CMS/FP420 := SimG4CMSFP420
SimG4CMSFP420_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CMSFP420_EX_USE := $(foreach d, self cmssw FWCore/PluginManager SimG4Core/Watcher SimG4Core/SensitiveDetector SimG4Core/Notification SimG4Core/Application SimG4CMS/Calo SimDataFormats/SimHitMaker DataFormats/GeometryVector SimDataFormats/CaloHit DetectorDescription/Core FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger SimGeneral/HepPDTRecord boost geant4core root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimG4CMSFP420_EX_LIB   := SimG4CMSFP420
ALL_EXTERNAL_PRODS += SimG4CMSFP420
SimG4CMSFP420_CLASS := LIBRARY
SimG4CMS/FP420_relbigobj+=SimG4CMSFP420
endif
ifeq ($(strip $(HLTriggerJetMETPlugins)),)
HLTriggerJetMETPlugins := self/src/HLTrigger/JetMET/plugins
HLTriggerJetMETPlugins_LOC_USE := self cmssw DataFormats/Common DataFormats/HLTReco DataFormats/HcalRecHit DataFormats/JetReco DataFormats/METReco DataFormats/Math Geometry/Records Geometry/CaloTopology FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities RecoMET/METAlgorithms HLTrigger/HLTcore RecoJets/JetProducers TrackingTools/IPTools TrackingTools/TransientTrack
HLTrigger/JetMET_relbigobj+=HLTriggerJetMETPlugins
endif
ifeq ($(strip $(RecoMuon/GlobalMuonProducer)),)
RecoMuonGlobalMuonProducer := self/RecoMuon/GlobalMuonProducer
RecoMuon/GlobalMuonProducer := RecoMuonGlobalMuonProducer
RecoMuonGlobalMuonProducer_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoMuonGlobalMuonProducer_EX_USE := $(foreach d, self cmssw DataFormats/Common DataFormats/MuonReco DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager RecoMuon/GlobalTrackFinder RecoMuon/GlobalTrackingTools RecoMuon/TrackingTools TrackingTools/PatternTools,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += RecoMuonGlobalMuonProducer
RecoMuonGlobalMuonProducer_CLASS := LIBRARY
RecoMuon/GlobalMuonProducer_relbigobj+=RecoMuonGlobalMuonProducer
endif
ifeq ($(strip $(SimG4CMS/ShowerLibraryProducer)),)
SimG4CMSShowerLibraryProducer := self/SimG4CMS/ShowerLibraryProducer
SimG4CMS/ShowerLibraryProducer := SimG4CMSShowerLibraryProducer
SimG4CMSShowerLibraryProducer_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CMSShowerLibraryProducer_EX_USE := $(foreach d, self cmssw SimG4Core/Watcher SimG4Core/SensitiveDetector SimG4Core/Notification SimG4Core/Application SimG4CMS/Calo SimG4CMS/Forward DataFormats/Math SimDataFormats/SimHitMaker SimDataFormats/HcalTestBeam SimDataFormats/CaloHit SimDataFormats/Forward DetectorDescription/Core FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry CommonTools/UtilAlgos boost geant4core root rootmath,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimG4CMSShowerLibraryProducer_EX_LIB   := SimG4CMSShowerLibraryProducer
ALL_EXTERNAL_PRODS += SimG4CMSShowerLibraryProducer
SimG4CMSShowerLibraryProducer_CLASS := LIBRARY
SimG4CMS/ShowerLibraryProducer_relbigobj+=SimG4CMSShowerLibraryProducer
endif
ifeq ($(strip $(HeavyFlavorAnalysis/Skimming)),)
HeavyFlavorAnalysisSkimming := self/HeavyFlavorAnalysis/Skimming
HeavyFlavorAnalysis/Skimming := HeavyFlavorAnalysisSkimming
HeavyFlavorAnalysisSkimming_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HeavyFlavorAnalysisSkimming_EX_USE := $(foreach d, self cmssw FWCore/MessageLogger FWCore/Framework FWCore/ParameterSet DataFormats/TrackReco DataFormats/MuonReco,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
HeavyFlavorAnalysisSkimming_EX_LIB   := HeavyFlavorAnalysisSkimming
ALL_EXTERNAL_PRODS += HeavyFlavorAnalysisSkimming
HeavyFlavorAnalysisSkimming_CLASS := LIBRARY
HeavyFlavorAnalysis/Skimming_relbigobj+=HeavyFlavorAnalysisSkimming
endif
ifeq ($(strip $(Validation/EcalClusters)),)
ValidationEcalClusters := self/Validation/EcalClusters
Validation/EcalClusters := ValidationEcalClusters
ValidationEcalClusters_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ValidationEcalClusters_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet DataFormats/EcalRecHit DataFormats/EgammaReco DataFormats/EcalDetId CondFormats/EcalObjects CondFormats/DataRecord Geometry/CaloGeometry Geometry/CaloTopology Geometry/EcalAlgo DataFormats/Math RecoEcal/EgammaCoreTools DQMServices/Core SimDataFormats/GeneratorProducts SimDataFormats/TrackingHit SimDataFormats/Track SimDataFormats/Vertex CommonTools/UtilAlgos clhep,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += ValidationEcalClusters
ValidationEcalClusters_CLASS := LIBRARY
Validation/EcalClusters_relbigobj+=ValidationEcalClusters
endif
ifeq ($(strip $(L1Trigger/L1TGlobal)),)
L1TriggerL1TGlobal := self/L1Trigger/L1TGlobal
L1Trigger/L1TGlobal := L1TriggerL1TGlobal
L1TriggerL1TGlobal_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
L1TriggerL1TGlobal_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/L1TCalorimeter DataFormats/L1TGlobal CondFormats/L1TObjects CondFormats/DataRecord xerces-c,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TGlobal_LCGDICTS  := x 
L1TriggerL1TGlobal_EX_LIB   := L1TriggerL1TGlobal
ALL_EXTERNAL_PRODS += L1TriggerL1TGlobal
L1TriggerL1TGlobal_CLASS := LIBRARY
L1Trigger/L1TGlobal_relbigobj+=L1TriggerL1TGlobal
endif
ifeq ($(strip $(SimG4CMSTrackerPlugins)),)
SimG4CMSTrackerPlugins := self/src/SimG4CMS/Tracker/plugins
SimG4CMSTrackerPlugins_LOC_USE := self cmssw SimG4CMS/Tracker FWCore/ParameterSet SimG4Core/SensitiveDetector SimG4Core/Notification Geometry/TrackerNumberingBuilder boost geant4core SimDataFormats/SimHitMaker SimG4Core/Application
SimG4CMS/Tracker_relbigobj+=SimG4CMSTrackerPlugins
endif
ifeq ($(strip $(ValidationRecoTrackPlugins)),)
ValidationRecoTrackPlugins := self/src/Validation/RecoTrack/plugins
ValidationRecoTrackPlugins_LOC_LIB   := MathMore
ValidationRecoTrackPlugins_LOC_USE := self cmssw FWCore/Utilities FWCore/Framework CommonTools/UtilAlgos DataFormats/Common DataFormats/TrackReco clhep boost DQMServices/Core SimDataFormats/TrackerDigiSimLink DataFormats/SiStripDetId FWCore/ParameterSet Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Records MagneticField/Engine SimDataFormats/Vertex SimDataFormats/TrackingAnalysis SimDataFormats/PileupSummaryInfo SimDataFormats/EncodedEventId SimTracker/Records RecoLocalTracker/ClusterParameterEstimator root SimTracker/TrackAssociation SimTracker/TrackerHitAssociation DQMServices/ClientConfig DQM/SiStripCommon CalibTracker/Records CommonTools/TriggerUtils Validation/RecoTrack
Validation/RecoTrack_relbigobj+=ValidationRecoTrackPlugins
endif
ifeq ($(strip $(RecoPixelVertexing/PixelLowPtUtilities)),)
RecoPixelVertexingPixelLowPtUtilities := self/RecoPixelVertexing/PixelLowPtUtilities
RecoPixelVertexing/PixelLowPtUtilities := RecoPixelVertexingPixelLowPtUtilities
RecoPixelVertexingPixelLowPtUtilities_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoPixelVertexingPixelLowPtUtilities_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities Geometry/Records Geometry/TrackerGeometryBuilder TrackingTools/PatternTools RecoPixelVertexing/PixelTriplets RecoPixelVertexing/PixelTrackFitting TrackingTools/TrajectoryFiltering TrackingTools/Records RecoLocalTracker/Records MagneticField/Records DataFormats/VertexReco DataFormats/TrackerCommon,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoPixelVertexingPixelLowPtUtilities_EX_LIB   := RecoPixelVertexingPixelLowPtUtilities
ALL_EXTERNAL_PRODS += RecoPixelVertexingPixelLowPtUtilities
RecoPixelVertexingPixelLowPtUtilities_CLASS := LIBRARY
RecoPixelVertexing/PixelLowPtUtilities_relbigobj+=RecoPixelVertexingPixelLowPtUtilities
endif
ifeq ($(strip $(HLTriggerOffline/Egamma)),)
HLTriggerOfflineEgamma := self/HLTriggerOffline/Egamma
HLTriggerOffline/Egamma := HLTriggerOfflineEgamma
HLTriggerOfflineEgamma_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerOfflineEgamma_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry DQMServices/Core DataFormats/HepMCCandidate DataFormats/CLHEP SimDataFormats/GeneratorProducts HLTrigger/HLTcore boost,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerOfflineEgamma
HLTriggerOfflineEgamma_CLASS := LIBRARY
HLTriggerOffline/Egamma_relbigobj+=HLTriggerOfflineEgamma
endif
ifeq ($(strip $(SimTrackerSiPixelDigitizerPlugins)),)
SimTrackerSiPixelDigitizerPlugins := self/src/SimTracker/SiPixelDigitizer/plugins
SimTrackerSiPixelDigitizerPlugins_LOC_USE := self cmssw SimGeneral/MixingModule MagneticField/Records MagneticField/Engine FWCore/Framework FWCore/ParameterSet DataFormats/Common DataFormats/SiPixelDigi DataFormats/TrackerCommon SimDataFormats/TrackingHit SimDataFormats/TrackerDigiSimLink CondFormats/SiPixelObjects Geometry/TrackerGeometryBuilder SimGeneral/NoiseGenerators SimTracker/Common CalibTracker/SiPixelESProducers gsl clhep
SimTracker/SiPixelDigitizer_relbigobj+=SimTrackerSiPixelDigitizerPlugins
endif
ifeq ($(strip $(Validation/RecoTau)),)
ValidationRecoTau := self/Validation/RecoTau
Validation/RecoTau := ValidationRecoTau
ValidationRecoTau_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ValidationRecoTau_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/TauReco DQMServices/Core PhysicsTools/JetMCUtils CommonTools/Utils CommonTools/TriggerUtils,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += ValidationRecoTau
ValidationRecoTau_CLASS := LIBRARY
Validation/RecoTau_relbigobj+=ValidationRecoTau
endif
ifeq ($(strip $(SimG4Core/Geometry)),)
SimG4CoreGeometry := self/SimG4Core/Geometry
SimG4Core/Geometry := SimG4CoreGeometry
SimG4CoreGeometry_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CoreGeometry_EX_USE := $(foreach d, self cmssw DetectorDescription/Core geant4core Geometry/Records FWCore/MessageLogger FWCore/Utilities expat,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimG4CoreGeometry_EX_LIB   := SimG4CoreGeometry
ALL_EXTERNAL_PRODS += SimG4CoreGeometry
SimG4CoreGeometry_CLASS := LIBRARY
SimG4Core/Geometry_relbigobj+=SimG4CoreGeometry
endif
ifeq ($(strip $(SimG4CMSHcalTestBeamHcalTB04Analysis)),)
SimG4CMSHcalTestBeamHcalTB04Analysis := self/src/SimG4CMS/HcalTestBeam/plugins
SimG4CMSHcalTestBeamHcalTB04Analysis_LOC_USE := self cmssw SimG4CMS/HcalTestBeam SimG4Core/Watcher FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry
SimG4CMS/HcalTestBeam_relbigobj+=SimG4CMSHcalTestBeamHcalTB04Analysis
endif
ifeq ($(strip $(SimG4CMSHcalTestBeamHcalTB02Analysis)),)
SimG4CMSHcalTestBeamHcalTB02Analysis := self/src/SimG4CMS/HcalTestBeam/plugins
SimG4CMSHcalTestBeamHcalTB02Analysis_LOC_USE := self cmssw SimG4CMS/HcalTestBeam SimG4Core/Watcher FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry
SimG4CMS/HcalTestBeam_relbigobj+=SimG4CMSHcalTestBeamHcalTB02Analysis
endif
ifeq ($(strip $(SimG4CMSHcalTestBeamHcalModule)),)
SimG4CMSHcalTestBeamHcalModule := self/src/SimG4CMS/HcalTestBeam/plugins
SimG4CMSHcalTestBeamHcalModule_LOC_USE := self cmssw SimG4CMS/HcalTestBeam SimG4Core/Watcher FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry
SimG4CMS/HcalTestBeam_relbigobj+=SimG4CMSHcalTestBeamHcalModule
endif
ifeq ($(strip $(SimG4CMSHcalTestBeamHcalTB06Analysis)),)
SimG4CMSHcalTestBeamHcalTB06Analysis := self/src/SimG4CMS/HcalTestBeam/plugins
SimG4CMSHcalTestBeamHcalTB06Analysis_LOC_USE := self cmssw SimG4CMS/HcalTestBeam SimG4Core/Watcher FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry
SimG4CMS/HcalTestBeam_relbigobj+=SimG4CMSHcalTestBeamHcalTB06Analysis
endif
ifeq ($(strip $(DQM/SiStripMonitorSummary)),)
DQMSiStripMonitorSummary := self/DQM/SiStripMonitorSummary
DQM/SiStripMonitorSummary := DQMSiStripMonitorSummary
DQMSiStripMonitorSummary_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMSiStripMonitorSummary_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/PluginManager DataFormats/Common DataFormats/FEDRawData DataFormats/SiStripDetId DataFormats/SiStripDigi CondFormats/DataRecord CondFormats/SiStripObjects DQM/SiStripCommon DQMServices/Core CalibFormats/SiStripObjects CalibTracker/Records CalibTracker/SiStripAPVAnalysis CondCore/DBOutputService CommonTools/TrackerMap CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DQMSiStripMonitorSummary_EX_LIB   := DQMSiStripMonitorSummary
ALL_EXTERNAL_PRODS += DQMSiStripMonitorSummary
DQMSiStripMonitorSummary_CLASS := LIBRARY
DQM/SiStripMonitorSummary_relbigobj+=DQMSiStripMonitorSummary
endif
ifeq ($(strip $(SimG4CMSForwardPlugins)),)
SimG4CMSForwardPlugins := self/src/SimG4CMS/Forward/plugins
SimG4CMSForwardPlugins_LOC_USE := self cmssw FWCore/PluginManager SimG4Core/Watcher SimG4Core/SensitiveDetector SimG4Core/Notification SimG4Core/Application SimG4CMS/Calo SimG4CMS/Forward DataFormats/Math SimDataFormats/SimHitMaker SimDataFormats/CaloHit SimDataFormats/Forward DetectorDescription/Core FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger boost geant4core root rootmath
SimG4CMS/Forward_relbigobj+=SimG4CMSForwardPlugins
endif
ifeq ($(strip $(SimG4Core/HelpfulWatchers)),)
SimG4CoreHelpfulWatchers := self/SimG4Core/HelpfulWatchers
SimG4Core/HelpfulWatchers := SimG4CoreHelpfulWatchers
SimG4CoreHelpfulWatchers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CoreHelpfulWatchers_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet SimG4Core/Watcher SimG4Core/Notification boost geant4core CommonTools/UtilAlgos MagneticField/Engine MagneticField/Records,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += SimG4CoreHelpfulWatchers
SimG4CoreHelpfulWatchers_CLASS := LIBRARY
SimG4Core/HelpfulWatchers_relbigobj+=SimG4CoreHelpfulWatchers
endif
ifeq ($(strip $(RecoTracker/TkSeedGenerator)),)
RecoTrackerTkSeedGenerator := self/RecoTracker/TkSeedGenerator
RecoTracker/TkSeedGenerator := RecoTrackerTkSeedGenerator
RecoTrackerTkSeedGenerator_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoTrackerTkSeedGenerator_EX_USE := $(foreach d, self cmssw root FWCore/Framework FWCore/PluginManager DataFormats/Common FWCore/ParameterSet Geometry/Records Geometry/CommonDetUnit DataFormats/TrajectorySeed DataFormats/TrackerRecHit2D Geometry/CommonTopologies Geometry/TrackerGeometryBuilder DataFormats/DetId DataFormats/SiStripDetId TrackingTools/PatternTools MagneticField/Records MagneticField/Engine TrackingTools/KalmanUpdators TrackingTools/MaterialEffects TrackingTools/Records CommonTools/Utils,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoTrackerTkSeedGenerator_LCGDICTS  := x 
RecoTrackerTkSeedGenerator_EX_LIB   := RecoTrackerTkSeedGenerator
ALL_EXTERNAL_PRODS += RecoTrackerTkSeedGenerator
RecoTrackerTkSeedGenerator_CLASS := LIBRARY
RecoTracker/TkSeedGenerator_relbigobj+=RecoTrackerTkSeedGenerator
endif
ifeq ($(strip $(RecoEgammaElectronIdentificationPlugins_cuts)),)
RecoEgammaElectronIdentificationPlugins_cuts := self/src/RecoEgamma/ElectronIdentification/plugins
RecoEgammaElectronIdentificationPlugins_cuts_LOC_USE := self cmssw FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry CondFormats/DataRecord CondFormats/EgammaObjects DataFormats/EgammaCandidates DataFormats/EcalRecHit root rootcore RecoEgamma/EgammaTools RecoEgamma/ElectronIdentification
RecoEgamma/ElectronIdentification_relbigobj+=RecoEgammaElectronIdentificationPlugins_cuts
endif
ifeq ($(strip $(RecoEgammaElectronIdentificationPlugins)),)
RecoEgammaElectronIdentificationPlugins := self/src/RecoEgamma/ElectronIdentification/plugins
RecoEgammaElectronIdentificationPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry CondFormats/DataRecord CondFormats/EgammaObjects DataFormats/EgammaCandidates DataFormats/EcalRecHit root rootcore RecoEgamma/EgammaTools RecoEgamma/ElectronIdentification
RecoEgamma/ElectronIdentification_relbigobj+=RecoEgammaElectronIdentificationPlugins
endif
ifeq ($(strip $(Calibration/HcalAlCaRecoProducers)),)
CalibrationHcalAlCaRecoProducers := self/Calibration/HcalAlCaRecoProducers
Calibration/HcalAlCaRecoProducers := CalibrationHcalAlCaRecoProducers
CalibrationHcalAlCaRecoProducers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CalibrationHcalAlCaRecoProducers_EX_USE := $(foreach d, self cmssw boost DataFormats/HcalIsolatedTrack DataFormats/CaloTowers DataFormats/HcalRecHit DataFormats/EcalDetId CondFormats/HcalObjects DataFormats/HcalDigi DataFormats/MuonReco CalibFormats/HcalObjects CommonTools/UtilAlgos DataFormats/DetId DataFormats/HcalCalibObjects DataFormats/EcalDigi DataFormats/EcalRecHit DataFormats/EgammaReco DataFormats/FEDRawData CondFormats/EcalObjects RecoLocalCalo/EcalRecAlgos RecoEcal/EgammaClusterAlgos Geometry/EcalAlgo DataFormats/Math RecoEcal/EgammaCoreTools DataFormats/METReco DataFormats/L1GlobalTrigger DataFormats/RecoCandidate DataFormats/JetReco Geometry/CaloTopology Geometry/CaloGeometry FWCore/Framework FWCore/ParameterSet FWCore/PluginManager clhep root TrackPropagation/SteppingHelixPropagator TrackingTools/TrackAssociator HLTrigger/HLTcore Calibration/IsolatedParticles,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += CalibrationHcalAlCaRecoProducers
CalibrationHcalAlCaRecoProducers_CLASS := LIBRARY
Calibration/HcalAlCaRecoProducers_relbigobj+=CalibrationHcalAlCaRecoProducers
endif
ifeq ($(strip $(SimG4CorePhysicsListsPlugins)),)
SimG4CorePhysicsListsPlugins := self/src/SimG4Core/PhysicsLists/plugins
SimG4CorePhysicsListsPlugins_LOC_USE := self cmssw FWCore/ParameterSet FWCore/MessageLogger FWCore/PluginManager SimG4Core/Physics geant4core clhep heppdt boost SimG4Core/PhysicsLists
SimG4Core/PhysicsLists_relbigobj+=SimG4CorePhysicsListsPlugins
endif
ifeq ($(strip $(CommonTools/ParticleFlow)),)
CommonToolsParticleFlow := self/CommonTools/ParticleFlow
CommonTools/ParticleFlow := CommonToolsParticleFlow
CommonToolsParticleFlow_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CommonToolsParticleFlow_EX_USE := $(foreach d, self cmssw DataFormats/Common DataFormats/ParticleFlowCandidate DataFormats/EgammaCandidates DataFormats/METReco DataFormats/JetReco DataFormats/PatCandidates rootmath FWCore/ParameterSet,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CommonToolsParticleFlow_EX_LIB   := CommonToolsParticleFlow
ALL_EXTERNAL_PRODS += CommonToolsParticleFlow
CommonToolsParticleFlow_CLASS := LIBRARY
CommonTools/ParticleFlow_relbigobj+=CommonToolsParticleFlow
endif
ifeq ($(strip $(HLTrigger/HLTanalyzers)),)
HLTriggerHLTanalyzers := self/HLTrigger/HLTanalyzers
HLTrigger/HLTanalyzers := HLTriggerHLTanalyzers
HLTriggerHLTanalyzers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerHLTanalyzers_EX_USE := $(foreach d, self cmssw CondFormats/DataRecord CondFormats/L1TObjects DataFormats/BTauReco DataFormats/CSCDigi DataFormats/CaloTowers DataFormats/Candidate DataFormats/Common DataFormats/DTDigi DataFormats/EcalDigi DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/FEDRawData DataFormats/GeometryVector DataFormats/HcalDigi DataFormats/JetReco DataFormats/L1CaloTrigger DataFormats/L1GlobalCaloTrigger DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/METReco DataFormats/MuonData DataFormats/MuonReco DataFormats/RPCDigi DataFormats/RecoCandidate DataFormats/SiPixelDigi DataFormats/SiStripDigi DataFormats/TauReco DataFormats/TrackReco DataFormats/TrajectorySeed DataFormats/HeavyIonEvent DataFormats/Luminosity SimDataFormats/HiGenData FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CaloGeometry Geometry/CommonDetUnit Geometry/Records Geometry/EcalMapping HLTrigger/HLTcore L1Trigger/RegionalCaloTrigger MagneticField/Engine MagneticField/Records SimDataFormats/GeneratorProducts SimDataFormats/Track SimDataFormats/Vertex TrackingTools/TrajectoryState RecoEcal/EgammaCoreTools RecoEgamma/EgammaTools RecoHI/HiEgammaAlgos RecoJets/JetProducers TrackingTools/TransientTrack DQMServices/Core rootcore,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerHLTanalyzers
HLTriggerHLTanalyzers_CLASS := LIBRARY
HLTrigger/HLTanalyzers_relbigobj+=HLTriggerHLTanalyzers
endif
ifeq ($(strip $(RecoTauTagRecoTauPlugins)),)
RecoTauTagRecoTauPlugins := self/src/RecoTauTag/RecoTau/plugins
RecoTauTagRecoTauPlugins_LOC_USE := self cmssw TrackingTools/Records RecoVertex/KalmanVertexFit CommonTools/CandUtils DataFormats/Candidate DataFormats/MuonReco DataFormats/TrackReco TrackingTools/TransientTrack RecoVertex/VertexPrimitives PhysicsTools/IsolationUtils PhysicsTools/MVAComputer PhysicsTools/MVATrainer FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/Utilities DataFormats/TauReco DataFormats/WrappedStdDictionaries CommonTools/UtilAlgos CommonTools/CandAlgos PhysicsTools/HepMCCandAlgos RecoTauTag/TauTagTools RecoTauTag/RecoTau DataFormats/JetReco DataFormats/ParticleFlowReco RecoBTag/SecondaryVertex DataFormats/VertexReco CondFormats/EgammaObjects CondFormats/DataRecord CondFormats/EcalObjects Geometry/CaloGeometry Geometry/CaloTopology Geometry/Records MagneticField/Engine MagneticField/Records FastSimulation/BaseParticlePropagator root
RecoTauTag/RecoTau_relbigobj+=RecoTauTagRecoTauPlugins
endif
ifeq ($(strip $(DQMServices/Examples)),)
DQMServicesExamples := self/DQMServices/Examples
DQMServices/Examples := DQMServicesExamples
DQMServicesExamples_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMServicesExamples_EX_USE := $(foreach d, self cmssw DQMServices/Core FWCore/Framework DataFormats/MuonReco DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/TauReco DataFormats/JetReco DataFormats/METReco DataFormats/VertexReco DataFormats/TrackerRecHit2D HLTrigger/HLTcore Geometry/Records Geometry/TrackerGeometryBuilder JetMETCorrections/Objects RecoEcal/EgammaCoreTools DataFormats/EcalRecHit CondFormats/DataRecord CondFormats/EcalObjects RecoJets/JetProducers RecoEgamma/EgammaTools,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DQMServicesExamples_EX_LIB   := DQMServicesExamples
ALL_EXTERNAL_PRODS += DQMServicesExamples
DQMServicesExamples_CLASS := LIBRARY
DQMServices/Examples_relbigobj+=DQMServicesExamples
endif
ifeq ($(strip $(SimGeneralMixingModulePlugins)),)
SimGeneralMixingModulePlugins := self/src/SimGeneral/MixingModule/plugins
SimGeneralMixingModulePlugins_LOC_USE := self cmssw DataFormats/Common DataFormats/Provenance FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Utilities FWCore/PluginManager Mixing/Base SimDataFormats/CaloHit SimDataFormats/CrossingFrame SimDataFormats/Track SimDataFormats/TrackingHit SimDataFormats/Vertex SimDataFormats/GeneratorProducts SimCalorimetry/HcalSimProducers SimGeneral/MixingModule clhep CondFormats/DataRecord CondFormats/RunInfo CondCore/DBOutputService DataFormats/TrackerRecHit2D
SimGeneral/MixingModule_relbigobj+=SimGeneralMixingModulePlugins
endif
ifeq ($(strip $(HLTriggerOffline/HeavyFlavor)),)
HLTriggerOfflineHeavyFlavor := self/HLTriggerOffline/HeavyFlavor
HLTriggerOffline/HeavyFlavor := HLTriggerOfflineHeavyFlavor
HLTriggerOfflineHeavyFlavor_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerOfflineHeavyFlavor_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ServiceRegistry FWCore/ParameterSet DataFormats/Common DataFormats/TrackReco DataFormats/RecoCandidate DataFormats/L1Trigger DataFormats/Candidate DataFormats/HepMCCandidate DataFormats/MuonReco DataFormats/Math HLTrigger/HLTcore DQMServices/Core,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerOfflineHeavyFlavor
HLTriggerOfflineHeavyFlavor_CLASS := LIBRARY
HLTriggerOffline/HeavyFlavor_relbigobj+=HLTriggerOfflineHeavyFlavor
endif
ifeq ($(strip $(FireworksParticleFlowPlugins)),)
FireworksParticleFlowPlugins := self/src/Fireworks/ParticleFlow/plugins
FireworksParticleFlowPlugins_LOC_LIB   := Eve RGL
FireworksParticleFlowPlugins_LOC_USE := self cmssw DataFormats/EcalRecHit DataFormats/JetReco DataFormats/ParticleFlowCandidate DataFormats/ParticleFlowReco DataFormats/PatCandidates DataFormats/TrackReco Fireworks/ParticleFlow
Fireworks/ParticleFlow_relbigobj+=FireworksParticleFlowPlugins
endif
ifeq ($(strip $(RecoBTagSecondaryVertexESProducers)),)
RecoBTagSecondaryVertexESProducers := self/src/RecoBTag/SecondaryVertex/plugins
RecoBTagSecondaryVertexESProducers_LOC_USE := self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities DataFormats/GeometryCommonDetAlgo DataFormats/TrackReco DataFormats/VertexReco DataFormats/BTauReco RecoBTag/SecondaryVertex boost RecoBTau/JetTagComputer
RecoBTag/SecondaryVertex_relbigobj+=RecoBTagSecondaryVertexESProducers
endif
ifeq ($(strip $(RecoBTagSecondaryVertexProducer)),)
RecoBTagSecondaryVertexProducer := self/src/RecoBTag/SecondaryVertex/plugins
RecoBTagSecondaryVertexProducer_LOC_USE := self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities DataFormats/GeometryCommonDetAlgo DataFormats/TrackReco DataFormats/VertexReco DataFormats/BTauReco RecoBTag/SecondaryVertex boost DataFormats/BeamSpot TrackingTools/Records TrackingTools/TransientTrack RecoVertex/ConfigurableVertexReco RecoVertex/GhostTrackFitter fastjet
RecoBTag/SecondaryVertex_relbigobj+=RecoBTagSecondaryVertexProducer
endif
ifeq ($(strip $(FireworksTracksPlugins)),)
FireworksTracksPlugins := self/src/Fireworks/Tracks/plugins
FireworksTracksPlugins_LOC_LIB   := Eve Geom RGL
FireworksTracksPlugins_LOC_USE := self cmssw DataFormats/BeamSpot DataFormats/Common DataFormats/DetId DataFormats/Scalers DataFormats/SiPixelCluster DataFormats/SiPixelDigi DataFormats/SiStripCluster DataFormats/SiStripDigi DataFormats/TrackReco DataFormats/TrackingRecHit DataFormats/GeometrySurface Fireworks/Core Fireworks/Tracks rootinteractive rootphysics
Fireworks/Tracks_relbigobj+=FireworksTracksPlugins
endif
ifeq ($(strip $(SimG4Core/Generators)),)
SimG4CoreGenerators := self/SimG4Core/Generators
SimG4Core/Generators := SimG4CoreGenerators
SimG4CoreGenerators_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CoreGenerators_EX_USE := $(foreach d, self cmssw FWCore/ParameterSet FWCore/MessageLogger SimDataFormats/GeneratorProducts boost geant4core rootmath expat,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimG4CoreGenerators_EX_LIB   := SimG4CoreGenerators
ALL_EXTERNAL_PRODS += SimG4CoreGenerators
SimG4CoreGenerators_CLASS := LIBRARY
SimG4Core/Generators_relbigobj+=SimG4CoreGenerators
endif
ifeq ($(strip $(DQM/TrackingMonitorClient)),)
DQMTrackingMonitorClient := self/DQM/TrackingMonitorClient
DQM/TrackingMonitorClient := DQMTrackingMonitorClient
DQMTrackingMonitorClient_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMTrackingMonitorClient_EX_USE := $(foreach d, self cmssw FWCore/MessageLogger FWCore/Framework EventFilter/Utilities DQMServices/ClientConfig CalibFormats/SiStripObjects CondFormats/SiStripObjects CondFormats/DataRecord CondFormats/RunInfo CommonTools/TrackerMap CalibTracker/Records DQM/TrackerCommon DQM/SiStripCommon DQM/SiStripMonitorClient DQM/SiStripMonitorSummary DataFormats/SiStripDetId boost root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DQMTrackingMonitorClient_EX_LIB   := DQMTrackingMonitorClient
ALL_EXTERNAL_PRODS += DQMTrackingMonitorClient
DQMTrackingMonitorClient_CLASS := LIBRARY
DQM/TrackingMonitorClient_relbigobj+=DQMTrackingMonitorClient
endif
ifeq ($(strip $(SimG4CMS/Muon)),)
SimG4CMSMuon := self/SimG4CMS/Muon
SimG4CMS/Muon := SimG4CMSMuon
SimG4CMSMuon_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CMSMuon_EX_USE := $(foreach d, self cmssw SimG4Core/SensitiveDetector SimG4Core/Notification boost geant4core SimDataFormats/SimHitMaker SimG4Core/Application Geometry/MuonNumbering,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += SimG4CMSMuon
SimG4CMSMuon_CLASS := LIBRARY
SimG4CMS/Muon_relbigobj+=SimG4CMSMuon
endif
ifeq ($(strip $(HiJetAlgosPlugins)),)
HiJetAlgosPlugins := self/src/RecoHI/HiJetAlgos/plugins
HiJetAlgosPlugins_LOC_FLAGS_CXXFLAGS   := -frounding-math -Wno-unknown-pragmas
HiJetAlgosPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager RecoJets/JetProducers FWCore/ParameterSet RecoHI/HiJetAlgos DataFormats/JetReco CondFormats/DataRecord CondCore/DBCommon CondCore/DBOutputService CondCore/PopCon JetMETCorrections/Objects Geometry/CaloGeometry cgal f77compiler
RecoHI/HiJetAlgos_relbigobj+=HiJetAlgosPlugins
endif
ifeq ($(strip $(RecoBTagPerformanceDBplugins)),)
RecoBTagPerformanceDBplugins := self/src/RecoBTag/PerformanceDB/plugins
RecoBTagPerformanceDBplugins_LOC_USE := self cmssw CondFormats/PhysicsToolsObjects CondFormats/BTauObjects RecoBTag/Records RecoBTag/PerformanceDB CondFormats/DataRecord FWCore/PluginManager FWCore/Framework FWCore/ParameterSet FWCore/Utilities FWCore/MessageLogger CondCore/PluginSystem CondCore/DBCommon CondCore/DBOutputService PhysicsTools/CondLiteIO PhysicsTools/UtilAlgos boost
RecoBTag/PerformanceDB_relbigobj+=RecoBTagPerformanceDBplugins
endif
ifeq ($(strip $(DQMSiStripMonitorSummaryplugins)),)
DQMSiStripMonitorSummaryplugins := self/src/DQM/SiStripMonitorSummary/plugins
DQMSiStripMonitorSummaryplugins_LOC_USE := self cmssw boost root FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet CondFormats/DataRecord CondFormats/SiStripObjects CalibFormats/SiStripObjects DataFormats/SiStripDetId CalibTracker/Records CalibTracker/SiStripQuality CondCore/DBOutputService DataFormats/SiStripCluster CommonTools/TrackerMap DQM/SiStripCommon DQMServices/Core
DQM/SiStripMonitorSummary_relbigobj+=DQMSiStripMonitorSummaryplugins
endif
ifeq ($(strip $(CalibTracker/SiStripHitEfficiency)),)
CalibTrackerSiStripHitEfficiency := self/CalibTracker/SiStripHitEfficiency
CalibTracker/SiStripHitEfficiency := CalibTrackerSiStripHitEfficiency
CalibTrackerSiStripHitEfficiency_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CalibTrackerSiStripHitEfficiency_EX_USE := $(foreach d, self cmssw RecoLocalTracker/SiStripClusterizer CommonTools/UtilAlgos DataFormats/DetId DataFormats/SiStripDetId DataFormats/TrackingRecHit DataFormats/CSCRecHit DataFormats/DTRecHit DataFormats/TrackReco DataFormats/Common FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CommonDetUnit Geometry/Records Geometry/TrackerGeometryBuilder MagneticField/Engine MagneticField/Records RecoTracker/Record RecoTracker/MeasurementDet RecoTracker/TkSeedGenerator SimDataFormats/TrackingAnalysis SimTracker/TrackerHitAssociation TrackingTools/PatternTools TrackingTools/TrackFitters TrackingTools/MeasurementDet RecoTracker/TransientTrackingRecHit,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += CalibTrackerSiStripHitEfficiency
CalibTrackerSiStripHitEfficiency_CLASS := LIBRARY
CalibTracker/SiStripHitEfficiency_relbigobj+=CalibTrackerSiStripHitEfficiency
endif
ifeq ($(strip $(TopQuarkAnalysis/TopEventProducers)),)
TopQuarkAnalysisTopEventProducers := self/TopQuarkAnalysis/TopEventProducers
TopQuarkAnalysis/TopEventProducers := TopQuarkAnalysisTopEventProducers
TopQuarkAnalysisTopEventProducers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
TopQuarkAnalysisTopEventProducers_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet CommonTools/Utils DataFormats/PatCandidates AnalysisDataFormats/TopObjects TopQuarkAnalysis/TopSkimming TopQuarkAnalysis/TopKinFitter TopQuarkAnalysis/TopHitFit TopQuarkAnalysis/TopJetCombination TopQuarkAnalysis/TopEventSelection RecoJets/JetProducers fastjet,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += TopQuarkAnalysisTopEventProducers
TopQuarkAnalysisTopEventProducers_CLASS := LIBRARY
TopQuarkAnalysis/TopEventProducers_relbigobj+=TopQuarkAnalysisTopEventProducers
endif
ifeq ($(strip $(GeneratorInterface/PomwigInterface)),)
GeneratorInterfacePomwigInterface := self/GeneratorInterface/PomwigInterface
GeneratorInterface/PomwigInterface := GeneratorInterfacePomwigInterface
GeneratorInterfacePomwigInterface_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
GeneratorInterfacePomwigInterface_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/Concurrency GeneratorInterface/Core GeneratorInterface/Herwig6Interface SimDataFormats/GeneratorProducts boost clhep heppdt f77compiler,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
GeneratorInterfacePomwigInterface_EX_LIB   := GeneratorInterfacePomwigInterface
ALL_EXTERNAL_PRODS += GeneratorInterfacePomwigInterface
GeneratorInterfacePomwigInterface_CLASS := LIBRARY
GeneratorInterface/PomwigInterface_relbigobj+=GeneratorInterfacePomwigInterface
endif
ifeq ($(strip $(L1TriggerConfig/L1GtConfigProducers)),)
L1TriggerConfigL1GtConfigProducers := self/L1TriggerConfig/L1GtConfigProducers
L1TriggerConfig/L1GtConfigProducers := L1TriggerConfigL1GtConfigProducers
L1TriggerConfigL1GtConfigProducers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
L1TriggerConfigL1GtConfigProducers_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet CondFormats/L1TObjects CondFormats/DataRecord CondTools/L1Trigger HLTrigger/HLTcore xerces-c,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerConfigL1GtConfigProducers_EX_LIB   := L1TriggerConfigL1GtConfigProducers
ALL_EXTERNAL_PRODS += L1TriggerConfigL1GtConfigProducers
L1TriggerConfigL1GtConfigProducers_CLASS := LIBRARY
L1TriggerConfig/L1GtConfigProducers_relbigobj+=L1TriggerConfigL1GtConfigProducers
endif
ifeq ($(strip $(DQMServicesStreamerIOPlugins)),)
DQMServicesStreamerIOPlugins := self/src/DQMServices/StreamerIO/plugins
DQMServicesStreamerIOPlugins_LOC_FLAGS_REM_CXXFLAGS   := -Werror=unused-variable
DQMServicesStreamerIOPlugins_LOC_USE := self cmssw FWCore/Framework FWCore/ServiceRegistry IOPool/Streamer IOPool/Output EventFilter/Utilities DQMServices/Core DQMServices/Components
DQMServices/StreamerIO_relbigobj+=DQMServicesStreamerIOPlugins
endif
ifeq ($(strip $(FWCore/Version)),)
FWCoreVersion := self/FWCore/Version
FWCore/Version := FWCoreVersion
FWCoreVersion_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FWCoreVersion_EX_USE := $(foreach d, self cmssw ,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
FWCoreVersion_EX_LIB   := FWCoreVersion
ALL_EXTERNAL_PRODS += FWCoreVersion
FWCoreVersion_CLASS := LIBRARY
FWCore/Version_relbigobj+=FWCoreVersion
endif
ifeq ($(strip $(RecoJetsFFTWJetProducers_plugins)),)
RecoJetsFFTWJetProducers_plugins := self/src/RecoJets/FFTJetProducers/plugins
RecoJetsFFTWJetProducers_plugins_LOC_USE := self cmssw FWCore/Framework FWCore/ServiceRegistry FWCore/Utilities FWCore/ParameterSet DataFormats/JetReco DataFormats/Common DataFormats/Histograms DataFormats/ParticleFlowCandidate DataFormats/Candidate DataFormats/VertexReco DataFormats/StdDictionaries DataFormats/WrappedStdDictionaries DataFormats/BeamSpot RecoJets/JetAlgorithms RecoJets/JetProducers RecoJets/FFTJetAlgorithms RecoJets/FFTJetProducers JetMETCorrections/FFTJetObjects
RecoJets/FFTJetProducers_relbigobj+=RecoJetsFFTWJetProducers_plugins
endif
ifeq ($(strip $(FastSimulationMuonsPlugins)),)
FastSimulationMuonsPlugins := self/src/FastSimulation/Muons/plugins
FastSimulationMuonsPlugins_LOC_USE := self cmssw CondFormats/DataRecord CondFormats/L1TObjects DataFormats/L1GlobalMuonTrigger DataFormats/L1Trigger DataFormats/Math DataFormats/MuonSeed DataFormats/TrackReco DataFormats/TrackerRecHit2D DataFormats/TrajectorySeed FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/ServiceRegistry FWCore/Utilities FastSimDataFormats/L1GlobalMuonTrigger FastSimulation/Tracking FastSimulation/Utilities Geometry/RPCGeometry RecoMuon/GlobalTrackingTools RecoMuon/L3TrackFinder RecoMuon/TrackerSeedGenerator RecoMuon/TrackingTools RecoTracker/TkTrackingRegions SimDataFormats/Track TrackingTools/DetLayers TrackingTools/PatternTools Utilities/General
FastSimulation/Muons_relbigobj+=FastSimulationMuonsPlugins
endif
ifeq ($(strip $(CalibrationEcalAlCaRecoProducersAuto)),)
CalibrationEcalAlCaRecoProducersAuto := self/src/Calibration/EcalAlCaRecoProducers/plugins
CalibrationEcalAlCaRecoProducersAuto_LOC_USE := self cmssw FWCore/Framework FWCore/MessageLogger FWCore/PluginManager FWCore/ParameterSet clhep Geometry/CaloTopology Geometry/Records DataFormats/TrackReco CommonTools/UtilAlgos DataFormats/RecoCandidate DataFormats/EgammaCandidates CondFormats/SiPixelObjects CalibFormats/SiStripObjects CalibFormats/HcalObjects Geometry/EcalMapping Geometry/CaloGeometry RecoEcal/EgammaCoreTools CalibTracker/Records
Calibration/EcalAlCaRecoProducers_relbigobj+=CalibrationEcalAlCaRecoProducersAuto
endif
ifeq ($(strip $(SLHCUpgradeSimulations/Geometry)),)
SLHCUpgradeSimulationsGeometry := self/SLHCUpgradeSimulations/Geometry
SLHCUpgradeSimulations/Geometry := SLHCUpgradeSimulationsGeometry
SLHCUpgradeSimulationsGeometry_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SLHCUpgradeSimulationsGeometry_EX_USE := $(foreach d, self cmssw DetectorDescription/Parser FWCore/PluginManager SimG4Core/Notification SimG4Core/Watcher SimG4Core/Geometry FWCore/ParameterSet boost,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += SLHCUpgradeSimulationsGeometry
SLHCUpgradeSimulationsGeometry_CLASS := LIBRARY
SLHCUpgradeSimulations/Geometry_relbigobj+=SLHCUpgradeSimulationsGeometry
endif
ifeq ($(strip $(FireworksSimDataPlugins)),)
FireworksSimDataPlugins := self/src/Fireworks/SimData/plugins
FireworksSimDataPlugins_LOC_LIB   := Eve EG
FireworksSimDataPlugins_LOC_USE := self cmssw Fireworks/Core SimDataFormats/Track SimDataFormats/TrackingHit SimDataFormats/CaloHit SimDataFormats/Vertex SimDataFormats/TrackingAnalysis
Fireworks/SimData_relbigobj+=FireworksSimDataPlugins
endif
ifeq ($(strip $(RecoHI/HiEvtPlaneAlgos)),)
RecoHIHiEvtPlaneAlgos := self/RecoHI/HiEvtPlaneAlgos
RecoHI/HiEvtPlaneAlgos := RecoHIHiEvtPlaneAlgos
RecoHIHiEvtPlaneAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoHIHiEvtPlaneAlgos_EX_USE := $(foreach d, self cmssw root FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/Utilities PhysicsTools/UtilAlgos DataFormats/Candidate DataFormats/HcalRecHit DataFormats/WrappedStdDictionaries Geometry/Records DataFormats/HepMCCandidate DataFormats/TrackReco DataFormats/VertexReco DataFormats/Common DataFormats/HeavyIonEvent DataFormats/CaloTowers DataFormats/Provenance CondCore/DBCommon CondCore/DBOutputService CondFormats/DataRecord RecoHI/HiCentralityAlgos clhep,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += RecoHIHiEvtPlaneAlgos
RecoHIHiEvtPlaneAlgos_CLASS := LIBRARY
RecoHI/HiEvtPlaneAlgos_relbigobj+=RecoHIHiEvtPlaneAlgos
endif
ifeq ($(strip $(CondCore/Utilities)),)
CondCoreUtilities := self/CondCore/Utilities
CondCore/Utilities := CondCoreUtilities
CondCoreUtilities_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CondCoreUtilities_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -Os
CondCoreUtilities_EX_USE := $(foreach d, self cmssw FWCore/Utilities FWCore/PluginManager FWCore/MessageLogger FWCore/Framework FWCore/Concurrency boost boost_program_options CondCore/ORA CondCore/DBCommon CondCore/IOVService CondCore/MetaDataService CondCore/TagCollection CondCore/CondDB CondFormats/HLTObjects CondFormats/Alignment CondFormats/BeamSpotObjects CondFormats/CastorObjects CondFormats/HIObjects CondFormats/CSCObjects CondFormats/DTObjects CondFormats/ESObjects CondFormats/EcalObjects CondFormats/EgammaObjects CondFormats/Luminosity CondFormats/HcalObjects CondFormats/JetMETObjects CondFormats/L1TObjects CondFormats/PhysicsToolsObjects CondFormats/GeometryObjects CondFormats/RecoMuonObjects CondFormats/RPCObjects CondFormats/RunInfo CondFormats/SiPixelObjects CondFormats/SiStripObjects CondFormats/Common CondFormats/BTauObjects CondFormats/MFObjects,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CondCoreUtilities_LCGDICTS  := x 
CondCoreUtilities_EX_LIB   := CondCoreUtilities
ALL_EXTERNAL_PRODS += CondCoreUtilities
CondCoreUtilities_CLASS := LIBRARY
CondCore/Utilities_relbigobj+=CondCoreUtilities
endif
ifeq ($(strip $(RecoTrackerTkSeedGeneratorPlugins)),)
RecoTrackerTkSeedGeneratorPlugins := self/src/RecoTracker/TkSeedGenerator/plugins
RecoTrackerTkSeedGeneratorPlugins_LOC_USE := self cmssw RecoTracker/TkSeedGenerator RecoTracker/TkTrackingRegions RecoPixelVertexing/PixelTriplets RecoPixelVertexing/PixelTrackFitting RecoPixelVertexing/PixelLowPtUtilities DataFormats/TrackerRecHit2D
RecoTracker/TkSeedGenerator_relbigobj+=RecoTrackerTkSeedGeneratorPlugins
endif
ifeq ($(strip $(ElectroWeakAnalysisSkimming_plugins)),)
ElectroWeakAnalysisSkimming_plugins := self/src/ElectroWeakAnalysis/Skimming/plugins
ElectroWeakAnalysisSkimming_plugins_LOC_USE := self cmssw CommonTools/Utils FWCore/Framework CommonTools/UtilAlgos DataFormats/MuonReco FWCore/ParameterSet DataFormats/HepMCCandidate DataFormats/Candidate DataFormats/PatCandidates root
ElectroWeakAnalysis/Skimming_relbigobj+=ElectroWeakAnalysisSkimming_plugins
endif
ifeq ($(strip $(FastSimulation/EventProducer)),)
FastSimulationEventProducer := self/FastSimulation/EventProducer
FastSimulation/EventProducer := FastSimulationEventProducer
FastSimulationEventProducer_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
FastSimulationEventProducer_EX_USE := $(foreach d, self cmssw DataFormats/BeamSpot DataFormats/HepMCCandidate DataFormats/Common DataFormats/Provenance DetectorDescription/Core FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/ServiceRegistry FWCore/Utilities FastSimulation/CaloGeometryTools FastSimulation/Calorimetry FastSimulation/Event FastSimulation/Particle FastSimulation/ParticlePropagator FastSimulation/PileUpProducer FastSimulation/TrajectoryManager FastSimulation/Utilities Geometry/CaloGeometry Geometry/Records MagneticField/Engine MagneticField/Records RecoTracker/Record SimDataFormats/GeneratorProducts SimDataFormats/CrossingFrame FastSimDataFormats/NuclearInteractions SimGeneral/HepPDTRecord,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += FastSimulationEventProducer
FastSimulationEventProducer_CLASS := LIBRARY
FastSimulation/EventProducer_relbigobj+=FastSimulationEventProducer
endif
ifeq ($(strip $(Validation/CaloTowers)),)
ValidationCaloTowers := self/Validation/CaloTowers
Validation/CaloTowers := ValidationCaloTowers
ValidationCaloTowers_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
ValidationCaloTowers_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet DQMServices/Core boost root DataFormats/Common DataFormats/HcalDetId DataFormats/CaloRecHit Geometry/CaloGeometry SimDataFormats/GeneratorProducts,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += ValidationCaloTowers
ValidationCaloTowers_CLASS := LIBRARY
Validation/CaloTowers_relbigobj+=ValidationCaloTowers
endif
ifeq ($(strip $(L1Trigger/GlobalTriggerAnalyzer)),)
L1TriggerGlobalTriggerAnalyzer := self/L1Trigger/GlobalTriggerAnalyzer
L1Trigger/GlobalTriggerAnalyzer := L1TriggerGlobalTriggerAnalyzer
L1TriggerGlobalTriggerAnalyzer_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
L1TriggerGlobalTriggerAnalyzer_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet DataFormats/Common DataFormats/L1GlobalTrigger DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalCaloTrigger DataFormats/L1Trigger CondFormats/L1TObjects CondFormats/DataRecord CommonTools/UtilAlgos,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerGlobalTriggerAnalyzer_EX_LIB   := L1TriggerGlobalTriggerAnalyzer
ALL_EXTERNAL_PRODS += L1TriggerGlobalTriggerAnalyzer
L1TriggerGlobalTriggerAnalyzer_CLASS := LIBRARY
L1Trigger/GlobalTriggerAnalyzer_relbigobj+=L1TriggerGlobalTriggerAnalyzer
endif
ifeq ($(strip $(FireworksGenParticlePlugins)),)
FireworksGenParticlePlugins := self/src/Fireworks/GenParticle/plugins
FireworksGenParticlePlugins_LOC_LIB   := EG Eve
FireworksGenParticlePlugins_LOC_USE := self cmssw DataFormats/HepMCCandidate Fireworks/Candidates Fireworks/Core rootcore
Fireworks/GenParticle_relbigobj+=FireworksGenParticlePlugins
endif
ifeq ($(strip $(FastSimulationTrackingPlugins)),)
FastSimulationTrackingPlugins := self/src/FastSimulation/Tracking/plugins
FastSimulationTrackingPlugins_LOC_USE := self cmssw DataFormats/BeamSpot DataFormats/Common DataFormats/DetId DataFormats/GeometryVector DataFormats/TrackCandidate DataFormats/TrackReco DataFormats/TrackerRecHit2D DataFormats/TrackingRecHit DataFormats/TrajectorySeed DataFormats/VertexReco FWCore/Framework FWCore/ParameterSet FastSimulation/BaseParticlePropagator FastSimulation/ParticlePropagator FastSimulation/Tracking Geometry/CommonDetUnit Geometry/Records Geometry/TrackerGeometryBuilder RecoPixelVertexing/PixelTrackFitting RecoTracker/TkTrackingRegions SimDataFormats/Track SimDataFormats/Vertex TrackingTools/PatternTools TrackingTools/TrajectoryParametrization TrackingTools/TrajectoryState TrackingTools/MaterialEffects SimGeneral/MixingModule
FastSimulation/Tracking_relbigobj+=FastSimulationTrackingPlugins
endif
ifeq ($(strip $(Alignment/OfflineValidation)),)
AlignmentOfflineValidation := self/Alignment/OfflineValidation
Alignment/OfflineValidation := AlignmentOfflineValidation
AlignmentOfflineValidation_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
AlignmentOfflineValidation_EX_USE := $(foreach d, self cmssw DataFormats/TrackReco FWCore/PluginManager FWCore/Framework FWCore/Utilities FWCore/ParameterSet FWCore/ServiceRegistry Geometry/TrackerGeometryBuilder TrackingTools/TrackFitters MagneticField/Engine clhep rootmath,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
AlignmentOfflineValidation_LCGDICTS  := x 
AlignmentOfflineValidation_EX_LIB   := AlignmentOfflineValidation
ALL_EXTERNAL_PRODS += AlignmentOfflineValidation
AlignmentOfflineValidation_CLASS := LIBRARY
Alignment/OfflineValidation_relbigobj+=AlignmentOfflineValidation
endif
ifeq ($(strip $(HLTriggerOffline/Muon)),)
HLTriggerOfflineMuon := self/HLTriggerOffline/Muon
HLTriggerOffline/Muon := HLTriggerOfflineMuon
HLTriggerOfflineMuon_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
HLTriggerOfflineMuon_EX_USE := $(foreach d, self cmssw DQMServices/Core FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/MuonReco DataFormats/HepMCCandidate DataFormats/RecoCandidate DataFormats/L1GlobalMuonTrigger HLTrigger/HLTcore CommonTools/Utils root DataFormats/CLHEP DataFormats/GeometrySurface DataFormats/L1Trigger DataFormats/Math DataFormats/TrackReco FWCore/MessageLogger FWCore/Utilities Geometry/CommonDetUnit Geometry/Records MagneticField/Engine MagneticField/Records RecoMuon/DetLayers RecoMuon/Records TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/KalmanUpdators TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrajectoryState,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += HLTriggerOfflineMuon
HLTriggerOfflineMuon_CLASS := LIBRARY
HLTriggerOffline/Muon_relbigobj+=HLTriggerOfflineMuon
endif
ifeq ($(strip $(DQM/TrackingMonitor)),)
DQMTrackingMonitor := self/DQM/TrackingMonitor
DQM/TrackingMonitor := DQMTrackingMonitor
DQMTrackingMonitor_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMTrackingMonitor_EX_USE := $(foreach d, self cmssw TrackingTools/Records FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DQMServices/Core CommonTools/TriggerUtils DataFormats/TrackReco DataFormats/Luminosity DataFormats/VertexReco TrackingTools/TransientTrackingRecHit TrackingTools/TransientTrack TrackingTools/DetLayers TrackPropagation/SteppingHelixPropagator DataFormats/MuonReco Geometry/RPCGeometry RecoMuon/GlobalTrackingTools,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMTrackingMonitor
DQMTrackingMonitor_CLASS := LIBRARY
DQM/TrackingMonitor_relbigobj+=DQMTrackingMonitor
endif
ifeq ($(strip $(CSCTriggerPrimitivesPlugins)),)
CSCTriggerPrimitivesPlugins := self/src/L1Trigger/CSCTriggerPrimitives/plugins
CSCTriggerPrimitivesPlugins_LOC_USE := self cmssw L1Trigger/CSCTriggerPrimitives CondFormats/DataRecord Geometry/Records
L1Trigger/CSCTriggerPrimitives_relbigobj+=CSCTriggerPrimitivesPlugins
endif
ifeq ($(strip $(RecoTBCalo/HcalPlotter)),)
RecoTBCaloHcalPlotter := self/RecoTBCalo/HcalPlotter
RecoTBCalo/HcalPlotter := RecoTBCaloHcalPlotter
RecoTBCaloHcalPlotter_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoTBCaloHcalPlotter_EX_USE := $(foreach d, self cmssw DataFormats/HcalDetId DataFormats/HcalDigi DataFormats/HcalRecHit FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities CommonTools/UtilAlgos TBDataFormats/HcalTBObjects root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += RecoTBCaloHcalPlotter
RecoTBCaloHcalPlotter_CLASS := LIBRARY
RecoTBCalo/HcalPlotter_relbigobj+=RecoTBCaloHcalPlotter
endif
ifeq ($(strip $(GeneratorInterface/AMPTInterface)),)
GeneratorInterfaceAMPTInterface := self/GeneratorInterface/AMPTInterface
GeneratorInterface/AMPTInterface := GeneratorInterfaceAMPTInterface
GeneratorInterfaceAMPTInterface_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
GeneratorInterfaceAMPTInterface_EX_USE := $(foreach d, self cmssw boost GeneratorInterface/Core FWCore/Framework SimDataFormats/GeneratorProducts GeneratorInterface/ExternalDecays f77compiler,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
GeneratorInterfaceAMPTInterface_EX_LIB   := GeneratorInterfaceAMPTInterface
ALL_EXTERNAL_PRODS += GeneratorInterfaceAMPTInterface
GeneratorInterfaceAMPTInterface_CLASS := LIBRARY
GeneratorInterface/AMPTInterface_relbigobj+=GeneratorInterfaceAMPTInterface
endif
ifeq ($(strip $(RecoParticleFlow/PFClusterTools)),)
RecoParticleFlowPFClusterTools := self/RecoParticleFlow/PFClusterTools
RecoParticleFlow/PFClusterTools := RecoParticleFlowPFClusterTools
RecoParticleFlowPFClusterTools_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoParticleFlowPFClusterTools_EX_USE := $(foreach d, self cmssw CondFormats/PhysicsToolsObjects DataFormats/ParticleFlowReco DataFormats/Math DataFormats/EcalDetId boost rootphysics,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoParticleFlowPFClusterTools_LCGDICTS  := x 
RecoParticleFlowPFClusterTools_EX_LIB   := RecoParticleFlowPFClusterTools
ALL_EXTERNAL_PRODS += RecoParticleFlowPFClusterTools
RecoParticleFlowPFClusterTools_CLASS := LIBRARY
RecoParticleFlow/PFClusterTools_relbigobj+=RecoParticleFlowPFClusterTools
endif
ifeq ($(strip $(PhysicsToolsRecoAlgos_plugins)),)
PhysicsToolsRecoAlgos_plugins := self/src/PhysicsTools/RecoAlgos/plugins
PhysicsToolsRecoAlgos_plugins_LOC_USE := self cmssw FWCore/Framework FWCore/ParameterSet DataFormats/RecoCandidate DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/MuonReco DataFormats/JetReco DataFormats/METReco DataFormats/HcalRecHit SimDataFormats/TrackingAnalysis PhysicsTools/RecoUtils CommonTools/CandAlgos PhysicsTools/RecoAlgos CommonTools/UtilAlgos MagneticField/Records RecoVertex/KalmanVertexFit RecoVertex/GaussianSumVertexFit
PhysicsTools/RecoAlgos_relbigobj+=PhysicsToolsRecoAlgos_plugins
endif
ifeq ($(strip $(DPGAnalysis/SiStripTools)),)
DPGAnalysisSiStripTools := self/DPGAnalysis/SiStripTools
DPGAnalysis/SiStripTools := DPGAnalysisSiStripTools
DPGAnalysisSiStripTools_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DPGAnalysisSiStripTools_EX_USE := $(foreach d, self cmssw root FWCore/MessageLogger FWCore/Utilities FWCore/ServiceRegistry FWCore/Framework FWCore/ParameterSet CommonTools/UtilAlgos DataFormats/Luminosity DataFormats/Provenance DataFormats/SiStripDigi DataFormats/SiStripCluster DataFormats/SiPixelCluster DataFormats/Scalers DataFormats/Common DataFormats/DetId DataFormats/SiStripDetId DataFormats/TrackReco DataFormats/TrackerCommon CondFormats/DataRecord CondFormats/SiStripObjects CalibFormats/SiStripObjects CalibTracker/Records SimDataFormats/PileupSummaryInfo SimDataFormats/GeneratorProducts TrackingTools/TrajectoryState TrackingTools/TransientTrackingRecHit,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DPGAnalysisSiStripTools_LCGDICTS  := x 
DPGAnalysisSiStripTools_EX_LIB   := DPGAnalysisSiStripTools
ALL_EXTERNAL_PRODS += DPGAnalysisSiStripTools
DPGAnalysisSiStripTools_CLASS := LIBRARY
DPGAnalysis/SiStripTools_relbigobj+=DPGAnalysisSiStripTools
endif
ifeq ($(strip $(RecoTracker/DeDx)),)
RecoTrackerDeDx := self/RecoTracker/DeDx
RecoTracker/DeDx := RecoTrackerDeDx
RecoTrackerDeDx_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoTrackerDeDx_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry DataFormats/TrackReco DataFormats/DetId DataFormats/TrackerRecHit2D Geometry/Records Geometry/TrackerGeometryBuilder CondCore/DBOutputService CondFormats/PhysicsToolsObjects CondFormats/DataRecord TrackingTools/TrajectoryState PhysicsTools/UtilAlgos HLTrigger/HLTcore rootcore root clhep,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoTrackerDeDx_EX_LIB   := RecoTrackerDeDx
ALL_EXTERNAL_PRODS += RecoTrackerDeDx
RecoTrackerDeDx_CLASS := LIBRARY
RecoTracker/DeDx_relbigobj+=RecoTrackerDeDx
endif
ifeq ($(strip $(DPGAnalysisSiStripToolsPlugins)),)
DPGAnalysisSiStripToolsPlugins := self/src/DPGAnalysis/SiStripTools/plugins
DPGAnalysisSiStripToolsPlugins_LOC_USE := self cmssw root boost FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/MessageLogger FWCore/ServiceRegistry FWCore/Utilities CommonTools/Utils CommonTools/UtilAlgos CondFormats/SiStripObjects DataFormats/SiStripDigi DataFormats/SiStripCluster DataFormats/SiPixelCluster DataFormats/Scalers DataFormats/DetId DataFormats/SiPixelDetId DataFormats/SiStripDetId DataFormats/Common DataFormats/Luminosity DataFormats/GeometryVector DPGAnalysis/SiStripTools DQM/SiStripCommon DQMServices/Core CommonTools/TrackerMap CalibFormats/SiStripObjects CondFormats/SiPixelObjects CondFormats/DataRecord CalibTracker/Records CalibTracker/SiStripCommon CalibTracker/SiPixelESProducers MagneticField/Records MagneticField/Engine RecoTracker/TransientTrackingRecHit TrackingTools/TransientTrackingRecHit TrackingTools/Records TrackingTools/TrajectoryState TrackingTools/PatternTools TrackingTools/TrackFitters DataFormats/TrackReco DataFormats/TrajectorySeed DataFormats/VertexReco DataFormats/L1GlobalTrigger RecoLocalTracker/SiStripClusterizer DataFormats/TrackerRecHit2D HLTrigger/HLTcore Geometry/TrackerGeometryBuilder Geometry/CommonDetUnit Geometry/Records DataFormats/TrackerCommon SimDataFormats/TrackingAnalysis SimDataFormats/TrackingHit DataFormats/TrackingRecHit SimTracker/TrackAssociation SimTracker/Records
DPGAnalysis/SiStripTools_relbigobj+=DPGAnalysisSiStripToolsPlugins
endif
ifeq ($(strip $(CommonToolsToolsUtilAlgos_plugins)),)
CommonToolsToolsUtilAlgos_plugins := self/src/CommonTools/UtilAlgos/plugins
CommonToolsToolsUtilAlgos_plugins_LOC_USE := self cmssw FWCore/Framework FWCore/ParameterSet CommonTools/UtilAlgos FWCore/ServiceRegistry DataFormats/Candidate
CommonTools/UtilAlgos_relbigobj+=CommonToolsToolsUtilAlgos_plugins
endif
ifeq ($(strip $(FireworksElectronsPlugins)),)
FireworksElectronsPlugins := self/src/Fireworks/Electrons/plugins
FireworksElectronsPlugins_LOC_LIB   := Eve RGL
FireworksElectronsPlugins_LOC_USE := self cmssw DataFormats/EcalDetId DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/GsfTrackReco Fireworks/Calo Fireworks/Candidates Fireworks/Core Fireworks/Electrons Fireworks/Tracks rootinteractive rootphysics
Fireworks/Electrons_relbigobj+=FireworksElectronsPlugins
endif
ifeq ($(strip $(SimG4CMS/EcalTestBeam)),)
SimG4CMSEcalTestBeam := self/SimG4CMS/EcalTestBeam
SimG4CMS/EcalTestBeam := SimG4CMSEcalTestBeam
SimG4CMSEcalTestBeam_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CMSEcalTestBeam_EX_USE := $(foreach d, self cmssw DataFormats/Common DataFormats/EcalDetId DataFormats/Math DetectorDescription/Core FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet Geometry/EcalCommonData Geometry/EcalTestBeam SimDataFormats/EcalTestBeam SimDataFormats/GeneratorProducts SimG4Core/Notification SimG4Core/Watcher SimG4CMS/Calo TBDataFormats/EcalTBObjects clhep rootmath geant4core,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimG4CMSEcalTestBeam_EX_LIB   := SimG4CMSEcalTestBeam
ALL_EXTERNAL_PRODS += SimG4CMSEcalTestBeam
SimG4CMSEcalTestBeam_CLASS := LIBRARY
SimG4CMS/EcalTestBeam_relbigobj+=SimG4CMSEcalTestBeam
endif
ifeq ($(strip $(PhysicsTools/HepMCCandAlgos)),)
PhysicsToolsHepMCCandAlgos := self/PhysicsTools/HepMCCandAlgos
PhysicsTools/HepMCCandAlgos := PhysicsToolsHepMCCandAlgos
PhysicsToolsHepMCCandAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
PhysicsToolsHepMCCandAlgos_EX_USE := $(foreach d, self cmssw SimGeneral/HepPDTRecord DataFormats/Candidate DataFormats/Common DataFormats/HepMCCandidate hepmc,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsHepMCCandAlgos_EX_LIB   := PhysicsToolsHepMCCandAlgos
ALL_EXTERNAL_PRODS += PhysicsToolsHepMCCandAlgos
PhysicsToolsHepMCCandAlgos_CLASS := LIBRARY
PhysicsTools/HepMCCandAlgos_relbigobj+=PhysicsToolsHepMCCandAlgos
endif
ifeq ($(strip $(CalibTracker/SiPixelLorentzAngle)),)
CalibTrackerSiPixelLorentzAngle := self/CalibTracker/SiPixelLorentzAngle
CalibTracker/SiPixelLorentzAngle := CalibTrackerSiPixelLorentzAngle
CalibTrackerSiPixelLorentzAngle_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
CalibTrackerSiPixelLorentzAngle_EX_USE := $(foreach d, self cmssw FWCore/Framework DataFormats/Common FWCore/ParameterSet RecoTracker/TkSeedGenerator TrackingTools/TrackFitters TrackingTools/TransientTrack Geometry/TrackerGeometryBuilder Geometry/Records SimTracker/TrackerHitAssociation MagneticField/Records MagneticField/VolumeBasedEngine root clhep boost CondCore/DBOutputService CondFormats/SiPixelObjects,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += CalibTrackerSiPixelLorentzAngle
CalibTrackerSiPixelLorentzAngle_CLASS := LIBRARY
CalibTracker/SiPixelLorentzAngle_relbigobj+=CalibTrackerSiPixelLorentzAngle
endif
ifeq ($(strip $(EventFilter/Utilities)),)
EventFilterUtilities := self/EventFilter/Utilities
EventFilter/Utilities := EventFilterUtilities
EventFilterUtilities_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
EventFilterUtilities_EX_USE := $(foreach d, self cmssw FWCore/MessageLogger FWCore/ServiceRegistry EventFilter/FEDInterface curl,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
EventFilterUtilities_EX_LIB   := EventFilterUtilities
ALL_EXTERNAL_PRODS += EventFilterUtilities
EventFilterUtilities_CLASS := LIBRARY
EventFilter/Utilities_relbigobj+=EventFilterUtilities
endif
ifeq ($(strip $(RecoLocalTracker/SiStripZeroSuppression)),)
RecoLocalTrackerSiStripZeroSuppression := self/RecoLocalTracker/SiStripZeroSuppression
RecoLocalTracker/SiStripZeroSuppression := RecoLocalTrackerSiStripZeroSuppression
RecoLocalTrackerSiStripZeroSuppression_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoLocalTrackerSiStripZeroSuppression_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/Utilities FWCore/ServiceRegistry DataFormats/Common DataFormats/FEDRawData DataFormats/SiStripDetId CondFormats/DataRecord CondFormats/SiStripObjects CalibFormats/SiStripObjects CalibTracker/Records CommonTools/UtilAlgos root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoLocalTrackerSiStripZeroSuppression_EX_LIB   := RecoLocalTrackerSiStripZeroSuppression
ALL_EXTERNAL_PRODS += RecoLocalTrackerSiStripZeroSuppression
RecoLocalTrackerSiStripZeroSuppression_CLASS := LIBRARY
RecoLocalTracker/SiStripZeroSuppression_relbigobj+=RecoLocalTrackerSiStripZeroSuppression
endif
ifeq ($(strip $(SimG4CoreApplicationPlugins)),)
SimG4CoreApplicationPlugins := self/src/SimG4Core/Application/plugins
SimG4CoreApplicationPlugins_LOC_USE := self cmssw FWCore/Concurrency FWCore/Framework FWCore/ParameterSet SimDataFormats/GeneratorProducts SimDataFormats/CaloHit SimDataFormats/Track SimDataFormats/TrackingHit SimDataFormats/Vertex geant4core hepmc SimG4Core/Application
SimG4Core/Application_relbigobj+=SimG4CoreApplicationPlugins
endif
ifeq ($(strip $(GeneratorInterfaceHydjet2InterfacePlugins)),)
GeneratorInterfaceHydjet2InterfacePlugins := self/src/GeneratorInterface/Hydjet2Interface/plugins
GeneratorInterfaceHydjet2InterfacePlugins_LOC_USE := self cmssw GeneratorInterface/Hydjet2Interface pydata
GeneratorInterface/Hydjet2Interface_relbigobj+=GeneratorInterfaceHydjet2InterfacePlugins
endif
ifeq ($(strip $(RecoMuon/L3TrackFinder)),)
RecoMuonL3TrackFinder := self/RecoMuon/L3TrackFinder
RecoMuon/L3TrackFinder := RecoMuonL3TrackFinder
RecoMuonL3TrackFinder_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoMuonL3TrackFinder_EX_USE := $(foreach d, self cmssw DataFormats/DetId DataFormats/GeometryCommonDetAlgo DataFormats/GeometrySurface DataFormats/GeometryVector DataFormats/SiStripDetId DataFormats/TrackReco DataFormats/TrackerRecHit2D DataFormats/TrajectorySeed DataFormats/TrajectoryState FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry Geometry/TrackerGeometryBuilder MagneticField/Engine RecoMuon/GlobalTrackingTools RecoMuon/TrackingTools RecoTracker/CkfPattern RecoTracker/MeasurementDet RecoTracker/Record RecoTracker/TkDetLayers RecoTracker/TkTrackingRegions TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/KalmanUpdators TrackingTools/MeasurementDet TrackingTools/PatternTools TrackingTools/TrackFitters TrackingTools/TrajectoryCleaning TrackingTools/TrajectoryFiltering TrackingTools/TrajectoryState TrackingTools/TransientTrackingRecHit,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoMuonL3TrackFinder_EX_LIB   := RecoMuonL3TrackFinder
ALL_EXTERNAL_PRODS += RecoMuonL3TrackFinder
RecoMuonL3TrackFinder_CLASS := LIBRARY
RecoMuon/L3TrackFinder_relbigobj+=RecoMuonL3TrackFinder
endif
ifeq ($(strip $(SimG4CoreCustomPhysicsPlugins)),)
SimG4CoreCustomPhysicsPlugins := self/src/SimG4Core/CustomPhysics/plugins
SimG4CoreCustomPhysicsPlugins_LOC_USE := self cmssw SimG4Core/Watcher SimG4Core/Notification FWCore/ParameterSet FWCore/ServiceRegistry geant4core clhep boost SimG4Core/CustomPhysics
SimG4Core/CustomPhysics_relbigobj+=SimG4CoreCustomPhysicsPlugins
endif
ifeq ($(strip $(RecoMETMETPUSubtraction_plugins)),)
RecoMETMETPUSubtraction_plugins := self/src/RecoMET/METPUSubtraction/plugins
RecoMETMETPUSubtraction_plugins_LOC_USE := self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities CommonTools/Utils DataFormats/Candidate DataFormats/JetReco DataFormats/METReco DataFormats/MuonReco DataFormats/ParticleFlowCandidate DataFormats/PatCandidates DataFormats/TauReco DataFormats/VertexReco JetMETCorrections/Objects RecoMET/METPUSubtraction RecoJets/JetProducers root roottmva
RecoMET/METPUSubtraction_relbigobj+=RecoMETMETPUSubtraction_plugins
endif
ifeq ($(strip $(DQM/CastorMonitor)),)
DQMCastorMonitor := self/DQM/CastorMonitor
DQM/CastorMonitor := DQMCastorMonitor
DQMCastorMonitor_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMCastorMonitor_EX_USE := $(foreach d, self cmssw DataFormats/HcalDetId DataFormats/HcalRecHit DataFormats/HcalDigi CondFormats/CastorObjects CalibFormats/CastorObjects DataFormats/JetReco EventFilter/CastorRawToDigi Geometry/CaloGeometry FWCore/ParameterSet FWCore/Framework FWCore/MessageLogger DQMServices/Core DQMServices/Components DataFormats/FEDRawData rootmath,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMCastorMonitor
DQMCastorMonitor_CLASS := LIBRARY
DQM/CastorMonitor_relbigobj+=DQMCastorMonitor
endif
ifeq ($(strip $(SimG4Core/Notification)),)
SimG4CoreNotification := self/SimG4Core/Notification
SimG4Core/Notification := SimG4CoreNotification
SimG4CoreNotification_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CoreNotification_EX_USE := $(foreach d, self cmssw geant4core FWCore/MessageLogger rootmath expat,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimG4CoreNotification_EX_LIB   := SimG4CoreNotification
ALL_EXTERNAL_PRODS += SimG4CoreNotification
SimG4CoreNotification_CLASS := LIBRARY
SimG4Core/Notification_relbigobj+=SimG4CoreNotification
endif
ifeq ($(strip $(GeneratorInterface/Herwig6Interface)),)
GeneratorInterfaceHerwig6Interface := self/GeneratorInterface/Herwig6Interface
GeneratorInterface/Herwig6Interface := GeneratorInterfaceHerwig6Interface
GeneratorInterfaceHerwig6Interface_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
GeneratorInterfaceHerwig6Interface_EX_USE := $(foreach d, self cmssw FWCore/Concurrency SimDataFormats/GeneratorProducts GeneratorInterface/Core tauola boost clhep herwig fastjet jimmy f77compiler,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
GeneratorInterfaceHerwig6Interface_EX_LIB   := GeneratorInterfaceHerwig6Interface
ALL_EXTERNAL_PRODS += GeneratorInterfaceHerwig6Interface
GeneratorInterfaceHerwig6Interface_CLASS := LIBRARY
GeneratorInterface/Herwig6Interface_relbigobj+=GeneratorInterfaceHerwig6Interface
endif
ifeq ($(strip $(CondToolsSiPixelPlugins)),)
CondToolsSiPixelPlugins := self/src/CondTools/SiPixel/plugins
CondToolsSiPixelPlugins_LOC_USE := self cmssw CondTools/SiPixel
CondTools/SiPixel_relbigobj+=CondToolsSiPixelPlugins
endif
ifeq ($(strip $(RecoEgamma/EgammaHLTAlgos)),)
RecoEgammaEgammaHLTAlgos := self/RecoEgamma/EgammaHLTAlgos
RecoEgamma/EgammaHLTAlgos := RecoEgammaEgammaHLTAlgos
RecoEgammaEgammaHLTAlgos_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoEgammaEgammaHLTAlgos_EX_USE := $(foreach d, self cmssw clhep MagneticField/Engine DataFormats/DetId DataFormats/TrackerRecHit2D DataFormats/TrackingRecHit DataFormats/EgammaReco DataFormats/EgammaCandidates Geometry/CommonDetUnit Geometry/TrackerGeometryBuilder RecoTracker/MeasurementDet RecoTracker/TkSeedGenerator RecoTracker/TkDetLayers RecoTracker/CkfPattern TrackingTools/DetLayers RecoTracker/TrackProducer Geometry/CaloGeometry CondFormats/HcalObjects RecoLocalCalo/HcalRecAlgos,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoEgammaEgammaHLTAlgos_EX_LIB   := RecoEgammaEgammaHLTAlgos
ALL_EXTERNAL_PRODS += RecoEgammaEgammaHLTAlgos
RecoEgammaEgammaHLTAlgos_CLASS := LIBRARY
RecoEgamma/EgammaHLTAlgos_relbigobj+=RecoEgammaEgammaHLTAlgos
endif
ifeq ($(strip $(DQM/SiStripMonitorCluster)),)
DQMSiStripMonitorCluster := self/DQM/SiStripMonitorCluster
DQM/SiStripMonitorCluster := DQMSiStripMonitorCluster
DQMSiStripMonitorCluster_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
DQMSiStripMonitorCluster_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DQMServices/Core CommonTools/TriggerUtils DataFormats/SiStripCluster DataFormats/SiPixelCluster CalibFormats/SiStripObjects CalibTracker/Records DPGAnalysis/SiStripTools DQM/SiStripCommon Geometry/Records Geometry/TrackerGeometryBuilder,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ALL_EXTERNAL_PRODS += DQMSiStripMonitorCluster
DQMSiStripMonitorCluster_CLASS := LIBRARY
DQM/SiStripMonitorCluster_relbigobj+=DQMSiStripMonitorCluster
endif
ifeq ($(strip $(SimG4CMS/CherenkovAnalysis)),)
SimG4CMSCherenkovAnalysis := self/SimG4CMS/CherenkovAnalysis
SimG4CMS/CherenkovAnalysis := SimG4CMSCherenkovAnalysis
SimG4CMSCherenkovAnalysis_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
SimG4CMSCherenkovAnalysis_EX_USE := $(foreach d, self cmssw FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry CommonTools/UtilAlgos SimG4Core/SensitiveDetector SimG4Core/Notification SimG4Core/Application SimG4CMS/Calo DataFormats/Math SimDataFormats/SimHitMaker SimDataFormats/CaloHit DetectorDescription/Core boost geant4core root,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
SimG4CMSCherenkovAnalysis_EX_LIB   := SimG4CMSCherenkovAnalysis
ALL_EXTERNAL_PRODS += SimG4CMSCherenkovAnalysis
SimG4CMSCherenkovAnalysis_CLASS := LIBRARY
SimG4CMS/CherenkovAnalysis_relbigobj+=SimG4CMSCherenkovAnalysis
endif
ifeq ($(strip $(TopQuarkAnalysisExamplesPlugins)),)
TopQuarkAnalysisExamplesPlugins := self/src/TopQuarkAnalysis/Examples/plugins
TopQuarkAnalysisExamplesPlugins_LOC_USE := self cmssw AnalysisDataFormats/TopObjects CommonTools/UtilAlgos FWCore/ServiceRegistry FWCore/MessageLogger FWCore/ParameterSet FWCore/Framework FWCore/Utilities root
TopQuarkAnalysis/Examples_relbigobj+=TopQuarkAnalysisExamplesPlugins
endif
ifeq ($(strip $(FireworksVerticesPlugins)),)
FireworksVerticesPlugins := self/src/Fireworks/Vertices/plugins
FireworksVerticesPlugins_LOC_LIB   := Eve Geom Core
FireworksVerticesPlugins_LOC_USE := self cmssw DataFormats/BTauReco DataFormats/VertexReco Fireworks/Core Fireworks/Vertices Fireworks/Candidates roothistmatrix
Fireworks/Vertices_relbigobj+=FireworksVerticesPlugins
endif
ifeq ($(strip $(RecoLuminosity/LumiProducer)),)
RecoLuminosityLumiProducer := self/RecoLuminosity/LumiProducer
RecoLuminosity/LumiProducer := RecoLuminosityLumiProducer
RecoLuminosityLumiProducer_BuildFile    := $(RELEASETOP)/.SCRAM/$(SCRAM_ARCH)/MakeData/DirCache.mk
RecoLuminosityLumiProducer_EX_USE := $(foreach d, self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet CoralBase RelationalAccess FWCore/ServiceRegistry FWCore/Utilities FWCore/Concurrency,$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoLuminosityLumiProducer_ROOTDICTS  := y 
RecoLuminosityLumiProducer_EX_LIB   := RecoLuminosityLumiProducer
ALL_EXTERNAL_PRODS += RecoLuminosityLumiProducer
RecoLuminosityLumiProducer_CLASS := LIBRARY
RecoLuminosity/LumiProducer_relbigobj+=RecoLuminosityLumiProducer
endif
