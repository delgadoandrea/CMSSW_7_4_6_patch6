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
