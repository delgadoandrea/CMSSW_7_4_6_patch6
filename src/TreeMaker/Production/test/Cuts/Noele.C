void Noele()
{
//=========Macro generated from canvas: Noele/Noele
//=========  (Fri Nov  6 09:03:17 2015) by ROOT version6.02/05
   TCanvas *Noele = new TCanvas("Noele", "Noele",80,103,700,700);
   Noele->Range(-1.25,-5.585123,11.25,0.9725716);
   Noele->SetFillColor(0);
   Noele->SetBorderMode(0);
   Noele->SetBorderSize(2);
   Noele->SetLogy();
   Noele->SetFrameBorderMode(0);
   Noele->SetFrameBorderMode(0);
   
   THStack *Noele = new THStack();
   Noele->SetName("Noele");
   Noele->SetTitle("Noele");
   
   TH1F *Noele_stack_7 = new TH1F("Noele_stack_7","Noele",10,0,10);
   Noele_stack_7->SetMinimum(1.176647e-05);
   Noele_stack_7->SetMaximum(2.073968);
   Noele_stack_7->SetDirectory(0);
   Noele_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Noele_stack_7->SetLineColor(ci);
   Noele_stack_7->GetXaxis()->SetTitle("Noele");
   Noele_stack_7->GetXaxis()->SetLabelFont(42);
   Noele_stack_7->GetXaxis()->SetLabelSize(0.035);
   Noele_stack_7->GetXaxis()->SetTitleSize(0.035);
   Noele_stack_7->GetXaxis()->SetTitleFont(42);
   Noele_stack_7->GetYaxis()->SetTitle("Events/pb");
   Noele_stack_7->GetYaxis()->SetLabelFont(42);
   Noele_stack_7->GetYaxis()->SetLabelSize(0.035);
   Noele_stack_7->GetYaxis()->SetTitleSize(0.035);
   Noele_stack_7->GetYaxis()->SetTitleFont(42);
   Noele_stack_7->GetZaxis()->SetLabelFont(42);
   Noele_stack_7->GetZaxis()->SetLabelSize(0.035);
   Noele_stack_7->GetZaxis()->SetTitleSize(0.035);
   Noele_stack_7->GetZaxis()->SetTitleFont(42);
   Noele->SetHistogram(Noele_stack_7);
   
   
   TH1D *Noele31 = new TH1D("Noele31","No. of e^{-}",10,0,10);
   Noele31->SetBinContent(1,0.03007584);
   Noele31->SetBinError(1,0.02641216);
   Noele31->SetEntries(4);

   ci = TColor::GetColor("#00cc00");
   Noele31->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   Noele31->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   Noele31->SetMarkerColor(ci);
   Noele31->SetMarkerStyle(22);
   Noele31->GetXaxis()->SetTitle("Noele");
   Noele31->GetXaxis()->SetLabelFont(42);
   Noele31->GetXaxis()->SetLabelSize(0.035);
   Noele31->GetXaxis()->SetTitleSize(0.035);
   Noele31->GetXaxis()->SetTitleFont(42);
   Noele31->GetYaxis()->SetTitle("Events/pb");
   Noele31->GetYaxis()->SetLabelFont(42);
   Noele31->GetYaxis()->SetLabelSize(0.035);
   Noele31->GetYaxis()->SetTitleSize(0.035);
   Noele31->GetYaxis()->SetTitleFont(42);
   Noele31->GetZaxis()->SetLabelFont(42);
   Noele31->GetZaxis()->SetLabelSize(0.035);
   Noele31->GetZaxis()->SetTitleSize(0.035);
   Noele31->GetZaxis()->SetTitleFont(42);
   Noele->Add(Noele,"");
   
   TH1D *Noele32 = new TH1D("Noele32","No. of e^{-}",10,0,10);
   Noele32->SetBinContent(1,1.096174);
   Noele32->SetBinContent(2,0.04939993);
   Noele32->SetBinContent(3,4.222875e-05);
   Noele32->SetBinError(1,0.02005611);
   Noele32->SetBinError(2,0.003785262);
   Noele32->SetBinError(3,3.154196e-05);
   Noele32->SetEntries(9534);

   ci = TColor::GetColor("#00ffff");
   Noele32->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   Noele32->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   Noele32->SetMarkerColor(ci);
   Noele32->SetMarkerStyle(20);
   Noele32->GetXaxis()->SetTitle("Noele");
   Noele32->GetXaxis()->SetLabelFont(42);
   Noele32->GetXaxis()->SetLabelSize(0.035);
   Noele32->GetXaxis()->SetTitleSize(0.035);
   Noele32->GetXaxis()->SetTitleFont(42);
   Noele32->GetYaxis()->SetTitle("Events/pb");
   Noele32->GetYaxis()->SetLabelFont(42);
   Noele32->GetYaxis()->SetLabelSize(0.035);
   Noele32->GetYaxis()->SetTitleSize(0.035);
   Noele32->GetYaxis()->SetTitleFont(42);
   Noele32->GetZaxis()->SetLabelFont(42);
   Noele32->GetZaxis()->SetLabelSize(0.035);
   Noele32->GetZaxis()->SetTitleSize(0.035);
   Noele32->GetZaxis()->SetTitleFont(42);
   Noele->Add(Noele,"");
   
   TH1D *Noele33 = new TH1D("Noele33","No. of e^{-}",10,0,10);
   Noele33->SetBinContent(1,0.2834579);
   Noele33->SetBinContent(2,0.0009291469);
   Noele33->SetBinError(1,0.004097182);
   Noele33->SetBinError(2,0.0002003409);
   Noele33->SetEntries(13132);

   ci = TColor::GetColor("#ffcc00");
   Noele33->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   Noele33->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   Noele33->SetMarkerColor(ci);
   Noele33->SetMarkerStyle(21);
   Noele33->GetXaxis()->SetTitle("Noele");
   Noele33->GetXaxis()->SetLabelFont(42);
   Noele33->GetXaxis()->SetLabelSize(0.035);
   Noele33->GetXaxis()->SetTitleSize(0.035);
   Noele33->GetXaxis()->SetTitleFont(42);
   Noele33->GetYaxis()->SetTitle("Events/pb");
   Noele33->GetYaxis()->SetLabelFont(42);
   Noele33->GetYaxis()->SetLabelSize(0.035);
   Noele33->GetYaxis()->SetTitleSize(0.035);
   Noele33->GetYaxis()->SetTitleFont(42);
   Noele33->GetZaxis()->SetLabelFont(42);
   Noele33->GetZaxis()->SetLabelSize(0.035);
   Noele33->GetZaxis()->SetTitleSize(0.035);
   Noele33->GetZaxis()->SetTitleFont(42);
   Noele->Add(Noele,"");
   
   TH1D *Noele34 = new TH1D("Noele34","No. of e^{-}",10,0,10);
   Noele34->SetBinContent(1,0.03217567);
   Noele34->SetBinContent(2,0.0003701898);
   Noele34->SetBinError(1,0.0007044828);
   Noele34->SetBinError(2,7.556468e-05);
   Noele34->SetEntries(2110);

   ci = TColor::GetColor("#ff0000");
   Noele34->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   Noele34->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   Noele34->SetMarkerColor(ci);
   Noele34->SetMarkerStyle(20);
   Noele34->GetXaxis()->SetTitle("Noele");
   Noele34->GetXaxis()->SetLabelFont(42);
   Noele34->GetXaxis()->SetLabelSize(0.035);
   Noele34->GetXaxis()->SetTitleSize(0.035);
   Noele34->GetXaxis()->SetTitleFont(42);
   Noele34->GetYaxis()->SetTitle("Events/pb");
   Noele34->GetYaxis()->SetLabelFont(42);
   Noele34->GetYaxis()->SetLabelSize(0.035);
   Noele34->GetYaxis()->SetTitleSize(0.035);
   Noele34->GetYaxis()->SetTitleFont(42);
   Noele34->GetZaxis()->SetLabelFont(42);
   Noele34->GetZaxis()->SetLabelSize(0.035);
   Noele34->GetZaxis()->SetTitleSize(0.035);
   Noele34->GetZaxis()->SetTitleFont(42);
   Noele->Add(Noele,"");
   
   TH1D *Noele35 = new TH1D("Noele35","No. of e^{-}",10,0,10);
   Noele35->SetBinContent(1,0.0002348031);
   Noele35->SetBinContent(2,5.031494e-05);
   Noele35->SetBinError(1,6.275376e-05);
   Noele35->SetBinError(2,2.904935e-05);
   Noele35->SetEntries(17);

   ci = TColor::GetColor("#0000ff");
   Noele35->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   Noele35->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   Noele35->SetMarkerColor(ci);
   Noele35->SetMarkerStyle(21);
   Noele35->GetXaxis()->SetTitle("Noele");
   Noele35->GetXaxis()->SetLabelFont(42);
   Noele35->GetXaxis()->SetLabelSize(0.035);
   Noele35->GetXaxis()->SetTitleSize(0.035);
   Noele35->GetXaxis()->SetTitleFont(42);
   Noele35->GetYaxis()->SetTitle("Events/pb");
   Noele35->GetYaxis()->SetLabelFont(42);
   Noele35->GetYaxis()->SetLabelSize(0.035);
   Noele35->GetYaxis()->SetTitleSize(0.035);
   Noele35->GetYaxis()->SetTitleFont(42);
   Noele35->GetZaxis()->SetLabelFont(42);
   Noele35->GetZaxis()->SetLabelSize(0.035);
   Noele35->GetZaxis()->SetTitleSize(0.035);
   Noele35->GetZaxis()->SetTitleFont(42);
   Noele->Add(Noele,"");
   Noele->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.4217529,0.94,0.5782471,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Noele");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Noele","Noele_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Noele","Noele_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Noele","Noele_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Noele","Noele_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Noele","Noele_ttbar","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   Noele->Modified();
   Noele->cd();
   Noele->SetSelected(Noele);
}
