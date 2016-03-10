#include <vector>
#include "TLorentzVector.h"
#include <DataFormats/PatCandidates/interface/Jet.h>
#include "DataFormats/Common/interface/Wrapper.h"
#include "TreeMaker/Utils/interface/stoppair.h"

namespace {
  struct dictionary {
    std::vector<TLorentzVector> vlv;
    std::vector<pat::Jet> vpj;
    std::vector<std::vector<TLorentzVector> > vvlv;
    std::vector<std::vector<pat::Jet> > vvpj;
    edm::Wrapper<std::vector<TLorentzVector> > wvlv;
    edm::Wrapper<std::vector<std::vector<TLorentzVector> > > wvvlv;
    genP gp;
    edm::Wrapper<genP> wgp;
    stoppair sp;
    edm::Wrapper<stoppair> wsp;
  };
}
