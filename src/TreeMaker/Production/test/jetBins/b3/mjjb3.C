void mjjb3()
{
//=========Macro generated from canvas: b3/mjjb3/b3/mjjb3
//=========  (Tue Nov 24 14:24:01 2015) by ROOT version6.02/05
   TCanvas *b3/mjjb3 = new TCanvas("b3/mjjb3", "b3/mjjb3",220,242,700,700);
   b3/mjjb3->Range(0,0,1,1);
   b3/mjjb3->SetFillColor(0);
   b3/mjjb3->SetBorderMode(0);
   b3/mjjb3->SetBorderSize(2);
   b3/mjjb3->SetLogy();
   b3/mjjb3->SetFrameBorderMode(0);
   b3/mjjb3->SetFrameBorderMode(0);
   
   THStack *b3/mjjb3 = new THStack();
   b3/mjjb3->SetName("b3/mjjb3");
   b3/mjjb3->SetTitle("b3/mjjb3");
   
   TH1F *b3/mjjb3_stack_12 = new TH1F("b3/mjjb3_stack_12","b3/mjjb3",40,0,2000);
   b3/mjjb3_stack_12->SetMinimum(-0);
   b3/mjjb3_stack_12->SetMaximum(-nan);
   b3/mjjb3_stack_12->SetDirectory(0);
   b3/mjjb3_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b3/mjjb3_stack_12->SetLineColor(ci);
   b3/mjjb3_stack_12->GetXaxis()->SetTitle("b3/mjjb3");
   b3/mjjb3_stack_12->GetXaxis()->SetLabelFont(42);
   b3/mjjb3_stack_12->GetXaxis()->SetLabelSize(0.035);
   b3/mjjb3_stack_12->GetXaxis()->SetTitleSize(0.035);
   b3/mjjb3_stack_12->GetXaxis()->SetTitleFont(42);
   b3/mjjb3_stack_12->GetYaxis()->SetTitle("Events/pb");
   b3/mjjb3_stack_12->GetYaxis()->SetLabelFont(42);
   b3/mjjb3_stack_12->GetYaxis()->SetLabelSize(0.035);
   b3/mjjb3_stack_12->GetYaxis()->SetTitleSize(0.035);
   b3/mjjb3_stack_12->GetYaxis()->SetTitleFont(42);
   b3/mjjb3_stack_12->GetZaxis()->SetLabelFont(42);
   b3/mjjb3_stack_12->GetZaxis()->SetLabelSize(0.035);
   b3/mjjb3_stack_12->GetZaxis()->SetTitleSize(0.035);
   b3/mjjb3_stack_12->GetZaxis()->SetTitleFont(42);
   b3/mjjb3->SetHistogram(b3/mjjb3_stack_12);
   
   
   TH1D *mjjb356 = new TH1D("mjjb356","m_{jj}",40,0,2000);

   ci = TColor::GetColor("#00cc00");
   mjjb356->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   mjjb356->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   mjjb356->SetMarkerColor(ci);
   mjjb356->SetMarkerStyle(22);
   mjjb356->GetXaxis()->SetTitle("mjjb3");
   mjjb356->GetXaxis()->SetLabelFont(42);
   mjjb356->GetXaxis()->SetLabelSize(0.035);
   mjjb356->GetXaxis()->SetTitleSize(0.035);
   mjjb356->GetXaxis()->SetTitleFont(42);
   mjjb356->GetYaxis()->SetTitle("Events/pb");
   mjjb356->GetYaxis()->SetLabelFont(42);
   mjjb356->GetYaxis()->SetLabelSize(0.035);
   mjjb356->GetYaxis()->SetTitleSize(0.035);
   mjjb356->GetYaxis()->SetTitleFont(42);
   mjjb356->GetZaxis()->SetLabelFont(42);
   mjjb356->GetZaxis()->SetLabelSize(0.035);
   mjjb356->GetZaxis()->SetTitleSize(0.035);
   mjjb356->GetZaxis()->SetTitleFont(42);
   b3/mjjb3->Add(mjjb3,"");
   
   TH1D *mjjb357 = new TH1D("mjjb357","m_{jj}",40,0,2000);

   ci = TColor::GetColor("#00ffff");
   mjjb357->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   mjjb357->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   mjjb357->SetMarkerColor(ci);
   mjjb357->SetMarkerStyle(20);
   mjjb357->GetXaxis()->SetTitle("mjjb3");
   mjjb357->GetXaxis()->SetLabelFont(42);
   mjjb357->GetXaxis()->SetLabelSize(0.035);
   mjjb357->GetXaxis()->SetTitleSize(0.035);
   mjjb357->GetXaxis()->SetTitleFont(42);
   mjjb357->GetYaxis()->SetTitle("Events/pb");
   mjjb357->GetYaxis()->SetLabelFont(42);
   mjjb357->GetYaxis()->SetLabelSize(0.035);
   mjjb357->GetYaxis()->SetTitleSize(0.035);
   mjjb357->GetYaxis()->SetTitleFont(42);
   mjjb357->GetZaxis()->SetLabelFont(42);
   mjjb357->GetZaxis()->SetLabelSize(0.035);
   mjjb357->GetZaxis()->SetTitleSize(0.035);
   mjjb357->GetZaxis()->SetTitleFont(42);
   b3/mjjb3->Add(mjjb3,"");
   
   TH1D *mjjb358 = new TH1D("mjjb358","m_{jj}",40,0,2000);

   ci = TColor::GetColor("#ffcc00");
   mjjb358->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   mjjb358->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   mjjb358->SetMarkerColor(ci);
   mjjb358->SetMarkerStyle(21);
   mjjb358->GetXaxis()->SetTitle("mjjb3");
   mjjb358->GetXaxis()->SetLabelFont(42);
   mjjb358->GetXaxis()->SetLabelSize(0.035);
   mjjb358->GetXaxis()->SetTitleSize(0.035);
   mjjb358->GetXaxis()->SetTitleFont(42);
   mjjb358->GetYaxis()->SetTitle("Events/pb");
   mjjb358->GetYaxis()->SetLabelFont(42);
   mjjb358->GetYaxis()->SetLabelSize(0.035);
   mjjb358->GetYaxis()->SetTitleSize(0.035);
   mjjb358->GetYaxis()->SetTitleFont(42);
   mjjb358->GetZaxis()->SetLabelFont(42);
   mjjb358->GetZaxis()->SetLabelSize(0.035);
   mjjb358->GetZaxis()->SetTitleSize(0.035);
   mjjb358->GetZaxis()->SetTitleFont(42);
   b3/mjjb3->Add(mjjb3,"");
   
   TH1D *mjjb359 = new TH1D("mjjb359","m_{jj}",40,0,2000);

   ci = TColor::GetColor("#ff0000");
   mjjb359->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   mjjb359->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   mjjb359->SetMarkerColor(ci);
   mjjb359->SetMarkerStyle(20);
   mjjb359->GetXaxis()->SetTitle("mjjb3");
   mjjb359->GetXaxis()->SetLabelFont(42);
   mjjb359->GetXaxis()->SetLabelSize(0.035);
   mjjb359->GetXaxis()->SetTitleSize(0.035);
   mjjb359->GetXaxis()->SetTitleFont(42);
   mjjb359->GetYaxis()->SetTitle("Events/pb");
   mjjb359->GetYaxis()->SetLabelFont(42);
   mjjb359->GetYaxis()->SetLabelSize(0.035);
   mjjb359->GetYaxis()->SetTitleSize(0.035);
   mjjb359->GetYaxis()->SetTitleFont(42);
   mjjb359->GetZaxis()->SetLabelFont(42);
   mjjb359->GetZaxis()->SetLabelSize(0.035);
   mjjb359->GetZaxis()->SetTitleSize(0.035);
   mjjb359->GetZaxis()->SetTitleFont(42);
   b3/mjjb3->Add(mjjb3,"");
   
   TH1D *mjjb360 = new TH1D("mjjb360","m_{jj}",40,0,2000);

   ci = TColor::GetColor("#0000ff");
   mjjb360->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   mjjb360->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   mjjb360->SetMarkerColor(ci);
   mjjb360->SetMarkerStyle(21);
   mjjb360->GetXaxis()->SetTitle("mjjb3");
   mjjb360->GetXaxis()->SetLabelFont(42);
   mjjb360->GetXaxis()->SetLabelSize(0.035);
   mjjb360->GetXaxis()->SetTitleSize(0.035);
   mjjb360->GetXaxis()->SetTitleFont(42);
   mjjb360->GetYaxis()->SetTitle("Events/pb");
   mjjb360->GetYaxis()->SetLabelFont(42);
   mjjb360->GetYaxis()->SetLabelSize(0.035);
   mjjb360->GetYaxis()->SetTitleSize(0.035);
   mjjb360->GetYaxis()->SetTitleFont(42);
   mjjb360->GetZaxis()->SetLabelFont(42);
   mjjb360->GetZaxis()->SetLabelSize(0.035);
   mjjb360->GetZaxis()->SetTitleSize(0.035);
   mjjb360->GetZaxis()->SetTitleFont(42);
   b3/mjjb3->Add(mjjb3,"");
   b3/mjjb3->Draw("nostack");
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("mjjb3","b3/mjjb3_QCD_b3/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mjjb3","b3/mjjb3_WJetsToLNu_b3/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mjjb3","b3/mjjb3_ZJetsToNuNu_b3/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mjjb3","b3/mjjb3_signal_b3/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mjjb3","b3/mjjb3_ttbar_b3/","lp");

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
   b3/mjjb3->Modified();
   b3/mjjb3->cd();
   b3/mjjb3->SetSelected(b3/mjjb3);
}
