void METPhiLeadJetPhi()
{
//=========Macro generated from canvas: METPhiLeadJetPhi/METPhiLeadJetPhi
//=========  (Mon Nov 23 12:44:59 2015) by ROOT version6.02/05
   TCanvas *METPhiLeadJetPhi = new TCanvas("METPhiLeadJetPhi", "METPhiLeadJetPhi",120,142,700,700);
   METPhiLeadJetPhi->Range(-3.926991,-7.318236,3.926991,0.4471286);
   METPhiLeadJetPhi->SetFillColor(0);
   METPhiLeadJetPhi->SetBorderMode(0);
   METPhiLeadJetPhi->SetBorderSize(2);
   METPhiLeadJetPhi->SetLogy();
   METPhiLeadJetPhi->SetFrameBorderMode(0);
   METPhiLeadJetPhi->SetFrameBorderMode(0);
   
   THStack *METPhiLeadJetPhi = new THStack();
   METPhiLeadJetPhi->SetName("METPhiLeadJetPhi");
   METPhiLeadJetPhi->SetTitle("METPhiLeadJetPhi");
   
   TH1F *METPhiLeadJetPhi_stack_7 = new TH1F("METPhiLeadJetPhi_stack_7","METPhiLeadJetPhi",20,-3.141593,3.141593);
   METPhiLeadJetPhi_stack_7->SetMinimum(2.872766e-07);
   METPhiLeadJetPhi_stack_7->SetMaximum(0.4683733);
   METPhiLeadJetPhi_stack_7->SetDirectory(0);
   METPhiLeadJetPhi_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   METPhiLeadJetPhi_stack_7->SetLineColor(ci);
   METPhiLeadJetPhi_stack_7->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi_stack_7->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi_stack_7->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi_stack_7->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi_stack_7->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi_stack_7->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi_stack_7->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi_stack_7->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi_stack_7->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi_stack_7->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi_stack_7->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi_stack_7->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi_stack_7->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi_stack_7->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->SetHistogram(METPhiLeadJetPhi_stack_7);
   
   
   TH1D *METPhiLeadJetPhi31 = new TH1D("METPhiLeadJetPhi31"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   METPhiLeadJetPhi31->SetBinContent(1,0.07948327);
   METPhiLeadJetPhi31->SetBinContent(19,0.00831877);
   METPhiLeadJetPhi31->SetBinContent(20,0.04416612);
   METPhiLeadJetPhi31->SetBinError(1,0.02371537);
   METPhiLeadJetPhi31->SetBinError(19,0.00831877);
   METPhiLeadJetPhi31->SetBinError(20,0.01685886);
   METPhiLeadJetPhi31->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   METPhiLeadJetPhi31->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METPhiLeadJetPhi31->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METPhiLeadJetPhi31->SetMarkerColor(ci);
   METPhiLeadJetPhi31->SetMarkerStyle(22);
   METPhiLeadJetPhi31->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi31->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi31->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi31->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi31->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi31->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi31->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi31->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi31->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi31->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi31->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi31->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi31->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi31->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->Add(METPhiLeadJetPhi,"");
   
   TH1D *METPhiLeadJetPhi32 = new TH1D("METPhiLeadJetPhi32"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   METPhiLeadJetPhi32->SetBinContent(1,0.2266438);
   METPhiLeadJetPhi32->SetBinContent(2,0.05862598);
   METPhiLeadJetPhi32->SetBinContent(3,0.01259464);
   METPhiLeadJetPhi32->SetBinContent(4,0.002611291);
   METPhiLeadJetPhi32->SetBinContent(5,0.0003407787);
   METPhiLeadJetPhi32->SetBinContent(8,1.473949e-05);
   METPhiLeadJetPhi32->SetBinContent(9,1.392893e-05);
   METPhiLeadJetPhi32->SetBinContent(12,1.392893e-05);
   METPhiLeadJetPhi32->SetBinContent(14,1.473949e-05);
   METPhiLeadJetPhi32->SetBinContent(15,7.207633e-05);
   METPhiLeadJetPhi32->SetBinContent(16,0.0002711341);
   METPhiLeadJetPhi32->SetBinContent(17,0.002987494);
   METPhiLeadJetPhi32->SetBinContent(18,0.01420993);
   METPhiLeadJetPhi32->SetBinContent(19,0.05725287);
   METPhiLeadJetPhi32->SetBinContent(20,0.2247939);
   METPhiLeadJetPhi32->SetBinError(1,0.006375818);
   METPhiLeadJetPhi32->SetBinError(2,0.003161147);
   METPhiLeadJetPhi32->SetBinError(3,0.0009728966);
   METPhiLeadJetPhi32->SetBinError(4,0.0002860801);
   METPhiLeadJetPhi32->SetBinError(5,6.958635e-05);
   METPhiLeadJetPhi32->SetBinError(8,1.473949e-05);
   METPhiLeadJetPhi32->SetBinError(9,1.392893e-05);
   METPhiLeadJetPhi32->SetBinError(12,1.392893e-05);
   METPhiLeadJetPhi32->SetBinError(14,1.473949e-05);
   METPhiLeadJetPhi32->SetBinError(15,3.224574e-05);
   METPhiLeadJetPhi32->SetBinError(16,6.222689e-05);
   METPhiLeadJetPhi32->SetBinError(17,0.0003413366);
   METPhiLeadJetPhi32->SetBinError(18,0.001077456);
   METPhiLeadJetPhi32->SetBinError(19,0.002721223);
   METPhiLeadJetPhi32->SetBinError(20,0.006165405);
   METPhiLeadJetPhi32->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   METPhiLeadJetPhi32->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METPhiLeadJetPhi32->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METPhiLeadJetPhi32->SetMarkerColor(ci);
   METPhiLeadJetPhi32->SetMarkerStyle(20);
   METPhiLeadJetPhi32->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi32->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi32->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi32->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi32->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi32->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi32->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi32->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi32->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi32->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi32->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi32->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi32->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi32->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->Add(METPhiLeadJetPhi,"");
   
   TH1D *METPhiLeadJetPhi33 = new TH1D("METPhiLeadJetPhi33"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   METPhiLeadJetPhi33->SetBinContent(1,0.0540192);
   METPhiLeadJetPhi33->SetBinContent(2,0.01492928);
   METPhiLeadJetPhi33->SetBinContent(3,0.00301757);
   METPhiLeadJetPhi33->SetBinContent(4,0.0008733838);
   METPhiLeadJetPhi33->SetBinContent(5,0.0001128266);
   METPhiLeadJetPhi33->SetBinContent(6,2.302645e-05);
   METPhiLeadJetPhi33->SetBinContent(7,1.170302e-06);
   METPhiLeadJetPhi33->SetBinContent(8,2.340604e-06);
   METPhiLeadJetPhi33->SetBinContent(9,3.434989e-06);
   METPhiLeadJetPhi33->SetBinContent(10,1.170302e-06);
   METPhiLeadJetPhi33->SetBinContent(11,5.775593e-06);
   METPhiLeadJetPhi33->SetBinContent(13,9.210582e-06);
   METPhiLeadJetPhi33->SetBinContent(14,1.170302e-06);
   METPhiLeadJetPhi33->SetBinContent(15,1.04568e-05);
   METPhiLeadJetPhi33->SetBinContent(16,0.0001872515);
   METPhiLeadJetPhi33->SetBinContent(17,0.0007451849);
   METPhiLeadJetPhi33->SetBinContent(18,0.003463955);
   METPhiLeadJetPhi33->SetBinContent(19,0.01433986);
   METPhiLeadJetPhi33->SetBinContent(20,0.0547301);
   METPhiLeadJetPhi33->SetBinError(1,0.001193482);
   METPhiLeadJetPhi33->SetBinError(2,0.0005924673);
   METPhiLeadJetPhi33->SetBinError(3,0.0002132914);
   METPhiLeadJetPhi33->SetBinError(4,0.0001074777);
   METPhiLeadJetPhi33->SetBinError(5,3.113705e-05);
   METPhiLeadJetPhi33->SetBinError(6,8.114418e-06);
   METPhiLeadJetPhi33->SetBinError(7,1.170302e-06);
   METPhiLeadJetPhi33->SetBinError(8,1.655057e-06);
   METPhiLeadJetPhi33->SetBinError(9,3.434989e-06);
   METPhiLeadJetPhi33->SetBinError(10,1.170302e-06);
   METPhiLeadJetPhi33->SetBinError(11,3.812921e-06);
   METPhiLeadJetPhi33->SetBinError(13,5.132009e-06);
   METPhiLeadJetPhi33->SetBinError(14,1.170302e-06);
   METPhiLeadJetPhi33->SetBinError(15,4.474012e-06);
   METPhiLeadJetPhi33->SetBinError(16,5.136356e-05);
   METPhiLeadJetPhi33->SetBinError(17,8.737347e-05);
   METPhiLeadJetPhi33->SetBinError(18,0.0002320973);
   METPhiLeadJetPhi33->SetBinError(19,0.0005855827);
   METPhiLeadJetPhi33->SetBinError(20,0.001178237);
   METPhiLeadJetPhi33->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   METPhiLeadJetPhi33->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METPhiLeadJetPhi33->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METPhiLeadJetPhi33->SetMarkerColor(ci);
   METPhiLeadJetPhi33->SetMarkerStyle(21);
   METPhiLeadJetPhi33->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi33->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi33->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi33->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi33->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi33->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi33->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi33->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi33->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi33->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi33->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi33->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi33->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi33->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->Add(METPhiLeadJetPhi,"");
   
   TH1D *METPhiLeadJetPhi34 = new TH1D("METPhiLeadJetPhi34"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   METPhiLeadJetPhi34->SetBinContent(1,0.005768791);
   METPhiLeadJetPhi34->SetBinContent(2,0.001635005);
   METPhiLeadJetPhi34->SetBinContent(3,0.0003084915);
   METPhiLeadJetPhi34->SetBinContent(4,0.0001542458);
   METPhiLeadJetPhi34->SetBinContent(16,1.542458e-05);
   METPhiLeadJetPhi34->SetBinContent(17,9.254746e-05);
   METPhiLeadJetPhi34->SetBinContent(18,0.0003084915);
   METPhiLeadJetPhi34->SetBinContent(19,0.001527033);
   METPhiLeadJetPhi34->SetBinContent(20,0.006123557);
   METPhiLeadJetPhi34->SetBinError(1,0.0002982971);
   METPhiLeadJetPhi34->SetBinError(2,0.0001588057);
   METPhiLeadJetPhi34->SetBinError(3,6.89808e-05);
   METPhiLeadJetPhi34->SetBinError(4,4.877679e-05);
   METPhiLeadJetPhi34->SetBinError(16,1.542458e-05);
   METPhiLeadJetPhi34->SetBinError(17,3.778234e-05);
   METPhiLeadJetPhi34->SetBinError(18,6.89808e-05);
   METPhiLeadJetPhi34->SetBinError(19,0.0001534726);
   METPhiLeadJetPhi34->SetBinError(20,0.0003073325);
   METPhiLeadJetPhi34->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   METPhiLeadJetPhi34->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METPhiLeadJetPhi34->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METPhiLeadJetPhi34->SetMarkerColor(ci);
   METPhiLeadJetPhi34->SetMarkerStyle(20);
   METPhiLeadJetPhi34->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi34->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi34->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi34->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi34->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi34->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi34->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi34->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi34->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi34->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi34->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi34->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi34->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi34->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->Add(METPhiLeadJetPhi,"");
   
   TH1D *METPhiLeadJetPhi35 = new TH1D("METPhiLeadJetPhi35"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   METPhiLeadJetPhi35->SetBinContent(1,1.677165e-05);
   METPhiLeadJetPhi35->SetBinError(1,1.677165e-05);
   METPhiLeadJetPhi35->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   METPhiLeadJetPhi35->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METPhiLeadJetPhi35->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METPhiLeadJetPhi35->SetMarkerColor(ci);
   METPhiLeadJetPhi35->SetMarkerStyle(21);
   METPhiLeadJetPhi35->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi35->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi35->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi35->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi35->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi35->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi35->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi35->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi35->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi35->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi35->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi35->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi35->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi35->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->Add(METPhiLeadJetPhi,"");
   METPhiLeadJetPhi->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.2651437,0.94,0.7348563,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("METPhiLeadJetPhi");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METPhiLeadJetPhi","METPhiLeadJetPhi_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METPhiLeadJetPhi","METPhiLeadJetPhi_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METPhiLeadJetPhi","METPhiLeadJetPhi_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METPhiLeadJetPhi","METPhiLeadJetPhi_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METPhiLeadJetPhi","METPhiLeadJetPhi_ttbar","lp");

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
   METPhiLeadJetPhi->Modified();
   METPhiLeadJetPhi->cd();
   METPhiLeadJetPhi->SetSelected(METPhiLeadJetPhi);
}
