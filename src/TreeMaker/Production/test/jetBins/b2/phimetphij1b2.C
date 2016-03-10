void phimetphij1b2()
{
//=========Macro generated from canvas: b2/phimetphij1b2/b2/phimetphij1b2
//=========  (Tue Nov 24 14:26:27 2015) by ROOT version6.02/05
   TCanvas *b2/phimetphij1b2 = new TCanvas("b2/phimetphij1b2", "b2/phimetphij1b2",80,102,700,700);
   b2/phimetphij1b2->Range(-3.926991,-7.318236,3.926991,0.4471286);
   b2/phimetphij1b2->SetFillColor(0);
   b2/phimetphij1b2->SetBorderMode(0);
   b2/phimetphij1b2->SetBorderSize(2);
   b2/phimetphij1b2->SetLogy();
   b2/phimetphij1b2->SetFrameBorderMode(0);
   b2/phimetphij1b2->SetFrameBorderMode(0);
   
   THStack *b2/phimetphij1b2 = new THStack();
   b2/phimetphij1b2->SetName("b2/phimetphij1b2");
   b2/phimetphij1b2->SetTitle("b2/phimetphij1b2");
   
   TH1F *b2/phimetphij1b2_stack_5 = new TH1F("b2/phimetphij1b2_stack_5","b2/phimetphij1b2",20,-3.141593,3.141593);
   b2/phimetphij1b2_stack_5->SetMinimum(2.872766e-07);
   b2/phimetphij1b2_stack_5->SetMaximum(0.4683733);
   b2/phimetphij1b2_stack_5->SetDirectory(0);
   b2/phimetphij1b2_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b2/phimetphij1b2_stack_5->SetLineColor(ci);
   b2/phimetphij1b2_stack_5->GetXaxis()->SetTitle("b2/phimetphij1b2");
   b2/phimetphij1b2_stack_5->GetXaxis()->SetLabelFont(42);
   b2/phimetphij1b2_stack_5->GetXaxis()->SetLabelSize(0.035);
   b2/phimetphij1b2_stack_5->GetXaxis()->SetTitleSize(0.035);
   b2/phimetphij1b2_stack_5->GetXaxis()->SetTitleFont(42);
   b2/phimetphij1b2_stack_5->GetYaxis()->SetTitle("Events/pb");
   b2/phimetphij1b2_stack_5->GetYaxis()->SetLabelFont(42);
   b2/phimetphij1b2_stack_5->GetYaxis()->SetLabelSize(0.035);
   b2/phimetphij1b2_stack_5->GetYaxis()->SetTitleSize(0.035);
   b2/phimetphij1b2_stack_5->GetYaxis()->SetTitleFont(42);
   b2/phimetphij1b2_stack_5->GetZaxis()->SetLabelFont(42);
   b2/phimetphij1b2_stack_5->GetZaxis()->SetLabelSize(0.035);
   b2/phimetphij1b2_stack_5->GetZaxis()->SetTitleSize(0.035);
   b2/phimetphij1b2_stack_5->GetZaxis()->SetTitleFont(42);
   b2/phimetphij1b2->SetHistogram(b2/phimetphij1b2_stack_5);
   
   
   TH1D *phimetphij1b221 = new TH1D("phimetphij1b221"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   phimetphij1b221->SetBinContent(1,0.07948327);
   phimetphij1b221->SetBinContent(19,0.00831877);
   phimetphij1b221->SetBinContent(20,0.04416612);
   phimetphij1b221->SetBinError(1,0.02371537);
   phimetphij1b221->SetBinError(19,0.00831877);
   phimetphij1b221->SetBinError(20,0.01685886);
   phimetphij1b221->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   phimetphij1b221->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphij1b221->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphij1b221->SetMarkerColor(ci);
   phimetphij1b221->SetMarkerStyle(22);
   phimetphij1b221->GetXaxis()->SetTitle("phimetphij1b2");
   phimetphij1b221->GetXaxis()->SetLabelFont(42);
   phimetphij1b221->GetXaxis()->SetLabelSize(0.035);
   phimetphij1b221->GetXaxis()->SetTitleSize(0.035);
   phimetphij1b221->GetXaxis()->SetTitleFont(42);
   phimetphij1b221->GetYaxis()->SetTitle("Events/pb");
   phimetphij1b221->GetYaxis()->SetLabelFont(42);
   phimetphij1b221->GetYaxis()->SetLabelSize(0.035);
   phimetphij1b221->GetYaxis()->SetTitleSize(0.035);
   phimetphij1b221->GetYaxis()->SetTitleFont(42);
   phimetphij1b221->GetZaxis()->SetLabelFont(42);
   phimetphij1b221->GetZaxis()->SetLabelSize(0.035);
   phimetphij1b221->GetZaxis()->SetTitleSize(0.035);
   phimetphij1b221->GetZaxis()->SetTitleFont(42);
   b2/phimetphij1b2->Add(phimetphij1b2,"");
   
   TH1D *phimetphij1b222 = new TH1D("phimetphij1b222"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   phimetphij1b222->SetBinContent(1,0.2266438);
   phimetphij1b222->SetBinContent(2,0.05862598);
   phimetphij1b222->SetBinContent(3,0.01259464);
   phimetphij1b222->SetBinContent(4,0.002611291);
   phimetphij1b222->SetBinContent(5,0.0003407787);
   phimetphij1b222->SetBinContent(8,1.473949e-05);
   phimetphij1b222->SetBinContent(9,1.392893e-05);
   phimetphij1b222->SetBinContent(12,1.392893e-05);
   phimetphij1b222->SetBinContent(14,1.473949e-05);
   phimetphij1b222->SetBinContent(15,7.207633e-05);
   phimetphij1b222->SetBinContent(16,0.0002711341);
   phimetphij1b222->SetBinContent(17,0.002987494);
   phimetphij1b222->SetBinContent(18,0.01420993);
   phimetphij1b222->SetBinContent(19,0.05725287);
   phimetphij1b222->SetBinContent(20,0.2247939);
   phimetphij1b222->SetBinError(1,0.006375818);
   phimetphij1b222->SetBinError(2,0.003161147);
   phimetphij1b222->SetBinError(3,0.0009728966);
   phimetphij1b222->SetBinError(4,0.0002860801);
   phimetphij1b222->SetBinError(5,6.958635e-05);
   phimetphij1b222->SetBinError(8,1.473949e-05);
   phimetphij1b222->SetBinError(9,1.392893e-05);
   phimetphij1b222->SetBinError(12,1.392893e-05);
   phimetphij1b222->SetBinError(14,1.473949e-05);
   phimetphij1b222->SetBinError(15,3.224574e-05);
   phimetphij1b222->SetBinError(16,6.222689e-05);
   phimetphij1b222->SetBinError(17,0.0003413366);
   phimetphij1b222->SetBinError(18,0.001077456);
   phimetphij1b222->SetBinError(19,0.002721223);
   phimetphij1b222->SetBinError(20,0.006165405);
   phimetphij1b222->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   phimetphij1b222->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphij1b222->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphij1b222->SetMarkerColor(ci);
   phimetphij1b222->SetMarkerStyle(20);
   phimetphij1b222->GetXaxis()->SetTitle("phimetphij1b2");
   phimetphij1b222->GetXaxis()->SetLabelFont(42);
   phimetphij1b222->GetXaxis()->SetLabelSize(0.035);
   phimetphij1b222->GetXaxis()->SetTitleSize(0.035);
   phimetphij1b222->GetXaxis()->SetTitleFont(42);
   phimetphij1b222->GetYaxis()->SetTitle("Events/pb");
   phimetphij1b222->GetYaxis()->SetLabelFont(42);
   phimetphij1b222->GetYaxis()->SetLabelSize(0.035);
   phimetphij1b222->GetYaxis()->SetTitleSize(0.035);
   phimetphij1b222->GetYaxis()->SetTitleFont(42);
   phimetphij1b222->GetZaxis()->SetLabelFont(42);
   phimetphij1b222->GetZaxis()->SetLabelSize(0.035);
   phimetphij1b222->GetZaxis()->SetTitleSize(0.035);
   phimetphij1b222->GetZaxis()->SetTitleFont(42);
   b2/phimetphij1b2->Add(phimetphij1b2,"");
   
   TH1D *phimetphij1b223 = new TH1D("phimetphij1b223"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   phimetphij1b223->SetBinContent(1,0.0540192);
   phimetphij1b223->SetBinContent(2,0.01492928);
   phimetphij1b223->SetBinContent(3,0.00301757);
   phimetphij1b223->SetBinContent(4,0.0008733838);
   phimetphij1b223->SetBinContent(5,0.0001128266);
   phimetphij1b223->SetBinContent(6,2.302645e-05);
   phimetphij1b223->SetBinContent(7,1.170302e-06);
   phimetphij1b223->SetBinContent(8,2.340604e-06);
   phimetphij1b223->SetBinContent(9,3.434989e-06);
   phimetphij1b223->SetBinContent(10,1.170302e-06);
   phimetphij1b223->SetBinContent(11,5.775593e-06);
   phimetphij1b223->SetBinContent(13,9.210582e-06);
   phimetphij1b223->SetBinContent(14,1.170302e-06);
   phimetphij1b223->SetBinContent(15,1.04568e-05);
   phimetphij1b223->SetBinContent(16,0.0001872515);
   phimetphij1b223->SetBinContent(17,0.0007451849);
   phimetphij1b223->SetBinContent(18,0.003463955);
   phimetphij1b223->SetBinContent(19,0.01433986);
   phimetphij1b223->SetBinContent(20,0.0547301);
   phimetphij1b223->SetBinError(1,0.001193482);
   phimetphij1b223->SetBinError(2,0.0005924673);
   phimetphij1b223->SetBinError(3,0.0002132914);
   phimetphij1b223->SetBinError(4,0.0001074777);
   phimetphij1b223->SetBinError(5,3.113705e-05);
   phimetphij1b223->SetBinError(6,8.114418e-06);
   phimetphij1b223->SetBinError(7,1.170302e-06);
   phimetphij1b223->SetBinError(8,1.655057e-06);
   phimetphij1b223->SetBinError(9,3.434989e-06);
   phimetphij1b223->SetBinError(10,1.170302e-06);
   phimetphij1b223->SetBinError(11,3.812921e-06);
   phimetphij1b223->SetBinError(13,5.132009e-06);
   phimetphij1b223->SetBinError(14,1.170302e-06);
   phimetphij1b223->SetBinError(15,4.474012e-06);
   phimetphij1b223->SetBinError(16,5.136356e-05);
   phimetphij1b223->SetBinError(17,8.737347e-05);
   phimetphij1b223->SetBinError(18,0.0002320973);
   phimetphij1b223->SetBinError(19,0.0005855827);
   phimetphij1b223->SetBinError(20,0.001178237);
   phimetphij1b223->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   phimetphij1b223->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphij1b223->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphij1b223->SetMarkerColor(ci);
   phimetphij1b223->SetMarkerStyle(21);
   phimetphij1b223->GetXaxis()->SetTitle("phimetphij1b2");
   phimetphij1b223->GetXaxis()->SetLabelFont(42);
   phimetphij1b223->GetXaxis()->SetLabelSize(0.035);
   phimetphij1b223->GetXaxis()->SetTitleSize(0.035);
   phimetphij1b223->GetXaxis()->SetTitleFont(42);
   phimetphij1b223->GetYaxis()->SetTitle("Events/pb");
   phimetphij1b223->GetYaxis()->SetLabelFont(42);
   phimetphij1b223->GetYaxis()->SetLabelSize(0.035);
   phimetphij1b223->GetYaxis()->SetTitleSize(0.035);
   phimetphij1b223->GetYaxis()->SetTitleFont(42);
   phimetphij1b223->GetZaxis()->SetLabelFont(42);
   phimetphij1b223->GetZaxis()->SetLabelSize(0.035);
   phimetphij1b223->GetZaxis()->SetTitleSize(0.035);
   phimetphij1b223->GetZaxis()->SetTitleFont(42);
   b2/phimetphij1b2->Add(phimetphij1b2,"");
   
   TH1D *phimetphij1b224 = new TH1D("phimetphij1b224"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   phimetphij1b224->SetBinContent(1,0.005768791);
   phimetphij1b224->SetBinContent(2,0.001635005);
   phimetphij1b224->SetBinContent(3,0.0003084915);
   phimetphij1b224->SetBinContent(4,0.0001542458);
   phimetphij1b224->SetBinContent(16,1.542458e-05);
   phimetphij1b224->SetBinContent(17,9.254746e-05);
   phimetphij1b224->SetBinContent(18,0.0003084915);
   phimetphij1b224->SetBinContent(19,0.001527033);
   phimetphij1b224->SetBinContent(20,0.006123557);
   phimetphij1b224->SetBinError(1,0.0002982971);
   phimetphij1b224->SetBinError(2,0.0001588057);
   phimetphij1b224->SetBinError(3,6.89808e-05);
   phimetphij1b224->SetBinError(4,4.877679e-05);
   phimetphij1b224->SetBinError(16,1.542458e-05);
   phimetphij1b224->SetBinError(17,3.778234e-05);
   phimetphij1b224->SetBinError(18,6.89808e-05);
   phimetphij1b224->SetBinError(19,0.0001534726);
   phimetphij1b224->SetBinError(20,0.0003073325);
   phimetphij1b224->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   phimetphij1b224->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphij1b224->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphij1b224->SetMarkerColor(ci);
   phimetphij1b224->SetMarkerStyle(20);
   phimetphij1b224->GetXaxis()->SetTitle("phimetphij1b2");
   phimetphij1b224->GetXaxis()->SetLabelFont(42);
   phimetphij1b224->GetXaxis()->SetLabelSize(0.035);
   phimetphij1b224->GetXaxis()->SetTitleSize(0.035);
   phimetphij1b224->GetXaxis()->SetTitleFont(42);
   phimetphij1b224->GetYaxis()->SetTitle("Events/pb");
   phimetphij1b224->GetYaxis()->SetLabelFont(42);
   phimetphij1b224->GetYaxis()->SetLabelSize(0.035);
   phimetphij1b224->GetYaxis()->SetTitleSize(0.035);
   phimetphij1b224->GetYaxis()->SetTitleFont(42);
   phimetphij1b224->GetZaxis()->SetLabelFont(42);
   phimetphij1b224->GetZaxis()->SetLabelSize(0.035);
   phimetphij1b224->GetZaxis()->SetTitleSize(0.035);
   phimetphij1b224->GetZaxis()->SetTitleFont(42);
   b2/phimetphij1b2->Add(phimetphij1b2,"");
   
   TH1D *phimetphij1b225 = new TH1D("phimetphij1b225"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   phimetphij1b225->SetBinContent(1,1.677165e-05);
   phimetphij1b225->SetBinError(1,1.677165e-05);
   phimetphij1b225->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   phimetphij1b225->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphij1b225->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphij1b225->SetMarkerColor(ci);
   phimetphij1b225->SetMarkerStyle(21);
   phimetphij1b225->GetXaxis()->SetTitle("phimetphij1b2");
   phimetphij1b225->GetXaxis()->SetLabelFont(42);
   phimetphij1b225->GetXaxis()->SetLabelSize(0.035);
   phimetphij1b225->GetXaxis()->SetTitleSize(0.035);
   phimetphij1b225->GetXaxis()->SetTitleFont(42);
   phimetphij1b225->GetYaxis()->SetTitle("Events/pb");
   phimetphij1b225->GetYaxis()->SetLabelFont(42);
   phimetphij1b225->GetYaxis()->SetLabelSize(0.035);
   phimetphij1b225->GetYaxis()->SetTitleSize(0.035);
   phimetphij1b225->GetYaxis()->SetTitleFont(42);
   phimetphij1b225->GetZaxis()->SetLabelFont(42);
   phimetphij1b225->GetZaxis()->SetLabelSize(0.035);
   phimetphij1b225->GetZaxis()->SetTitleSize(0.035);
   phimetphij1b225->GetZaxis()->SetTitleFont(42);
   b2/phimetphij1b2->Add(phimetphij1b2,"");
   b2/phimetphij1b2->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.2838218,0.9342857,0.7161782,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b2/phimetphij1b2");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimetphij1b2","b2/phimetphij1b2_QCD_b2/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphij1b2","b2/phimetphij1b2_WJetsToLNu_b2/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphij1b2","b2/phimetphij1b2_ZJetsToNuNu_b2/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphij1b2","b2/phimetphij1b2_signal_b2/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphij1b2","b2/phimetphij1b2_ttbar_b2/","lp");

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
   b2/phimetphij1b2->Modified();
   b2/phimetphij1b2->cd();
   b2/phimetphij1b2->SetSelected(b2/phimetphij1b2);
}
