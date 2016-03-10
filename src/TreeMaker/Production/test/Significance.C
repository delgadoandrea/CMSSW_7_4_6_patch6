#include <TH1D.h>
#include <TH1D.h>
#include <iostream>
#include <vector>
#include <TMath.h>
#include <TFile.h>
#include <vector>
#include <TCanvas.h>

TH1D GetNumbers(TH1D *signal, std::vector<TH1D*> background, bool incremental)
{
   std::cout << "Getting numbers :) " << std:: endl;

   TH1D *result=(TH1D*)signal->Clone("result");

   if(incremental)for(int x=0; x<signal->GetNbinsX(); ++x){
         double signalEvents=signal->Integral(x+1,-1);
         double bgrEvents=0.;
         for(unsigned i=0; i<background.size(); i++){
            if(x==0) if(signal->GetNbinsX()!=background[i]->GetNbinsX()){
                  std::cout<<"Background "<<i<<" has different number of bins than the signal histogram! Aborting..."<<std::endl;
                  break;
               }
            bgrEvents+=background[i]->Integral(x+1,-1);
         }
         if(signalEvents+bgrEvents == 0.0) result->SetBinContent(x+1,0.0);
         else result->SetBinContent(x+1, signalEvents/TMath::Sqrt(signalEvents+bgrEvents));
      }
   else for(int x=signal->GetNbinsX(); x>0; --x){
         double signalEvents=signal->Integral(1,x);
         double bgrEvents=0.;
         for(unsigned i=0; i<background.size(); i++){
            if(x==0) if(signal->GetNbinsX()!=background[i]->GetNbinsX()){
                  std::cout<<"Background "<<i<<" has different number of bins than the signal histogram! Aborting..."<<std::endl;
                  break;
               }
            bgrEvents+=background[i]->Integral(1,x);
         }
         if(signalEvents+bgrEvents == 0.0) result->SetBinContent(x+1,0.0);
         else result->SetBinContent(x, signalEvents/TMath::Sqrt(signalEvents+bgrEvents));
      }
   return (*result);
}

void Significance(TString variable, bool incremental){

   TString basepath = "NoCuts/";
   vector<TFile*> backgF;
   TFile *fsignal = new TFile(basepath+"Signal_plots.root","READ");
   TFile *fttbar = new TFile(basepath+"ttbar_plots.root","READ");
   TFile *fqcd = new TFile(basepath+"QCD_plots.root","READ");
   TFile *fzjets = new TFile(basepath+"ZJets_plots.root","READ");
   TFile *fwjets = new TFile(basepath+"WJets_plots.root","READ");

   backgF.clear();
   backgF.push_back(fttbar);
   backgF.push_back(fqcd);
   backgF.push_back(fzjets);
   backgF.push_back(fwjets);

   TH1D *signal = (TH1D*) fsignal->Get(variable);
   vector<TH1D*> background;
   background.clear();

   for(unsigned i =0; i< backgF.size(); i++){
      background.push_back((TH1D*)backgF[i]->Get(variable));
   }
   
   TH1D result = GetNumbers(signal, background, incremental);

   std::cout << "GetNumbers complete! " <<std::endl;

   TString label;
   if(incremental) label = "greater";
   else label = "smaller";
   TCanvas *test=new TCanvas(variable+label,variable+label,500,500);
   //s
   result.SetName(variable+"_"+label);
   result.SetTitle(variable+"_"+label);
   result.DrawClone("");
   test->SaveAs(basepath+variable+label+"_significance.png");
}


