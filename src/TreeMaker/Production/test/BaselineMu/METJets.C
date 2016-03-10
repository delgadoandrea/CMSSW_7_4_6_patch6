void METJets()
{
//=========Macro generated from canvas: METJets/METJets
//=========  (Fri Nov 13 11:38:52 2015) by ROOT version6.02/05
   TCanvas *METJets = new TCanvas("METJets", "METJets",80,102,700,700);
   METJets->Range(-1.875,-7.049239,16.875,0.940773);
   METJets->SetFillColor(0);
   METJets->SetBorderMode(0);
   METJets->SetBorderSize(2);
   METJets->SetLogy();
   METJets->SetFrameBorderMode(0);
   METJets->SetFrameBorderMode(0);
   
   THStack *METJets = new THStack();
   METJets->SetName("METJets");
   METJets->SetTitle("METJets");
   
   TH1F *METJets_stack_5 = new TH1F("METJets_stack_5","METJets",15,0,15);
   METJets_stack_5->SetMinimum(5.62034e-07);
   METJets_stack_5->SetMaximum(1.386027);
   METJets_stack_5->SetDirectory(0);
   METJets_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   METJets_stack_5->SetLineColor(ci);
   METJets_stack_5->GetXaxis()->SetTitle("METJets");
   METJets_stack_5->GetXaxis()->SetLabelFont(42);
   METJets_stack_5->GetXaxis()->SetLabelSize(0.035);
   METJets_stack_5->GetXaxis()->SetTitleSize(0.035);
   METJets_stack_5->GetXaxis()->SetTitleFont(42);
   METJets_stack_5->GetYaxis()->SetTitle("Events/pb");
   METJets_stack_5->GetYaxis()->SetLabelFont(42);
   METJets_stack_5->GetYaxis()->SetLabelSize(0.035);
   METJets_stack_5->GetYaxis()->SetTitleSize(0.035);
   METJets_stack_5->GetYaxis()->SetTitleFont(42);
   METJets_stack_5->GetZaxis()->SetLabelFont(42);
   METJets_stack_5->GetZaxis()->SetLabelSize(0.035);
   METJets_stack_5->GetZaxis()->SetTitleSize(0.035);
   METJets_stack_5->GetZaxis()->SetTitleFont(42);
   METJets->SetHistogram(METJets_stack_5);
   
   
   TH1D *METJets21 = new TH1D("METJets21"," Number of jets in MET hemisphere",15,0,15);
   METJets21->SetBinContent(2,0.00968015);
   METJets21->SetBinContent(3,0.02904045);
   METJets21->SetBinContent(4,0.02140237);
   METJets21->SetBinContent(5,0.00204207);
   METJets21->SetBinContent(6,0.00068069);
   METJets21->SetBinContent(8,0.00068069);
   METJets21->SetBinError(2,0.008374283);
   METJets21->SetBinError(3,0.01450468);
   METJets21->SetBinError(4,0.01190157);
   METJets21->SetBinError(5,0.00117899);
   METJets21->SetBinError(6,0.00068069);
   METJets21->SetBinError(8,0.00068069);
   METJets21->SetEntries(26);

   ci = TColor::GetColor("#00cc00");
   METJets21->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METJets21->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METJets21->SetMarkerColor(ci);
   METJets21->SetMarkerStyle(22);
   METJets21->GetXaxis()->SetTitle("METJets");
   METJets21->GetXaxis()->SetLabelFont(42);
   METJets21->GetXaxis()->SetLabelSize(0.035);
   METJets21->GetXaxis()->SetTitleSize(0.035);
   METJets21->GetXaxis()->SetTitleFont(42);
   METJets21->GetYaxis()->SetTitle("Events/pb");
   METJets21->GetYaxis()->SetLabelFont(42);
   METJets21->GetYaxis()->SetLabelSize(0.035);
   METJets21->GetYaxis()->SetTitleSize(0.035);
   METJets21->GetYaxis()->SetTitleFont(42);
   METJets21->GetZaxis()->SetLabelFont(42);
   METJets21->GetZaxis()->SetLabelSize(0.035);
   METJets21->GetZaxis()->SetTitleSize(0.035);
   METJets21->GetZaxis()->SetTitleFont(42);
   METJets->Add(METJets,"");
   
   TH1D *METJets22 = new TH1D("METJets22"," Number of jets in MET hemisphere",15,0,15);
   METJets22->SetBinContent(1,0.2458857);
   METJets22->SetBinContent(2,0.6602556);
   METJets22->SetBinContent(3,0.3253386);
   METJets22->SetBinContent(4,0.108292);
   METJets22->SetBinContent(5,0.03135152);
   METJets22->SetBinContent(6,0.009518461);
   METJets22->SetBinContent(7,0.00191784);
   METJets22->SetBinContent(8,0.0004784469);
   METJets22->SetBinContent(9,8.438412e-05);
   METJets22->SetBinContent(10,1.392893e-05);
   METJets22->SetBinError(1,0.00767901);
   METJets22->SetBinError(2,0.01132299);
   METJets22->SetBinError(3,0.006231845);
   METJets22->SetBinError(4,0.002624377);
   METJets22->SetBinError(5,0.001074622);
   METJets22->SetBinError(6,0.0005316624);
   METJets22->SetBinError(7,0.000164499);
   METJets22->SetBinError(8,8.207274e-05);
   METJets22->SetBinError(9,3.445762e-05);
   METJets22->SetBinError(10,1.392893e-05);
   METJets22->SetEntries(30221);

   ci = TColor::GetColor("#00ffff");
   METJets22->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METJets22->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METJets22->SetMarkerColor(ci);
   METJets22->SetMarkerStyle(20);
   METJets22->GetXaxis()->SetTitle("METJets");
   METJets22->GetXaxis()->SetLabelFont(42);
   METJets22->GetXaxis()->SetLabelSize(0.035);
   METJets22->GetXaxis()->SetTitleSize(0.035);
   METJets22->GetXaxis()->SetTitleFont(42);
   METJets22->GetYaxis()->SetTitle("Events/pb");
   METJets22->GetYaxis()->SetLabelFont(42);
   METJets22->GetYaxis()->SetLabelSize(0.035);
   METJets22->GetYaxis()->SetTitleSize(0.035);
   METJets22->GetYaxis()->SetTitleFont(42);
   METJets22->GetZaxis()->SetLabelFont(42);
   METJets22->GetZaxis()->SetLabelSize(0.035);
   METJets22->GetZaxis()->SetTitleSize(0.035);
   METJets22->GetZaxis()->SetTitleFont(42);
   METJets->Add(METJets,"");
   
   TH1D *METJets23 = new TH1D("METJets23"," Number of jets in MET hemisphere",15,0,15);
   METJets23->SetBinContent(1,0.006146854);
   METJets23->SetBinContent(2,0.02066527);
   METJets23->SetBinContent(3,0.01044754);
   METJets23->SetBinContent(4,0.004467181);
   METJets23->SetBinContent(5,0.001784097);
   METJets23->SetBinContent(6,0.0003748539);
   METJets23->SetBinContent(7,8.754488e-05);
   METJets23->SetBinContent(8,2.098952e-05);
   METJets23->SetBinContent(9,5.851509e-06);
   METJets23->SetBinContent(10,2.340604e-06);
   METJets23->SetBinError(1,0.0004526752);
   METJets23->SetBinError(2,0.0007927432);
   METJets23->SetBinError(3,0.0004319716);
   METJets23->SetBinError(4,0.0002305386);
   METJets23->SetBinError(5,0.0001309462);
   METJets23->SetBinError(6,3.752883e-05);
   METJets23->SetBinError(7,1.121568e-05);
   METJets23->SetBinError(8,5.687112e-06);
   METJets23->SetBinError(9,2.616874e-06);
   METJets23->SetBinError(10,1.655057e-06);
   METJets23->SetEntries(7352);

   ci = TColor::GetColor("#ffcc00");
   METJets23->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METJets23->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METJets23->SetMarkerColor(ci);
   METJets23->SetMarkerStyle(21);
   METJets23->GetXaxis()->SetTitle("METJets");
   METJets23->GetXaxis()->SetLabelFont(42);
   METJets23->GetXaxis()->SetLabelSize(0.035);
   METJets23->GetXaxis()->SetTitleSize(0.035);
   METJets23->GetXaxis()->SetTitleFont(42);
   METJets23->GetYaxis()->SetTitle("Events/pb");
   METJets23->GetYaxis()->SetLabelFont(42);
   METJets23->GetYaxis()->SetLabelSize(0.035);
   METJets23->GetYaxis()->SetTitleSize(0.035);
   METJets23->GetYaxis()->SetTitleFont(42);
   METJets23->GetZaxis()->SetLabelFont(42);
   METJets23->GetZaxis()->SetLabelSize(0.035);
   METJets23->GetZaxis()->SetTitleSize(0.035);
   METJets23->GetZaxis()->SetTitleFont(42);
   METJets->Add(METJets,"");
   
   TH1D *METJets24 = new TH1D("METJets24"," Number of jets in MET hemisphere",15,0,15);
   METJets24->SetBinContent(1,0.003578502);
   METJets24->SetBinContent(2,0.01414434);
   METJets24->SetBinContent(3,0.01159928);
   METJets24->SetBinContent(4,0.005599121);
   METJets24->SetBinContent(5,0.002745575);
   METJets24->SetBinContent(6,0.0007866534);
   METJets24->SetBinContent(7,0.0002622178);
   METJets24->SetBinContent(8,0.0001233966);
   METJets24->SetBinError(1,0.0002349401);
   METJets24->SetBinError(2,0.0004670871);
   METJets24->SetBinError(3,0.0004229823);
   METJets24->SetBinError(4,0.0002938776);
   METJets24->SetBinError(5,0.0002057895);
   METJets24->SetBinError(6,0.0001101535);
   METJets24->SetBinError(7,6.359716e-05);
   METJets24->SetBinError(8,4.362729e-05);
   METJets24->SetEntries(2518);

   ci = TColor::GetColor("#ff0000");
   METJets24->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METJets24->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METJets24->SetMarkerColor(ci);
   METJets24->SetMarkerStyle(20);
   METJets24->GetXaxis()->SetTitle("METJets");
   METJets24->GetXaxis()->SetLabelFont(42);
   METJets24->GetXaxis()->SetLabelSize(0.035);
   METJets24->GetXaxis()->SetTitleSize(0.035);
   METJets24->GetXaxis()->SetTitleFont(42);
   METJets24->GetYaxis()->SetTitle("Events/pb");
   METJets24->GetYaxis()->SetLabelFont(42);
   METJets24->GetYaxis()->SetLabelSize(0.035);
   METJets24->GetYaxis()->SetTitleSize(0.035);
   METJets24->GetYaxis()->SetTitleFont(42);
   METJets24->GetZaxis()->SetLabelFont(42);
   METJets24->GetZaxis()->SetLabelSize(0.035);
   METJets24->GetZaxis()->SetTitleSize(0.035);
   METJets24->GetZaxis()->SetTitleFont(42);
   METJets->Add(METJets,"");
   
   TH1D *METJets25 = new TH1D("METJets25"," Number of jets in MET hemisphere",15,0,15);
   METJets25->SetBinContent(2,3.35433e-05);
   METJets25->SetBinContent(3,0.0002515747);
   METJets25->SetBinContent(4,0.0004192912);
   METJets25->SetBinContent(5,0.0005199211);
   METJets25->SetBinContent(6,0.0004528345);
   METJets25->SetBinContent(7,0.0003018897);
   METJets25->SetBinContent(8,0.0001174015);
   METJets25->SetBinContent(9,3.35433e-05);
   METJets25->SetBinContent(12,1.677165e-05);
   METJets25->SetBinError(2,2.371869e-05);
   METJets25->SetBinError(3,6.495631e-05);
   METJets25->SetBinError(4,8.385824e-05);
   METJets25->SetBinError(5,9.338058e-05);
   METJets25->SetBinError(6,8.714804e-05);
   METJets25->SetBinError(7,7.115607e-05);
   METJets25->SetBinError(8,4.437361e-05);
   METJets25->SetBinError(9,2.371869e-05);
   METJets25->SetBinError(12,1.677165e-05);
   METJets25->SetEntries(128);

   ci = TColor::GetColor("#0000ff");
   METJets25->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METJets25->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METJets25->SetMarkerColor(ci);
   METJets25->SetMarkerStyle(21);
   METJets25->GetXaxis()->SetTitle("METJets");
   METJets25->GetXaxis()->SetLabelFont(42);
   METJets25->GetXaxis()->SetLabelSize(0.035);
   METJets25->GetXaxis()->SetTitleSize(0.035);
   METJets25->GetXaxis()->SetTitleFont(42);
   METJets25->GetYaxis()->SetTitle("Events/pb");
   METJets25->GetYaxis()->SetLabelFont(42);
   METJets25->GetYaxis()->SetLabelSize(0.035);
   METJets25->GetYaxis()->SetTitleSize(0.035);
   METJets25->GetYaxis()->SetTitleFont(42);
   METJets25->GetZaxis()->SetLabelFont(42);
   METJets25->GetZaxis()->SetLabelSize(0.035);
   METJets25->GetZaxis()->SetTitleSize(0.035);
   METJets25->GetZaxis()->SetTitleFont(42);
   METJets->Add(METJets,"");
   METJets->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3872701,0.94,0.6127299,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("METJets");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METJets","METJets_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METJets","METJets_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METJets","METJets_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METJets","METJets_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METJets","METJets_ttbar","lp");

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
   METJets->Modified();
   METJets->cd();
   METJets->SetSelected(METJets);
}
