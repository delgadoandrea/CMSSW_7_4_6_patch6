void phimetphijet4()
{
//=========Macro generated from canvas: phimetphijet4/phimetphijet4
//=========  (Mon Nov 23 11:05:11 2015) by ROOT version6.02/05
   TCanvas *phimetphijet4 = new TCanvas("phimetphijet4", "phimetphijet4",320,342,700,700);
   phimetphijet4->Range(0,0,1,1);
   phimetphijet4->SetFillColor(0);
   phimetphijet4->SetBorderMode(0);
   phimetphijet4->SetBorderSize(2);
   phimetphijet4->SetLogy();
   phimetphijet4->SetFrameBorderMode(0);
   phimetphijet4->SetFrameBorderMode(0);
   
   THStack *phimetphijet4 = new THStack();
   phimetphijet4->SetName("phimetphijet4");
   phimetphijet4->SetTitle("phimetphijet4");
   
   TH1F *phimetphijet4_stack_21 = new TH1F("phimetphijet4_stack_21","phimetphijet4",20,-3.141593,3.141593);
   phimetphijet4_stack_21->SetMinimum(-0);
   phimetphijet4_stack_21->SetMaximum(-nan);
   phimetphijet4_stack_21->SetDirectory(0);
   phimetphijet4_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   phimetphijet4_stack_21->SetLineColor(ci);
   phimetphijet4_stack_21->GetXaxis()->SetTitle("phimetphijet4");
   phimetphijet4_stack_21->GetXaxis()->SetLabelFont(42);
   phimetphijet4_stack_21->GetXaxis()->SetLabelSize(0.035);
   phimetphijet4_stack_21->GetXaxis()->SetTitleSize(0.035);
   phimetphijet4_stack_21->GetXaxis()->SetTitleFont(42);
   phimetphijet4_stack_21->GetYaxis()->SetTitle("Events/pb");
   phimetphijet4_stack_21->GetYaxis()->SetLabelFont(42);
   phimetphijet4_stack_21->GetYaxis()->SetLabelSize(0.035);
   phimetphijet4_stack_21->GetYaxis()->SetTitleSize(0.035);
   phimetphijet4_stack_21->GetYaxis()->SetTitleFont(42);
   phimetphijet4_stack_21->GetZaxis()->SetLabelFont(42);
   phimetphijet4_stack_21->GetZaxis()->SetLabelSize(0.035);
   phimetphijet4_stack_21->GetZaxis()->SetTitleSize(0.035);
   phimetphijet4_stack_21->GetZaxis()->SetTitleFont(42);
   phimetphijet4->SetHistogram(phimetphijet4_stack_21);
   
   
   TH1D *phimetphijet4101 = new TH1D("phimetphijet4101"," #Delta_{#phi}[MET,jet_{4}]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#00cc00");
   phimetphijet4101->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphijet4101->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphijet4101->SetMarkerColor(ci);
   phimetphijet4101->SetMarkerStyle(22);
   phimetphijet4101->GetXaxis()->SetTitle("phimetphijet4");
   phimetphijet4101->GetXaxis()->SetLabelFont(42);
   phimetphijet4101->GetXaxis()->SetLabelSize(0.035);
   phimetphijet4101->GetXaxis()->SetTitleSize(0.035);
   phimetphijet4101->GetXaxis()->SetTitleFont(42);
   phimetphijet4101->GetYaxis()->SetTitle("Events/pb");
   phimetphijet4101->GetYaxis()->SetLabelFont(42);
   phimetphijet4101->GetYaxis()->SetLabelSize(0.035);
   phimetphijet4101->GetYaxis()->SetTitleSize(0.035);
   phimetphijet4101->GetYaxis()->SetTitleFont(42);
   phimetphijet4101->GetZaxis()->SetLabelFont(42);
   phimetphijet4101->GetZaxis()->SetLabelSize(0.035);
   phimetphijet4101->GetZaxis()->SetTitleSize(0.035);
   phimetphijet4101->GetZaxis()->SetTitleFont(42);
   phimetphijet4->Add(phimetphijet4,"");
   
   TH1D *phimetphijet4102 = new TH1D("phimetphijet4102"," #Delta_{#phi}[MET,jet_{4}]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#00ffff");
   phimetphijet4102->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphijet4102->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphijet4102->SetMarkerColor(ci);
   phimetphijet4102->SetMarkerStyle(20);
   phimetphijet4102->GetXaxis()->SetTitle("phimetphijet4");
   phimetphijet4102->GetXaxis()->SetLabelFont(42);
   phimetphijet4102->GetXaxis()->SetLabelSize(0.035);
   phimetphijet4102->GetXaxis()->SetTitleSize(0.035);
   phimetphijet4102->GetXaxis()->SetTitleFont(42);
   phimetphijet4102->GetYaxis()->SetTitle("Events/pb");
   phimetphijet4102->GetYaxis()->SetLabelFont(42);
   phimetphijet4102->GetYaxis()->SetLabelSize(0.035);
   phimetphijet4102->GetYaxis()->SetTitleSize(0.035);
   phimetphijet4102->GetYaxis()->SetTitleFont(42);
   phimetphijet4102->GetZaxis()->SetLabelFont(42);
   phimetphijet4102->GetZaxis()->SetLabelSize(0.035);
   phimetphijet4102->GetZaxis()->SetTitleSize(0.035);
   phimetphijet4102->GetZaxis()->SetTitleFont(42);
   phimetphijet4->Add(phimetphijet4,"");
   
   TH1D *phimetphijet4103 = new TH1D("phimetphijet4103"," #Delta_{#phi}[MET,jet_{4}]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#ffcc00");
   phimetphijet4103->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphijet4103->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphijet4103->SetMarkerColor(ci);
   phimetphijet4103->SetMarkerStyle(21);
   phimetphijet4103->GetXaxis()->SetTitle("phimetphijet4");
   phimetphijet4103->GetXaxis()->SetLabelFont(42);
   phimetphijet4103->GetXaxis()->SetLabelSize(0.035);
   phimetphijet4103->GetXaxis()->SetTitleSize(0.035);
   phimetphijet4103->GetXaxis()->SetTitleFont(42);
   phimetphijet4103->GetYaxis()->SetTitle("Events/pb");
   phimetphijet4103->GetYaxis()->SetLabelFont(42);
   phimetphijet4103->GetYaxis()->SetLabelSize(0.035);
   phimetphijet4103->GetYaxis()->SetTitleSize(0.035);
   phimetphijet4103->GetYaxis()->SetTitleFont(42);
   phimetphijet4103->GetZaxis()->SetLabelFont(42);
   phimetphijet4103->GetZaxis()->SetLabelSize(0.035);
   phimetphijet4103->GetZaxis()->SetTitleSize(0.035);
   phimetphijet4103->GetZaxis()->SetTitleFont(42);
   phimetphijet4->Add(phimetphijet4,"");
   
   TH1D *phimetphijet4104 = new TH1D("phimetphijet4104"," #Delta_{#phi}[MET,jet_{4}]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#ff0000");
   phimetphijet4104->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphijet4104->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphijet4104->SetMarkerColor(ci);
   phimetphijet4104->SetMarkerStyle(20);
   phimetphijet4104->GetXaxis()->SetTitle("phimetphijet4");
   phimetphijet4104->GetXaxis()->SetLabelFont(42);
   phimetphijet4104->GetXaxis()->SetLabelSize(0.035);
   phimetphijet4104->GetXaxis()->SetTitleSize(0.035);
   phimetphijet4104->GetXaxis()->SetTitleFont(42);
   phimetphijet4104->GetYaxis()->SetTitle("Events/pb");
   phimetphijet4104->GetYaxis()->SetLabelFont(42);
   phimetphijet4104->GetYaxis()->SetLabelSize(0.035);
   phimetphijet4104->GetYaxis()->SetTitleSize(0.035);
   phimetphijet4104->GetYaxis()->SetTitleFont(42);
   phimetphijet4104->GetZaxis()->SetLabelFont(42);
   phimetphijet4104->GetZaxis()->SetLabelSize(0.035);
   phimetphijet4104->GetZaxis()->SetTitleSize(0.035);
   phimetphijet4104->GetZaxis()->SetTitleFont(42);
   phimetphijet4->Add(phimetphijet4,"");
   
   TH1D *phimetphijet4105 = new TH1D("phimetphijet4105"," #Delta_{#phi}[MET,jet_{4}]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#0000ff");
   phimetphijet4105->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphijet4105->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphijet4105->SetMarkerColor(ci);
   phimetphijet4105->SetMarkerStyle(21);
   phimetphijet4105->GetXaxis()->SetTitle("phimetphijet4");
   phimetphijet4105->GetXaxis()->SetLabelFont(42);
   phimetphijet4105->GetXaxis()->SetLabelSize(0.035);
   phimetphijet4105->GetXaxis()->SetTitleSize(0.035);
   phimetphijet4105->GetXaxis()->SetTitleFont(42);
   phimetphijet4105->GetYaxis()->SetTitle("Events/pb");
   phimetphijet4105->GetYaxis()->SetLabelFont(42);
   phimetphijet4105->GetYaxis()->SetLabelSize(0.035);
   phimetphijet4105->GetYaxis()->SetTitleSize(0.035);
   phimetphijet4105->GetYaxis()->SetTitleFont(42);
   phimetphijet4105->GetZaxis()->SetLabelFont(42);
   phimetphijet4105->GetZaxis()->SetLabelSize(0.035);
   phimetphijet4105->GetZaxis()->SetTitleSize(0.035);
   phimetphijet4105->GetZaxis()->SetTitleFont(42);
   phimetphijet4->Add(phimetphijet4,"");
   phimetphijet4->Draw("nostack");
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimetphijet4","phimetphijet4_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphijet4","phimetphijet4_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphijet4","phimetphijet4_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphijet4","phimetphijet4_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphijet4","phimetphijet4_ttbar","lp");

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
   phimetphijet4->Modified();
   phimetphijet4->cd();
   phimetphijet4->SetSelected(phimetphijet4);
}
