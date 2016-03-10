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
