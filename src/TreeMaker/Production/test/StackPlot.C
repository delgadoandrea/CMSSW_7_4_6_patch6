#include "THStack.h"
#include "TFile.h"
#include "TH1D.h"
#include "TCanvas.h"
#include "TLegend.h"
#include <map>
#include <iostream>
#include <iterator>

class Sample{

public:
   Sample(TString _fName, TString _label, int _color, int _mstyle):
      fileName(_fName), label(_label), fillColor(_color), markerStyle(_mstyle), markerColor(_color), lineColor(_color){};
   
   TString fileName;
   TString label;
   int fillColor;
   int markerStyle;
   int markerColor;
   int lineColor = kBlack;
};

void setHistoColor(TH1* h , Sample & s){
   h->SetMarkerColor(s.markerColor);
   h->SetLineColor(s.lineColor);
   h->SetMarkerStyle(s.markerStyle);
   h->SetFillColor(s.fillColor);
}

void StackPlot(){

   vector<Sample> samples;
   vector<TString> plots;
   TString dir = "b1/";

   plots.clear();
   plots.push_back(dir+"METoptb1");
   plots.push_back(dir+"METptb1");
   plots.push_back(dir+"hmtb1");
   plots.push_back(dir+"jet1ptb1");
   plots.push_back(dir+"muptb1");
   plots.push_back(dir+"phimetphij1b1");
   plots.push_back(dir+"phimetphimub1");
   plots.push_back(dir+"phimuphij1b1");

/*   plots.push_back(dir+"phimuphij1b2");
   plots.push_back(dir+"phimetphimub2");
   plots.push_back(dir+"phimetphimu2b2");
   plots.push_back(dir+"phimetphij2b2");
   plots.push_back(dir+"phimetphij1b2");
   plots.push_back(dir+"phij1phij2b2");
   plots.push_back(dir+"muptb2");
   plots.push_back(dir+"jet2ptb2");
   plots.push_back(dir+"jet1ptb2");
   plots.push_back(dir+"hmtb2");
   plots.push_back(dir+"METptb2");
   plots.push_back(dir+"METoptb2");*/

/*   plots.push_back(dir+"BalanceJetsb3");
   plots.push_back(dir+"METJetsb3");
   plots.push_back(dir+"METoptb3");
   plots.push_back(dir+"METptb3");
   plots.push_back(dir+"VBFInvMassb3");
   plots.push_back(dir+"deltaetab3");
   plots.push_back(dir+"hmtb3");
   plots.push_back(dir+"jet1ptb3");
   plots.push_back(dir+"jet2ptb3");
   plots.push_back(dir+"jet3ptb3");
   plots.push_back(dir+"jet4ptb3");
   plots.push_back(dir+"mjjb3");
   plots.push_back(dir+"muptb3");
   plots.push_back(dir+"njetsb3");
   plots.push_back(dir+"phij1phij2b3");
   plots.push_back(dir+"phimetphij1b3");
   plots.push_back(dir+"phimetphij2b3");
   plots.push_back(dir+"phimetphij3b3");
   plots.push_back(dir+"phimetphij4b3");
   plots.push_back(dir+"phimetphimu2b3");
   plots.push_back(dir+"phimetphimub3");
   plots.push_back(dir+"phimuphij1b3");*/

   map<string, TH1D*> histograms;
   TString basepath = "jetBins/";

   samples.push_back(Sample(basepath+"Signal_plots.root", "signal", kRed, 20));
   samples.push_back(Sample(basepath+"ttbar_plots.root", "ttbar", kBlue, 21));
   samples.push_back(Sample(basepath+"QCD_plots.root", "QCD", kGreen+1,22));
   samples.push_back(Sample(basepath+"WJets_plots.root", "WJetsToLNu", kCyan, 20));
   samples.push_back(Sample(basepath+"ZJets_plots.root", "ZJetsToNuNu", kOrange, 21));

   for(unsigned int s=0; s<samples.size(); s++){
      TFile *f = new TFile(samples[s].fileName, "READ");
      for(unsigned int p=0; p<plots.size(); p++){
         string hname = Form("%s_%s_%s",plots[p].Data(), samples[s].label.Data(), dir.Data());
         histograms[hname] = (TH1D*) f->Get(plots[p].Data());
         setHistoColor(histograms[hname], samples[s]);
      }

   }

   map<string, THStack*> stacks;
   for(unsigned int p=0; p<plots.size(); p++){
      TCanvas *c = new TCanvas(plots[p].Data(), plots[p].Data(), 700,700);
      c->SetLogy();

      TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107); 
      leg->SetFillColor(0);
      leg->SetTextSize(0.034965);
      stacks[plots[p].Data()] =  new THStack(plots[p].Data(), plots[p].Data());
      for(map<string, TH1D*>::iterator k = histograms.begin(); k!=histograms.end(); k++){
         string hname = k->first;
         if(hname.find(plots[p].Data()) != std::string::npos) {
            stacks[plots[p].Data()]->Add(histograms[hname]);
            leg->AddEntry(histograms[hname],hname.c_str(),"lp");
         }
      }
      stacks[plots[p].Data()]->Draw("nostack");
      stacks[plots[p].Data()]->GetYaxis()->SetTitle("Events/pb");
      stacks[plots[p].Data()]->GetXaxis()->SetTitle(plots[p].Data());
      leg->Draw("same");
      c->Print(basepath+plots[p].Data()+".png");
      c->Print(basepath+plots[p].Data()+".C");
   }

}
