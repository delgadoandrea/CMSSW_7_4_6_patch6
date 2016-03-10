void METoptb2()
{
//=========Macro generated from canvas: b2/METoptb2/b2/METoptb2
//=========  (Tue Nov 24 14:26:31 2015) by ROOT version6.02/05
   TCanvas *b2/METoptb2 = new TCanvas("b2/METoptb2", "b2/METoptb2",220,242,700,700);
   b2/METoptb2->Range(-0.375,-6.432596,3.375,0.05191559);
   b2/METoptb2->SetFillColor(0);
   b2/METoptb2->SetBorderMode(0);
   b2/METoptb2->SetBorderSize(2);
   b2/METoptb2->SetLogy();
   b2/METoptb2->SetFrameBorderMode(0);
   b2/METoptb2->SetFrameBorderMode(0);
   
   THStack *b2/METoptb2 = new THStack();
   b2/METoptb2->SetName("b2/METoptb2");
   b2/METoptb2->SetTitle("b2/METoptb2");
   
   TH1F *b2/METoptb2_stack_12 = new TH1F("b2/METoptb2_stack_12","b2/METoptb2",15,0,3);
   b2/METoptb2_stack_12->SetMinimum(1.643823e-06);
   b2/METoptb2_stack_12->SetMaximum(0.2532004);
   b2/METoptb2_stack_12->SetDirectory(0);
   b2/METoptb2_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b2/METoptb2_stack_12->SetLineColor(ci);
   b2/METoptb2_stack_12->GetXaxis()->SetTitle("b2/METoptb2");
   b2/METoptb2_stack_12->GetXaxis()->SetLabelFont(42);
   b2/METoptb2_stack_12->GetXaxis()->SetLabelSize(0.035);
   b2/METoptb2_stack_12->GetXaxis()->SetTitleSize(0.035);
   b2/METoptb2_stack_12->GetXaxis()->SetTitleFont(42);
   b2/METoptb2_stack_12->GetYaxis()->SetTitle("Events/pb");
   b2/METoptb2_stack_12->GetYaxis()->SetLabelFont(42);
   b2/METoptb2_stack_12->GetYaxis()->SetLabelSize(0.035);
   b2/METoptb2_stack_12->GetYaxis()->SetTitleSize(0.035);
   b2/METoptb2_stack_12->GetYaxis()->SetTitleFont(42);
   b2/METoptb2_stack_12->GetZaxis()->SetLabelFont(42);
   b2/METoptb2_stack_12->GetZaxis()->SetLabelSize(0.035);
   b2/METoptb2_stack_12->GetZaxis()->SetTitleSize(0.035);
   b2/METoptb2_stack_12->GetZaxis()->SetTitleFont(42);
   b2/METoptb2->SetHistogram(b2/METoptb2_stack_12);
   
   
   TH1D *METoptb256 = new TH1D("METoptb256","MET/p_{T}^{lead jet}",15,0,3);
   METoptb256->SetBinContent(1,0.00068069);
   METoptb256->SetBinContent(2,0.00952966);
   METoptb256->SetBinContent(3,0.06912243);
   METoptb256->SetBinContent(4,0.01104153);
   METoptb256->SetBinContent(5,0.01663754);
   METoptb256->SetBinContent(6,0.02495631);
   METoptb256->SetBinError(1,0.00068069);
   METoptb256->SetBinError(2,0.002546909);
   METoptb256->SetBinError(3,0.02217717);
   METoptb256->SetBinError(4,0.00842943);
   METoptb256->SetBinError(5,0.01176452);
   METoptb256->SetBinError(6,0.01440853);
   METoptb256->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   METoptb256->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METoptb256->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METoptb256->SetMarkerColor(ci);
   METoptb256->SetMarkerStyle(22);
   METoptb256->GetXaxis()->SetTitle("METoptb2");
   METoptb256->GetXaxis()->SetLabelFont(42);
   METoptb256->GetXaxis()->SetLabelSize(0.035);
   METoptb256->GetXaxis()->SetTitleSize(0.035);
   METoptb256->GetXaxis()->SetTitleFont(42);
   METoptb256->GetYaxis()->SetTitle("Events/pb");
   METoptb256->GetYaxis()->SetLabelFont(42);
   METoptb256->GetYaxis()->SetLabelSize(0.035);
   METoptb256->GetYaxis()->SetTitleSize(0.035);
   METoptb256->GetYaxis()->SetTitleFont(42);
   METoptb256->GetZaxis()->SetLabelFont(42);
   METoptb256->GetZaxis()->SetLabelSize(0.035);
   METoptb256->GetZaxis()->SetTitleSize(0.035);
   METoptb256->GetZaxis()->SetTitleFont(42);
   b2/METoptb2->Add(METoptb2,"");
   
   TH1D *METoptb257 = new TH1D("METoptb257","MET/p_{T}^{lead jet}",15,0,3);
   METoptb257->SetBinContent(1,1.392893e-05);
   METoptb257->SetBinContent(2,0.001351916);
   METoptb257->SetBinContent(3,0.009267276);
   METoptb257->SetBinContent(4,0.04333138);
   METoptb257->SetBinContent(5,0.1226104);
   METoptb257->SetBinContent(6,0.1345744);
   METoptb257->SetBinContent(7,0.1072757);
   METoptb257->SetBinContent(8,0.0786938);
   METoptb257->SetBinContent(9,0.04683283);
   METoptb257->SetBinContent(10,0.0271465);
   METoptb257->SetBinContent(11,0.0117321);
   METoptb257->SetBinContent(12,0.007680578);
   METoptb257->SetBinContent(13,0.003504385);
   METoptb257->SetBinContent(14,0.002544782);
   METoptb257->SetBinContent(15,0.001871985);
   METoptb257->SetBinContent(16,0.002029317);
   METoptb257->SetBinError(1,1.392893e-05);
   METoptb257->SetBinError(2,0.0001372687);
   METoptb257->SetBinError(3,0.0003814526);
   METoptb257->SetBinError(4,0.001364947);
   METoptb257->SetBinError(5,0.003448717);
   METoptb257->SetBinError(6,0.004099139);
   METoptb257->SetBinError(7,0.004180275);
   METoptb257->SetBinError(8,0.004584045);
   METoptb257->SetBinError(9,0.003621192);
   METoptb257->SetBinError(10,0.002726748);
   METoptb257->SetBinError(11,0.001513075);
   METoptb257->SetBinError(12,0.001337888);
   METoptb257->SetBinError(13,0.001122201);
   METoptb257->SetBinError(14,0.001068918);
   METoptb257->SetBinError(15,0.001029262);
   METoptb257->SetBinError(16,0.001037471);
   METoptb257->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   METoptb257->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METoptb257->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METoptb257->SetMarkerColor(ci);
   METoptb257->SetMarkerStyle(20);
   METoptb257->GetXaxis()->SetTitle("METoptb2");
   METoptb257->GetXaxis()->SetLabelFont(42);
   METoptb257->GetXaxis()->SetLabelSize(0.035);
   METoptb257->GetXaxis()->SetTitleSize(0.035);
   METoptb257->GetXaxis()->SetTitleFont(42);
   METoptb257->GetYaxis()->SetTitle("Events/pb");
   METoptb257->GetYaxis()->SetLabelFont(42);
   METoptb257->GetYaxis()->SetLabelSize(0.035);
   METoptb257->GetYaxis()->SetTitleSize(0.035);
   METoptb257->GetYaxis()->SetTitleFont(42);
   METoptb257->GetZaxis()->SetLabelFont(42);
   METoptb257->GetZaxis()->SetLabelSize(0.035);
   METoptb257->GetZaxis()->SetTitleSize(0.035);
   METoptb257->GetZaxis()->SetTitleFont(42);
   b2/METoptb2->Add(METoptb2,"");
   
   TH1D *METoptb258 = new TH1D("METoptb258","MET/p_{T}^{lead jet}",15,0,3);
   METoptb258->SetBinContent(1,5.851509e-06);
   METoptb258->SetBinContent(2,0.0002960863);
   METoptb258->SetBinContent(3,0.002055587);
   METoptb258->SetBinContent(4,0.009485694);
   METoptb258->SetBinContent(5,0.02637833);
   METoptb258->SetBinContent(6,0.03542185);
   METoptb258->SetBinContent(7,0.02902985);
   METoptb258->SetBinContent(8,0.01931192);
   METoptb258->SetBinContent(9,0.01045294);
   METoptb258->SetBinContent(10,0.006260894);
   METoptb258->SetBinContent(11,0.004006631);
   METoptb258->SetBinContent(12,0.001811275);
   METoptb258->SetBinContent(13,0.001055017);
   METoptb258->SetBinContent(14,0.0003970447);
   METoptb258->SetBinContent(15,0.0002648587);
   METoptb258->SetBinContent(16,0.0002425362);
   METoptb258->SetBinError(1,2.616874e-06);
   METoptb258->SetBinError(2,1.861479e-05);
   METoptb258->SetBinError(3,5.431574e-05);
   METoptb258->SetBinError(4,0.0002770452);
   METoptb258->SetBinError(5,0.000680549);
   METoptb258->SetBinError(6,0.0009013724);
   METoptb258->SetBinError(7,0.0009115706);
   METoptb258->SetBinError(8,0.0007784417);
   METoptb258->SetBinError(9,0.0005631055);
   METoptb258->SetBinError(10,0.000447395);
   METoptb258->SetBinError(11,0.0003988073);
   METoptb258->SetBinError(12,0.0002844883);
   METoptb258->SetBinError(13,0.0002045993);
   METoptb258->SetBinError(14,0.0001303943);
   METoptb258->SetBinError(15,8.467851e-05);
   METoptb258->SetBinError(16,0.0001139839);
   METoptb258->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   METoptb258->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METoptb258->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METoptb258->SetMarkerColor(ci);
   METoptb258->SetMarkerStyle(21);
   METoptb258->GetXaxis()->SetTitle("METoptb2");
   METoptb258->GetXaxis()->SetLabelFont(42);
   METoptb258->GetXaxis()->SetLabelSize(0.035);
   METoptb258->GetXaxis()->SetTitleSize(0.035);
   METoptb258->GetXaxis()->SetTitleFont(42);
   METoptb258->GetYaxis()->SetTitle("Events/pb");
   METoptb258->GetYaxis()->SetLabelFont(42);
   METoptb258->GetYaxis()->SetLabelSize(0.035);
   METoptb258->GetYaxis()->SetTitleSize(0.035);
   METoptb258->GetYaxis()->SetTitleFont(42);
   METoptb258->GetZaxis()->SetLabelFont(42);
   METoptb258->GetZaxis()->SetLabelSize(0.035);
   METoptb258->GetZaxis()->SetTitleSize(0.035);
   METoptb258->GetZaxis()->SetTitleFont(42);
   b2/METoptb2->Add(METoptb2,"");
   
   TH1D *METoptb259 = new TH1D("METoptb259","MET/p_{T}^{lead jet}",15,0,3);
   METoptb259->SetBinContent(2,1.542458e-05);
   METoptb259->SetBinContent(3,9.254746e-05);
   METoptb259->SetBinContent(4,0.0009717483);
   METoptb259->SetBinContent(5,0.003146613);
   METoptb259->SetBinContent(6,0.003840719);
   METoptb259->SetBinContent(7,0.002637602);
   METoptb259->SetBinContent(8,0.001758402);
   METoptb259->SetBinContent(9,0.001326514);
   METoptb259->SetBinContent(10,0.0007866534);
   METoptb259->SetBinContent(11,0.0004781619);
   METoptb259->SetBinContent(12,0.0003084915);
   METoptb259->SetBinContent(13,0.0002159441);
   METoptb259->SetBinContent(14,0.0001233966);
   METoptb259->SetBinContent(15,0.0001233966);
   METoptb259->SetBinContent(16,0.000107972);
   METoptb259->SetBinError(2,1.542458e-05);
   METoptb259->SetBinError(3,3.778234e-05);
   METoptb259->SetBinError(4,0.0001224288);
   METoptb259->SetBinError(5,0.000220307);
   METoptb259->SetBinError(6,0.0002433957);
   METoptb259->SetBinError(7,0.0002017025);
   METoptb259->SetBinError(8,0.0001646894);
   METoptb259->SetBinError(9,0.0001430416);
   METoptb259->SetBinError(10,0.0001101535);
   METoptb259->SetBinError(11,8.58804e-05);
   METoptb259->SetBinError(12,6.89808e-05);
   METoptb259->SetBinError(13,5.771348e-05);
   METoptb259->SetBinError(14,4.362729e-05);
   METoptb259->SetBinError(15,4.362729e-05);
   METoptb259->SetBinError(16,4.080959e-05);
   METoptb259->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   METoptb259->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METoptb259->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METoptb259->SetMarkerColor(ci);
   METoptb259->SetMarkerStyle(20);
   METoptb259->GetXaxis()->SetTitle("METoptb2");
   METoptb259->GetXaxis()->SetLabelFont(42);
   METoptb259->GetXaxis()->SetLabelSize(0.035);
   METoptb259->GetXaxis()->SetTitleSize(0.035);
   METoptb259->GetXaxis()->SetTitleFont(42);
   METoptb259->GetYaxis()->SetTitle("Events/pb");
   METoptb259->GetYaxis()->SetLabelFont(42);
   METoptb259->GetYaxis()->SetLabelSize(0.035);
   METoptb259->GetYaxis()->SetTitleSize(0.035);
   METoptb259->GetYaxis()->SetTitleFont(42);
   METoptb259->GetZaxis()->SetLabelFont(42);
   METoptb259->GetZaxis()->SetLabelSize(0.035);
   METoptb259->GetZaxis()->SetTitleSize(0.035);
   METoptb259->GetZaxis()->SetTitleFont(42);
   b2/METoptb2->Add(METoptb2,"");
   
   TH1D *METoptb260 = new TH1D("METoptb260","MET/p_{T}^{lead jet}",15,0,3);
   METoptb260->SetBinContent(4,1.677165e-05);
   METoptb260->SetBinError(4,1.677165e-05);
   METoptb260->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   METoptb260->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METoptb260->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METoptb260->SetMarkerColor(ci);
   METoptb260->SetMarkerStyle(21);
   METoptb260->GetXaxis()->SetTitle("METoptb2");
   METoptb260->GetXaxis()->SetLabelFont(42);
   METoptb260->GetXaxis()->SetLabelSize(0.035);
   METoptb260->GetXaxis()->SetTitleSize(0.035);
   METoptb260->GetXaxis()->SetTitleFont(42);
   METoptb260->GetYaxis()->SetTitle("Events/pb");
   METoptb260->GetYaxis()->SetLabelFont(42);
   METoptb260->GetYaxis()->SetLabelSize(0.035);
   METoptb260->GetYaxis()->SetTitleSize(0.035);
   METoptb260->GetYaxis()->SetTitleFont(42);
   METoptb260->GetZaxis()->SetLabelFont(42);
   METoptb260->GetZaxis()->SetLabelSize(0.035);
   METoptb260->GetZaxis()->SetTitleSize(0.035);
   METoptb260->GetZaxis()->SetTitleFont(42);
   b2/METoptb2->Add(METoptb2,"");
   b2/METoptb2->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3326724,0.9342857,0.6673276,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b2/METoptb2");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METoptb2","b2/METoptb2_QCD_b2/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METoptb2","b2/METoptb2_WJetsToLNu_b2/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METoptb2","b2/METoptb2_ZJetsToNuNu_b2/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METoptb2","b2/METoptb2_signal_b2/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METoptb2","b2/METoptb2_ttbar_b2/","lp");

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
   b2/METoptb2->Modified();
   b2/METoptb2->cd();
   b2/METoptb2->SetSelected(b2/METoptb2);
}
