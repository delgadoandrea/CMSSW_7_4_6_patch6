# import ROOT in batch mode
import os,sys
oldargv = sys.argv[:]
sys.argv = [ '-b-' ]
import ROOT
ROOT.gROOT.SetBatch(True)
sys.argv = oldargv

# load FWLite C++ libraries
ROOT.gSystem.Load("libFWCoreFWLite.so");
ROOT.gSystem.Load("libDataFormatsFWLite.so");
ROOT.AutoLibraryLoader.enable()

# load FWlite python libraries
from DataFormats.FWLite import Handle, Events

fpath = "/fdata/hepx/store/user/delgado_andrea/Stop/"
files = os.listdir(fpath)
eventCount=0
for file in files:
  if file.find(".root")!=-1:
    # open file (you can use 'edmFileUtil -d /store/whatever.root' to get the physical file name)
    events = Events("root://"+fpath+file)
    evtNr=len(list(enumerate(events)))
    eventCount+=evtNr
    print file+": "+str(evtNr)
print eventCount
