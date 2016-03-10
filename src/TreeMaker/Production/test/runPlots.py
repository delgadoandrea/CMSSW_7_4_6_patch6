from ROOT import gSystem

gSystem.Load('EventLoop_C')

from ROOT import EventLoop

for x in range(5,9):
    EventLoop(0,x)
