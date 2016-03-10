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
