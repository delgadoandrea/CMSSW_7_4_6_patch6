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
