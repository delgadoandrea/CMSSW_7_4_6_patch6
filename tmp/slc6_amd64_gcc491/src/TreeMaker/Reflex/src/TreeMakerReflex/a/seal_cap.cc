static  const char* clnames[] = {
 "LCGReflex/std::vector<TLorentzVector>",
 "LCGReflex/vector<TLorentzVector>",
 "LCGReflex/std::vector<std::vector<TLorentzVector> >",
 "LCGReflex/vector<vector<TLorentzVector> >",
 "LCGReflex/std::vector<pat::Jet>",
 "LCGReflex/vector<pat::Jet>",
 "LCGReflex/std::vector<std::vector<pat::Jet> >",
 "LCGReflex/vector<vector<pat::Jet> >",
 "LCGReflex/edm::Wrapper<std::vector<TLorentzVector> >",
 "LCGReflex/edm::Wrapper<vector<TLorentzVector> >",
 "LCGReflex/edm::Wrapper<std::vector<std::vector<TLorentzVector> > >",
 "LCGReflex/edm::Wrapper<vector<vector<TLorentzVector> > >",
 "LCGReflex/genP",
 "LCGReflex/edm::Wrapper<genP>",
 "LCGReflex/stoppair",
 "LCGReflex/edm::Wrapper<stoppair>",
};
extern "C" void SEAL_CAPABILITIES (const char**& names, int& n )
{names = clnames;n = sizeof(clnames)/sizeof(char*);}
