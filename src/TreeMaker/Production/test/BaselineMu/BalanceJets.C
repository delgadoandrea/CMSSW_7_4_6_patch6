void BalanceJets()
{
//=========Macro generated from canvas: BalanceJets/BalanceJets
//=========  (Fri Nov 13 11:38:51 2015) by ROOT version6.02/05
   TCanvas *BalanceJets = new TCanvas("BalanceJets", "BalanceJets",60,82,700,700);
   BalanceJets->Range(-1.875,-7.42341,16.875,1.084547);
   BalanceJets->SetFillColor(0);
   BalanceJets->SetBorderMode(0);
   BalanceJets->SetBorderSize(2);
   BalanceJets->SetLogy();
   BalanceJets->SetFrameBorderMode(0);
   BalanceJets->SetFrameBorderMode(0);
   
   THStack *BalanceJets = new THStack();
   BalanceJets->SetName("BalanceJets");
   BalanceJets->SetTitle("BalanceJets");
   
   TH1F *BalanceJets_stack_4 = new TH1F("BalanceJets_stack_4","BalanceJets",15,0,15);
   BalanceJets_stack_4->SetMinimum(2.675383e-07);
   BalanceJets_stack_4->SetMaximum(1.712976);
   BalanceJets_stack_4->SetDirectory(0);
   BalanceJets_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   BalanceJets_stack_4->SetLineColor(ci);
   BalanceJets_stack_4->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets_stack_4->GetXaxis()->SetLabelFont(42);
   BalanceJets_stack_4->GetXaxis()->SetLabelSize(0.035);
   BalanceJets_stack_4->GetXaxis()->SetTitleSize(0.035);
   BalanceJets_stack_4->GetXaxis()->SetTitleFont(42);
   BalanceJets_stack_4->GetYaxis()->SetTitle("Events/pb");
   BalanceJets_stack_4->GetYaxis()->SetLabelFont(42);
   BalanceJets_stack_4->GetYaxis()->SetLabelSize(0.035);
   BalanceJets_stack_4->GetYaxis()->SetTitleSize(0.035);
   BalanceJets_stack_4->GetYaxis()->SetTitleFont(42);
   BalanceJets_stack_4->GetZaxis()->SetLabelFont(42);
   BalanceJets_stack_4->GetZaxis()->SetLabelSize(0.035);
   BalanceJets_stack_4->GetZaxis()->SetTitleSize(0.035);
   BalanceJets_stack_4->GetZaxis()->SetTitleFont(42);
   BalanceJets->SetHistogram(BalanceJets_stack_4);
   
   
   TH1D *BalanceJets16 = new TH1D("BalanceJets16"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJets16->SetBinContent(1,0.02072168);
   BalanceJets16->SetBinContent(2,0.03176321);
   BalanceJets16->SetBinContent(3,0.00272276);
   BalanceJets16->SetBinContent(4,0.00831877);
   BalanceJets16->SetBinError(1,0.01188208);
   BalanceJets16->SetBinError(2,0.01456843);
   BalanceJets16->SetBinError(3,0.00136138);
   BalanceJets16->SetBinError(4,0.00831877);
   BalanceJets16->SetEntries(26);

   ci = TColor::GetColor("#00cc00");
   BalanceJets16->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   BalanceJets16->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   BalanceJets16->SetMarkerColor(ci);
   BalanceJets16->SetMarkerStyle(22);
   BalanceJets16->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets16->GetXaxis()->SetLabelFont(42);
   BalanceJets16->GetXaxis()->SetLabelSize(0.035);
   BalanceJets16->GetXaxis()->SetTitleSize(0.035);
   BalanceJets16->GetXaxis()->SetTitleFont(42);
   BalanceJets16->GetYaxis()->SetTitle("Events/pb");
   BalanceJets16->GetYaxis()->SetLabelFont(42);
   BalanceJets16->GetYaxis()->SetLabelSize(0.035);
   BalanceJets16->GetYaxis()->SetTitleSize(0.035);
   BalanceJets16->GetYaxis()->SetTitleFont(42);
   BalanceJets16->GetZaxis()->SetLabelFont(42);
   BalanceJets16->GetZaxis()->SetLabelSize(0.035);
   BalanceJets16->GetZaxis()->SetTitleSize(0.035);
   BalanceJets16->GetZaxis()->SetTitleFont(42);
   BalanceJets->Add(BalanceJets,"");
   
   TH1D *BalanceJets17 = new TH1D("BalanceJets17"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJets17->SetBinContent(1,0.3685422);
   BalanceJets17->SetBinContent(2,0.787662);
   BalanceJets17->SetBinContent(3,0.2000275);
   BalanceJets17->SetBinContent(4,0.02448508);
   BalanceJets17->SetBinContent(5,0.002076556);
   BalanceJets17->SetBinContent(6,0.0003292815);
   BalanceJets17->SetBinContent(7,1.392893e-05);
   BalanceJets17->SetBinError(1,0.008878833);
   BalanceJets17->SetBinError(2,0.01137378);
   BalanceJets17->SetBinError(3,0.0048575);
   BalanceJets17->SetBinError(4,0.001586583);
   BalanceJets17->SetBinError(5,0.0002432885);
   BalanceJets17->SetBinError(6,6.86874e-05);
   BalanceJets17->SetBinError(7,1.392893e-05);
   BalanceJets17->SetEntries(30221);

   ci = TColor::GetColor("#00ffff");
   BalanceJets17->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   BalanceJets17->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   BalanceJets17->SetMarkerColor(ci);
   BalanceJets17->SetMarkerStyle(20);
   BalanceJets17->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets17->GetXaxis()->SetLabelFont(42);
   BalanceJets17->GetXaxis()->SetLabelSize(0.035);
   BalanceJets17->GetXaxis()->SetTitleSize(0.035);
   BalanceJets17->GetXaxis()->SetTitleFont(42);
   BalanceJets17->GetYaxis()->SetTitle("Events/pb");
   BalanceJets17->GetYaxis()->SetLabelFont(42);
   BalanceJets17->GetYaxis()->SetLabelSize(0.035);
   BalanceJets17->GetYaxis()->SetTitleSize(0.035);
   BalanceJets17->GetYaxis()->SetTitleFont(42);
   BalanceJets17->GetZaxis()->SetLabelFont(42);
   BalanceJets17->GetZaxis()->SetLabelSize(0.035);
   BalanceJets17->GetZaxis()->SetTitleSize(0.035);
   BalanceJets17->GetZaxis()->SetTitleFont(42);
   BalanceJets->Add(BalanceJets,"");
   
   TH1D *BalanceJets18 = new TH1D("BalanceJets18"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJets18->SetBinContent(1,0.01070218);
   BalanceJets18->SetBinContent(2,0.02493524);
   BalanceJets18->SetBinContent(3,0.007135357);
   BalanceJets18->SetBinContent(4,0.001099666);
   BalanceJets18->SetBinContent(5,0.0001185263);
   BalanceJets18->SetBinContent(6,1.038088e-05);
   BalanceJets18->SetBinContent(7,1.170302e-06);
   BalanceJets18->SetBinError(1,0.0005582641);
   BalanceJets18->SetBinError(2,0.0007923949);
   BalanceJets18->SetBinError(3,0.0003700606);
   BalanceJets18->SetBinError(4,0.0001196375);
   BalanceJets18->SetBinError(5,3.149198e-05);
   BalanceJets18->SetBinError(6,5.263755e-06);
   BalanceJets18->SetBinError(7,1.170302e-06);
   BalanceJets18->SetEntries(7352);

   ci = TColor::GetColor("#ffcc00");
   BalanceJets18->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   BalanceJets18->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   BalanceJets18->SetMarkerColor(ci);
   BalanceJets18->SetMarkerStyle(21);
   BalanceJets18->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets18->GetXaxis()->SetLabelFont(42);
   BalanceJets18->GetXaxis()->SetLabelSize(0.035);
   BalanceJets18->GetXaxis()->SetTitleSize(0.035);
   BalanceJets18->GetXaxis()->SetTitleFont(42);
   BalanceJets18->GetYaxis()->SetTitle("Events/pb");
   BalanceJets18->GetYaxis()->SetLabelFont(42);
   BalanceJets18->GetYaxis()->SetLabelSize(0.035);
   BalanceJets18->GetYaxis()->SetTitleSize(0.035);
   BalanceJets18->GetYaxis()->SetTitleFont(42);
   BalanceJets18->GetZaxis()->SetLabelFont(42);
   BalanceJets18->GetZaxis()->SetLabelSize(0.035);
   BalanceJets18->GetZaxis()->SetTitleSize(0.035);
   BalanceJets18->GetZaxis()->SetTitleFont(42);
   BalanceJets->Add(BalanceJets,"");
   
   TH1D *BalanceJets19 = new TH1D("BalanceJets19"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJets19->SetBinContent(1,0.006755964);
   BalanceJets19->SetBinContent(2,0.02054554);
   BalanceJets19->SetBinContent(3,0.008977103);
   BalanceJets19->SetBinContent(4,0.002174865);
   BalanceJets19->SetBinContent(5,0.0003239161);
   BalanceJets19->SetBinContent(6,4.627373e-05);
   BalanceJets19->SetBinContent(7,1.542458e-05);
   BalanceJets19->SetBinError(1,0.0003228125);
   BalanceJets19->SetBinError(2,0.0005629442);
   BalanceJets19->SetBinError(3,0.0003721129);
   BalanceJets19->SetBinError(4,0.0001831567);
   BalanceJets19->SetBinError(5,7.068429e-05);
   BalanceJets19->SetBinError(6,2.671615e-05);
   BalanceJets19->SetBinError(7,1.542458e-05);
   BalanceJets19->SetEntries(2518);

   ci = TColor::GetColor("#ff0000");
   BalanceJets19->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   BalanceJets19->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   BalanceJets19->SetMarkerColor(ci);
   BalanceJets19->SetMarkerStyle(20);
   BalanceJets19->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets19->GetXaxis()->SetLabelFont(42);
   BalanceJets19->GetXaxis()->SetLabelSize(0.035);
   BalanceJets19->GetXaxis()->SetTitleSize(0.035);
   BalanceJets19->GetXaxis()->SetTitleFont(42);
   BalanceJets19->GetYaxis()->SetTitle("Events/pb");
   BalanceJets19->GetYaxis()->SetLabelFont(42);
   BalanceJets19->GetYaxis()->SetLabelSize(0.035);
   BalanceJets19->GetYaxis()->SetTitleSize(0.035);
   BalanceJets19->GetYaxis()->SetTitleFont(42);
   BalanceJets19->GetZaxis()->SetLabelFont(42);
   BalanceJets19->GetZaxis()->SetLabelSize(0.035);
   BalanceJets19->GetZaxis()->SetTitleSize(0.035);
   BalanceJets19->GetZaxis()->SetTitleFont(42);
   BalanceJets->Add(BalanceJets,"");
   
   TH1D *BalanceJets20 = new TH1D("BalanceJets20"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJets20->SetBinContent(1,8.385824e-05);
   BalanceJets20->SetBinContent(2,0.0007547241);
   BalanceJets20->SetBinContent(3,0.0008050391);
   BalanceJets20->SetBinContent(4,0.0004025195);
   BalanceJets20->SetBinContent(5,8.385824e-05);
   BalanceJets20->SetBinContent(6,1.677165e-05);
   BalanceJets20->SetBinError(1,3.750254e-05);
   BalanceJets20->SetBinError(2,0.0001125076);
   BalanceJets20->SetBinError(3,0.0001161974);
   BalanceJets20->SetBinError(4,8.216396e-05);
   BalanceJets20->SetBinError(5,3.750254e-05);
   BalanceJets20->SetBinError(6,1.677165e-05);
   BalanceJets20->SetEntries(128);

   ci = TColor::GetColor("#0000ff");
   BalanceJets20->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   BalanceJets20->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   BalanceJets20->SetMarkerColor(ci);
   BalanceJets20->SetMarkerStyle(21);
   BalanceJets20->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets20->GetXaxis()->SetLabelFont(42);
   BalanceJets20->GetXaxis()->SetLabelSize(0.035);
   BalanceJets20->GetXaxis()->SetTitleSize(0.035);
   BalanceJets20->GetXaxis()->SetTitleFont(42);
   BalanceJets20->GetYaxis()->SetTitle("Events/pb");
   BalanceJets20->GetYaxis()->SetLabelFont(42);
   BalanceJets20->GetYaxis()->SetLabelSize(0.035);
   BalanceJets20->GetYaxis()->SetTitleSize(0.035);
   BalanceJets20->GetYaxis()->SetTitleFont(42);
   BalanceJets20->GetZaxis()->SetLabelFont(42);
   BalanceJets20->GetZaxis()->SetLabelSize(0.035);
   BalanceJets20->GetZaxis()->SetTitleSize(0.035);
   BalanceJets20->GetZaxis()->SetTitleFont(42);
   BalanceJets->Add(BalanceJets,"");
   BalanceJets->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3434483,0.94,0.6565517,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("BalanceJets");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("BalanceJets","BalanceJets_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BalanceJets","BalanceJets_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BalanceJets","BalanceJets_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BalanceJets","BalanceJets_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BalanceJets","BalanceJets_ttbar","lp");

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
   BalanceJets->Modified();
   BalanceJets->cd();
   BalanceJets->SetSelected(BalanceJets);
}
