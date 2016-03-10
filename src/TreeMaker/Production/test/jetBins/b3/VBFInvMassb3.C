void VBFInvMassb3()
{
//=========Macro generated from canvas: b3/VBFInvMassb3/b3/VBFInvMassb3
//=========  (Tue Nov 24 14:23:56 2015) by ROOT version6.02/05
   TCanvas *b3/VBFInvMassb3 = new TCanvas("b3/VBFInvMassb3", "b3/VBFInvMassb3",80,102,700,700);
   b3/VBFInvMassb3->Range(0,0,1,1);
   b3/VBFInvMassb3->SetFillColor(0);
   b3/VBFInvMassb3->SetBorderMode(0);
   b3/VBFInvMassb3->SetBorderSize(2);
   b3/VBFInvMassb3->SetLogy();
   b3/VBFInvMassb3->SetFrameBorderMode(0);
   b3/VBFInvMassb3->SetFrameBorderMode(0);
   
   THStack *b3/VBFInvMassb3 = new THStack();
   b3/VBFInvMassb3->SetName("b3/VBFInvMassb3");
   b3/VBFInvMassb3->SetTitle("b3/VBFInvMassb3");
   
   TH1F *b3/VBFInvMassb3_stack_5 = new TH1F("b3/VBFInvMassb3_stack_5","b3/VBFInvMassb3",40,0,2000);
   b3/VBFInvMassb3_stack_5->SetMinimum(-0);
   b3/VBFInvMassb3_stack_5->SetMaximum(-nan);
   b3/VBFInvMassb3_stack_5->SetDirectory(0);
   b3/VBFInvMassb3_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b3/VBFInvMassb3_stack_5->SetLineColor(ci);
   b3/VBFInvMassb3_stack_5->GetXaxis()->SetTitle("b3/VBFInvMassb3");
   b3/VBFInvMassb3_stack_5->GetXaxis()->SetLabelFont(42);
   b3/VBFInvMassb3_stack_5->GetXaxis()->SetLabelSize(0.035);
   b3/VBFInvMassb3_stack_5->GetXaxis()->SetTitleSize(0.035);
   b3/VBFInvMassb3_stack_5->GetXaxis()->SetTitleFont(42);
   b3/VBFInvMassb3_stack_5->GetYaxis()->SetTitle("Events/pb");
   b3/VBFInvMassb3_stack_5->GetYaxis()->SetLabelFont(42);
   b3/VBFInvMassb3_stack_5->GetYaxis()->SetLabelSize(0.035);
   b3/VBFInvMassb3_stack_5->GetYaxis()->SetTitleSize(0.035);
   b3/VBFInvMassb3_stack_5->GetYaxis()->SetTitleFont(42);
   b3/VBFInvMassb3_stack_5->GetZaxis()->SetLabelFont(42);
   b3/VBFInvMassb3_stack_5->GetZaxis()->SetLabelSize(0.035);
   b3/VBFInvMassb3_stack_5->GetZaxis()->SetTitleSize(0.035);
   b3/VBFInvMassb3_stack_5->GetZaxis()->SetTitleFont(42);
   b3/VBFInvMassb3->SetHistogram(b3/VBFInvMassb3_stack_5);
   
   
   TH1D *VBFInvMassb321 = new TH1D("VBFInvMassb321","m_{jj} + VBF cuts",40,0,2000);

   ci = TColor::GetColor("#00cc00");
   VBFInvMassb321->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   VBFInvMassb321->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   VBFInvMassb321->SetMarkerColor(ci);
   VBFInvMassb321->SetMarkerStyle(22);
   VBFInvMassb321->GetXaxis()->SetTitle("VBFInvMassb3");
   VBFInvMassb321->GetXaxis()->SetLabelFont(42);
   VBFInvMassb321->GetXaxis()->SetLabelSize(0.035);
   VBFInvMassb321->GetXaxis()->SetTitleSize(0.035);
   VBFInvMassb321->GetXaxis()->SetTitleFont(42);
   VBFInvMassb321->GetYaxis()->SetTitle("Events/pb");
   VBFInvMassb321->GetYaxis()->SetLabelFont(42);
   VBFInvMassb321->GetYaxis()->SetLabelSize(0.035);
   VBFInvMassb321->GetYaxis()->SetTitleSize(0.035);
   VBFInvMassb321->GetYaxis()->SetTitleFont(42);
   VBFInvMassb321->GetZaxis()->SetLabelFont(42);
   VBFInvMassb321->GetZaxis()->SetLabelSize(0.035);
   VBFInvMassb321->GetZaxis()->SetTitleSize(0.035);
   VBFInvMassb321->GetZaxis()->SetTitleFont(42);
   b3/VBFInvMassb3->Add(VBFInvMassb3,"");
   
   TH1D *VBFInvMassb322 = new TH1D("VBFInvMassb322","m_{jj} + VBF cuts",40,0,2000);

   ci = TColor::GetColor("#00ffff");
   VBFInvMassb322->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   VBFInvMassb322->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   VBFInvMassb322->SetMarkerColor(ci);
   VBFInvMassb322->SetMarkerStyle(20);
   VBFInvMassb322->GetXaxis()->SetTitle("VBFInvMassb3");
   VBFInvMassb322->GetXaxis()->SetLabelFont(42);
   VBFInvMassb322->GetXaxis()->SetLabelSize(0.035);
   VBFInvMassb322->GetXaxis()->SetTitleSize(0.035);
   VBFInvMassb322->GetXaxis()->SetTitleFont(42);
   VBFInvMassb322->GetYaxis()->SetTitle("Events/pb");
   VBFInvMassb322->GetYaxis()->SetLabelFont(42);
   VBFInvMassb322->GetYaxis()->SetLabelSize(0.035);
   VBFInvMassb322->GetYaxis()->SetTitleSize(0.035);
   VBFInvMassb322->GetYaxis()->SetTitleFont(42);
   VBFInvMassb322->GetZaxis()->SetLabelFont(42);
   VBFInvMassb322->GetZaxis()->SetLabelSize(0.035);
   VBFInvMassb322->GetZaxis()->SetTitleSize(0.035);
   VBFInvMassb322->GetZaxis()->SetTitleFont(42);
   b3/VBFInvMassb3->Add(VBFInvMassb3,"");
   
   TH1D *VBFInvMassb323 = new TH1D("VBFInvMassb323","m_{jj} + VBF cuts",40,0,2000);

   ci = TColor::GetColor("#ffcc00");
   VBFInvMassb323->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   VBFInvMassb323->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   VBFInvMassb323->SetMarkerColor(ci);
   VBFInvMassb323->SetMarkerStyle(21);
   VBFInvMassb323->GetXaxis()->SetTitle("VBFInvMassb3");
   VBFInvMassb323->GetXaxis()->SetLabelFont(42);
   VBFInvMassb323->GetXaxis()->SetLabelSize(0.035);
   VBFInvMassb323->GetXaxis()->SetTitleSize(0.035);
   VBFInvMassb323->GetXaxis()->SetTitleFont(42);
   VBFInvMassb323->GetYaxis()->SetTitle("Events/pb");
   VBFInvMassb323->GetYaxis()->SetLabelFont(42);
   VBFInvMassb323->GetYaxis()->SetLabelSize(0.035);
   VBFInvMassb323->GetYaxis()->SetTitleSize(0.035);
   VBFInvMassb323->GetYaxis()->SetTitleFont(42);
   VBFInvMassb323->GetZaxis()->SetLabelFont(42);
   VBFInvMassb323->GetZaxis()->SetLabelSize(0.035);
   VBFInvMassb323->GetZaxis()->SetTitleSize(0.035);
   VBFInvMassb323->GetZaxis()->SetTitleFont(42);
   b3/VBFInvMassb3->Add(VBFInvMassb3,"");
   
   TH1D *VBFInvMassb324 = new TH1D("VBFInvMassb324","m_{jj} + VBF cuts",40,0,2000);

   ci = TColor::GetColor("#ff0000");
   VBFInvMassb324->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   VBFInvMassb324->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   VBFInvMassb324->SetMarkerColor(ci);
   VBFInvMassb324->SetMarkerStyle(20);
   VBFInvMassb324->GetXaxis()->SetTitle("VBFInvMassb3");
   VBFInvMassb324->GetXaxis()->SetLabelFont(42);
   VBFInvMassb324->GetXaxis()->SetLabelSize(0.035);
   VBFInvMassb324->GetXaxis()->SetTitleSize(0.035);
   VBFInvMassb324->GetXaxis()->SetTitleFont(42);
   VBFInvMassb324->GetYaxis()->SetTitle("Events/pb");
   VBFInvMassb324->GetYaxis()->SetLabelFont(42);
   VBFInvMassb324->GetYaxis()->SetLabelSize(0.035);
   VBFInvMassb324->GetYaxis()->SetTitleSize(0.035);
   VBFInvMassb324->GetYaxis()->SetTitleFont(42);
   VBFInvMassb324->GetZaxis()->SetLabelFont(42);
   VBFInvMassb324->GetZaxis()->SetLabelSize(0.035);
   VBFInvMassb324->GetZaxis()->SetTitleSize(0.035);
   VBFInvMassb324->GetZaxis()->SetTitleFont(42);
   b3/VBFInvMassb3->Add(VBFInvMassb3,"");
   
   TH1D *VBFInvMassb325 = new TH1D("VBFInvMassb325","m_{jj} + VBF cuts",40,0,2000);

   ci = TColor::GetColor("#0000ff");
   VBFInvMassb325->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   VBFInvMassb325->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   VBFInvMassb325->SetMarkerColor(ci);
   VBFInvMassb325->SetMarkerStyle(21);
   VBFInvMassb325->GetXaxis()->SetTitle("VBFInvMassb3");
   VBFInvMassb325->GetXaxis()->SetLabelFont(42);
   VBFInvMassb325->GetXaxis()->SetLabelSize(0.035);
   VBFInvMassb325->GetXaxis()->SetTitleSize(0.035);
   VBFInvMassb325->GetXaxis()->SetTitleFont(42);
   VBFInvMassb325->GetYaxis()->SetTitle("Events/pb");
   VBFInvMassb325->GetYaxis()->SetLabelFont(42);
   VBFInvMassb325->GetYaxis()->SetLabelSize(0.035);
   VBFInvMassb325->GetYaxis()->SetTitleSize(0.035);
   VBFInvMassb325->GetYaxis()->SetTitleFont(42);
   VBFInvMassb325->GetZaxis()->SetLabelFont(42);
   VBFInvMassb325->GetZaxis()->SetLabelSize(0.035);
   VBFInvMassb325->GetZaxis()->SetTitleSize(0.035);
   VBFInvMassb325->GetZaxis()->SetTitleFont(42);
   b3/VBFInvMassb3->Add(VBFInvMassb3,"");
   b3/VBFInvMassb3->Draw("nostack");
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VBFInvMassb3","b3/VBFInvMassb3_QCD_b3/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VBFInvMassb3","b3/VBFInvMassb3_WJetsToLNu_b3/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VBFInvMassb3","b3/VBFInvMassb3_ZJetsToNuNu_b3/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VBFInvMassb3","b3/VBFInvMassb3_signal_b3/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VBFInvMassb3","b3/VBFInvMassb3_ttbar_b3/","lp");

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
   b3/VBFInvMassb3->Modified();
   b3/VBFInvMassb3->cd();
   b3/VBFInvMassb3->SetSelected(b3/VBFInvMassb3);
}
