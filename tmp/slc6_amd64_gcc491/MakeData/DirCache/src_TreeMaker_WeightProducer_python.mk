ifeq ($(strip $(PyTreeMakerWeightProducer)),)
PyTreeMakerWeightProducer := self/src/TreeMaker/WeightProducer/python
src_TreeMaker_WeightProducer_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/TreeMaker/WeightProducer/python)
PyTreeMakerWeightProducer_files := $(patsubst src/TreeMaker/WeightProducer/python/%,%,$(wildcard $(foreach dir,src/TreeMaker/WeightProducer/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyTreeMakerWeightProducer_LOC_USE := self cmssw 
PyTreeMakerWeightProducer_PACKAGE := self/src/TreeMaker/WeightProducer/python
ALL_PRODS += PyTreeMakerWeightProducer
PyTreeMakerWeightProducer_INIT_FUNC        += $$(eval $$(call PythonProduct,PyTreeMakerWeightProducer,src/TreeMaker/WeightProducer/python,src_TreeMaker_WeightProducer_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyTreeMakerWeightProducer,src/TreeMaker/WeightProducer/python))
endif
ALL_COMMONRULES += src_TreeMaker_WeightProducer_python
src_TreeMaker_WeightProducer_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_TreeMaker_WeightProducer_python,src/TreeMaker/WeightProducer/python,PYTHON))
