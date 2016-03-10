void phimetphimu2b2()
{
//=========Macro generated from canvas: b2/phimetphimu2b2/b2/phimetphimu2b2
//=========  (Tue Nov 24 14:26:25 2015) by ROOT version6.02/05
   TCanvas *b2/phimetphimu2b2 = new TCanvas("b2/phimetphimu2b2", "b2/phimetphimu2b2",40,62,700,700);
   b2/phimetphimu2b2->Range(0,0,1,1);
   b2/phimetphimu2b2->SetFillColor(0);
   b2/phimetphimu2b2->SetBorderMode(0);
   b2/phimetphimu2b2->SetBorderSize(2);
   b2/phimetphimu2b2->SetLogy();
   b2/phimetphimu2b2->SetFrameBorderMode(0);
   b2/phimetphimu2b2->SetFrameBorderMode(0);
   
   THStack *b2/phimetphimu2b2 = new THStack();
   b2/phimetphimu2b2->SetName("b2/phimetphimu2b2");
   b2/phimetphimu2b2->SetTitle("b2/phimetphimu2b2");
   
   TH1F *b2/phimetphimu2b2_stack_3 = new TH1F("b2/phimetphimu2b2_stack_3","b2/phimetphimu2b2",20,-3.141593,3.141593);
   b2/phimetphimu2b2_stack_3->SetMinimum(-0);
   b2/phimetphimu2b2_stack_3->SetMaximum(-nan);
   b2/phimetphimu2b2_stack_3->SetDirectory(0);
   b2/phimetphimu2b2_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b2/phimetphimu2b2_stack_3->SetLineColor(ci);
   b2/phimetphimu2b2_stack_3->GetXaxis()->SetTitle("b2/phimetphimu2b2");
   b2/phimetphimu2b2_stack_3->GetXaxis()->SetLabelFont(42);
   b2/phimetphimu2b2_stack_3->GetXaxis()->SetLabelSize(0.035);
   b2/phimetphimu2b2_stack_3->GetXaxis()->SetTitleSize(0.035);
   b2/phimetphimu2b2_stack_3->GetXaxis()->SetTitleFont(42);
   b2/phimetphimu2b2_stack_3->GetYaxis()->SetTitle("Events/pb");
   b2/phimetphimu2b2_stack_3->GetYaxis()->SetLabelFont(42);
   b2/phimetphimu2b2_stack_3->GetYaxis()->SetLabelSize(0.035);
   b2/phimetphimu2b2_stack_3->GetYaxis()->SetTitleSize(0.035);
   b2/phimetphimu2b2_stack_3->GetYaxis()->SetTitleFont(42);
   b2/phimetphimu2b2_stack_3->GetZaxis()->SetLabelFont(42);
   b2/phimetphimu2b2_stack_3->GetZaxis()->SetLabelSize(0.035);
   b2/phimetphimu2b2_stack_3->GetZaxis()->SetTitleSize(0.035);
   b2/phimetphimu2b2_stack_3->GetZaxis()->SetTitleFont(42);
   b2/phimetphimu2b2->SetHistogram(b2/phimetphimu2b2_stack_3);
   
   
   TH1D *phimetphimu2b211 = new TH1D("phimetphimu2b211"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#00cc00");
   phimetphimu2b211->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphimu2b211->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphimu2b211->SetMarkerColor(ci);
   phimetphimu2b211->SetMarkerStyle(22);
   phimetphimu2b211->GetXaxis()->SetTitle("phimetphimu2b2");
   phimetphimu2b211->GetXaxis()->SetLabelFont(42);
   phimetphimu2b211->GetXaxis()->SetLabelSize(0.035);
   phimetphimu2b211->GetXaxis()->SetTitleSize(0.035);
   phimetphimu2b211->GetXaxis()->SetTitleFont(42);
   phimetphimu2b211->GetYaxis()->SetTitle("Events/pb");
   phimetphimu2b211->GetYaxis()->SetLabelFont(42);
   phimetphimu2b211->GetYaxis()->SetLabelSize(0.035);
   phimetphimu2b211->GetYaxis()->SetTitleSize(0.035);
   phimetphimu2b211->GetYaxis()->SetTitleFont(42);
   phimetphimu2b211->GetZaxis()->SetLabelFont(42);
   phimetphimu2b211->GetZaxis()->SetLabelSize(0.035);
   phimetphimu2b211->GetZaxis()->SetTitleSize(0.035);
   phimetphimu2b211->GetZaxis()->SetTitleFont(42);
   b2/phimetphimu2b2->Add(phimetphimu2b2,"");
   
   TH1D *phimetphimu2b212 = new TH1D("phimetphimu2b212"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#00ffff");
   phimetphimu2b212->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphimu2b212->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphimu2b212->SetMarkerColor(ci);
   phimetphimu2b212->SetMarkerStyle(20);
   phimetphimu2b212->GetXaxis()->SetTitle("phimetphimu2b2");
   phimetphimu2b212->GetXaxis()->SetLabelFont(42);
   phimetphimu2b212->GetXaxis()->SetLabelSize(0.035);
   phimetphimu2b212->GetXaxis()->SetTitleSize(0.035);
   phimetphimu2b212->GetXaxis()->SetTitleFont(42);
   phimetphimu2b212->GetYaxis()->SetTitle("Events/pb");
   phimetphimu2b212->GetYaxis()->SetLabelFont(42);
   phimetphimu2b212->GetYaxis()->SetLabelSize(0.035);
   phimetphimu2b212->GetYaxis()->SetTitleSize(0.035);
   phimetphimu2b212->GetYaxis()->SetTitleFont(42);
   phimetphimu2b212->GetZaxis()->SetLabelFont(42);
   phimetphimu2b212->GetZaxis()->SetLabelSize(0.035);
   phimetphimu2b212->GetZaxis()->SetTitleSize(0.035);
   phimetphimu2b212->GetZaxis()->SetTitleFont(42);
   b2/phimetphimu2b2->Add(phimetphimu2b2,"");
   
   TH1D *phimetphimu2b213 = new TH1D("phimetphimu2b213"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#ffcc00");
   phimetphimu2b213->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphimu2b213->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphimu2b213->SetMarkerColor(ci);
   phimetphimu2b213->SetMarkerStyle(21);
   phimetphimu2b213->GetXaxis()->SetTitle("phimetphimu2b2");
   phimetphimu2b213->GetXaxis()->SetLabelFont(42);
   phimetphimu2b213->GetXaxis()->SetLabelSize(0.035);
   phimetphimu2b213->GetXaxis()->SetTitleSize(0.035);
   phimetphimu2b213->GetXaxis()->SetTitleFont(42);
   phimetphimu2b213->GetYaxis()->SetTitle("Events/pb");
   phimetphimu2b213->GetYaxis()->SetLabelFont(42);
   phimetphimu2b213->GetYaxis()->SetLabelSize(0.035);
   phimetphimu2b213->GetYaxis()->SetTitleSize(0.035);
   phimetphimu2b213->GetYaxis()->SetTitleFont(42);
   phimetphimu2b213->GetZaxis()->SetLabelFont(42);
   phimetphimu2b213->GetZaxis()->SetLabelSize(0.035);
   phimetphimu2b213->GetZaxis()->SetTitleSize(0.035);
   phimetphimu2b213->GetZaxis()->SetTitleFont(42);
   b2/phimetphimu2b2->Add(phimetphimu2b2,"");
   
   TH1D *phimetphimu2b214 = new TH1D("phimetphimu2b214"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#ff0000");
   phimetphimu2b214->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphimu2b214->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphimu2b214->SetMarkerColor(ci);
   phimetphimu2b214->SetMarkerStyle(20);
   phimetphimu2b214->GetXaxis()->SetTitle("phimetphimu2b2");
   phimetphimu2b214->GetXaxis()->SetLabelFont(42);
   phimetphimu2b214->GetXaxis()->SetLabelSize(0.035);
   phimetphimu2b214->GetXaxis()->SetTitleSize(0.035);
   phimetphimu2b214->GetXaxis()->SetTitleFont(42);
   phimetphimu2b214->GetYaxis()->SetTitle("Events/pb");
   phimetphimu2b214->GetYaxis()->SetLabelFont(42);
   phimetphimu2b214->GetYaxis()->SetLabelSize(0.035);
   phimetphimu2b214->GetYaxis()->SetTitleSize(0.035);
   phimetphimu2b214->GetYaxis()->SetTitleFont(42);
   phimetphimu2b214->GetZaxis()->SetLabelFont(42);
   phimetphimu2b214->GetZaxis()->SetLabelSize(0.035);
   phimetphimu2b214->GetZaxis()->SetTitleSize(0.035);
   phimetphimu2b214->GetZaxis()->SetTitleFont(42);
   b2/phimetphimu2b2->Add(phimetphimu2b2,"");
   
   TH1D *phimetphimu2b215 = new TH1D("phimetphimu2b215"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#0000ff");
   phimetphimu2b215->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphimu2b215->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphimu2b215->SetMarkerColor(ci);
   phimetphimu2b215->SetMarkerStyle(21);
   phimetphimu2b215->GetXaxis()->SetTitle("phimetphimu2b2");
   phimetphimu2b215->GetXaxis()->SetLabelFont(42);
   phimetphimu2b215->GetXaxis()->SetLabelSize(0.035);
   phimetphimu2b215->GetXaxis()->SetTitleSize(0.035);
   phimetphimu2b215->GetXaxis()->SetTitleFont(42);
   phimetphimu2b215->GetYaxis()->SetTitle("Events/pb");
   phimetphimu2b215->GetYaxis()->SetLabelFont(42);
   phimetphimu2b215->GetYaxis()->SetLabelSize(0.035);
   phimetphimu2b215->GetYaxis()->SetTitleSize(0.035);
   phimetphimu2b215->GetYaxis()->SetTitleFont(42);
   phimetphimu2b215->GetZaxis()->SetLabelFont(42);
   phimetphimu2b215->GetZaxis()->SetLabelSize(0.035);
   phimetphimu2b215->GetZaxis()->SetTitleSize(0.035);
   phimetphimu2b215->GetZaxis()->SetTitleFont(42);
   b2/phimetphimu2b2->Add(phimetphimu2b2,"");
   b2/phimetphimu2b2->Draw("nostack");
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimetphimu2b2","b2/phimetphimu2b2_QCD_b2/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphimu2b2","b2/phimetphimu2b2_WJetsToLNu_b2/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphimu2b2","b2/phimetphimu2b2_ZJetsToNuNu_b2/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphimu2b2","b2/phimetphimu2b2_signal_b2/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphimu2b2","b2/phimetphimu2b2_ttbar_b2/","lp");

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
   b2/phimetphimu2b2->Modified();
   b2/phimetphimu2b2->cd();
   b2/phimetphimu2b2->SetSelected(b2/phimetphimu2b2);
}
