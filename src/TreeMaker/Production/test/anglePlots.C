#include "TH2D.h"
#include "TFile.h"
#include "TCanvas.h"
#include "TStyle.h"
#include "TLegend.h"

void anglePlots(TString file, TString label){

   TFile *f = new TFile(file, "READ");

   TH2D *mu = (TH2D*) f->Get("Angular_distribution_mu_b1");
//   TH2D *jd = (TH2D*) f->Get("Angular_distribution_j2_b2");
   TH2D *ju = (TH2D*) f->Get("Angular_distribution_j1_b1");

   TCanvas *c = new TCanvas();
   gStyle->SetOptStat(0);

   ju->SetLineColor(kBlue);
   ju->SetName(label);
   ju->SetTitle(label);
   // jd->SetLineColor(kRed);
   mu->SetLineColor(kGreen+1);

   TLegend *leg = new TLegend(0.69,0.69,0.94,0.88);
   leg->AddEntry(mu,"Muon","lep");
   leg->AddEntry(ju,"Jet 1","lep");
//   leg->AddEntry(jd,"Jet 2","lep");

   ju->Draw("BOX");
//   jd->Draw("BOXsame");
   mu->Draw("BOXsame");
   leg->Draw("same");

   c->Print(label+".png");
}
