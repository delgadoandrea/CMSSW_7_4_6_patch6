void 4rthjetpt()
{
//=========Macro generated from canvas: 4rthjetpt/4rthjetpt
//=========  (Mon Nov 23 11:04:57 2015) by ROOT version6.02/05
   TCanvas *4rthjetpt = new TCanvas("4rthjetpt", "4rthjetpt",40,62,700,700);
   4rthjetpt->Range(0,0,1,1);
   4rthjetpt->SetFillColor(0);
   4rthjetpt->SetBorderMode(0);
   4rthjetpt->SetBorderSize(2);
   4rthjetpt->SetLogy();
   4rthjetpt->SetFrameBorderMode(0);
   4rthjetpt->SetFrameBorderMode(0);
   
   THStack *4rthjetpt = new THStack();
   4rthjetpt->SetName("4rthjetpt");
   4rthjetpt->SetTitle("4rthjetpt");
   
   TH1F *4rthjetpt_stack_3 = new TH1F("4rthjetpt_stack_3","4rthjetpt",32,30,800);
   4rthjetpt_stack_3->SetMinimum(-0);
   4rthjetpt_stack_3->SetMaximum(-nan);
   4rthjetpt_stack_3->SetDirectory(0);
   4rthjetpt_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   4rthjetpt_stack_3->SetLineColor(ci);
   4rthjetpt_stack_3->GetXaxis()->SetTitle("4rthjetpt");
   4rthjetpt_stack_3->GetXaxis()->SetLabelFont(42);
   4rthjetpt_stack_3->GetXaxis()->SetLabelSize(0.035);
   4rthjetpt_stack_3->GetXaxis()->SetTitleSize(0.035);
   4rthjetpt_stack_3->GetXaxis()->SetTitleFont(42);
   4rthjetpt_stack_3->GetYaxis()->SetTitle("Events/pb");
   4rthjetpt_stack_3->GetYaxis()->SetLabelFont(42);
   4rthjetpt_stack_3->GetYaxis()->SetLabelSize(0.035);
   4rthjetpt_stack_3->GetYaxis()->SetTitleSize(0.035);
   4rthjetpt_stack_3->GetYaxis()->SetTitleFont(42);
   4rthjetpt_stack_3->GetZaxis()->SetLabelFont(42);
   4rthjetpt_stack_3->GetZaxis()->SetLabelSize(0.035);
   4rthjetpt_stack_3->GetZaxis()->SetTitleSize(0.035);
   4rthjetpt_stack_3->GetZaxis()->SetTitleFont(42);
   4rthjetpt->SetHistogram(4rthjetpt_stack_3);
   
   
   TH1D *4rthjetpt11 = new TH1D("4rthjetpt11","p_{T}^{3rd jet}",32,30,800);

   ci = TColor::GetColor("#00cc00");
   4rthjetpt11->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   4rthjetpt11->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   4rthjetpt11->SetMarkerColor(ci);
   4rthjetpt11->SetMarkerStyle(22);
   4rthjetpt11->GetXaxis()->SetTitle("4rthjetpt");
   4rthjetpt11->GetXaxis()->SetLabelFont(42);
   4rthjetpt11->GetXaxis()->SetLabelSize(0.035);
   4rthjetpt11->GetXaxis()->SetTitleSize(0.035);
   4rthjetpt11->GetXaxis()->SetTitleFont(42);
   4rthjetpt11->GetYaxis()->SetTitle("Events/pb");
   4rthjetpt11->GetYaxis()->SetLabelFont(42);
   4rthjetpt11->GetYaxis()->SetLabelSize(0.035);
   4rthjetpt11->GetYaxis()->SetTitleSize(0.035);
   4rthjetpt11->GetYaxis()->SetTitleFont(42);
   4rthjetpt11->GetZaxis()->SetLabelFont(42);
   4rthjetpt11->GetZaxis()->SetLabelSize(0.035);
   4rthjetpt11->GetZaxis()->SetTitleSize(0.035);
   4rthjetpt11->GetZaxis()->SetTitleFont(42);
   4rthjetpt->Add(4rthjetpt,"");
   
   TH1D *4rthjetpt12 = new TH1D("4rthjetpt12","p_{T}^{3rd jet}",32,30,800);

   ci = TColor::GetColor("#00ffff");
   4rthjetpt12->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   4rthjetpt12->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   4rthjetpt12->SetMarkerColor(ci);
   4rthjetpt12->SetMarkerStyle(20);
   4rthjetpt12->GetXaxis()->SetTitle("4rthjetpt");
   4rthjetpt12->GetXaxis()->SetLabelFont(42);
   4rthjetpt12->GetXaxis()->SetLabelSize(0.035);
   4rthjetpt12->GetXaxis()->SetTitleSize(0.035);
   4rthjetpt12->GetXaxis()->SetTitleFont(42);
   4rthjetpt12->GetYaxis()->SetTitle("Events/pb");
   4rthjetpt12->GetYaxis()->SetLabelFont(42);
   4rthjetpt12->GetYaxis()->SetLabelSize(0.035);
   4rthjetpt12->GetYaxis()->SetTitleSize(0.035);
   4rthjetpt12->GetYaxis()->SetTitleFont(42);
   4rthjetpt12->GetZaxis()->SetLabelFont(42);
   4rthjetpt12->GetZaxis()->SetLabelSize(0.035);
   4rthjetpt12->GetZaxis()->SetTitleSize(0.035);
   4rthjetpt12->GetZaxis()->SetTitleFont(42);
   4rthjetpt->Add(4rthjetpt,"");
   
   TH1D *4rthjetpt13 = new TH1D("4rthjetpt13","p_{T}^{3rd jet}",32,30,800);

   ci = TColor::GetColor("#ffcc00");
   4rthjetpt13->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   4rthjetpt13->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   4rthjetpt13->SetMarkerColor(ci);
   4rthjetpt13->SetMarkerStyle(21);
   4rthjetpt13->GetXaxis()->SetTitle("4rthjetpt");
   4rthjetpt13->GetXaxis()->SetLabelFont(42);
   4rthjetpt13->GetXaxis()->SetLabelSize(0.035);
   4rthjetpt13->GetXaxis()->SetTitleSize(0.035);
   4rthjetpt13->GetXaxis()->SetTitleFont(42);
   4rthjetpt13->GetYaxis()->SetTitle("Events/pb");
   4rthjetpt13->GetYaxis()->SetLabelFont(42);
   4rthjetpt13->GetYaxis()->SetLabelSize(0.035);
   4rthjetpt13->GetYaxis()->SetTitleSize(0.035);
   4rthjetpt13->GetYaxis()->SetTitleFont(42);
   4rthjetpt13->GetZaxis()->SetLabelFont(42);
   4rthjetpt13->GetZaxis()->SetLabelSize(0.035);
   4rthjetpt13->GetZaxis()->SetTitleSize(0.035);
   4rthjetpt13->GetZaxis()->SetTitleFont(42);
   4rthjetpt->Add(4rthjetpt,"");
   
   TH1D *4rthjetpt14 = new TH1D("4rthjetpt14","p_{T}^{3rd jet}",32,30,800);

   ci = TColor::GetColor("#ff0000");
   4rthjetpt14->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   4rthjetpt14->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   4rthjetpt14->SetMarkerColor(ci);
   4rthjetpt14->SetMarkerStyle(20);
   4rthjetpt14->GetXaxis()->SetTitle("4rthjetpt");
   4rthjetpt14->GetXaxis()->SetLabelFont(42);
   4rthjetpt14->GetXaxis()->SetLabelSize(0.035);
   4rthjetpt14->GetXaxis()->SetTitleSize(0.035);
   4rthjetpt14->GetXaxis()->SetTitleFont(42);
   4rthjetpt14->GetYaxis()->SetTitle("Events/pb");
   4rthjetpt14->GetYaxis()->SetLabelFont(42);
   4rthjetpt14->GetYaxis()->SetLabelSize(0.035);
   4rthjetpt14->GetYaxis()->SetTitleSize(0.035);
   4rthjetpt14->GetYaxis()->SetTitleFont(42);
   4rthjetpt14->GetZaxis()->SetLabelFont(42);
   4rthjetpt14->GetZaxis()->SetLabelSize(0.035);
   4rthjetpt14->GetZaxis()->SetTitleSize(0.035);
   4rthjetpt14->GetZaxis()->SetTitleFont(42);
   4rthjetpt->Add(4rthjetpt,"");
   
   TH1D *4rthjetpt15 = new TH1D("4rthjetpt15","p_{T}^{3rd jet}",32,30,800);

   ci = TColor::GetColor("#0000ff");
   4rthjetpt15->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   4rthjetpt15->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   4rthjetpt15->SetMarkerColor(ci);
   4rthjetpt15->SetMarkerStyle(21);
   4rthjetpt15->GetXaxis()->SetTitle("4rthjetpt");
   4rthjetpt15->GetXaxis()->SetLabelFont(42);
   4rthjetpt15->GetXaxis()->SetLabelSize(0.035);
   4rthjetpt15->GetXaxis()->SetTitleSize(0.035);
   4rthjetpt15->GetXaxis()->SetTitleFont(42);
   4rthjetpt15->GetYaxis()->SetTitle("Events/pb");
   4rthjetpt15->GetYaxis()->SetLabelFont(42);
   4rthjetpt15->GetYaxis()->SetLabelSize(0.035);
   4rthjetpt15->GetYaxis()->SetTitleSize(0.035);
   4rthjetpt15->GetYaxis()->SetTitleFont(42);
   4rthjetpt15->GetZaxis()->SetLabelFont(42);
   4rthjetpt15->GetZaxis()->SetLabelSize(0.035);
   4rthjetpt15->GetZaxis()->SetTitleSize(0.035);
   4rthjetpt15->GetZaxis()->SetTitleFont(42);
   4rthjetpt->Add(4rthjetpt,"");
   4rthjetpt->Draw("nostack");
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("4rthjetpt","4rthjetpt_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("4rthjetpt","4rthjetpt_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("4rthjetpt","4rthjetpt_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("4rthjetpt","4rthjetpt_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("4rthjetpt","4rthjetpt_ttbar","lp");

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
   4rthjetpt->Modified();
   4rthjetpt->cd();
   4rthjetpt->SetSelected(4rthjetpt);
}
