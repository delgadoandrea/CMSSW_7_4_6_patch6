ifeq ($(strip $(PhysicsToolsPatAlgos_plugins)),)
PhysicsToolsPatAlgos_plugins := self/src/PhysicsTools/PatAlgos/plugins
PLUGINS:=yes
PhysicsToolsPatAlgos_plugins_files := $(patsubst src/PhysicsTools/PatAlgos/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/PhysicsTools/PatAlgos/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/PhysicsTools/PatAlgos/plugins/$(file). Please fix src/PhysicsTools/PatAlgos/plugins/BuildFile.))))
PhysicsToolsPatAlgos_plugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/PhysicsTools/PatAlgos/plugins/BuildFile
PhysicsToolsPatAlgos_plugins_LOC_USE := self cmssw PhysicsTools/PatAlgos FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/MessageService L1Trigger/GlobalTriggerAnalyzer HLTrigger/HLTcore DataFormats/PatCandidates DataFormats/BTauReco DataFormats/JetReco DataFormats/TrackReco DataFormats/Candidate DataFormats/HeavyIonEvent PhysicsTools/PatUtils CondFormats/JetMETObjects JetMETCorrections/Objects JetMETCorrections/JetCorrector TrackingTools/TransientTrack SimDataFormats/Track SimDataFormats/Vertex SimGeneral/HepPDTRecord RecoMET/METAlgorithms RecoEgamma/EgammaTools TrackingTools/IPTools root
PhysicsToolsPatAlgos_plugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,PhysicsToolsPatAlgos_plugins,PhysicsToolsPatAlgos_plugins,$(SCRAMSTORENAME_LIB),src/PhysicsTools/PatAlgos/plugins))
PhysicsToolsPatAlgos_plugins_PACKAGE := self/src/PhysicsTools/PatAlgos/plugins
ALL_PRODS += PhysicsToolsPatAlgos_plugins
PhysicsTools/PatAlgos_forbigobj+=PhysicsToolsPatAlgos_plugins
PhysicsToolsPatAlgos_plugins_INIT_FUNC        += $$(eval $$(call Library,PhysicsToolsPatAlgos_plugins,src/PhysicsTools/PatAlgos/plugins,src_PhysicsTools_PatAlgos_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
PhysicsToolsPatAlgos_plugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,PhysicsToolsPatAlgos_plugins,src/PhysicsTools/PatAlgos/plugins))
endif
ALL_COMMONRULES += src_PhysicsTools_PatAlgos_plugins
src_PhysicsTools_PatAlgos_plugins_parent := PhysicsTools/PatAlgos
src_PhysicsTools_PatAlgos_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_PhysicsTools_PatAlgos_plugins,src/PhysicsTools/PatAlgos/plugins,PLUGINS))
ifeq ($(strip $(TreeMaker/TreeMaker)),)
ALL_COMMONRULES += src_TreeMaker_TreeMaker_src
src_TreeMaker_TreeMaker_src_parent := TreeMaker/TreeMaker
src_TreeMaker_TreeMaker_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_TreeMaker_TreeMaker_src,src/TreeMaker/TreeMaker/src,LIBRARY))
TreeMakerTreeMaker := self/TreeMaker/TreeMaker
TreeMaker/TreeMaker := TreeMakerTreeMaker
TreeMakerTreeMaker_files := $(patsubst src/TreeMaker/TreeMaker/src/%,%,$(wildcard $(foreach dir,src/TreeMaker/TreeMaker/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
TreeMakerTreeMaker_BuildFile    := $(WORKINGDIR)/cache/bf/src/TreeMaker/TreeMaker/BuildFile
TreeMakerTreeMaker_LOC_USE := self cmssw root FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Utilities CommonTools/UtilAlgos DataFormats/VertexReco DataFormats/Provenance DataFormats/Math DataFormats/Common DataFormats/Candidate DataFormats/PatCandidates TreeMaker/Reflex
TreeMakerTreeMaker_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,TreeMakerTreeMaker,TreeMakerTreeMaker,$(SCRAMSTORENAME_LIB),src/TreeMaker/TreeMaker/src))
TreeMakerTreeMaker_PACKAGE := self/src/TreeMaker/TreeMaker/src
ALL_PRODS += TreeMakerTreeMaker
TreeMakerTreeMaker_CLASS := LIBRARY
TreeMaker/TreeMaker_forbigobj+=TreeMakerTreeMaker
TreeMakerTreeMaker_INIT_FUNC        += $$(eval $$(call Library,TreeMakerTreeMaker,src/TreeMaker/TreeMaker/src,src_TreeMaker_TreeMaker_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(TreeMaker/Utils)),)
ALL_COMMONRULES += src_TreeMaker_Utils_src
src_TreeMaker_Utils_src_parent := TreeMaker/Utils
src_TreeMaker_Utils_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_TreeMaker_Utils_src,src/TreeMaker/Utils/src,LIBRARY))
TreeMakerUtils := self/TreeMaker/Utils
TreeMaker/Utils := TreeMakerUtils
TreeMakerUtils_files := $(patsubst src/TreeMaker/Utils/src/%,%,$(wildcard $(foreach dir,src/TreeMaker/Utils/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
TreeMakerUtils_BuildFile    := $(WORKINGDIR)/cache/bf/src/TreeMaker/Utils/BuildFile
TreeMakerUtils_LOC_USE := self cmssw FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/PatCandidates DataFormats/ParticleFlowCandidate DataFormats/ParticleFlowReco DataFormats/JetReco DataFormats/Math CommonTools/Utils CondFormats/JetMETObjects JetMETCorrections/Objects CondFormats/DataRecord CommonTools/UtilAlgos PhysicsTools/PatUtils DataFormats/Candidate Geometry/CaloGeometry RecoParticleFlow/PFProducer TreeMaker/Reflex root rootmath lhapdf
TreeMakerUtils_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,TreeMakerUtils,TreeMakerUtils,$(SCRAMSTORENAME_LIB),src/TreeMaker/Utils/src))
TreeMakerUtils_ROOTDICTS  := y 
TreeMakerUtils_PRE_INIT_FUNC += $$(eval $$(call RootDict,TreeMakerUtils,src/TreeMaker/Utils/src,Utils_LinkDef.h,$(SCRAMSTORENAME_LIB)))
TreeMakerUtils_PACKAGE := self/src/TreeMaker/Utils/src
ALL_PRODS += TreeMakerUtils
TreeMakerUtils_CLASS := LIBRARY
TreeMaker/Utils_forbigobj+=TreeMakerUtils
TreeMakerUtils_INIT_FUNC        += $$(eval $$(call Library,TreeMakerUtils,src/TreeMaker/Utils/src,src_TreeMaker_Utils_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(JetMETCorrections/Type1MET)),)
ALL_COMMONRULES += src_JetMETCorrections_Type1MET_src
src_JetMETCorrections_Type1MET_src_parent := JetMETCorrections/Type1MET
src_JetMETCorrections_Type1MET_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_JetMETCorrections_Type1MET_src,src/JetMETCorrections/Type1MET/src,LIBRARY))
JetMETCorrectionsType1MET := self/JetMETCorrections/Type1MET
JetMETCorrections/Type1MET := JetMETCorrectionsType1MET
JetMETCorrectionsType1MET_files := $(patsubst src/JetMETCorrections/Type1MET/src/%,%,$(wildcard $(foreach dir,src/JetMETCorrections/Type1MET/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
JetMETCorrectionsType1MET_BuildFile    := $(WORKINGDIR)/cache/bf/src/JetMETCorrections/Type1MET/BuildFile
JetMETCorrectionsType1MET_LOC_USE := self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities CondFormats/EgammaObjects CondFormats/JetMETObjects DataFormats/Candidate DataFormats/JetReco DataFormats/ParticleFlowCandidate DataFormats/Math DataFormats/METReco DataFormats/MuonReco DataFormats/TauReco DataFormats/VertexReco JetMETCorrections/Objects root
JetMETCorrectionsType1MET_EX_LIB   := JetMETCorrectionsType1MET
JetMETCorrectionsType1MET_EX_USE   := $(foreach d,$(JetMETCorrectionsType1MET_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
JetMETCorrectionsType1MET_PACKAGE := self/src/JetMETCorrections/Type1MET/src
ALL_PRODS += JetMETCorrectionsType1MET
JetMETCorrectionsType1MET_CLASS := LIBRARY
JetMETCorrections/Type1MET_forbigobj+=JetMETCorrectionsType1MET
JetMETCorrectionsType1MET_INIT_FUNC        += $$(eval $$(call Library,JetMETCorrectionsType1MET,src/JetMETCorrections/Type1MET/src,src_JetMETCorrections_Type1MET_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(TreeMaker/WeightProducer)),)
ALL_COMMONRULES += src_TreeMaker_WeightProducer_src
src_TreeMaker_WeightProducer_src_parent := TreeMaker/WeightProducer
src_TreeMaker_WeightProducer_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_TreeMaker_WeightProducer_src,src/TreeMaker/WeightProducer/src,LIBRARY))
TreeMakerWeightProducer := self/TreeMaker/WeightProducer
TreeMaker/WeightProducer := TreeMakerWeightProducer
TreeMakerWeightProducer_files := $(patsubst src/TreeMaker/WeightProducer/src/%,%,$(wildcard $(foreach dir,src/TreeMaker/WeightProducer/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
TreeMakerWeightProducer_BuildFile    := $(WORKINGDIR)/cache/bf/src/TreeMaker/WeightProducer/BuildFile
TreeMakerWeightProducer_LOC_USE := self cmssw DataFormats/VertexReco FWCore/Framework FWCore/PluginManager FWCore/ParameterSet SimDataFormats/GeneratorProducts SimDataFormats/PileupSummaryInfo HLTrigger/HLTcore L1Trigger/GlobalTriggerAnalyzer
TreeMakerWeightProducer_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,TreeMakerWeightProducer,TreeMakerWeightProducer,$(SCRAMSTORENAME_LIB),src/TreeMaker/WeightProducer/src))
TreeMakerWeightProducer_PACKAGE := self/src/TreeMaker/WeightProducer/src
ALL_PRODS += TreeMakerWeightProducer
TreeMakerWeightProducer_CLASS := LIBRARY
TreeMaker/WeightProducer_forbigobj+=TreeMakerWeightProducer
TreeMakerWeightProducer_INIT_FUNC        += $$(eval $$(call Library,TreeMakerWeightProducer,src/TreeMaker/WeightProducer/src,src_TreeMaker_WeightProducer_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(TreeMaker/Reflex)),)
ALL_COMMONRULES += src_TreeMaker_Reflex_src
src_TreeMaker_Reflex_src_parent := TreeMaker/Reflex
src_TreeMaker_Reflex_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_TreeMaker_Reflex_src,src/TreeMaker/Reflex/src,LIBRARY))
TreeMakerReflex := self/TreeMaker/Reflex
TreeMaker/Reflex := TreeMakerReflex
TreeMakerReflex_files := $(patsubst src/TreeMaker/Reflex/src/%,%,$(wildcard $(foreach dir,src/TreeMaker/Reflex/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
TreeMakerReflex_BuildFile    := $(WORKINGDIR)/cache/bf/src/TreeMaker/Reflex/BuildFile
TreeMakerReflex_LOC_USE := self cmssw root FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Utilities DataFormats/Common DataFormats/Candidate DataFormats/PatCandidates
TreeMakerReflex_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,TreeMakerReflexCapabilities,TreeMakerReflex,$(SCRAMSTORENAME_LIB),src/TreeMaker/Reflex/src))
TreeMakerReflex_LCGDICTS  := x 
TreeMakerReflex_PRE_INIT_FUNC += $$(eval $$(call LCGDict,TreeMakerReflex,src/TreeMaker/Reflex/src/classes.h,src/TreeMaker/Reflex/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,Capabilities))
TreeMakerReflex_EX_LIB   := TreeMakerReflex
TreeMakerReflex_EX_USE   := $(foreach d,$(TreeMakerReflex_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
TreeMakerReflex_PACKAGE := self/src/TreeMaker/Reflex/src
ALL_PRODS += TreeMakerReflex
TreeMakerReflex_CLASS := LIBRARY
TreeMaker/Reflex_forbigobj+=TreeMakerReflex
TreeMakerReflex_INIT_FUNC        += $$(eval $$(call Library,TreeMakerReflex,src/TreeMaker/Reflex/src,src_TreeMaker_Reflex_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(PhysicsTools/PatUtils)),)
ALL_COMMONRULES += src_PhysicsTools_PatUtils_src
src_PhysicsTools_PatUtils_src_parent := PhysicsTools/PatUtils
src_PhysicsTools_PatUtils_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_PhysicsTools_PatUtils_src,src/PhysicsTools/PatUtils/src,LIBRARY))
PhysicsToolsPatUtils := self/PhysicsTools/PatUtils
PhysicsTools/PatUtils := PhysicsToolsPatUtils
PhysicsToolsPatUtils_files := $(patsubst src/PhysicsTools/PatUtils/src/%,%,$(wildcard $(foreach dir,src/PhysicsTools/PatUtils/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PhysicsToolsPatUtils_BuildFile    := $(WORKINGDIR)/cache/bf/src/PhysicsTools/PatUtils/BuildFile
PhysicsToolsPatUtils_LOC_USE := self cmssw TrackingTools/Records CommonTools/Utils DataFormats/Math DataFormats/Candidate DataFormats/PatCandidates DataFormats/TrackReco DataFormats/MuonReco DataFormats/GsfTrackReco DataFormats/VertexReco TrackingTools/TransientTrack Utilities/General PhysicsTools/UtilAlgos root
PhysicsToolsPatUtils_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,PhysicsToolsPatUtilsCapabilities,PhysicsToolsPatUtils,$(SCRAMSTORENAME_LIB),src/PhysicsTools/PatUtils/src))
PhysicsToolsPatUtils_LCGDICTS  := x 
PhysicsToolsPatUtils_PRE_INIT_FUNC += $$(eval $$(call LCGDict,PhysicsToolsPatUtils,src/PhysicsTools/PatUtils/src/classes.h,src/PhysicsTools/PatUtils/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,Capabilities))
PhysicsToolsPatUtils_EX_LIB   := PhysicsToolsPatUtils
PhysicsToolsPatUtils_EX_USE   := $(foreach d,$(PhysicsToolsPatUtils_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsPatUtils_PACKAGE := self/src/PhysicsTools/PatUtils/src
ALL_PRODS += PhysicsToolsPatUtils
PhysicsToolsPatUtils_CLASS := LIBRARY
PhysicsTools/PatUtils_forbigobj+=PhysicsToolsPatUtils
PhysicsToolsPatUtils_INIT_FUNC        += $$(eval $$(call Library,PhysicsToolsPatUtils,src/PhysicsTools/PatUtils/src,src_PhysicsTools_PatUtils_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(JetMETCorrectionsType1MET_plugins)),)
JetMETCorrectionsType1MET_plugins := self/src/JetMETCorrections/Type1MET/plugins
PLUGINS:=yes
JetMETCorrectionsType1MET_plugins_files := $(patsubst src/JetMETCorrections/Type1MET/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/JetMETCorrections/Type1MET/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/JetMETCorrections/Type1MET/plugins/$(file). Please fix src/JetMETCorrections/Type1MET/plugins/BuildFile.))))
JetMETCorrectionsType1MET_plugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/JetMETCorrections/Type1MET/plugins/BuildFile
JetMETCorrectionsType1MET_plugins_LOC_USE := self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities CommonTools/Utils DataFormats/Candidate DataFormats/JetReco DataFormats/METReco DataFormats/MuonReco DataFormats/ParticleFlowCandidate DataFormats/PatCandidates DataFormats/TauReco DataFormats/VertexReco JetMETCorrections/Objects JetMETCorrections/Type1MET
JetMETCorrectionsType1MET_plugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,JetMETCorrectionsType1MET_plugins,JetMETCorrectionsType1MET_plugins,$(SCRAMSTORENAME_LIB),src/JetMETCorrections/Type1MET/plugins))
JetMETCorrectionsType1MET_plugins_PACKAGE := self/src/JetMETCorrections/Type1MET/plugins
ALL_PRODS += JetMETCorrectionsType1MET_plugins
JetMETCorrections/Type1MET_forbigobj+=JetMETCorrectionsType1MET_plugins
JetMETCorrectionsType1MET_plugins_INIT_FUNC        += $$(eval $$(call Library,JetMETCorrectionsType1MET_plugins,src/JetMETCorrections/Type1MET/plugins,src_JetMETCorrections_Type1MET_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
JetMETCorrectionsType1MET_plugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,JetMETCorrectionsType1MET_plugins,src/JetMETCorrections/Type1MET/plugins))
endif
ALL_COMMONRULES += src_JetMETCorrections_Type1MET_plugins
src_JetMETCorrections_Type1MET_plugins_parent := JetMETCorrections/Type1MET
src_JetMETCorrections_Type1MET_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_JetMETCorrections_Type1MET_plugins,src/JetMETCorrections/Type1MET/plugins,PLUGINS))
ifeq ($(strip $(PhysicsToolsPatUtils_plugins)),)
PhysicsToolsPatUtils_plugins := self/src/PhysicsTools/PatUtils/plugins
PLUGINS:=yes
PhysicsToolsPatUtils_plugins_files := $(patsubst src/PhysicsTools/PatUtils/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/PhysicsTools/PatUtils/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/PhysicsTools/PatUtils/plugins/$(file). Please fix src/PhysicsTools/PatUtils/plugins/BuildFile.))))
PhysicsToolsPatUtils_plugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/PhysicsTools/PatUtils/plugins/BuildFile
PhysicsToolsPatUtils_plugins_LOC_USE := self cmssw FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities CommonTools/Utils CondFormats/JetMETObjects DataFormats/Candidate DataFormats/JetReco DataFormats/METReco DataFormats/MuonReco DataFormats/ParticleFlowCandidate DataFormats/PatCandidates JetMETCorrections/Objects JetMETCorrections/JetCorrector JetMETCorrections/Type1MET RecoMET/METAlgorithms PhysicsTools/PatUtils PhysicsTools/UtilAlgos
PhysicsToolsPatUtils_plugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,PhysicsToolsPatUtils_plugins,PhysicsToolsPatUtils_plugins,$(SCRAMSTORENAME_LIB),src/PhysicsTools/PatUtils/plugins))
PhysicsToolsPatUtils_plugins_PACKAGE := self/src/PhysicsTools/PatUtils/plugins
ALL_PRODS += PhysicsToolsPatUtils_plugins
PhysicsTools/PatUtils_forbigobj+=PhysicsToolsPatUtils_plugins
PhysicsToolsPatUtils_plugins_INIT_FUNC        += $$(eval $$(call Library,PhysicsToolsPatUtils_plugins,src/PhysicsTools/PatUtils/plugins,src_PhysicsTools_PatUtils_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
PhysicsToolsPatUtils_plugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,PhysicsToolsPatUtils_plugins,src/PhysicsTools/PatUtils/plugins))
endif
ALL_COMMONRULES += src_PhysicsTools_PatUtils_plugins
src_PhysicsTools_PatUtils_plugins_parent := PhysicsTools/PatUtils
src_PhysicsTools_PatUtils_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_PhysicsTools_PatUtils_plugins,src/PhysicsTools/PatUtils/plugins,PLUGINS))
ifeq ($(strip $(PhysicsTools/PatAlgos)),)
ALL_COMMONRULES += src_PhysicsTools_PatAlgos_src
src_PhysicsTools_PatAlgos_src_parent := PhysicsTools/PatAlgos
src_PhysicsTools_PatAlgos_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_PhysicsTools_PatAlgos_src,src/PhysicsTools/PatAlgos/src,LIBRARY))
PhysicsToolsPatAlgos := self/PhysicsTools/PatAlgos
PhysicsTools/PatAlgos := PhysicsToolsPatAlgos
PhysicsToolsPatAlgos_files := $(patsubst src/PhysicsTools/PatAlgos/src/%,%,$(wildcard $(foreach dir,src/PhysicsTools/PatAlgos/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PhysicsToolsPatAlgos_BuildFile    := $(WORKINGDIR)/cache/bf/src/PhysicsTools/PatAlgos/BuildFile
PhysicsToolsPatAlgos_LOC_USE := self cmssw DataFormats/Candidate DataFormats/Common DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/JetReco DataFormats/Math DataFormats/METReco DataFormats/MuonReco DataFormats/PatCandidates DataFormats/TauReco DataFormats/TrackReco DataFormats/VertexReco FWCore/Framework FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Utilities PhysicsTools/PatUtils PhysicsTools/Utilities PhysicsTools/IsolationAlgos Geometry/CaloTopology RecoEgamma/EgammaTools clhep
PhysicsToolsPatAlgos_EX_LIB   := PhysicsToolsPatAlgos
PhysicsToolsPatAlgos_EX_USE   := $(foreach d,$(PhysicsToolsPatAlgos_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
PhysicsToolsPatAlgos_PACKAGE := self/src/PhysicsTools/PatAlgos/src
ALL_PRODS += PhysicsToolsPatAlgos
PhysicsToolsPatAlgos_CLASS := LIBRARY
PhysicsTools/PatAlgos_forbigobj+=PhysicsToolsPatAlgos
PhysicsToolsPatAlgos_INIT_FUNC        += $$(eval $$(call Library,PhysicsToolsPatAlgos,src/PhysicsTools/PatAlgos/src,src_PhysicsTools_PatAlgos_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
