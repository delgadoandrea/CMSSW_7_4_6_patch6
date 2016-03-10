from ROOT import gSystem

gSystem.Load('Significance_C')

from ROOT import Significance

list = [ '2ndjetpt', 
   '3rdjetpt',
   '4rthjetpt',
   'BJets',
   'BalanceJets',
   'METJets',
   'METPhiLeadJetPhi',
   'METopt',
   'METpt',
   'VBFInvMass',
   'deltaeta',
   'hmt',
   'leadjetpt',
   'mjj',
   'mupt',
   'mu2pt',
   'njets',]

for x in list:
    Significance(x,False)
