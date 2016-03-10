ifeq ($(strip $(PyTreeMakerUtils)),)
PyTreeMakerUtils := self/src/TreeMaker/Utils/python
src_TreeMaker_Utils_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/TreeMaker/Utils/python)
PyTreeMakerUtils_files := $(patsubst src/TreeMaker/Utils/python/%,%,$(wildcard $(foreach dir,src/TreeMaker/Utils/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyTreeMakerUtils_LOC_USE := self cmssw 
PyTreeMakerUtils_PACKAGE := self/src/TreeMaker/Utils/python
ALL_PRODS += PyTreeMakerUtils
PyTreeMakerUtils_INIT_FUNC        += $$(eval $$(call PythonProduct,PyTreeMakerUtils,src/TreeMaker/Utils/python,src_TreeMaker_Utils_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyTreeMakerUtils,src/TreeMaker/Utils/python))
endif
ALL_COMMONRULES += src_TreeMaker_Utils_python
src_TreeMaker_Utils_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_TreeMaker_Utils_python,src/TreeMaker/Utils/python,PYTHON))
