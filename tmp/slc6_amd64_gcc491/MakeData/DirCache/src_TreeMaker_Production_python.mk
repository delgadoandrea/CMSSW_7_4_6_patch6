ifeq ($(strip $(PyTreeMakerProduction)),)
PyTreeMakerProduction := self/src/TreeMaker/Production/python
src_TreeMaker_Production_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/TreeMaker/Production/python)
PyTreeMakerProduction_files := $(patsubst src/TreeMaker/Production/python/%,%,$(wildcard $(foreach dir,src/TreeMaker/Production/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyTreeMakerProduction_LOC_USE := self cmssw 
PyTreeMakerProduction_PACKAGE := self/src/TreeMaker/Production/python
ALL_PRODS += PyTreeMakerProduction
PyTreeMakerProduction_INIT_FUNC        += $$(eval $$(call PythonProduct,PyTreeMakerProduction,src/TreeMaker/Production/python,src_TreeMaker_Production_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyTreeMakerProduction,src/TreeMaker/Production/python))
endif
ALL_COMMONRULES += src_TreeMaker_Production_python
src_TreeMaker_Production_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_TreeMaker_Production_python,src/TreeMaker/Production/python,PYTHON))
