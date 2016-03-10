// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc491dIsrcdITreeMakerdIReflexdIsrcdITreeMakerReflexdIadITreeMakerReflex_xr

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
#include "src/TreeMaker/Reflex/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<TLorentzVector> >*)
   {
      ::edm::Wrapper<vector<TLorentzVector> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<TLorentzVector> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<TLorentzVector> >", ::edm::Wrapper<vector<TLorentzVector> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<vector<TLorentzVector> >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<TLorentzVector> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<vector<TLorentzVector> >","edm::Wrapper<std::vector<TLorentzVector> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<TLorentzVector> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<TLorentzVector> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<TLorentzVector> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<TLorentzVector> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<vector<TLorentzVector> > >*)
   {
      ::edm::Wrapper<vector<vector<TLorentzVector> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<vector<TLorentzVector> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<vector<TLorentzVector> > >", ::edm::Wrapper<vector<vector<TLorentzVector> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<vector<vector<TLorentzVector> > >), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<vector<TLorentzVector> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR);

      ROOT::AddClassAlternate("edm::Wrapper<vector<vector<TLorentzVector> > >","edm::Wrapper<std::vector<std::vector<TLorentzVector> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<vector<TLorentzVector> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<vector<TLorentzVector> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<vector<TLorentzVector> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<vector<TLorentzVector> > >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

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
                  &genP_Dictionary, isa_proxy, 0,
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
   static TClass *edmcLcLWrapperlEgenPgR_Dictionary();
   static void edmcLcLWrapperlEgenPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEgenPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEgenPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEgenPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEgenPgR(void *p);
   static void destruct_edmcLcLWrapperlEgenPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<genP>*)
   {
      ::edm::Wrapper<genP> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<genP>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<genP>", ::edm::Wrapper<genP>::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<genP>), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEgenPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<genP>) );
      instance.SetNew(&new_edmcLcLWrapperlEgenPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEgenPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEgenPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEgenPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEgenPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<genP>*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<genP>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<genP>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEgenPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<genP>*)0x0)->GetClass();
      edmcLcLWrapperlEgenPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEgenPgR_TClassManip(TClass* ){
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
                  &stoppair_Dictionary, isa_proxy, 0,
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
   static TClass *edmcLcLWrapperlEstoppairgR_Dictionary();
   static void edmcLcLWrapperlEstoppairgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEstoppairgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEstoppairgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEstoppairgR(void *p);
   static void deleteArray_edmcLcLWrapperlEstoppairgR(void *p);
   static void destruct_edmcLcLWrapperlEstoppairgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<stoppair>*)
   {
      ::edm::Wrapper<stoppair> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<stoppair>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<stoppair>", ::edm::Wrapper<stoppair>::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 29,
                  typeid(::edm::Wrapper<stoppair>), DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEstoppairgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<stoppair>) );
      instance.SetNew(&new_edmcLcLWrapperlEstoppairgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEstoppairgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEstoppairgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEstoppairgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEstoppairgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<stoppair>*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<stoppair>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<stoppair>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEstoppairgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<stoppair>*)0x0)->GetClass();
      edmcLcLWrapperlEstoppairgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEstoppairgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<TLorentzVector> > : new ::edm::Wrapper<vector<TLorentzVector> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<TLorentzVector> >[nElements] : new ::edm::Wrapper<vector<TLorentzVector> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<TLorentzVector> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<TLorentzVector> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlETLorentzVectorgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<TLorentzVector> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<TLorentzVector> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<vector<TLorentzVector> > > : new ::edm::Wrapper<vector<vector<TLorentzVector> > >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<vector<vector<TLorentzVector> > >[nElements] : new ::edm::Wrapper<vector<vector<TLorentzVector> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<vector<TLorentzVector> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<vector<TLorentzVector> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEvectorlETLorentzVectorgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<vector<TLorentzVector> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<vector<TLorentzVector> > >

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
   static void *new_edmcLcLWrapperlEgenPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<genP> : new ::edm::Wrapper<genP>;
   }
   static void *newArray_edmcLcLWrapperlEgenPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<genP>[nElements] : new ::edm::Wrapper<genP>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEgenPgR(void *p) {
      delete ((::edm::Wrapper<genP>*)p);
   }
   static void deleteArray_edmcLcLWrapperlEgenPgR(void *p) {
      delete [] ((::edm::Wrapper<genP>*)p);
   }
   static void destruct_edmcLcLWrapperlEgenPgR(void *p) {
      typedef ::edm::Wrapper<genP> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<genP>

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
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEstoppairgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<stoppair> : new ::edm::Wrapper<stoppair>;
   }
   static void *newArray_edmcLcLWrapperlEstoppairgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::edm::Wrapper<stoppair>[nElements] : new ::edm::Wrapper<stoppair>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEstoppairgR(void *p) {
      delete ((::edm::Wrapper<stoppair>*)p);
   }
   static void deleteArray_edmcLcLWrapperlEstoppairgR(void *p) {
      delete [] ((::edm::Wrapper<stoppair>*)p);
   }
   static void destruct_edmcLcLWrapperlEstoppairgR(void *p) {
      typedef ::edm::Wrapper<stoppair> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<stoppair>

namespace ROOT {
   static TClass *vectorlEvectorlEpatcLcLJetgRsPgR_Dictionary();
   static void vectorlEvectorlEpatcLcLJetgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEpatcLcLJetgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEpatcLcLJetgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEpatcLcLJetgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEpatcLcLJetgRsPgR(void *p);
   static void destruct_vectorlEvectorlEpatcLcLJetgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<pat::Jet> >*)
   {
      vector<vector<pat::Jet> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<pat::Jet> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<pat::Jet> >", -2, "vector", 214,
                  typeid(vector<vector<pat::Jet> >), DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEpatcLcLJetgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<pat::Jet> >) );
      instance.SetNew(&new_vectorlEvectorlEpatcLcLJetgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEpatcLcLJetgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEpatcLcLJetgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEpatcLcLJetgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEpatcLcLJetgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<pat::Jet> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<pat::Jet> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEpatcLcLJetgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<pat::Jet> >*)0x0)->GetClass();
      vectorlEvectorlEpatcLcLJetgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEpatcLcLJetgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEpatcLcLJetgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<pat::Jet> > : new vector<vector<pat::Jet> >;
   }
   static void *newArray_vectorlEvectorlEpatcLcLJetgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<pat::Jet> >[nElements] : new vector<vector<pat::Jet> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEpatcLcLJetgRsPgR(void *p) {
      delete ((vector<vector<pat::Jet> >*)p);
   }
   static void deleteArray_vectorlEvectorlEpatcLcLJetgRsPgR(void *p) {
      delete [] ((vector<vector<pat::Jet> >*)p);
   }
   static void destruct_vectorlEvectorlEpatcLcLJetgRsPgR(void *p) {
      typedef vector<vector<pat::Jet> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<pat::Jet> >

namespace ROOT {
   static TClass *vectorlEvectorlETLorentzVectorgRsPgR_Dictionary();
   static void vectorlEvectorlETLorentzVectorgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlETLorentzVectorgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlETLorentzVectorgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlETLorentzVectorgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlETLorentzVectorgRsPgR(void *p);
   static void destruct_vectorlEvectorlETLorentzVectorgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<TLorentzVector> >*)
   {
      vector<vector<TLorentzVector> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<TLorentzVector> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<TLorentzVector> >", -2, "vector", 214,
                  typeid(vector<vector<TLorentzVector> >), DefineBehavior(ptr, ptr),
                  &vectorlEvectorlETLorentzVectorgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<TLorentzVector> >) );
      instance.SetNew(&new_vectorlEvectorlETLorentzVectorgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlETLorentzVectorgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlETLorentzVectorgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlETLorentzVectorgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlETLorentzVectorgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<TLorentzVector> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<TLorentzVector> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlETLorentzVectorgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<TLorentzVector> >*)0x0)->GetClass();
      vectorlEvectorlETLorentzVectorgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlETLorentzVectorgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlETLorentzVectorgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<TLorentzVector> > : new vector<vector<TLorentzVector> >;
   }
   static void *newArray_vectorlEvectorlETLorentzVectorgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<TLorentzVector> >[nElements] : new vector<vector<TLorentzVector> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlETLorentzVectorgRsPgR(void *p) {
      delete ((vector<vector<TLorentzVector> >*)p);
   }
   static void deleteArray_vectorlEvectorlETLorentzVectorgRsPgR(void *p) {
      delete [] ((vector<vector<TLorentzVector> >*)p);
   }
   static void destruct_vectorlEvectorlETLorentzVectorgRsPgR(void *p) {
      typedef vector<vector<TLorentzVector> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<TLorentzVector> >

namespace ROOT {
   static TClass *vectorlEpatcLcLJetgR_Dictionary();
   static void vectorlEpatcLcLJetgR_TClassManip(TClass*);
   static void *new_vectorlEpatcLcLJetgR(void *p = 0);
   static void *newArray_vectorlEpatcLcLJetgR(Long_t size, void *p);
   static void delete_vectorlEpatcLcLJetgR(void *p);
   static void deleteArray_vectorlEpatcLcLJetgR(void *p);
   static void destruct_vectorlEpatcLcLJetgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pat::Jet>*)
   {
      vector<pat::Jet> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pat::Jet>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pat::Jet>", -2, "vector", 214,
                  typeid(vector<pat::Jet>), DefineBehavior(ptr, ptr),
                  &vectorlEpatcLcLJetgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pat::Jet>) );
      instance.SetNew(&new_vectorlEpatcLcLJetgR);
      instance.SetNewArray(&newArray_vectorlEpatcLcLJetgR);
      instance.SetDelete(&delete_vectorlEpatcLcLJetgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpatcLcLJetgR);
      instance.SetDestructor(&destruct_vectorlEpatcLcLJetgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pat::Jet> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pat::Jet>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpatcLcLJetgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pat::Jet>*)0x0)->GetClass();
      vectorlEpatcLcLJetgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpatcLcLJetgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpatcLcLJetgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::Jet> : new vector<pat::Jet>;
   }
   static void *newArray_vectorlEpatcLcLJetgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pat::Jet>[nElements] : new vector<pat::Jet>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpatcLcLJetgR(void *p) {
      delete ((vector<pat::Jet>*)p);
   }
   static void deleteArray_vectorlEpatcLcLJetgR(void *p) {
      delete [] ((vector<pat::Jet>*)p);
   }
   static void destruct_vectorlEpatcLcLJetgR(void *p) {
      typedef vector<pat::Jet> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pat::Jet>

namespace ROOT {
   static TClass *vectorlETLorentzVectorgR_Dictionary();
   static void vectorlETLorentzVectorgR_TClassManip(TClass*);
   static void *new_vectorlETLorentzVectorgR(void *p = 0);
   static void *newArray_vectorlETLorentzVectorgR(Long_t size, void *p);
   static void delete_vectorlETLorentzVectorgR(void *p);
   static void deleteArray_vectorlETLorentzVectorgR(void *p);
   static void destruct_vectorlETLorentzVectorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TLorentzVector>*)
   {
      vector<TLorentzVector> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TLorentzVector>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TLorentzVector>", -2, "vector", 214,
                  typeid(vector<TLorentzVector>), DefineBehavior(ptr, ptr),
                  &vectorlETLorentzVectorgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TLorentzVector>) );
      instance.SetNew(&new_vectorlETLorentzVectorgR);
      instance.SetNewArray(&newArray_vectorlETLorentzVectorgR);
      instance.SetDelete(&delete_vectorlETLorentzVectorgR);
      instance.SetDeleteArray(&deleteArray_vectorlETLorentzVectorgR);
      instance.SetDestructor(&destruct_vectorlETLorentzVectorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TLorentzVector> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TLorentzVector>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETLorentzVectorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TLorentzVector>*)0x0)->GetClass();
      vectorlETLorentzVectorgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETLorentzVectorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETLorentzVectorgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TLorentzVector> : new vector<TLorentzVector>;
   }
   static void *newArray_vectorlETLorentzVectorgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TLorentzVector>[nElements] : new vector<TLorentzVector>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETLorentzVectorgR(void *p) {
      delete ((vector<TLorentzVector>*)p);
   }
   static void deleteArray_vectorlETLorentzVectorgR(void *p) {
      delete [] ((vector<TLorentzVector>*)p);
   }
   static void destruct_vectorlETLorentzVectorgR(void *p) {
      typedef vector<TLorentzVector> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TLorentzVector>

namespace {
  void TriggerDictionaryInitialization_TreeMakerReflex_xr_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/home/delgado_andrea/CMSSW_7_4_6_patch6/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/cms/cmssw-patch/CMSSW_7_4_6_patch6/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/lcg/root/6.02.00-odfocd4/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/boost/1.57.0-jlbgio/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/pcre/7.9__8.33-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/bz2lib/1.0.5-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/clhep/2.1.4.1-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/gsl/1.10-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/hepmc/2.06.07-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/libuuid/2.22.2-cms/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/python/2.7.6-cms/include/python2.7",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/external/tbb/43_20141023oss/include",
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
class __attribute__((annotate("$clingAutoload$TLorentzVector.h")))  TLorentzVector;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace pat{class __attribute__((annotate("$clingAutoload$DataFormats/PatCandidates/interface/Jet.h")))  Jet;}
class __attribute__((annotate("$clingAutoload$TreeMaker/Utils/interface/stoppair.h")))  genP;
class __attribute__((annotate("$clingAutoload$TreeMaker/Utils/interface/stoppair.h")))  stoppair;
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

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"edm::Wrapper<genP>", payloadCode, "@",
"edm::Wrapper<std::vector<TLorentzVector> >", payloadCode, "@",
"edm::Wrapper<std::vector<std::vector<TLorentzVector> > >", payloadCode, "@",
"edm::Wrapper<stoppair>", payloadCode, "@",
"edm::Wrapper<vector<TLorentzVector> >", payloadCode, "@",
"edm::Wrapper<vector<vector<TLorentzVector> > >", payloadCode, "@",
"genP", payloadCode, "@",
"stoppair", payloadCode, "@",
"vector<TLorentzVector>", payloadCode, "@",
"vector<pat::Jet>", payloadCode, "@",
"vector<std::vector<TLorentzVector> >", payloadCode, "@",
"vector<std::vector<pat::Jet> >", payloadCode, "@",
"vector<vector<TLorentzVector> >", payloadCode, "@",
"vector<vector<pat::Jet> >", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TreeMakerReflex_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TreeMakerReflex_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TreeMakerReflex_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TreeMakerReflex_xr() {
  TriggerDictionaryInitialization_TreeMakerReflex_xr_Impl();
}
