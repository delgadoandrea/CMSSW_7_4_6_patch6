ifeq ($(strip $(PyTreeMakerTreeMaker)),)
PyTreeMakerTreeMaker := self/src/TreeMaker/TreeMaker/python
src_TreeMaker_TreeMaker_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/TreeMaker/TreeMaker/python)
PyTreeMakerTreeMaker_files := $(patsubst src/TreeMaker/TreeMaker/python/%,%,$(wildcard $(foreach dir,src/TreeMaker/TreeMaker/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyTreeMakerTreeMaker_LOC_USE := self cmssw 
PyTreeMakerTreeMaker_PACKAGE := self/src/TreeMaker/TreeMaker/python
ALL_PRODS += PyTreeMakerTreeMaker
PyTreeMakerTreeMaker_INIT_FUNC        += $$(eval $$(call PythonProduct,PyTreeMakerTreeMaker,src/TreeMaker/TreeMaker/python,src_TreeMaker_TreeMaker_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyTreeMakerTreeMaker,src/TreeMaker/TreeMaker/python))
endif
ALL_COMMONRULES += src_TreeMaker_TreeMaker_python
src_TreeMaker_TreeMaker_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_TreeMaker_TreeMaker_python,src/TreeMaker/TreeMaker/python,PYTHON))
