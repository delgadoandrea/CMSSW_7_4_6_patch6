ALL_PACKAGES += JetMETCorrections/Type1MET
subdirs_src_JetMETCorrections_Type1MET := src_JetMETCorrections_Type1MET_data src_JetMETCorrections_Type1MET_src src_JetMETCorrections_Type1MET_test src_JetMETCorrections_Type1MET_python src_JetMETCorrections_Type1MET_interface src_JetMETCorrections_Type1MET_plugins
ALL_COMMONRULES += src_TreeMaker_Production_test
src_TreeMaker_Production_test_parent := TreeMaker/Production
src_TreeMaker_Production_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_TreeMaker_Production_test,src/TreeMaker/Production/test,TEST))
ifeq ($(strip $(testJetMETCorrectionsType1MET)),)
testJetMETCorrectionsType1MET_files := $(patsubst src/JetMETCorrections/Type1MET/test/%,%,$(foreach file,TestDriver.cpp,$(eval xfile:=$(wildcard src/JetMETCorrections/Type1MET/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/JetMETCorrections/Type1MET/test/$(file). Please fix src/JetMETCorrections/Type1MET/test/BuildFile.))))
testJetMETCorrectionsType1MET := self/src/JetMETCorrections/Type1MET/test
testJetMETCorrectionsType1MET_TEST_RUNNER_CMD :=  testJetMETCorrectionsType1MET  /bin/bash JetMETCorrections/Type1MET/test runtests.sh
testJetMETCorrectionsType1MET_BuildFile    := $(WORKINGDIR)/cache/bf/src/JetMETCorrections/Type1MET/test/BuildFile
testJetMETCorrectionsType1MET_LOC_USE := self cmssw FWCore/Utilities
testJetMETCorrectionsType1MET_PACKAGE := self/src/JetMETCorrections/Type1MET/test
ALL_PRODS += testJetMETCorrectionsType1MET
testJetMETCorrectionsType1MET_INIT_FUNC        += $$(eval $$(call Binary,testJetMETCorrectionsType1MET,src/JetMETCorrections/Type1MET/test,src_JetMETCorrections_Type1MET_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testJetMETCorrectionsType1MET_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testJetMETCorrectionsType1MET,src/JetMETCorrections/Type1MET/test))
endif
ALL_COMMONRULES += src_JetMETCorrections_Type1MET_test
src_JetMETCorrections_Type1MET_test_parent := JetMETCorrections/Type1MET
src_JetMETCorrections_Type1MET_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_JetMETCorrections_Type1MET_test,src/JetMETCorrections/Type1MET/test,TEST))
ALL_SUBSYSTEMS+=JetMETCorrections
subdirs_src_JetMETCorrections = src_JetMETCorrections_Type1MET
ifeq ($(strip $(PyPhysicsToolsPatUtils)),)
PyPhysicsToolsPatUtils := self/src/PhysicsTools/PatUtils/python
src_PhysicsTools_PatUtils_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/PhysicsTools/PatUtils/python)
PyPhysicsToolsPatUtils_files := $(patsubst src/PhysicsTools/PatUtils/python/%,%,$(wildcard $(foreach dir,src/PhysicsTools/PatUtils/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyPhysicsToolsPatUtils_LOC_USE := self cmssw 
PyPhysicsToolsPatUtils_PACKAGE := self/src/PhysicsTools/PatUtils/python
ALL_PRODS += PyPhysicsToolsPatUtils
PyPhysicsToolsPatUtils_INIT_FUNC        += $$(eval $$(call PythonProduct,PyPhysicsToolsPatUtils,src/PhysicsTools/PatUtils/python,src_PhysicsTools_PatUtils_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyPhysicsToolsPatUtils,src/PhysicsTools/PatUtils/python))
endif
ALL_COMMONRULES += src_PhysicsTools_PatUtils_python
src_PhysicsTools_PatUtils_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_PhysicsTools_PatUtils_python,src/PhysicsTools/PatUtils/python,PYTHON))
ifeq ($(strip $(PyJetMETCorrectionsType1MET)),)
PyJetMETCorrectionsType1MET := self/src/JetMETCorrections/Type1MET/python
src_JetMETCorrections_Type1MET_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/JetMETCorrections/Type1MET/python)
PyJetMETCorrectionsType1MET_files := $(patsubst src/JetMETCorrections/Type1MET/python/%,%,$(wildcard $(foreach dir,src/JetMETCorrections/Type1MET/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyJetMETCorrectionsType1MET_LOC_USE := self cmssw 
PyJetMETCorrectionsType1MET_PACKAGE := self/src/JetMETCorrections/Type1MET/python
ALL_PRODS += PyJetMETCorrectionsType1MET
PyJetMETCorrectionsType1MET_INIT_FUNC        += $$(eval $$(call PythonProduct,PyJetMETCorrectionsType1MET,src/JetMETCorrections/Type1MET/python,src_JetMETCorrections_Type1MET_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyJetMETCorrectionsType1MET,src/JetMETCorrections/Type1MET/python))
endif
ALL_COMMONRULES += src_JetMETCorrections_Type1MET_python
src_JetMETCorrections_Type1MET_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_JetMETCorrections_Type1MET_python,src/JetMETCorrections/Type1MET/python,PYTHON))
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
ALL_PACKAGES += PhysicsTools/PatAlgos
subdirs_src_PhysicsTools_PatAlgos := src_PhysicsTools_PatAlgos_python src_PhysicsTools_PatAlgos_test src_PhysicsTools_PatAlgos_src src_PhysicsTools_PatAlgos_scripts src_PhysicsTools_PatAlgos_plugins
ALL_PACKAGES += TreeMaker/WeightProducer
subdirs_src_TreeMaker_WeightProducer := src_TreeMaker_WeightProducer_python src_TreeMaker_WeightProducer_src
ALL_PACKAGES += TreeMaker/Production
subdirs_src_TreeMaker_Production := src_TreeMaker_Production_python src_TreeMaker_Production_test
src_PhysicsTools_PatAlgos_scripts_files := $(filter-out \#% %\#,$(notdir $(wildcard $(foreach dir,$(LOCALTOP)/src/PhysicsTools/PatAlgos/scripts,$(dir)/*))))
$(eval $(call Src2StoreCopy,src_PhysicsTools_PatAlgos_scripts,src/PhysicsTools/PatAlgos/scripts,$(SCRAMSTORENAME_BIN),*))
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
ALL_PACKAGES += TreeMaker/Reflex
subdirs_src_TreeMaker_Reflex := src_TreeMaker_Reflex_src
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
ALL_PACKAGES += PhysicsTools/PatUtils
subdirs_src_PhysicsTools_PatUtils := src_PhysicsTools_PatUtils_data src_PhysicsTools_PatUtils_python src_PhysicsTools_PatUtils_src src_PhysicsTools_PatUtils_plugins
ifeq ($(strip $(runtestPhysicsToolsPatAlgos)),)
runtestPhysicsToolsPatAlgos_files := $(patsubst src/PhysicsTools/PatAlgos/test/%,%,$(foreach file,runtestPhysicsToolsPatAlgos.cpp,$(eval xfile:=$(wildcard src/PhysicsTools/PatAlgos/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/PhysicsTools/PatAlgos/test/$(file). Please fix src/PhysicsTools/PatAlgos/test/BuildFile.))))
runtestPhysicsToolsPatAlgos := self/src/PhysicsTools/PatAlgos/test
runtestPhysicsToolsPatAlgos_TEST_RUNNER_CMD :=  runtestPhysicsToolsPatAlgos  /bin/bash PhysicsTools/PatAlgos/test runtests.sh
runtestPhysicsToolsPatAlgos_BuildFile    := $(WORKINGDIR)/cache/bf/src/PhysicsTools/PatAlgos/test/BuildFile
runtestPhysicsToolsPatAlgos_LOC_USE := self cmssw FWCore/Utilities
runtestPhysicsToolsPatAlgos_PACKAGE := self/src/PhysicsTools/PatAlgos/test
ALL_PRODS += runtestPhysicsToolsPatAlgos
runtestPhysicsToolsPatAlgos_INIT_FUNC        += $$(eval $$(call Binary,runtestPhysicsToolsPatAlgos,src/PhysicsTools/PatAlgos/test,src_PhysicsTools_PatAlgos_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
runtestPhysicsToolsPatAlgos_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,runtestPhysicsToolsPatAlgos,src/PhysicsTools/PatAlgos/test))
endif
ifeq ($(strip $(METReader)),)
METReader := self/src/PhysicsTools/PatAlgos/test
METReader_files := $(patsubst src/PhysicsTools/PatAlgos/test/%,%,$(foreach file,METReader.cc,$(eval xfile:=$(wildcard src/PhysicsTools/PatAlgos/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/PhysicsTools/PatAlgos/test/$(file). Please fix src/PhysicsTools/PatAlgos/test/BuildFile.))))
METReader_BuildFile    := $(WORKINGDIR)/cache/bf/src/PhysicsTools/PatAlgos/test/BuildFile
METReader_LOC_USE := self cmssw DataFormats/METReco DataFormats/PatCandidates FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities
METReader_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,METReader,METReader,$(SCRAMSTORENAME_LIB),src/PhysicsTools/PatAlgos/test))
METReader_PACKAGE := self/src/PhysicsTools/PatAlgos/test
ALL_PRODS += METReader
METReader_INIT_FUNC        += $$(eval $$(call Library,METReader,src/PhysicsTools/PatAlgos/test,src_PhysicsTools_PatAlgos_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
METReader_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,METReader,src/PhysicsTools/PatAlgos/test))
endif
ifeq ($(strip $(PhysicsToolsPatAlgos_testAnalyzers)),)
PhysicsToolsPatAlgos_testAnalyzers := self/src/PhysicsTools/PatAlgos/test
PhysicsToolsPatAlgos_testAnalyzers_files := $(patsubst src/PhysicsTools/PatAlgos/test/%,%,$(foreach file,private/*.cc,$(eval xfile:=$(wildcard src/PhysicsTools/PatAlgos/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/PhysicsTools/PatAlgos/test/$(file). Please fix src/PhysicsTools/PatAlgos/test/BuildFile.))))
PhysicsToolsPatAlgos_testAnalyzers_BuildFile    := $(WORKINGDIR)/cache/bf/src/PhysicsTools/PatAlgos/test/BuildFile
PhysicsToolsPatAlgos_testAnalyzers_LOC_USE := self cmssw FWCore/Framework FWCore/ParameterSet DataFormats/BTauReco PhysicsTools/PatUtils DataFormats/PatCandidates root
PhysicsToolsPatAlgos_testAnalyzers_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,PhysicsToolsPatAlgos_testAnalyzers,PhysicsToolsPatAlgos_testAnalyzers,$(SCRAMSTORENAME_LIB),src/PhysicsTools/PatAlgos/test))
PhysicsToolsPatAlgos_testAnalyzers_PACKAGE := self/src/PhysicsTools/PatAlgos/test
ALL_PRODS += PhysicsToolsPatAlgos_testAnalyzers
PhysicsToolsPatAlgos_testAnalyzers_INIT_FUNC        += $$(eval $$(call Library,PhysicsToolsPatAlgos_testAnalyzers,src/PhysicsTools/PatAlgos/test,src_PhysicsTools_PatAlgos_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
PhysicsToolsPatAlgos_testAnalyzers_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,PhysicsToolsPatAlgos_testAnalyzers,src/PhysicsTools/PatAlgos/test))
endif
ALL_COMMONRULES += src_PhysicsTools_PatAlgos_test
src_PhysicsTools_PatAlgos_test_parent := PhysicsTools/PatAlgos
src_PhysicsTools_PatAlgos_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_PhysicsTools_PatAlgos_test,src/PhysicsTools/PatAlgos/test,TEST))
ALL_PACKAGES += TreeMaker/grid-control
subdirs_src_TreeMaker_grid-control := 
ALL_SUBSYSTEMS+=TreeMaker
subdirs_src_TreeMaker = src_TreeMaker_Reflex src_TreeMaker_TreeMaker src_TreeMaker_grid-control src_TreeMaker_Production src_TreeMaker_WeightProducer src_TreeMaker_Utils
ALL_PACKAGES += TreeMaker/Utils
subdirs_src_TreeMaker_Utils := src_TreeMaker_Utils_interface src_TreeMaker_Utils_python src_TreeMaker_Utils_src
ALL_PACKAGES += TreeMaker/TreeMaker
subdirs_src_TreeMaker_TreeMaker := src_TreeMaker_TreeMaker_python src_TreeMaker_TreeMaker_src
ifeq ($(strip $(PyPhysicsToolsPatAlgos)),)
PyPhysicsToolsPatAlgos := self/src/PhysicsTools/PatAlgos/python
src_PhysicsTools_PatAlgos_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/PhysicsTools/PatAlgos/python)
PyPhysicsToolsPatAlgos_files := $(patsubst src/PhysicsTools/PatAlgos/python/%,%,$(wildcard $(foreach dir,src/PhysicsTools/PatAlgos/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyPhysicsToolsPatAlgos_LOC_USE := self cmssw 
PyPhysicsToolsPatAlgos_PACKAGE := self/src/PhysicsTools/PatAlgos/python
ALL_PRODS += PyPhysicsToolsPatAlgos
PyPhysicsToolsPatAlgos_INIT_FUNC        += $$(eval $$(call PythonProduct,PyPhysicsToolsPatAlgos,src/PhysicsTools/PatAlgos/python,src_PhysicsTools_PatAlgos_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyPhysicsToolsPatAlgos,src/PhysicsTools/PatAlgos/python))
endif
ALL_COMMONRULES += src_PhysicsTools_PatAlgos_python
src_PhysicsTools_PatAlgos_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_PhysicsTools_PatAlgos_python,src/PhysicsTools/PatAlgos/python,PYTHON))
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
ALL_SUBSYSTEMS+=PhysicsTools
subdirs_src_PhysicsTools = src_PhysicsTools_PatUtils src_PhysicsTools_PatAlgos
