void METptb1()
{
//=========Macro generated from canvas: b1/METptb1/b1/METptb1
//=========  (Tue Nov 24 14:28:21 2015) by ROOT version6.02/05
   TCanvas *b1/METptb1 = new TCanvas("b1/METptb1", "b1/METptb1",20,42,700,700);
   b1/METptb1->Range(37.49999,-7.374242,1662.5,0.78478);
   b1/METptb1->SetFillColor(0);
   b1/METptb1->SetBorderMode(0);
   b1/METptb1->SetBorderSize(2);
   b1/METptb1->SetLogy();
   b1/METptb1->SetFrameBorderMode(0);
   b1/METptb1->SetFrameBorderMode(0);
   
   THStack *b1/METptb1 = new THStack();
   b1/METptb1->SetName("b1/METptb1");
   b1/METptb1->SetTitle("b1/METptb1");
   
   TH1F *b1/METptb1_stack_2 = new TH1F("b1/METptb1_stack_2","b1/METptb1",26,200,1500);
   b1/METptb1_stack_2->SetMinimum(2.764777e-07);
   b1/METptb1_stack_2->SetMaximum(0.9308458);
   b1/METptb1_stack_2->SetDirectory(0);
   b1/METptb1_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1/METptb1_stack_2->SetLineColor(ci);
   b1/METptb1_stack_2->GetXaxis()->SetTitle("b1/METptb1");
   b1/METptb1_stack_2->GetXaxis()->SetLabelFont(42);
   b1/METptb1_stack_2->GetXaxis()->SetLabelSize(0.035);
   b1/METptb1_stack_2->GetXaxis()->SetTitleSize(0.035);
   b1/METptb1_stack_2->GetXaxis()->SetTitleFont(42);
   b1/METptb1_stack_2->GetYaxis()->SetTitle("Events/pb");
   b1/METptb1_stack_2->GetYaxis()->SetLabelFont(42);
   b1/METptb1_stack_2->GetYaxis()->SetLabelSize(0.035);
   b1/METptb1_stack_2->GetYaxis()->SetTitleSize(0.035);
   b1/METptb1_stack_2->GetYaxis()->SetTitleFont(42);
   b1/METptb1_stack_2->GetZaxis()->SetLabelFont(42);
   b1/METptb1_stack_2->GetZaxis()->SetLabelSize(0.035);
   b1/METptb1_stack_2->GetZaxis()->SetTitleSize(0.035);
   b1/METptb1_stack_2->GetZaxis()->SetTitleFont(42);
   b1/METptb1->SetHistogram(b1/METptb1_stack_2);
   
   
   TH1D *METptb16 = new TH1D("METptb16","MET_{p_{T}}",26,200,1500);
   METptb16->SetBinContent(1,0.01663754);
   METptb16->SetBinError(1,0.01176452);
   METptb16->SetEntries(2);

   ci = TColor::GetColor("#00cc00");
   METptb16->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METptb16->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METptb16->SetMarkerColor(ci);
   METptb16->SetMarkerStyle(22);
   METptb16->GetXaxis()->SetTitle("METptb1");
   METptb16->GetXaxis()->SetLabelFont(42);
   METptb16->GetXaxis()->SetLabelSize(0.035);
   METptb16->GetXaxis()->SetTitleSize(0.035);
   METptb16->GetXaxis()->SetTitleFont(42);
   METptb16->GetYaxis()->SetTitle("Events/pb");
   METptb16->GetYaxis()->SetLabelFont(42);
   METptb16->GetYaxis()->SetLabelSize(0.035);
   METptb16->GetYaxis()->SetTitleSize(0.035);
   METptb16->GetYaxis()->SetTitleFont(42);
   METptb16->GetZaxis()->SetLabelFont(42);
   METptb16->GetZaxis()->SetLabelSize(0.035);
   METptb16->GetZaxis()->SetTitleSize(0.035);
   METptb16->GetZaxis()->SetTitleFont(42);
   b1/METptb1->Add(METptb1,"");
   
   TH1D *METptb17 = new TH1D("METptb17","MET_{p_{T}}",26,200,1500);
   METptb17->SetBinContent(1,0.4382837);
   METptb17->SetBinContent(2,0.1279372);
   METptb17->SetBinContent(3,0.04402345);
   METptb17->SetBinContent(4,0.01960392);
   METptb17->SetBinContent(5,0.007926041);
   METptb17->SetBinContent(6,0.00377508);
   METptb17->SetBinContent(7,0.001989981);
   METptb17->SetBinContent(8,0.001381907);
   METptb17->SetBinContent(9,0.0006890019);
   METptb17->SetBinContent(10,0.000376081);
   METptb17->SetBinContent(11,0.0002367917);
   METptb17->SetBinContent(12,0.0001253603);
   METptb17->SetBinContent(13,9.750248e-05);
   METptb17->SetBinContent(15,2.785785e-05);
   METptb17->SetBinContent(17,1.392893e-05);
   METptb17->SetBinContent(19,1.392893e-05);
   METptb17->SetBinContent(23,1.392893e-05);
   METptb17->SetBinError(1,0.01158244);
   METptb17->SetBinError(2,0.004073455);
   METptb17->SetBinError(3,0.00222339);
   METptb17->SetBinError(4,0.00122697);
   METptb17->SetBinError(5,0.0005131197);
   METptb17->SetBinError(6,0.000235504);
   METptb17->SetBinError(7,0.0001706695);
   METptb17->SetBinError(8,0.0001403655);
   METptb17->SetBinError(9,9.845118e-05);
   METptb17->SetBinError(10,7.237682e-05);
   METptb17->SetBinError(11,5.743043e-05);
   METptb17->SetBinError(12,4.178678e-05);
   METptb17->SetBinError(13,3.685247e-05);
   METptb17->SetBinError(15,1.969847e-05);
   METptb17->SetBinError(17,1.392893e-05);
   METptb17->SetBinError(19,1.392893e-05);
   METptb17->SetBinError(23,1.392893e-05);
   METptb17->SetEntries(7038);

   ci = TColor::GetColor("#00ffff");
   METptb17->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METptb17->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METptb17->SetMarkerColor(ci);
   METptb17->SetMarkerStyle(20);
   METptb17->GetXaxis()->SetTitle("METptb1");
   METptb17->GetXaxis()->SetLabelFont(42);
   METptb17->GetXaxis()->SetLabelSize(0.035);
   METptb17->GetXaxis()->SetTitleSize(0.035);
   METptb17->GetXaxis()->SetTitleFont(42);
   METptb17->GetYaxis()->SetTitle("Events/pb");
   METptb17->GetYaxis()->SetLabelFont(42);
   METptb17->GetYaxis()->SetLabelSize(0.035);
   METptb17->GetYaxis()->SetTitleSize(0.035);
   METptb17->GetYaxis()->SetTitleFont(42);
   METptb17->GetZaxis()->SetLabelFont(42);
   METptb17->GetZaxis()->SetLabelSize(0.035);
   METptb17->GetZaxis()->SetTitleSize(0.035);
   METptb17->GetZaxis()->SetTitleFont(42);
   b1/METptb1->Add(METptb1,"");
   
   TH1D *METptb18 = new TH1D("METptb18","MET_{p_{T}}",26,200,1500);
   METptb18->SetBinContent(1,0.1013692);
   METptb18->SetBinContent(2,0.03322434);
   METptb18->SetBinContent(3,0.01449365);
   METptb18->SetBinContent(4,0.006573597);
   METptb18->SetBinContent(5,0.003013132);
   METptb18->SetBinContent(6,0.001569575);
   METptb18->SetBinContent(7,0.0009691037);
   METptb18->SetBinContent(8,0.0005077335);
   METptb18->SetBinContent(9,0.0003082005);
   METptb18->SetBinContent(10,0.000201216);
   METptb18->SetBinContent(11,0.0001286573);
   METptb18->SetBinContent(12,8.894293e-05);
   METptb18->SetBinContent(13,4.798237e-05);
   METptb18->SetBinContent(14,4.096056e-05);
   METptb18->SetBinContent(15,2.457634e-05);
   METptb18->SetBinContent(16,1.521392e-05);
   METptb18->SetBinContent(17,9.362414e-06);
   METptb18->SetBinContent(18,9.362414e-06);
   METptb18->SetBinContent(19,2.340604e-06);
   METptb18->SetBinContent(20,4.681207e-06);
   METptb18->SetBinContent(21,7.021811e-06);
   METptb18->SetBinContent(22,3.510905e-06);
   METptb18->SetBinContent(23,1.170302e-06);
   METptb18->SetBinContent(24,1.170302e-06);
   METptb18->SetBinContent(25,1.170302e-06);
   METptb18->SetBinContent(27,3.510905e-06);
   METptb18->SetBinError(1,0.002023101);
   METptb18->SetBinError(2,0.000951965);
   METptb18->SetBinError(3,0.0005977006);
   METptb18->SetBinError(4,0.0003391638);
   METptb18->SetBinError(5,0.0001411878);
   METptb18->SetBinError(6,7.193152e-05);
   METptb18->SetBinError(7,5.406805e-05);
   METptb18->SetBinError(8,3.304646e-05);
   METptb18->SetBinError(9,2.09399e-05);
   METptb18->SetBinError(10,1.559688e-05);
   METptb18->SetBinError(11,1.25836e-05);
   METptb18->SetBinError(12,1.020245e-05);
   METptb18->SetBinError(13,7.493588e-06);
   METptb18->SetBinError(14,6.923599e-06);
   METptb18->SetBinError(15,5.362996e-06);
   METptb18->SetBinError(16,4.219583e-06);
   METptb18->SetBinError(17,3.310113e-06);
   METptb18->SetBinError(18,3.310113e-06);
   METptb18->SetBinError(19,1.655057e-06);
   METptb18->SetBinError(20,2.340604e-06);
   METptb18->SetBinError(21,2.866642e-06);
   METptb18->SetBinError(22,2.027022e-06);
   METptb18->SetBinError(23,1.170302e-06);
   METptb18->SetBinError(24,1.170302e-06);
   METptb18->SetBinError(25,1.170302e-06);
   METptb18->SetBinError(27,2.027022e-06);
   METptb18->SetEntries(10014);

   ci = TColor::GetColor("#ffcc00");
   METptb18->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METptb18->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METptb18->SetMarkerColor(ci);
   METptb18->SetMarkerStyle(21);
   METptb18->GetXaxis()->SetTitle("METptb1");
   METptb18->GetXaxis()->SetLabelFont(42);
   METptb18->GetXaxis()->SetLabelSize(0.035);
   METptb18->GetXaxis()->SetTitleSize(0.035);
   METptb18->GetXaxis()->SetTitleFont(42);
   METptb18->GetYaxis()->SetTitle("Events/pb");
   METptb18->GetYaxis()->SetLabelFont(42);
   METptb18->GetYaxis()->SetLabelSize(0.035);
   METptb18->GetYaxis()->SetTitleSize(0.035);
   METptb18->GetYaxis()->SetTitleFont(42);
   METptb18->GetZaxis()->SetLabelFont(42);
   METptb18->GetZaxis()->SetLabelSize(0.035);
   METptb18->GetZaxis()->SetTitleSize(0.035);
   METptb18->GetZaxis()->SetTitleFont(42);
   b1/METptb1->Add(METptb1,"");
   
   TH1D *METptb19 = new TH1D("METptb19","MET_{p_{T}}",26,200,1500);
   METptb19->SetBinContent(1,0.004658222);
   METptb19->SetBinContent(2,0.002575904);
   METptb19->SetBinContent(3,0.001712128);
   METptb19->SetBinContent(4,0.0009563237);
   METptb19->SetBinContent(5,0.0005398602);
   METptb19->SetBinContent(6,0.0003856144);
   METptb19->SetBinContent(7,0.0001388212);
   METptb19->SetBinContent(8,3.084915e-05);
   METptb19->SetBinContent(9,7.712288e-05);
   METptb19->SetBinContent(10,0.0001233966);
   METptb19->SetBinContent(11,1.542458e-05);
   METptb19->SetBinContent(12,3.084915e-05);
   METptb19->SetBinContent(14,1.542458e-05);
   METptb19->SetBinContent(15,1.542458e-05);
   METptb19->SetBinContent(18,1.542458e-05);
   METptb19->SetBinError(1,0.0002680506);
   METptb19->SetBinError(2,0.0001993295);
   METptb19->SetBinError(3,0.000162508);
   METptb19->SetBinError(4,0.0001214532);
   METptb19->SetBinError(5,9.125302e-05);
   METptb19->SetBinError(6,7.712288e-05);
   METptb19->SetBinError(7,4.627373e-05);
   METptb19->SetBinError(8,2.181364e-05);
   METptb19->SetBinError(9,3.44904e-05);
   METptb19->SetBinError(10,4.362729e-05);
   METptb19->SetBinError(11,1.542458e-05);
   METptb19->SetBinError(12,2.181364e-05);
   METptb19->SetBinError(14,1.542458e-05);
   METptb19->SetBinError(15,1.542458e-05);
   METptb19->SetBinError(18,1.542458e-05);
   METptb19->SetEntries(732);

   ci = TColor::GetColor("#ff0000");
   METptb19->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METptb19->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METptb19->SetMarkerColor(ci);
   METptb19->SetMarkerStyle(20);
   METptb19->GetXaxis()->SetTitle("METptb1");
   METptb19->GetXaxis()->SetLabelFont(42);
   METptb19->GetXaxis()->SetLabelSize(0.035);
   METptb19->GetXaxis()->SetTitleSize(0.035);
   METptb19->GetXaxis()->SetTitleFont(42);
   METptb19->GetYaxis()->SetTitle("Events/pb");
   METptb19->GetYaxis()->SetLabelFont(42);
   METptb19->GetYaxis()->SetLabelSize(0.035);
   METptb19->GetYaxis()->SetTitleSize(0.035);
   METptb19->GetYaxis()->SetTitleFont(42);
   METptb19->GetZaxis()->SetLabelFont(42);
   METptb19->GetZaxis()->SetLabelSize(0.035);
   METptb19->GetZaxis()->SetTitleSize(0.035);
   METptb19->GetZaxis()->SetTitleFont(42);
   b1/METptb1->Add(METptb1,"");
   
   TH1D *METptb110 = new TH1D("METptb110","MET_{p_{T}}",26,200,1500);
   METptb110->SetBinContent(1,1.677165e-05);
   METptb110->SetBinContent(2,1.677165e-05);
   METptb110->SetBinError(1,1.677165e-05);
   METptb110->SetBinError(2,1.677165e-05);
   METptb110->SetEntries(2);

   ci = TColor::GetColor("#0000ff");
   METptb110->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METptb110->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METptb110->SetMarkerColor(ci);
   METptb110->SetMarkerStyle(21);
   METptb110->GetXaxis()->SetTitle("METptb1");
   METptb110->GetXaxis()->SetLabelFont(42);
   METptb110->GetXaxis()->SetLabelSize(0.035);
   METptb110->GetXaxis()->SetTitleSize(0.035);
   METptb110->GetXaxis()->SetTitleFont(42);
   METptb110->GetYaxis()->SetTitle("Events/pb");
   METptb110->GetYaxis()->SetLabelFont(42);
   METptb110->GetYaxis()->SetLabelSize(0.035);
   METptb110->GetYaxis()->SetTitleSize(0.035);
   METptb110->GetYaxis()->SetTitleFont(42);
   METptb110->GetZaxis()->SetLabelFont(42);
   METptb110->GetZaxis()->SetLabelSize(0.035);
   METptb110->GetZaxis()->SetTitleSize(0.035);
   METptb110->GetZaxis()->SetTitleFont(42);
   b1/METptb1->Add(METptb1,"");
   b1/METptb1->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3513506,0.9342857,0.6486494,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b1/METptb1");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METptb1","b1/METptb1_QCD_b1/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METptb1","b1/METptb1_WJetsToLNu_b1/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METptb1","b1/METptb1_ZJetsToNuNu_b1/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METptb1","b1/METptb1_signal_b1/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METptb1","b1/METptb1_ttbar_b1/","lp");

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
   b1/METptb1->Modified();
   b1/METptb1->cd();
   b1/METptb1->SetSelected(b1/METptb1);
}
