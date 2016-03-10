void phimetphijet3()
{
//=========Macro generated from canvas: phimetphijet3/phimetphijet3
//=========  (Mon Nov 23 11:05:10 2015) by ROOT version6.02/05
   TCanvas *phimetphijet3 = new TCanvas("phimetphijet3", "phimetphijet3",120,142,700,700);
   phimetphijet3->Range(0,0,1,1);
   phimetphijet3->SetFillColor(0);
   phimetphijet3->SetBorderMode(0);
   phimetphijet3->SetBorderSize(2);
   phimetphijet3->SetLogy();
   phimetphijet3->SetFrameBorderMode(0);
   phimetphijet3->SetFrameBorderMode(0);
   
   THStack *phimetphijet3 = new THStack();
   phimetphijet3->SetName("phimetphijet3");
   phimetphijet3->SetTitle("phimetphijet3");
   
   TH1F *phimetphijet3_stack_19 = new TH1F("phimetphijet3_stack_19","phimetphijet3",20,-3.141593,3.141593);
   phimetphijet3_stack_19->SetMinimum(-0);
   phimetphijet3_stack_19->SetMaximum(-nan);
   phimetphijet3_stack_19->SetDirectory(0);
   phimetphijet3_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   phimetphijet3_stack_19->SetLineColor(ci);
   phimetphijet3_stack_19->GetXaxis()->SetTitle("phimetphijet3");
   phimetphijet3_stack_19->GetXaxis()->SetLabelFont(42);
   phimetphijet3_stack_19->GetXaxis()->SetLabelSize(0.035);
   phimetphijet3_stack_19->GetXaxis()->SetTitleSize(0.035);
   phimetphijet3_stack_19->GetXaxis()->SetTitleFont(42);
   phimetphijet3_stack_19->GetYaxis()->SetTitle("Events/pb");
   phimetphijet3_stack_19->GetYaxis()->SetLabelFont(42);
   phimetphijet3_stack_19->GetYaxis()->SetLabelSize(0.035);
   phimetphijet3_stack_19->GetYaxis()->SetTitleSize(0.035);
   phimetphijet3_stack_19->GetYaxis()->SetTitleFont(42);
   phimetphijet3_stack_19->GetZaxis()->SetLabelFont(42);
   phimetphijet3_stack_19->GetZaxis()->SetLabelSize(0.035);
   phimetphijet3_stack_19->GetZaxis()->SetTitleSize(0.035);
   phimetphijet3_stack_19->GetZaxis()->SetTitleFont(42);
   phimetphijet3->SetHistogram(phimetphijet3_stack_19);
   
   
   TH1D *phimetphijet391 = new TH1D("phimetphijet391"," #Delta_{#phi}[MET,jet_{3}]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#00cc00");
   phimetphijet391->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphijet391->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphijet391->SetMarkerColor(ci);
   phimetphijet391->SetMarkerStyle(22);
   phimetphijet391->GetXaxis()->SetTitle("phimetphijet3");
   phimetphijet391->GetXaxis()->SetLabelFont(42);
   phimetphijet391->GetXaxis()->SetLabelSize(0.035);
   phimetphijet391->GetXaxis()->SetTitleSize(0.035);
   phimetphijet391->GetXaxis()->SetTitleFont(42);
   phimetphijet391->GetYaxis()->SetTitle("Events/pb");
   phimetphijet391->GetYaxis()->SetLabelFont(42);
   phimetphijet391->GetYaxis()->SetLabelSize(0.035);
   phimetphijet391->GetYaxis()->SetTitleSize(0.035);
   phimetphijet391->GetYaxis()->SetTitleFont(42);
   phimetphijet391->GetZaxis()->SetLabelFont(42);
   phimetphijet391->GetZaxis()->SetLabelSize(0.035);
   phimetphijet391->GetZaxis()->SetTitleSize(0.035);
   phimetphijet391->GetZaxis()->SetTitleFont(42);
   phimetphijet3->Add(phimetphijet3,"");
   
   TH1D *phimetphijet392 = new TH1D("phimetphijet392"," #Delta_{#phi}[MET,jet_{3}]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#00ffff");
   phimetphijet392->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphijet392->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphijet392->SetMarkerColor(ci);
   phimetphijet392->SetMarkerStyle(20);
   phimetphijet392->GetXaxis()->SetTitle("phimetphijet3");
   phimetphijet392->GetXaxis()->SetLabelFont(42);
   phimetphijet392->GetXaxis()->SetLabelSize(0.035);
   phimetphijet392->GetXaxis()->SetTitleSize(0.035);
   phimetphijet392->GetXaxis()->SetTitleFont(42);
   phimetphijet392->GetYaxis()->SetTitle("Events/pb");
   phimetphijet392->GetYaxis()->SetLabelFont(42);
   phimetphijet392->GetYaxis()->SetLabelSize(0.035);
   phimetphijet392->GetYaxis()->SetTitleSize(0.035);
   phimetphijet392->GetYaxis()->SetTitleFont(42);
   phimetphijet392->GetZaxis()->SetLabelFont(42);
   phimetphijet392->GetZaxis()->SetLabelSize(0.035);
   phimetphijet392->GetZaxis()->SetTitleSize(0.035);
   phimetphijet392->GetZaxis()->SetTitleFont(42);
   phimetphijet3->Add(phimetphijet3,"");
   
   TH1D *phimetphijet393 = new TH1D("phimetphijet393"," #Delta_{#phi}[MET,jet_{3}]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#ffcc00");
   phimetphijet393->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphijet393->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphijet393->SetMarkerColor(ci);
   phimetphijet393->SetMarkerStyle(21);
   phimetphijet393->GetXaxis()->SetTitle("phimetphijet3");
   phimetphijet393->GetXaxis()->SetLabelFont(42);
   phimetphijet393->GetXaxis()->SetLabelSize(0.035);
   phimetphijet393->GetXaxis()->SetTitleSize(0.035);
   phimetphijet393->GetXaxis()->SetTitleFont(42);
   phimetphijet393->GetYaxis()->SetTitle("Events/pb");
   phimetphijet393->GetYaxis()->SetLabelFont(42);
   phimetphijet393->GetYaxis()->SetLabelSize(0.035);
   phimetphijet393->GetYaxis()->SetTitleSize(0.035);
   phimetphijet393->GetYaxis()->SetTitleFont(42);
   phimetphijet393->GetZaxis()->SetLabelFont(42);
   phimetphijet393->GetZaxis()->SetLabelSize(0.035);
   phimetphijet393->GetZaxis()->SetTitleSize(0.035);
   phimetphijet393->GetZaxis()->SetTitleFont(42);
   phimetphijet3->Add(phimetphijet3,"");
   
   TH1D *phimetphijet394 = new TH1D("phimetphijet394"," #Delta_{#phi}[MET,jet_{3}]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#ff0000");
   phimetphijet394->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphijet394->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphijet394->SetMarkerColor(ci);
   phimetphijet394->SetMarkerStyle(20);
   phimetphijet394->GetXaxis()->SetTitle("phimetphijet3");
   phimetphijet394->GetXaxis()->SetLabelFont(42);
   phimetphijet394->GetXaxis()->SetLabelSize(0.035);
   phimetphijet394->GetXaxis()->SetTitleSize(0.035);
   phimetphijet394->GetXaxis()->SetTitleFont(42);
   phimetphijet394->GetYaxis()->SetTitle("Events/pb");
   phimetphijet394->GetYaxis()->SetLabelFont(42);
   phimetphijet394->GetYaxis()->SetLabelSize(0.035);
   phimetphijet394->GetYaxis()->SetTitleSize(0.035);
   phimetphijet394->GetYaxis()->SetTitleFont(42);
   phimetphijet394->GetZaxis()->SetLabelFont(42);
   phimetphijet394->GetZaxis()->SetLabelSize(0.035);
   phimetphijet394->GetZaxis()->SetTitleSize(0.035);
   phimetphijet394->GetZaxis()->SetTitleFont(42);
   phimetphijet3->Add(phimetphijet3,"");
   
   TH1D *phimetphijet395 = new TH1D("phimetphijet395"," #Delta_{#phi}[MET,jet_{3}]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#0000ff");
   phimetphijet395->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphijet395->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphijet395->SetMarkerColor(ci);
   phimetphijet395->SetMarkerStyle(21);
   phimetphijet395->GetXaxis()->SetTitle("phimetphijet3");
   phimetphijet395->GetXaxis()->SetLabelFont(42);
   phimetphijet395->GetXaxis()->SetLabelSize(0.035);
   phimetphijet395->GetXaxis()->SetTitleSize(0.035);
   phimetphijet395->GetXaxis()->SetTitleFont(42);
   phimetphijet395->GetYaxis()->SetTitle("Events/pb");
   phimetphijet395->GetYaxis()->SetLabelFont(42);
   phimetphijet395->GetYaxis()->SetLabelSize(0.035);
   phimetphijet395->GetYaxis()->SetTitleSize(0.035);
   phimetphijet395->GetYaxis()->SetTitleFont(42);
   phimetphijet395->GetZaxis()->SetLabelFont(42);
   phimetphijet395->GetZaxis()->SetLabelSize(0.035);
   phimetphijet395->GetZaxis()->SetTitleSize(0.035);
   phimetphijet395->GetZaxis()->SetTitleFont(42);
   phimetphijet3->Add(phimetphijet3,"");
   phimetphijet3->Draw("nostack");
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimetphijet3","phimetphijet3_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphijet3","phimetphijet3_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphijet3","phimetphijet3_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphijet3","phimetphijet3_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphijet3","phimetphijet3_ttbar","lp");

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
   phimetphijet3->Modified();
   phimetphijet3->cd();
   phimetphijet3->SetSelected(phimetphijet3);
}
