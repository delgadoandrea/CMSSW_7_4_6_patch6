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
