
#include "TreeMaker/Utils/interface/stoppair.h"

#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link off all nestedclasses;

#pragma link C++ class genP+;
#pragma link C++ class stoppair+;

#endif
// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc491dIsrcdITreeMakerdIUtilsdIsrcdITreeMakerUtilsdIbdITreeMakerUtils_yr

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

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *genP_Dictionary();
   static void genP_TClassManip(TClass*);
   static void *new_genP(void *p = 0);
   static void *newArray_genP(Long_t size, void *p);
   static void delete_genP(void *p);
   static void deleteArray_genP(void *p);
   static void destruct_genP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genP*)
   {
      ::genP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genP));
      static ::ROOT::TGenericClassInfo 
         instance("genP", "TreeMaker/Utils/interface/genP.h", 3,
                  typeid(::genP), DefineBehavior(ptr, ptr),
                  &genP_Dictionary, isa_proxy, 4,
                  sizeof(::genP) );
      instance.SetNew(&new_genP);
      instance.SetNewArray(&newArray_genP);
      instance.SetDelete(&delete_genP);
      instance.SetDeleteArray(&deleteArray_genP);
      instance.SetDestructor(&destruct_genP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genP*)
   {
      return GenerateInitInstanceLocal((::genP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::genP*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *genP_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genP*)0x0)->GetClass();
      genP_TClassManip(theClass);
   return theClass;
   }

   static void genP_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *stoppair_Dictionary();
   static void stoppair_TClassManip(TClass*);
   static void *new_stoppair(void *p = 0);
   static void *newArray_stoppair(Long_t size, void *p);
   static void delete_stoppair(void *p);
   static void deleteArray_stoppair(void *p);
   static void destruct_stoppair(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::stoppair*)
   {
      ::stoppair *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::stoppair));
      static ::ROOT::TGenericClassInfo 
         instance("stoppair", "TreeMaker/Utils/interface/stoppair.h", 3,
                  typeid(::stoppair), DefineBehavior(ptr, ptr),
                  &stoppair_Dictionary, isa_proxy, 4,
                  sizeof(::stoppair) );
      instance.SetNew(&new_stoppair);
      instance.SetNewArray(&newArray_stoppair);
      instance.SetDelete(&delete_stoppair);
      instance.SetDeleteArray(&deleteArray_stoppair);
      instance.SetDestructor(&destruct_stoppair);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::stoppair*)
   {
      return GenerateInitInstanceLocal((::stoppair*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::stoppair*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *stoppair_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::stoppair*)0x0)->GetClass();
      stoppair_TClassManip(theClass);
   return theClass;
   }

   static void stoppair_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_genP(void *p) {
      return  p ? new(p) ::genP : new ::genP;
   }
   static void *newArray_genP(Long_t nElements, void *p) {
      return p ? new(p) ::genP[nElements] : new ::genP[nElements];
   }
   // Wrapper around operator delete
   static void delete_genP(void *p) {
      delete ((::genP*)p);
   }
   static void deleteArray_genP(void *p) {
      delete [] ((::genP*)p);
   }
   static void destruct_genP(void *p) {
      typedef ::genP current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genP

namespace ROOT {
   // Wrappers around operator new
   static void *new_stoppair(void *p) {
      return  p ? new(p) ::stoppair : new ::stoppair;
   }
   static void *newArray_stoppair(Long_t nElements, void *p) {
      return p ? new(p) ::stoppair[nElements] : new ::stoppair[nElements];
   }
   // Wrapper around operator delete
   static void delete_stoppair(void *p) {
      delete ((::stoppair*)p);
   }
   static void deleteArray_stoppair(void *p) {
      delete [] ((::stoppair*)p);
   }
   static void destruct_stoppair(void *p) {
      typedef ::stoppair current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::stoppair

namespace ROOT {
   static TClass *vectorlEgenPgR_Dictionary();
   static void vectorlEgenPgR_TClassManip(TClass*);
   static void *new_vectorlEgenPgR(void *p = 0);
   static void *newArray_vectorlEgenPgR(Long_t size, void *p);
   static void delete_vectorlEgenPgR(void *p);
   static void deleteArray_vectorlEgenPgR(void *p);
   static void destruct_vectorlEgenPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<genP>*)
   {
      vector<genP> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<genP>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<genP>", -2, "vector", 214,
                  typeid(vector<genP>), DefineBehavior(ptr, ptr),
                  &vectorlEgenPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<genP>) );
      instance.SetNew(&new_vectorlEgenPgR);
      instance.SetNewArray(&newArray_vectorlEgenPgR);
      instance.SetDelete(&delete_vectorlEgenPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgenPgR);
      instance.SetDestructor(&destruct_vectorlEgenPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<genP> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<genP>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgenPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<genP>*)0x0)->GetClass();
      vectorlEgenPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgenPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgenPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<genP> : new vector<genP>;
   }
   static void *newArray_vectorlEgenPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<genP>[nElements] : new vector<genP>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgenPgR(void *p) {
      delete ((vector<genP>*)p);
   }
   static void deleteArray_vectorlEgenPgR(void *p) {
      delete [] ((vector<genP>*)p);
   }
   static void destruct_vectorlEgenPgR(void *p) {
      typedef vector<genP> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<genP>

namespace {
  void TriggerDictionaryInitialization_TreeMakerUtils_yr_Impl() {
    static const char* headers[] = {
0
    };
    static const char* includePaths[] = {
"/home/delgado_andrea/CMSSW_7_4_6_patch6/src/TreeMaker/Utils/src",
"/home/delgado_andrea/CMSSW_7_4_6_patch6/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/cms/cmssw-patch/CMSSW_7_4_6_patch6/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/cms/coral/CORAL_2_3_21-odfocd7/include/LCG",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/lhapdf/6.1.5-koleij/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/lcg/root/6.02.00-odfocd4/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/boost/1.57.0-jlbgio/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/pcre/7.9__8.33-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/yaml-cpp/0.5.1-jlbgio/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/cms/vdt/v0.3.2-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/bz2lib/1.0.5-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/clhep/2.1.4.1-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/gsl/1.10-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/hepmc/2.06.07-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/libuuid/2.22.2-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/openssl/0.9.8e__1.0.1-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/python/2.7.6-cms/include/python2.7",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/sigcpp/2.2.10-cms/include/sigc++-2.0",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/tbb/43_20141023oss/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/xerces-c/2.8.0-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/zlib/1.2.8-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/eigen/3.2.2/include",
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
class __attribute__((annotate("$clingAutoload$src/TreeMaker/Utils/src/Utils_LinkDef.h")))  genP;
class __attribute__((annotate("$clingAutoload$src/TreeMaker/Utils/src/Utils_LinkDef.h")))  stoppair;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef GNU_SOURCE
  #define GNU_SOURCE 1
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
#ifndef EIGEN_DONT_PARALLELIZE
  #define EIGEN_DONT_PARALLELIZE 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"genP", payloadCode, "@",
"stoppair", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TreeMakerUtils_yr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TreeMakerUtils_yr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TreeMakerUtils_yr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TreeMakerUtils_yr() {
  TriggerDictionaryInitialization_TreeMakerUtils_yr_Impl();
}
