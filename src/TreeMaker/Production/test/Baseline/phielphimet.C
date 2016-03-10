void phielphimet()
{
//=========Macro generated from canvas: phielphimet/phielphimet
//=========  (Sun Nov  8 21:55:58 2015) by ROOT version6.02/05
   TCanvas *phielphimet = new TCanvas("phielphimet", "phielphimet",0,23,700,700);
   phielphimet->Range(-0.3926991,-4.816856,3.534292,1.128878);
   phielphimet->SetFillColor(0);
   phielphimet->SetBorderMode(0);
   phielphimet->SetBorderSize(2);
   phielphimet->SetLogy();
   phielphimet->SetFrameBorderMode(0);
   phielphimet->SetFrameBorderMode(0);
   
   THStack *phielphimet = new THStack();
   phielphimet->SetName("phielphimet");
   phielphimet->SetTitle("phielphimet");
   
   TH1F *phielphimet_stack_19 = new TH1F("phielphimet_stack_19","phielphimet",10,0,3.141593);
   phielphimet_stack_19->SetMinimum(5.994014e-05);
   phielphimet_stack_19->SetMaximum(3.422196);
   phielphimet_stack_19->SetDirectory(0);
   phielphimet_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   phielphimet_stack_19->SetLineColor(ci);
   phielphimet_stack_19->GetXaxis()->SetTitle("phielphimet");
   phielphimet_stack_19->GetXaxis()->SetLabelFont(42);
   phielphimet_stack_19->GetXaxis()->SetLabelSize(0.035);
   phielphimet_stack_19->GetXaxis()->SetTitleSize(0.035);
   phielphimet_stack_19->GetXaxis()->SetTitleFont(42);
   phielphimet_stack_19->GetYaxis()->SetTitle("Events/pb");
   phielphimet_stack_19->GetYaxis()->SetLabelFont(42);
   phielphimet_stack_19->GetYaxis()->SetLabelSize(0.035);
   phielphimet_stack_19->GetYaxis()->SetTitleSize(0.035);
   phielphimet_stack_19->GetYaxis()->SetTitleFont(42);
   phielphimet_stack_19->GetZaxis()->SetLabelFont(42);
   phielphimet_stack_19->GetZaxis()->SetLabelSize(0.035);
   phielphimet_stack_19->GetZaxis()->SetTitleSize(0.035);
   phielphimet_stack_19->GetZaxis()->SetTitleFont(42);
   phielphimet->SetHistogram(phielphimet_stack_19);
   
   
   TH1D *phielphimet91 = new TH1D("phielphimet91"," #Delta_{#phi}[e_{-},MET]",10,0,3.141593);
   phielphimet91->SetBinContent(1,0.01125811);
   phielphimet91->SetBinContent(2,0.001250901);
   phielphimet91->SetBinContent(3,0.001250901);
   phielphimet91->SetBinContent(6,0.001250901);
   phielphimet91->SetBinContent(9,0.03132674);
   phielphimet91->SetBinContent(10,0.01375991);
   phielphimet91->SetBinError(1,0.003752704);
   phielphimet91->SetBinError(2,0.001250901);
   phielphimet91->SetBinError(3,0.001250901);
   phielphimet91->SetBinError(6,0.001250901);
   phielphimet91->SetBinError(9,0.02644176);
   phielphimet91->SetBinError(10,0.00414877);
   phielphimet91->SetEntries(28);

   ci = TColor::GetColor("#00cc00");
   phielphimet91->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phielphimet91->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phielphimet91->SetMarkerColor(ci);
   phielphimet91->SetMarkerStyle(22);
   phielphimet91->GetXaxis()->SetTitle("phielphimet");
   phielphimet91->GetXaxis()->SetLabelFont(42);
   phielphimet91->GetXaxis()->SetLabelSize(0.035);
   phielphimet91->GetXaxis()->SetTitleSize(0.035);
   phielphimet91->GetXaxis()->SetTitleFont(42);
   phielphimet91->GetYaxis()->SetTitle("Events/pb");
   phielphimet91->GetYaxis()->SetLabelFont(42);
   phielphimet91->GetYaxis()->SetLabelSize(0.035);
   phielphimet91->GetYaxis()->SetTitleSize(0.035);
   phielphimet91->GetYaxis()->SetTitleFont(42);
   phielphimet91->GetZaxis()->SetLabelFont(42);
   phielphimet91->GetZaxis()->SetLabelSize(0.035);
   phielphimet91->GetZaxis()->SetTitleSize(0.035);
   phielphimet91->GetZaxis()->SetTitleFont(42);
   phielphimet->Add(phielphimet,"");
   
   TH1D *phielphimet92 = new TH1D("phielphimet92"," #Delta_{#phi}[e_{-},MET]",10,0,3.141593);
   phielphimet92->SetBinContent(1,1.896669);
   phielphimet92->SetBinContent(2,1.557596);
   phielphimet92->SetBinContent(3,0.8958859);
   phielphimet92->SetBinContent(4,0.4022939);
   phielphimet92->SetBinContent(5,0.1679437);
   phielphimet92->SetBinContent(6,0.08349909);
   phielphimet92->SetBinContent(7,0.04073672);
   phielphimet92->SetBinContent(8,0.0339596);
   phielphimet92->SetBinContent(9,0.04623649);
   phielphimet92->SetBinContent(10,0.1491591);
   phielphimet92->SetBinError(1,0.01721326);
   phielphimet92->SetBinError(2,0.01737503);
   phielphimet92->SetBinError(3,0.01495529);
   phielphimet92->SetBinError(4,0.01098105);
   phielphimet92->SetBinError(5,0.00759484);
   phielphimet92->SetBinError(6,0.005844594);
   phielphimet92->SetBinError(7,0.00361709);
   phielphimet92->SetBinError(8,0.003494231);
   phielphimet92->SetBinError(9,0.00434377);
   phielphimet92->SetBinError(10,0.007887451);
   phielphimet92->SetEntries(120946);

   ci = TColor::GetColor("#00ffff");
   phielphimet92->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phielphimet92->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phielphimet92->SetMarkerColor(ci);
   phielphimet92->SetMarkerStyle(20);
   phielphimet92->GetXaxis()->SetTitle("phielphimet");
   phielphimet92->GetXaxis()->SetLabelFont(42);
   phielphimet92->GetXaxis()->SetLabelSize(0.035);
   phielphimet92->GetXaxis()->SetTitleSize(0.035);
   phielphimet92->GetXaxis()->SetTitleFont(42);
   phielphimet92->GetYaxis()->SetTitle("Events/pb");
   phielphimet92->GetYaxis()->SetLabelFont(42);
   phielphimet92->GetYaxis()->SetLabelSize(0.035);
   phielphimet92->GetYaxis()->SetTitleSize(0.035);
   phielphimet92->GetYaxis()->SetTitleFont(42);
   phielphimet92->GetZaxis()->SetLabelFont(42);
   phielphimet92->GetZaxis()->SetLabelSize(0.035);
   phielphimet92->GetZaxis()->SetTitleSize(0.035);
   phielphimet92->GetZaxis()->SetTitleFont(42);
   phielphimet->Add(phielphimet,"");
   
   TH1D *phielphimet93 = new TH1D("phielphimet93"," #Delta_{#phi}[e_{-},MET]",10,0,3.141593);
   phielphimet93->SetBinContent(1,0.001620414);
   phielphimet93->SetBinContent(2,0.001634523);
   phielphimet93->SetBinContent(3,0.001480414);
   phielphimet93->SetBinContent(4,0.001225291);
   phielphimet93->SetBinContent(5,0.001701182);
   phielphimet93->SetBinContent(6,0.001995239);
   phielphimet93->SetBinContent(7,0.003213232);
   phielphimet93->SetBinContent(8,0.004691711);
   phielphimet93->SetBinContent(9,0.01060412);
   phielphimet93->SetBinContent(10,0.04844965);
   phielphimet93->SetBinError(1,0.0001614078);
   phielphimet93->SetBinError(2,0.0002492982);
   phielphimet93->SetBinError(3,0.0001693977);
   phielphimet93->SetBinError(4,0.0001289717);
   phielphimet93->SetBinError(5,0.0001734539);
   phielphimet93->SetBinError(6,0.000205853);
   phielphimet93->SetBinError(7,0.0002948253);
   phielphimet93->SetBinError(8,0.0003380037);
   phielphimet93->SetBinError(9,0.0006202575);
   phielphimet93->SetBinError(10,0.001689888);
   phielphimet93->SetEntries(6831);

   ci = TColor::GetColor("#ffcc00");
   phielphimet93->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phielphimet93->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phielphimet93->SetMarkerColor(ci);
   phielphimet93->SetMarkerStyle(21);
   phielphimet93->GetXaxis()->SetTitle("phielphimet");
   phielphimet93->GetXaxis()->SetLabelFont(42);
   phielphimet93->GetXaxis()->SetLabelSize(0.035);
   phielphimet93->GetXaxis()->SetTitleSize(0.035);
   phielphimet93->GetXaxis()->SetTitleFont(42);
   phielphimet93->GetYaxis()->SetTitle("Events/pb");
   phielphimet93->GetYaxis()->SetLabelFont(42);
   phielphimet93->GetYaxis()->SetLabelSize(0.035);
   phielphimet93->GetYaxis()->SetTitleSize(0.035);
   phielphimet93->GetYaxis()->SetTitleFont(42);
   phielphimet93->GetZaxis()->SetLabelFont(42);
   phielphimet93->GetZaxis()->SetLabelSize(0.035);
   phielphimet93->GetZaxis()->SetTitleSize(0.035);
   phielphimet93->GetZaxis()->SetTitleFont(42);
   phielphimet->Add(phielphimet,"");
   
   TH1D *phielphimet94 = new TH1D("phielphimet94"," #Delta_{#phi}[e_{-},MET]",10,0,3.141593);
   phielphimet94->SetBinContent(1,0.002097742);
   phielphimet94->SetBinContent(2,0.001881798);
   phielphimet94->SetBinContent(3,0.001434486);
   phielphimet94->SetBinContent(4,0.0008946254);
   phielphimet94->SetBinContent(5,0.0008020779);
   phielphimet94->SetBinContent(6,0.0005552847);
   phielphimet94->SetBinContent(7,0.000509011);
   phielphimet94->SetBinContent(8,0.0002005195);
   phielphimet94->SetBinContent(9,0.0003856144);
   phielphimet94->SetBinContent(10,0.001156843);
   phielphimet94->SetBinError(1,0.0001798799);
   phielphimet94->SetBinError(2,0.00017037);
   phielphimet94->SetBinError(3,0.0001487492);
   phielphimet94->SetBinError(4,0.0001174701);
   phielphimet94->SetBinError(5,0.0001112282);
   phielphimet94->SetBinError(6,9.254746e-05);
   phielphimet94->SetBinError(7,8.860744e-05);
   phielphimet94->SetBinError(8,5.56141e-05);
   phielphimet94->SetBinError(9,7.712288e-05);
   phielphimet94->SetBinError(10,0.0001335807);
   phielphimet94->SetEntries(643);

   ci = TColor::GetColor("#ff0000");
   phielphimet94->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phielphimet94->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phielphimet94->SetMarkerColor(ci);
   phielphimet94->SetMarkerStyle(20);
   phielphimet94->GetXaxis()->SetTitle("phielphimet");
   phielphimet94->GetXaxis()->SetLabelFont(42);
   phielphimet94->GetXaxis()->SetLabelSize(0.035);
   phielphimet94->GetXaxis()->SetTitleSize(0.035);
   phielphimet94->GetXaxis()->SetTitleFont(42);
   phielphimet94->GetYaxis()->SetTitle("Events/pb");
   phielphimet94->GetYaxis()->SetLabelFont(42);
   phielphimet94->GetYaxis()->SetLabelSize(0.035);
   phielphimet94->GetYaxis()->SetTitleSize(0.035);
   phielphimet94->GetYaxis()->SetTitleFont(42);
   phielphimet94->GetZaxis()->SetLabelFont(42);
   phielphimet94->GetZaxis()->SetLabelSize(0.035);
   phielphimet94->GetZaxis()->SetTitleSize(0.035);
   phielphimet94->GetZaxis()->SetTitleFont(42);
   phielphimet->Add(phielphimet,"");
   
   TH1D *phielphimet95 = new TH1D("phielphimet95"," #Delta_{#phi}[e_{-},MET]",10,0,3.141593);
   phielphimet95->SetBinContent(1,0.003589133);
   phielphimet95->SetBinContent(2,0.002448661);
   phielphimet95->SetBinContent(3,0.001559763);
   phielphimet95->SetBinContent(4,0.001207559);
   phielphimet95->SetBinContent(5,0.0005031494);
   phielphimet95->SetBinContent(6,0.0004528345);
   phielphimet95->SetBinContent(7,0.000335433);
   phielphimet95->SetBinContent(8,0.000620551);
   phielphimet95->SetBinContent(9,0.0007714958);
   phielphimet95->SetBinContent(10,0.000855354);
   phielphimet95->SetBinError(1,0.0002453481);
   phielphimet95->SetBinError(2,0.0002026526);
   phielphimet95->SetBinError(3,0.0001617399);
   phielphimet95->SetBinError(4,0.0001423121);
   phielphimet95->SetBinError(5,9.18621e-05);
   phielphimet95->SetBinError(6,8.714804e-05);
   phielphimet95->SetBinError(7,7.500509e-05);
   phielphimet95->SetBinError(8,0.0001020179);
   phielphimet95->SetBinError(9,0.0001137508);
   phielphimet95->SetBinError(10,0.0001197735);
   phielphimet95->SetEntries(736);

   ci = TColor::GetColor("#0000ff");
   phielphimet95->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phielphimet95->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phielphimet95->SetMarkerColor(ci);
   phielphimet95->SetMarkerStyle(21);
   phielphimet95->GetXaxis()->SetTitle("phielphimet");
   phielphimet95->GetXaxis()->SetLabelFont(42);
   phielphimet95->GetXaxis()->SetLabelSize(0.035);
   phielphimet95->GetXaxis()->SetTitleSize(0.035);
   phielphimet95->GetXaxis()->SetTitleFont(42);
   phielphimet95->GetYaxis()->SetTitle("Events/pb");
   phielphimet95->GetYaxis()->SetLabelFont(42);
   phielphimet95->GetYaxis()->SetLabelSize(0.035);
   phielphimet95->GetYaxis()->SetTitleSize(0.035);
   phielphimet95->GetYaxis()->SetTitleFont(42);
   phielphimet95->GetZaxis()->SetLabelFont(42);
   phielphimet95->GetZaxis()->SetLabelSize(0.035);
   phielphimet95->GetZaxis()->SetTitleSize(0.035);
   phielphimet95->GetZaxis()->SetTitleFont(42);
   phielphimet->Add(phielphimet,"");
   phielphimet->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3491954,0.9342857,0.6508046,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("phielphimet");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phielphimet","phielphimet_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phielphimet","phielphimet_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phielphimet","phielphimet_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phielphimet","phielphimet_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phielphimet","phielphimet_ttbar","lp");

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
   phielphimet->Modified();
   phielphimet->cd();
   phielphimet->SetSelected(phielphimet);
}
