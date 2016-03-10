ALL_COMMONRULES += src_TreeMaker_Production_test
src_TreeMaker_Production_test_parent := TreeMaker/Production
src_TreeMaker_Production_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_TreeMaker_Production_test,src/TreeMaker/Production/test,TEST))
