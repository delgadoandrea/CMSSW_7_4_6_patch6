from ROOT import gSystem

gSystem.Load('anglePlots_C')

from ROOT import anglePlots

anglePlots("NoCuts/Signal_plots.root", "signal_nocut")
anglePlots("NoCuts/QCD_plots.root", "QCD_nocut")
anglePlots("NoCuts/WJets_plots.root", "WJets_nocut")
anglePlots("NoCuts/ZJets_plots.root", "ZJets_nocut")
anglePlots("NoCuts/ttbar_plots.root", "ttbar_nocut")

anglePlots("Baseline/Signal_plots.root", "signal_baseline")
anglePlots("Baseline/QCD_plots.root", "QCD_baseline")
anglePlots("Baseline/WJets_plots.root", "WJets_baseline")
anglePlots("Baseline/ZJets_plots.root", "ZJets_baseline")
anglePlots("Baseline/ttbar_plots.root", "ttbar_baseline")

