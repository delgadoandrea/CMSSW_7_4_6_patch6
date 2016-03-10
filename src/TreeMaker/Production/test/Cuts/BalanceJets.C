void BalanceJets()
{
//=========Macro generated from canvas: BalanceJets/BalanceJets
//=========  (Fri Nov  6 09:02:49 2015) by ROOT version6.02/05
   TCanvas *BalanceJets = new TCanvas("BalanceJets", "BalanceJets",624,66,700,700);
   BalanceJets->Range(-1.875,-6.968408,16.875,0.8802541);
   BalanceJets->SetFillColor(0);
   BalanceJets->SetBorderMode(0);
   BalanceJets->SetBorderSize(2);
   BalanceJets->SetLogy();
   BalanceJets->SetFrameBorderMode(0);
   BalanceJets->SetFrameBorderMode(0);
   
   THStack *BalanceJets = new THStack();
   BalanceJets->SetName("BalanceJets");
   BalanceJets->SetTitle("BalanceJets");
   
   TH1F *BalanceJets_stack_2 = new TH1F("BalanceJets_stack_2","BalanceJets",15,0,15);
   BalanceJets_stack_2->SetMinimum(6.553267e-07);
   BalanceJets_stack_2->SetMaximum(1.245626);
   BalanceJets_stack_2->SetDirectory(0);
   BalanceJets_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   BalanceJets_stack_2->SetLineColor(ci);
   BalanceJets_stack_2->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets_stack_2->GetXaxis()->SetLabelFont(42);
   BalanceJets_stack_2->GetXaxis()->SetLabelSize(0.035);
   BalanceJets_stack_2->GetXaxis()->SetTitleSize(0.035);
   BalanceJets_stack_2->GetXaxis()->SetTitleFont(42);
   BalanceJets_stack_2->GetYaxis()->SetTitle("Events/pb");
   BalanceJets_stack_2->GetYaxis()->SetLabelFont(42);
   BalanceJets_stack_2->GetYaxis()->SetLabelSize(0.035);
   BalanceJets_stack_2->GetYaxis()->SetTitleSize(0.035);
   BalanceJets_stack_2->GetYaxis()->SetTitleFont(42);
   BalanceJets_stack_2->GetZaxis()->SetLabelFont(42);
   BalanceJets_stack_2->GetZaxis()->SetLabelSize(0.035);
   BalanceJets_stack_2->GetZaxis()->SetTitleSize(0.035);
   BalanceJets_stack_2->GetZaxis()->SetTitleFont(42);
   BalanceJets->SetHistogram(BalanceJets_stack_2);
   
   
   TH1D *BalanceJets6 = new TH1D("BalanceJets6"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJets6->SetBinContent(3,0.002501802);
   BalanceJets6->SetBinContent(4,0.02632314);
   BalanceJets6->SetBinContent(5,0.001250901);
   BalanceJets6->SetBinError(3,0.001769041);
   BalanceJets6->SetBinError(4,0.02632314);
   BalanceJets6->SetBinError(5,0.001250901);
   BalanceJets6->SetEntries(4);

   ci = TColor::GetColor("#00cc00");
   BalanceJets6->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   BalanceJets6->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   BalanceJets6->SetMarkerColor(ci);
   BalanceJets6->SetMarkerStyle(22);
   BalanceJets6->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets6->GetXaxis()->SetLabelFont(42);
   BalanceJets6->GetXaxis()->SetLabelSize(0.035);
   BalanceJets6->GetXaxis()->SetTitleSize(0.035);
   BalanceJets6->GetXaxis()->SetTitleFont(42);
   BalanceJets6->GetYaxis()->SetTitle("Events/pb");
   BalanceJets6->GetYaxis()->SetLabelFont(42);
   BalanceJets6->GetYaxis()->SetLabelSize(0.035);
   BalanceJets6->GetYaxis()->SetTitleSize(0.035);
   BalanceJets6->GetYaxis()->SetTitleFont(42);
   BalanceJets6->GetZaxis()->SetLabelFont(42);
   BalanceJets6->GetZaxis()->SetLabelSize(0.035);
   BalanceJets6->GetZaxis()->SetTitleSize(0.035);
   BalanceJets6->GetZaxis()->SetTitleFont(42);
   BalanceJets->Add(BalanceJets,"");
   
   TH1D *BalanceJets7 = new TH1D("BalanceJets7"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJets7->SetBinContent(1,0.1774551);
   BalanceJets7->SetBinContent(2,0.5992429);
   BalanceJets7->SetBinContent(3,0.2936699);
   BalanceJets7->SetBinContent(4,0.06202773);
   BalanceJets7->SetBinContent(5,0.0110591);
   BalanceJets7->SetBinContent(6,0.002035104);
   BalanceJets7->SetBinContent(7,0.0001266863);
   BalanceJets7->SetBinError(1,0.009014634);
   BalanceJets7->SetBinError(2,0.01484423);
   BalanceJets7->SetBinError(3,0.009769683);
   BalanceJets7->SetBinError(4,0.004116148);
   BalanceJets7->SetBinError(5,0.001446235);
   BalanceJets7->SetBinError(6,0.0006914949);
   BalanceJets7->SetBinError(7,5.463227e-05);
   BalanceJets7->SetEntries(9534);

   ci = TColor::GetColor("#00ffff");
   BalanceJets7->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   BalanceJets7->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   BalanceJets7->SetMarkerColor(ci);
   BalanceJets7->SetMarkerStyle(20);
   BalanceJets7->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets7->GetXaxis()->SetLabelFont(42);
   BalanceJets7->GetXaxis()->SetLabelSize(0.035);
   BalanceJets7->GetXaxis()->SetTitleSize(0.035);
   BalanceJets7->GetXaxis()->SetTitleFont(42);
   BalanceJets7->GetYaxis()->SetTitle("Events/pb");
   BalanceJets7->GetYaxis()->SetLabelFont(42);
   BalanceJets7->GetYaxis()->SetLabelSize(0.035);
   BalanceJets7->GetYaxis()->SetTitleSize(0.035);
   BalanceJets7->GetYaxis()->SetTitleFont(42);
   BalanceJets7->GetZaxis()->SetLabelFont(42);
   BalanceJets7->GetZaxis()->SetLabelSize(0.035);
   BalanceJets7->GetZaxis()->SetTitleSize(0.035);
   BalanceJets7->GetZaxis()->SetTitleFont(42);
   BalanceJets->Add(BalanceJets,"");
   
   TH1D *BalanceJets8 = new TH1D("BalanceJets8"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJets8->SetBinContent(1,0.04543894);
   BalanceJets8->SetBinContent(2,0.1504929);
   BalanceJets8->SetBinContent(3,0.06916986);
   BalanceJets8->SetBinContent(4,0.01647221);
   BalanceJets8->SetBinContent(5,0.002396891);
   BalanceJets8->SetBinContent(6,0.0003984328);
   BalanceJets8->SetBinContent(7,1.511681e-05);
   BalanceJets8->SetBinContent(8,2.691694e-06);
   BalanceJets8->SetBinError(1,0.00186173);
   BalanceJets8->SetBinError(2,0.003013343);
   BalanceJets8->SetBinError(3,0.001860847);
   BalanceJets8->SetBinError(4,0.0008396466);
   BalanceJets8->SetBinError(5,0.0003162465);
   BalanceJets8->SetBinError(6,0.0001136094);
   BalanceJets8->SetBinError(7,8.445211e-06);
   BalanceJets8->SetBinError(8,2.691694e-06);
   BalanceJets8->SetEntries(13132);

   ci = TColor::GetColor("#ffcc00");
   BalanceJets8->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   BalanceJets8->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   BalanceJets8->SetMarkerColor(ci);
   BalanceJets8->SetMarkerStyle(21);
   BalanceJets8->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets8->GetXaxis()->SetLabelFont(42);
   BalanceJets8->GetXaxis()->SetLabelSize(0.035);
   BalanceJets8->GetXaxis()->SetTitleSize(0.035);
   BalanceJets8->GetXaxis()->SetTitleFont(42);
   BalanceJets8->GetYaxis()->SetTitle("Events/pb");
   BalanceJets8->GetYaxis()->SetLabelFont(42);
   BalanceJets8->GetYaxis()->SetLabelSize(0.035);
   BalanceJets8->GetYaxis()->SetTitleSize(0.035);
   BalanceJets8->GetYaxis()->SetTitleFont(42);
   BalanceJets8->GetZaxis()->SetLabelFont(42);
   BalanceJets8->GetZaxis()->SetLabelSize(0.035);
   BalanceJets8->GetZaxis()->SetTitleSize(0.035);
   BalanceJets8->GetZaxis()->SetTitleFont(42);
   BalanceJets->Add(BalanceJets,"");
   
   TH1D *BalanceJets9 = new TH1D("BalanceJets9"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJets9->SetBinContent(1,0.002236564);
   BalanceJets9->SetBinContent(2,0.01363533);
   BalanceJets9->SetBinContent(3,0.01110569);
   BalanceJets9->SetBinContent(4,0.004365155);
   BalanceJets9->SetBinContent(5,0.001018022);
   BalanceJets9->SetBinContent(6,0.0001850949);
   BalanceJets9->SetBinError(1,0.0001857365);
   BalanceJets9->SetBinError(2,0.0004586056);
   BalanceJets9->SetBinError(3,0.0004138848);
   BalanceJets9->SetBinError(4,0.0002594815);
   BalanceJets9->SetBinError(5,0.0001253098);
   BalanceJets9->SetBinError(6,5.34323e-05);
   BalanceJets9->SetEntries(2110);

   ci = TColor::GetColor("#ff0000");
   BalanceJets9->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   BalanceJets9->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   BalanceJets9->SetMarkerColor(ci);
   BalanceJets9->SetMarkerStyle(20);
   BalanceJets9->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets9->GetXaxis()->SetLabelFont(42);
   BalanceJets9->GetXaxis()->SetLabelSize(0.035);
   BalanceJets9->GetXaxis()->SetTitleSize(0.035);
   BalanceJets9->GetXaxis()->SetTitleFont(42);
   BalanceJets9->GetYaxis()->SetTitle("Events/pb");
   BalanceJets9->GetYaxis()->SetLabelFont(42);
   BalanceJets9->GetYaxis()->SetLabelSize(0.035);
   BalanceJets9->GetYaxis()->SetTitleSize(0.035);
   BalanceJets9->GetYaxis()->SetTitleFont(42);
   BalanceJets9->GetZaxis()->SetLabelFont(42);
   BalanceJets9->GetZaxis()->SetLabelSize(0.035);
   BalanceJets9->GetZaxis()->SetTitleSize(0.035);
   BalanceJets9->GetZaxis()->SetTitleFont(42);
   BalanceJets->Add(BalanceJets,"");
   
   TH1D *BalanceJets10 = new TH1D("BalanceJets10"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJets10->SetBinContent(1,1.677165e-05);
   BalanceJets10->SetBinContent(2,6.708659e-05);
   BalanceJets10->SetBinContent(3,0.0001006299);
   BalanceJets10->SetBinContent(4,6.708659e-05);
   BalanceJets10->SetBinContent(5,3.35433e-05);
   BalanceJets10->SetBinError(1,1.677165e-05);
   BalanceJets10->SetBinError(2,3.35433e-05);
   BalanceJets10->SetBinError(3,4.108198e-05);
   BalanceJets10->SetBinError(4,3.35433e-05);
   BalanceJets10->SetBinError(5,2.371869e-05);
   BalanceJets10->SetEntries(17);

   ci = TColor::GetColor("#0000ff");
   BalanceJets10->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   BalanceJets10->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   BalanceJets10->SetMarkerColor(ci);
   BalanceJets10->SetMarkerStyle(21);
   BalanceJets10->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets10->GetXaxis()->SetLabelFont(42);
   BalanceJets10->GetXaxis()->SetLabelSize(0.035);
   BalanceJets10->GetXaxis()->SetTitleSize(0.035);
   BalanceJets10->GetXaxis()->SetTitleFont(42);
   BalanceJets10->GetYaxis()->SetTitle("Events/pb");
   BalanceJets10->GetYaxis()->SetLabelFont(42);
   BalanceJets10->GetYaxis()->SetLabelSize(0.035);
   BalanceJets10->GetYaxis()->SetTitleSize(0.035);
   BalanceJets10->GetYaxis()->SetTitleFont(42);
   BalanceJets10->GetZaxis()->SetLabelFont(42);
   BalanceJets10->GetZaxis()->SetLabelSize(0.035);
   BalanceJets10->GetZaxis()->SetTitleSize(0.035);
   BalanceJets10->GetZaxis()->SetTitleFont(42);
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
