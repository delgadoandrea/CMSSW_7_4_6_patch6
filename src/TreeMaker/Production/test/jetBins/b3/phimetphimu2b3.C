void phimetphimu2b3()
{
//=========Macro generated from canvas: b3/phimetphimu2b3/b3/phimetphimu2b3
//=========  (Tue Nov 24 14:24:06 2015) by ROOT version6.02/05
   TCanvas *b3/phimetphimu2b3 = new TCanvas("b3/phimetphimu2b3", "b3/phimetphimu2b3",380,402,700,700);
   b3/phimetphimu2b3->Range(0,0,1,1);
   b3/phimetphimu2b3->SetFillColor(0);
   b3/phimetphimu2b3->SetBorderMode(0);
   b3/phimetphimu2b3->SetBorderSize(2);
   b3/phimetphimu2b3->SetLogy();
   b3/phimetphimu2b3->SetFrameBorderMode(0);
   b3/phimetphimu2b3->SetFrameBorderMode(0);
   
   THStack *b3/phimetphimu2b3 = new THStack();
   b3/phimetphimu2b3->SetName("b3/phimetphimu2b3");
   b3/phimetphimu2b3->SetTitle("b3/phimetphimu2b3");
   
   TH1F *b3/phimetphimu2b3_stack_20 = new TH1F("b3/phimetphimu2b3_stack_20","b3/phimetphimu2b3",20,-3.141593,3.141593);
   b3/phimetphimu2b3_stack_20->SetMinimum(-0);
   b3/phimetphimu2b3_stack_20->SetMaximum(-nan);
   b3/phimetphimu2b3_stack_20->SetDirectory(0);
   b3/phimetphimu2b3_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b3/phimetphimu2b3_stack_20->SetLineColor(ci);
   b3/phimetphimu2b3_stack_20->GetXaxis()->SetTitle("b3/phimetphimu2b3");
   b3/phimetphimu2b3_stack_20->GetXaxis()->SetLabelFont(42);
   b3/phimetphimu2b3_stack_20->GetXaxis()->SetLabelSize(0.035);
   b3/phimetphimu2b3_stack_20->GetXaxis()->SetTitleSize(0.035);
   b3/phimetphimu2b3_stack_20->GetXaxis()->SetTitleFont(42);
   b3/phimetphimu2b3_stack_20->GetYaxis()->SetTitle("Events/pb");
   b3/phimetphimu2b3_stack_20->GetYaxis()->SetLabelFont(42);
   b3/phimetphimu2b3_stack_20->GetYaxis()->SetLabelSize(0.035);
   b3/phimetphimu2b3_stack_20->GetYaxis()->SetTitleSize(0.035);
   b3/phimetphimu2b3_stack_20->GetYaxis()->SetTitleFont(42);
   b3/phimetphimu2b3_stack_20->GetZaxis()->SetLabelFont(42);
   b3/phimetphimu2b3_stack_20->GetZaxis()->SetLabelSize(0.035);
   b3/phimetphimu2b3_stack_20->GetZaxis()->SetTitleSize(0.035);
   b3/phimetphimu2b3_stack_20->GetZaxis()->SetTitleFont(42);
   b3/phimetphimu2b3->SetHistogram(b3/phimetphimu2b3_stack_20);
   
   
   TH1D *phimetphimu2b396 = new TH1D("phimetphimu2b396"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#00cc00");
   phimetphimu2b396->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphimu2b396->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphimu2b396->SetMarkerColor(ci);
   phimetphimu2b396->SetMarkerStyle(22);
   phimetphimu2b396->GetXaxis()->SetTitle("phimetphimu2b3");
   phimetphimu2b396->GetXaxis()->SetLabelFont(42);
   phimetphimu2b396->GetXaxis()->SetLabelSize(0.035);
   phimetphimu2b396->GetXaxis()->SetTitleSize(0.035);
   phimetphimu2b396->GetXaxis()->SetTitleFont(42);
   phimetphimu2b396->GetYaxis()->SetTitle("Events/pb");
   phimetphimu2b396->GetYaxis()->SetLabelFont(42);
   phimetphimu2b396->GetYaxis()->SetLabelSize(0.035);
   phimetphimu2b396->GetYaxis()->SetTitleSize(0.035);
   phimetphimu2b396->GetYaxis()->SetTitleFont(42);
   phimetphimu2b396->GetZaxis()->SetLabelFont(42);
   phimetphimu2b396->GetZaxis()->SetLabelSize(0.035);
   phimetphimu2b396->GetZaxis()->SetTitleSize(0.035);
   phimetphimu2b396->GetZaxis()->SetTitleFont(42);
   b3/phimetphimu2b3->Add(phimetphimu2b3,"");
   
   TH1D *phimetphimu2b397 = new TH1D("phimetphimu2b397"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#00ffff");
   phimetphimu2b397->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphimu2b397->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphimu2b397->SetMarkerColor(ci);
   phimetphimu2b397->SetMarkerStyle(20);
   phimetphimu2b397->GetXaxis()->SetTitle("phimetphimu2b3");
   phimetphimu2b397->GetXaxis()->SetLabelFont(42);
   phimetphimu2b397->GetXaxis()->SetLabelSize(0.035);
   phimetphimu2b397->GetXaxis()->SetTitleSize(0.035);
   phimetphimu2b397->GetXaxis()->SetTitleFont(42);
   phimetphimu2b397->GetYaxis()->SetTitle("Events/pb");
   phimetphimu2b397->GetYaxis()->SetLabelFont(42);
   phimetphimu2b397->GetYaxis()->SetLabelSize(0.035);
   phimetphimu2b397->GetYaxis()->SetTitleSize(0.035);
   phimetphimu2b397->GetYaxis()->SetTitleFont(42);
   phimetphimu2b397->GetZaxis()->SetLabelFont(42);
   phimetphimu2b397->GetZaxis()->SetLabelSize(0.035);
   phimetphimu2b397->GetZaxis()->SetTitleSize(0.035);
   phimetphimu2b397->GetZaxis()->SetTitleFont(42);
   b3/phimetphimu2b3->Add(phimetphimu2b3,"");
   
   TH1D *phimetphimu2b398 = new TH1D("phimetphimu2b398"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#ffcc00");
   phimetphimu2b398->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphimu2b398->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphimu2b398->SetMarkerColor(ci);
   phimetphimu2b398->SetMarkerStyle(21);
   phimetphimu2b398->GetXaxis()->SetTitle("phimetphimu2b3");
   phimetphimu2b398->GetXaxis()->SetLabelFont(42);
   phimetphimu2b398->GetXaxis()->SetLabelSize(0.035);
   phimetphimu2b398->GetXaxis()->SetTitleSize(0.035);
   phimetphimu2b398->GetXaxis()->SetTitleFont(42);
   phimetphimu2b398->GetYaxis()->SetTitle("Events/pb");
   phimetphimu2b398->GetYaxis()->SetLabelFont(42);
   phimetphimu2b398->GetYaxis()->SetLabelSize(0.035);
   phimetphimu2b398->GetYaxis()->SetTitleSize(0.035);
   phimetphimu2b398->GetYaxis()->SetTitleFont(42);
   phimetphimu2b398->GetZaxis()->SetLabelFont(42);
   phimetphimu2b398->GetZaxis()->SetLabelSize(0.035);
   phimetphimu2b398->GetZaxis()->SetTitleSize(0.035);
   phimetphimu2b398->GetZaxis()->SetTitleFont(42);
   b3/phimetphimu2b3->Add(phimetphimu2b3,"");
   
   TH1D *phimetphimu2b399 = new TH1D("phimetphimu2b399"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#ff0000");
   phimetphimu2b399->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphimu2b399->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphimu2b399->SetMarkerColor(ci);
   phimetphimu2b399->SetMarkerStyle(20);
   phimetphimu2b399->GetXaxis()->SetTitle("phimetphimu2b3");
   phimetphimu2b399->GetXaxis()->SetLabelFont(42);
   phimetphimu2b399->GetXaxis()->SetLabelSize(0.035);
   phimetphimu2b399->GetXaxis()->SetTitleSize(0.035);
   phimetphimu2b399->GetXaxis()->SetTitleFont(42);
   phimetphimu2b399->GetYaxis()->SetTitle("Events/pb");
   phimetphimu2b399->GetYaxis()->SetLabelFont(42);
   phimetphimu2b399->GetYaxis()->SetLabelSize(0.035);
   phimetphimu2b399->GetYaxis()->SetTitleSize(0.035);
   phimetphimu2b399->GetYaxis()->SetTitleFont(42);
   phimetphimu2b399->GetZaxis()->SetLabelFont(42);
   phimetphimu2b399->GetZaxis()->SetLabelSize(0.035);
   phimetphimu2b399->GetZaxis()->SetTitleSize(0.035);
   phimetphimu2b399->GetZaxis()->SetTitleFont(42);
   b3/phimetphimu2b3->Add(phimetphimu2b3,"");
   
   TH1D *phimetphimu2b3100 = new TH1D("phimetphimu2b3100"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#0000ff");
   phimetphimu2b3100->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphimu2b3100->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphimu2b3100->SetMarkerColor(ci);
   phimetphimu2b3100->SetMarkerStyle(21);
   phimetphimu2b3100->GetXaxis()->SetTitle("phimetphimu2b3");
   phimetphimu2b3100->GetXaxis()->SetLabelFont(42);
   phimetphimu2b3100->GetXaxis()->SetLabelSize(0.035);
   phimetphimu2b3100->GetXaxis()->SetTitleSize(0.035);
   phimetphimu2b3100->GetXaxis()->SetTitleFont(42);
   phimetphimu2b3100->GetYaxis()->SetTitle("Events/pb");
   phimetphimu2b3100->GetYaxis()->SetLabelFont(42);
   phimetphimu2b3100->GetYaxis()->SetLabelSize(0.035);
   phimetphimu2b3100->GetYaxis()->SetTitleSize(0.035);
   phimetphimu2b3100->GetYaxis()->SetTitleFont(42);
   phimetphimu2b3100->GetZaxis()->SetLabelFont(42);
   phimetphimu2b3100->GetZaxis()->SetLabelSize(0.035);
   phimetphimu2b3100->GetZaxis()->SetTitleSize(0.035);
   phimetphimu2b3100->GetZaxis()->SetTitleFont(42);
   b3/phimetphimu2b3->Add(phimetphimu2b3,"");
   b3/phimetphimu2b3->Draw("nostack");
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimetphimu2b3","b3/phimetphimu2b3_QCD_b3/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphimu2b3","b3/phimetphimu2b3_WJetsToLNu_b3/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphimu2b3","b3/phimetphimu2b3_ZJetsToNuNu_b3/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphimu2b3","b3/phimetphimu2b3_signal_b3/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphimu2b3","b3/phimetphimu2b3_ttbar_b3/","lp");

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
   b3/phimetphimu2b3->Modified();
   b3/phimetphimu2b3->cd();
   b3/phimetphimu2b3->SetSelected(b3/phimetphimu2b3);
}
