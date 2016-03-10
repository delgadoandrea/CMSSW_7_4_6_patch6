// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc491dIsrcdIPhysicsToolsdIPatUtilsdIsrcdIPhysicsToolsPatUtilsdIadIPhysicsToolsPatUtils_xr

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "src/PhysicsTools/PatUtils/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *patcLcLDiObjectProxy_Dictionary();
   static void patcLcLDiObjectProxy_TClassManip(TClass*);
   static void *new_patcLcLDiObjectProxy(void *p = 0);
   static void *newArray_patcLcLDiObjectProxy(Long_t size, void *p);
   static void delete_patcLcLDiObjectProxy(void *p);
   static void deleteArray_patcLcLDiObjectProxy(void *p);
   static void destruct_patcLcLDiObjectProxy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::pat::DiObjectProxy*)
   {
      ::pat::DiObjectProxy *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::pat::DiObjectProxy));
      static ::ROOT::TGenericClassInfo 
         instance("pat::DiObjectProxy", "PhysicsTools/PatUtils/interface/PATDiObjectProxy.h", 19,
                  typeid(::pat::DiObjectProxy), DefineBehavior(ptr, ptr),
                  &patcLcLDiObjectProxy_Dictionary, isa_proxy, 0,
                  sizeof(::pat::DiObjectProxy) );
      instance.SetNew(&new_patcLcLDiObjectProxy);
      instance.SetNewArray(&newArray_patcLcLDiObjectProxy);
      instance.SetDelete(&delete_patcLcLDiObjectProxy);
      instance.SetDeleteArray(&deleteArray_patcLcLDiObjectProxy);
      instance.SetDestructor(&destruct_patcLcLDiObjectProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::pat::DiObjectProxy*)
   {
      return GenerateInitInstanceLocal((::pat::DiObjectProxy*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::pat::DiObjectProxy*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *patcLcLDiObjectProxy_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::pat::DiObjectProxy*)0x0)->GetClass();
      patcLcLDiObjectProxy_TClassManip(theClass);
   return theClass;
   }

   static void patcLcLDiObjectProxy_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_patcLcLDiObjectProxy(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::DiObjectProxy : new ::pat::DiObjectProxy;
   }
   static void *newArray_patcLcLDiObjectProxy(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::pat::DiObjectProxy[nElements] : new ::pat::DiObjectProxy[nElements];
   }
   // Wrapper around operator delete
   static void delete_patcLcLDiObjectProxy(void *p) {
      delete ((::pat::DiObjectProxy*)p);
   }
   static void deleteArray_patcLcLDiObjectProxy(void *p) {
      delete [] ((::pat::DiObjectProxy*)p);
   }
   static void destruct_patcLcLDiObjectProxy(void *p) {
      typedef ::pat::DiObjectProxy current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::pat::DiObjectProxy

namespace {
  void TriggerDictionaryInitialization_PhysicsToolsPatUtils_xr_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/home/delgado_andrea/CMSSW_7_4_6_patch6/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/cms/cmssw-patch/CMSSW_7_4_6_patch6/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/lcg/root/6.02.00-odfocd4/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/boost/1.57.0-jlbgio/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/pcre/7.9__8.33-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/cms/vdt/v0.3.2-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/bz2lib/1.0.5-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/clhep/2.1.4.1-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/gsl/1.10-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/hepmc/2.06.07-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/libuuid/2.22.2-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/python/2.7.6-cms/include/python2.7",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/tbb/43_20141023oss/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/xerces-c/2.8.0-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/zlib/1.2.8-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/lcg/root/6.02.00-odfocd4/include",
"/home/delgado_andrea/CMSSW_7_4_6_patch6/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace pat{class __attribute__((annotate("$clingAutoload$PhysicsTools/PatUtils/interface/PATDiObjectProxy.h")))  DiObjectProxy;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef CMS_DICT_IMPL
  #define CMS_DICT_IMPL 1
#endif
#ifndef _REENTRANT
  #define _REENTRANT 1
#endif
#ifndef GNUSOURCE
  #define GNUSOURCE 1
#endif
#ifndef __STRICT_ANSI__
  #define __STRICT_ANSI__ 1
#endif
#ifndef GNU_GCC
  #define GNU_GCC 1
#endif
#ifndef _GNU_SOURCE
  #define _GNU_SOURCE 1
#endif
#ifndef CMSSW_GIT_HASH
  #define CMSSW_GIT_HASH "CMSSW_7_4_6_patch6"
#endif
#ifndef PROJECT_NAME
  #define PROJECT_NAME "CMSSW"
#endif
#ifndef PROJECT_VERSION
  #define PROJECT_VERSION "CMSSW_7_4_6_patch6"
#endif
#ifndef BOOST_SPIRIT_THREADSAFE
  #define BOOST_SPIRIT_THREADSAFE 1
#endif
#ifndef PHOENIX_THREADSAFE
  #define PHOENIX_THREADSAFE 1
#endif
#ifndef CMSSW_REFLEX_DICT
  #define CMSSW_REFLEX_DICT 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "PhysicsTools/PatUtils/interface/PATDiObjectProxy.h"

namespace PhysicsTools_PatUtils { struct dictionary { // apparenlty better than echo namespace PhysicsTools_PatUtils { echo namespace PhysicsTools_PatUtils {
    pat::DiObjectProxy patDiObjectProxy; 
}; }

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"pat::DiObjectProxy", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("PhysicsToolsPatUtils_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_PhysicsToolsPatUtils_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_PhysicsToolsPatUtils_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_PhysicsToolsPatUtils_xr() {
  TriggerDictionaryInitialization_PhysicsToolsPatUtils_xr_Impl();
}
