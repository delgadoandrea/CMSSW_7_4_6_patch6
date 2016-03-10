import FWCore.ParameterSet.Config as cms

maxEvents = cms.untracked.PSet( input = cms.untracked.int32(-1) )
readFiles = cms.untracked.vstring()
secFiles = cms.untracked.vstring() 
source = cms.Source ("PoolSource",fileNames = readFiles, secondaryFileNames = secFiles)
readFiles.extend( [
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM00.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM01.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM02.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM03.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM04.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM05.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM06.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM07.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM08.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM09.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM10.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM11.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM12.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM13.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM14.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM15.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM16.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM17.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM18.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM19.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM20.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM21.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM22.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM23.root',
       'file:/fdata/hepx/store/user/delgado_andrea/Stop15/T2ttDeg_mStop350_mChi330_4bodydec.MINIAODSIM24.root' ] );


secFiles.extend( [
               ] )

