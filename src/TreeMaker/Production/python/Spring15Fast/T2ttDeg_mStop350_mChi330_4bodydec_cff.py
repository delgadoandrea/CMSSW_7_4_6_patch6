import FWCore.ParameterSet.Config as cms

maxEvents = cms.untracked.PSet( input = cms.untracked.int32(-1) )
readFiles = cms.untracked.vstring()
secFiles = cms.untracked.vstring() 
source = cms.Source ("PoolSource",fileNames = readFiles, secondaryFileNames = secFiles)
readFiles.extend( [
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM00.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM01.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM02.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM03.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM04.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM05.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM06.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM07.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM08.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM09.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM10.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM11.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM12.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM13.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM14.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM15.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM16.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM17.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM18.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM19.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM20.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM21.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM22.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM23.root',
       '/fdata/hepx/store/user/delgado_andrea/Stop/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM24.root' ] );


secFiles.extend( [
               ] )

