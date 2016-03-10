void BJets()
{
//=========Macro generated from canvas: BJets/BJets
//=========  (Mon Nov 23 12:44:53 2015) by ROOT version6.02/05
   TCanvas *BJets = new TCanvas("BJets", "BJets",60,82,700,700);
   BJets->Range(-0.8750001,-6.011042,7.875,0.7149101);
   BJets->SetFillColor(0);
   BJets->SetBorderMode(0);
   BJets->SetBorderSize(2);
   BJets->SetLogy();
   BJets->SetFrameBorderMode(0);
   BJets->SetFrameBorderMode(0);
   
   THStack *BJets = new THStack();
   BJets->SetName("BJets");
   BJets->SetTitle("BJets");
   
   TH1F *BJets_stack_4 = new TH1F("BJets_stack_4","BJets",7,0,7);
   BJets_stack_4->SetMinimum(4.587254e-06);
   BJets_stack_4->SetMaximum(1.102338);
   BJets_stack_4->SetDirectory(0);
   BJets_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   BJets_stack_4->SetLineColor(ci);
   BJets_stack_4->GetXaxis()->SetTitle("BJets");
   BJets_stack_4->GetXaxis()->SetLabelFont(42);
   BJets_stack_4->GetXaxis()->SetLabelSize(0.035);
   BJets_stack_4->GetXaxis()->SetTitleSize(0.035);
   BJets_stack_4->GetXaxis()->SetTitleFont(42);
   BJets_stack_4->GetYaxis()->SetTitle("Events/pb");
   BJets_stack_4->GetYaxis()->SetLabelFont(42);
   BJets_stack_4->GetYaxis()->SetLabelSize(0.035);
   BJets_stack_4->GetYaxis()->SetTitleSize(0.035);
   BJets_stack_4->GetYaxis()->SetTitleFont(42);
   BJets_stack_4->GetZaxis()->SetLabelFont(42);
   BJets_stack_4->GetZaxis()->SetLabelSize(0.035);
   BJets_stack_4->GetZaxis()->SetTitleSize(0.035);
   BJets_stack_4->GetZaxis()->SetTitleFont(42);
   BJets->SetHistogram(BJets_stack_4);
   
   
   TH1D *BJets16 = new TH1D("BJets16"," Number of b-tagged jets",7,0,7);
   BJets16->SetBinContent(1,0.1112465);
   BJets16->SetBinContent(2,0.02072168);
   BJets16->SetBinError(1,0.02783268);
   BJets16->SetBinError(2,0.01188208);
   BJets16->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   BJets16->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   BJets16->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   BJets16->SetMarkerColor(ci);
   BJets16->SetMarkerStyle(22);
   BJets16->GetXaxis()->SetTitle("BJets");
   BJets16->GetXaxis()->SetLabelFont(42);
   BJets16->GetXaxis()->SetLabelSize(0.035);
   BJets16->GetXaxis()->SetTitleSize(0.035);
   BJets16->GetXaxis()->SetTitleFont(42);
   BJets16->GetYaxis()->SetTitle("Events/pb");
   BJets16->GetYaxis()->SetLabelFont(42);
   BJets16->GetYaxis()->SetLabelSize(0.035);
   BJets16->GetYaxis()->SetTitleSize(0.035);
   BJets16->GetYaxis()->SetTitleFont(42);
   BJets16->GetZaxis()->SetLabelFont(42);
   BJets16->GetZaxis()->SetLabelSize(0.035);
   BJets16->GetZaxis()->SetTitleSize(0.035);
   BJets16->GetZaxis()->SetTitleFont(42);
   BJets->Add(BJets,"");
   
   TH1D *BJets17 = new TH1D("BJets17"," Number of b-tagged jets",7,0,7);
   BJets17->SetBinContent(1,0.5752698);
   BJets17->SetBinContent(2,0.02459998);
   BJets17->SetBinContent(3,0.0005915332);
   BJets17->SetBinError(1,0.009753407);
   BJets17->SetBinError(2,0.001787714);
   BJets17->SetBinError(3,0.000229524);
   BJets17->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   BJets17->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   BJets17->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   BJets17->SetMarkerColor(ci);
   BJets17->SetMarkerStyle(20);
   BJets17->GetXaxis()->SetTitle("BJets");
   BJets17->GetXaxis()->SetLabelFont(42);
   BJets17->GetXaxis()->SetLabelSize(0.035);
   BJets17->GetXaxis()->SetTitleSize(0.035);
   BJets17->GetXaxis()->SetTitleFont(42);
   BJets17->GetYaxis()->SetTitle("Events/pb");
   BJets17->GetYaxis()->SetLabelFont(42);
   BJets17->GetYaxis()->SetLabelSize(0.035);
   BJets17->GetYaxis()->SetTitleSize(0.035);
   BJets17->GetYaxis()->SetTitleFont(42);
   BJets17->GetZaxis()->SetLabelFont(42);
   BJets17->GetZaxis()->SetLabelSize(0.035);
   BJets17->GetZaxis()->SetTitleSize(0.035);
   BJets17->GetZaxis()->SetTitleFont(42);
   BJets->Add(BJets,"");
   
   TH1D *BJets18 = new TH1D("BJets18"," Number of b-tagged jets",7,0,7);
   BJets18->SetBinContent(1,0.1355217);
   BJets18->SetBinContent(2,0.01035467);
   BJets18->SetBinContent(3,0.0006000174);
   BJets18->SetBinError(1,0.001840136);
   BJets18->SetBinError(2,0.0004792126);
   BJets18->SetBinError(3,0.0001145497);
   BJets18->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   BJets18->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   BJets18->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   BJets18->SetMarkerColor(ci);
   BJets18->SetMarkerStyle(21);
   BJets18->GetXaxis()->SetTitle("BJets");
   BJets18->GetXaxis()->SetLabelFont(42);
   BJets18->GetXaxis()->SetLabelSize(0.035);
   BJets18->GetXaxis()->SetTitleSize(0.035);
   BJets18->GetXaxis()->SetTitleFont(42);
   BJets18->GetYaxis()->SetTitle("Events/pb");
   BJets18->GetYaxis()->SetLabelFont(42);
   BJets18->GetYaxis()->SetLabelSize(0.035);
   BJets18->GetYaxis()->SetTitleSize(0.035);
   BJets18->GetYaxis()->SetTitleFont(42);
   BJets18->GetZaxis()->SetLabelFont(42);
   BJets18->GetZaxis()->SetLabelSize(0.035);
   BJets18->GetZaxis()->SetTitleSize(0.035);
   BJets18->GetZaxis()->SetTitleFont(42);
   BJets->Add(BJets,"");
   
   TH1D *BJets19 = new TH1D("BJets19"," Number of b-tagged jets",7,0,7);
   BJets19->SetBinContent(1,0.01465335);
   BJets19->SetBinContent(2,0.001141419);
   BJets19->SetBinContent(3,0.0001388212);
   BJets19->SetBinError(1,0.0004754174);
   BJets19->SetBinError(2,0.0001326872);
   BJets19->SetBinError(3,4.627373e-05);
   BJets19->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   BJets19->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   BJets19->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   BJets19->SetMarkerColor(ci);
   BJets19->SetMarkerStyle(20);
   BJets19->GetXaxis()->SetTitle("BJets");
   BJets19->GetXaxis()->SetLabelFont(42);
   BJets19->GetXaxis()->SetLabelSize(0.035);
   BJets19->GetXaxis()->SetTitleSize(0.035);
   BJets19->GetXaxis()->SetTitleFont(42);
   BJets19->GetYaxis()->SetTitle("Events/pb");
   BJets19->GetYaxis()->SetLabelFont(42);
   BJets19->GetYaxis()->SetLabelSize(0.035);
   BJets19->GetYaxis()->SetTitleSize(0.035);
   BJets19->GetYaxis()->SetTitleFont(42);
   BJets19->GetZaxis()->SetLabelFont(42);
   BJets19->GetZaxis()->SetLabelSize(0.035);
   BJets19->GetZaxis()->SetTitleSize(0.035);
   BJets19->GetZaxis()->SetTitleFont(42);
   BJets->Add(BJets,"");
   
   TH1D *BJets20 = new TH1D("BJets20"," Number of b-tagged jets",7,0,7);
   BJets20->SetBinContent(2,1.677165e-05);
   BJets20->SetBinError(2,1.677165e-05);
   BJets20->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   BJets20->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   BJets20->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   BJets20->SetMarkerColor(ci);
   BJets20->SetMarkerStyle(21);
   BJets20->GetXaxis()->SetTitle("BJets");
   BJets20->GetXaxis()->SetLabelFont(42);
   BJets20->GetXaxis()->SetLabelSize(0.035);
   BJets20->GetXaxis()->SetTitleSize(0.035);
   BJets20->GetXaxis()->SetTitleFont(42);
   BJets20->GetYaxis()->SetTitle("Events/pb");
   BJets20->GetYaxis()->SetLabelFont(42);
   BJets20->GetYaxis()->SetLabelSize(0.035);
   BJets20->GetYaxis()->SetTitleSize(0.035);
   BJets20->GetYaxis()->SetTitleFont(42);
   BJets20->GetZaxis()->SetLabelFont(42);
   BJets20->GetZaxis()->SetLabelSize(0.035);
   BJets20->GetZaxis()->SetTitleSize(0.035);
   BJets20->GetZaxis()->SetTitleFont(42);
   BJets->Add(BJets,"");
   BJets->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.4217529,0.94,0.5782471,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("BJets");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("BJets","BJets_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BJets","BJets_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BJets","BJets_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BJets","BJets_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BJets","BJets_ttbar","lp");

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
   BJets->Modified();
   BJets->cd();
   BJets->SetSelected(BJets);
}
