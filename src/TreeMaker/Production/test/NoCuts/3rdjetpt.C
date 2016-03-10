void 3rdjetpt()
{
//=========Macro generated from canvas: 3rdjetpt/3rdjetpt
//=========  (Mon Nov 23 11:04:57 2015) by ROOT version6.02/05
   TCanvas *3rdjetpt = new TCanvas("3rdjetpt", "3rdjetpt",20,42,700,700);
   3rdjetpt->Range(0,0,1,1);
   3rdjetpt->SetFillColor(0);
   3rdjetpt->SetBorderMode(0);
   3rdjetpt->SetBorderSize(2);
   3rdjetpt->SetLogy();
   3rdjetpt->SetFrameBorderMode(0);
   3rdjetpt->SetFrameBorderMode(0);
   
   THStack *3rdjetpt = new THStack();
   3rdjetpt->SetName("3rdjetpt");
   3rdjetpt->SetTitle("3rdjetpt");
   
   TH1F *3rdjetpt_stack_2 = new TH1F("3rdjetpt_stack_2","3rdjetpt",32,30,800);
   3rdjetpt_stack_2->SetMinimum(-0);
   3rdjetpt_stack_2->SetMaximum(-nan);
   3rdjetpt_stack_2->SetDirectory(0);
   3rdjetpt_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   3rdjetpt_stack_2->SetLineColor(ci);
   3rdjetpt_stack_2->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt_stack_2->GetXaxis()->SetLabelFont(42);
   3rdjetpt_stack_2->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt_stack_2->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt_stack_2->GetXaxis()->SetTitleFont(42);
   3rdjetpt_stack_2->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt_stack_2->GetYaxis()->SetLabelFont(42);
   3rdjetpt_stack_2->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt_stack_2->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt_stack_2->GetYaxis()->SetTitleFont(42);
   3rdjetpt_stack_2->GetZaxis()->SetLabelFont(42);
   3rdjetpt_stack_2->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt_stack_2->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt_stack_2->GetZaxis()->SetTitleFont(42);
   3rdjetpt->SetHistogram(3rdjetpt_stack_2);
   
   
   TH1D *3rdjetpt6 = new TH1D("3rdjetpt6","p_{T}^{3rd jet}",32,30,800);

   ci = TColor::GetColor("#00cc00");
   3rdjetpt6->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   3rdjetpt6->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   3rdjetpt6->SetMarkerColor(ci);
   3rdjetpt6->SetMarkerStyle(22);
   3rdjetpt6->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt6->GetXaxis()->SetLabelFont(42);
   3rdjetpt6->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt6->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt6->GetXaxis()->SetTitleFont(42);
   3rdjetpt6->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt6->GetYaxis()->SetLabelFont(42);
   3rdjetpt6->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt6->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt6->GetYaxis()->SetTitleFont(42);
   3rdjetpt6->GetZaxis()->SetLabelFont(42);
   3rdjetpt6->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt6->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt6->GetZaxis()->SetTitleFont(42);
   3rdjetpt->Add(3rdjetpt,"");
   
   TH1D *3rdjetpt7 = new TH1D("3rdjetpt7","p_{T}^{3rd jet}",32,30,800);

   ci = TColor::GetColor("#00ffff");
   3rdjetpt7->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   3rdjetpt7->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   3rdjetpt7->SetMarkerColor(ci);
   3rdjetpt7->SetMarkerStyle(20);
   3rdjetpt7->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt7->GetXaxis()->SetLabelFont(42);
   3rdjetpt7->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt7->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt7->GetXaxis()->SetTitleFont(42);
   3rdjetpt7->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt7->GetYaxis()->SetLabelFont(42);
   3rdjetpt7->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt7->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt7->GetYaxis()->SetTitleFont(42);
   3rdjetpt7->GetZaxis()->SetLabelFont(42);
   3rdjetpt7->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt7->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt7->GetZaxis()->SetTitleFont(42);
   3rdjetpt->Add(3rdjetpt,"");
   
   TH1D *3rdjetpt8 = new TH1D("3rdjetpt8","p_{T}^{3rd jet}",32,30,800);

   ci = TColor::GetColor("#ffcc00");
   3rdjetpt8->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   3rdjetpt8->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   3rdjetpt8->SetMarkerColor(ci);
   3rdjetpt8->SetMarkerStyle(21);
   3rdjetpt8->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt8->GetXaxis()->SetLabelFont(42);
   3rdjetpt8->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt8->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt8->GetXaxis()->SetTitleFont(42);
   3rdjetpt8->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt8->GetYaxis()->SetLabelFont(42);
   3rdjetpt8->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt8->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt8->GetYaxis()->SetTitleFont(42);
   3rdjetpt8->GetZaxis()->SetLabelFont(42);
   3rdjetpt8->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt8->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt8->GetZaxis()->SetTitleFont(42);
   3rdjetpt->Add(3rdjetpt,"");
   
   TH1D *3rdjetpt9 = new TH1D("3rdjetpt9","p_{T}^{3rd jet}",32,30,800);

   ci = TColor::GetColor("#ff0000");
   3rdjetpt9->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   3rdjetpt9->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   3rdjetpt9->SetMarkerColor(ci);
   3rdjetpt9->SetMarkerStyle(20);
   3rdjetpt9->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt9->GetXaxis()->SetLabelFont(42);
   3rdjetpt9->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt9->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt9->GetXaxis()->SetTitleFont(42);
   3rdjetpt9->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt9->GetYaxis()->SetLabelFont(42);
   3rdjetpt9->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt9->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt9->GetYaxis()->SetTitleFont(42);
   3rdjetpt9->GetZaxis()->SetLabelFont(42);
   3rdjetpt9->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt9->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt9->GetZaxis()->SetTitleFont(42);
   3rdjetpt->Add(3rdjetpt,"");
   
   TH1D *3rdjetpt10 = new TH1D("3rdjetpt10","p_{T}^{3rd jet}",32,30,800);

   ci = TColor::GetColor("#0000ff");
   3rdjetpt10->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   3rdjetpt10->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   3rdjetpt10->SetMarkerColor(ci);
   3rdjetpt10->SetMarkerStyle(21);
   3rdjetpt10->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt10->GetXaxis()->SetLabelFont(42);
   3rdjetpt10->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt10->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt10->GetXaxis()->SetTitleFont(42);
   3rdjetpt10->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt10->GetYaxis()->SetLabelFont(42);
   3rdjetpt10->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt10->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt10->GetYaxis()->SetTitleFont(42);
   3rdjetpt10->GetZaxis()->SetLabelFont(42);
   3rdjetpt10->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt10->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt10->GetZaxis()->SetTitleFont(42);
   3rdjetpt->Add(3rdjetpt,"");
   3rdjetpt->Draw("nostack");
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("3rdjetpt","3rdjetpt_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("3rdjetpt","3rdjetpt_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("3rdjetpt","3rdjetpt_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("3rdjetpt","3rdjetpt_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("3rdjetpt","3rdjetpt_ttbar","lp");

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
   3rdjetpt->Modified();
   3rdjetpt->cd();
   3rdjetpt->SetSelected(3rdjetpt);
}
