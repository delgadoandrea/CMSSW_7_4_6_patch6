void phimetphimub2()
{
//=========Macro generated from canvas: b2/phimetphimub2/b2/phimetphimub2
//=========  (Tue Nov 24 14:26:25 2015) by ROOT version6.02/05
   TCanvas *b2/phimetphimub2 = new TCanvas("b2/phimetphimub2", "b2/phimetphimub2",20,42,700,700);
   b2/phimetphimub2->Range(-3.926991,-5.770599,3.926991,-0.6297103);
   b2/phimetphimub2->SetFillColor(0);
   b2/phimetphimub2->SetBorderMode(0);
   b2/phimetphimub2->SetBorderSize(2);
   b2/phimetphimub2->SetLogy();
   b2/phimetphimub2->SetFrameBorderMode(0);
   b2/phimetphimub2->SetFrameBorderMode(0);
   
   THStack *b2/phimetphimub2 = new THStack();
   b2/phimetphimub2->SetName("b2/phimetphimub2");
   b2/phimetphimub2->SetTitle("b2/phimetphimub2");
   
   TH1F *b2/phimetphimub2_stack_2 = new TH1F("b2/phimetphimub2_stack_2","b2/phimetphimub2",20,-3.141593,3.141593);
   b2/phimetphimub2_stack_2->SetMinimum(5.539747e-06);
   b2/phimetphimub2_stack_2->SetMaximum(0.07181262);
   b2/phimetphimub2_stack_2->SetDirectory(0);
   b2/phimetphimub2_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b2/phimetphimub2_stack_2->SetLineColor(ci);
   b2/phimetphimub2_stack_2->GetXaxis()->SetTitle("b2/phimetphimub2");
   b2/phimetphimub2_stack_2->GetXaxis()->SetLabelFont(42);
   b2/phimetphimub2_stack_2->GetXaxis()->SetLabelSize(0.035);
   b2/phimetphimub2_stack_2->GetXaxis()->SetTitleSize(0.035);
   b2/phimetphimub2_stack_2->GetXaxis()->SetTitleFont(42);
   b2/phimetphimub2_stack_2->GetYaxis()->SetTitle("Events/pb");
   b2/phimetphimub2_stack_2->GetYaxis()->SetLabelFont(42);
   b2/phimetphimub2_stack_2->GetYaxis()->SetLabelSize(0.035);
   b2/phimetphimub2_stack_2->GetYaxis()->SetTitleSize(0.035);
   b2/phimetphimub2_stack_2->GetYaxis()->SetTitleFont(42);
   b2/phimetphimub2_stack_2->GetZaxis()->SetLabelFont(42);
   b2/phimetphimub2_stack_2->GetZaxis()->SetLabelSize(0.035);
   b2/phimetphimub2_stack_2->GetZaxis()->SetTitleSize(0.035);
   b2/phimetphimub2_stack_2->GetZaxis()->SetTitleFont(42);
   b2/phimetphimub2->SetHistogram(b2/phimetphimub2_stack_2);
   
   
   TH1D *phimetphimub26 = new TH1D("phimetphimub26"," #Delta_{#phi}[#mu,MET]",20,-3.141593,3.141593);
   phimetphimub26->SetBinContent(1,0.00136138);
   phimetphimub26->SetBinContent(2,0.00204207);
   phimetphimub26->SetBinContent(3,0.01799892);
   phimetphimub26->SetBinContent(4,0.00136138);
   phimetphimub26->SetBinContent(5,0.01799892);
   phimetphimub26->SetBinContent(6,0.00831877);
   phimetphimub26->SetBinContent(7,0.00136138);
   phimetphimub26->SetBinContent(8,0.00272276);
   phimetphimub26->SetBinContent(9,0.00899946);
   phimetphimub26->SetBinContent(10,0.00136138);
   phimetphimub26->SetBinContent(11,0.00831877);
   phimetphimub26->SetBinContent(12,0.00899946);
   phimetphimub26->SetBinContent(13,0.00204207);
   phimetphimub26->SetBinContent(14,0.01867961);
   phimetphimub26->SetBinContent(15,0.00204207);
   phimetphimub26->SetBinContent(16,0.00068069);
   phimetphimub26->SetBinContent(17,0.00831877);
   phimetphimub26->SetBinContent(18,0.00831877);
   phimetphimub26->SetBinContent(19,0.00068069);
   phimetphimub26->SetBinContent(20,0.01036084);
   phimetphimub26->SetBinError(1,0.000962641);
   phimetphimub26->SetBinError(2,0.00117899);
   phimetphimub26->SetBinError(3,0.01180384);
   phimetphimub26->SetBinError(4,0.000962641);
   phimetphimub26->SetBinError(5,0.01180384);
   phimetphimub26->SetBinError(6,0.00831877);
   phimetphimub26->SetBinError(7,0.000962641);
   phimetphimub26->SetBinError(8,0.00136138);
   phimetphimub26->SetBinError(9,0.008346573);
   phimetphimub26->SetBinError(10,0.000962641);
   phimetphimub26->SetBinError(11,0.00831877);
   phimetphimub26->SetBinError(12,0.008346573);
   phimetphimub26->SetBinError(13,0.00117899);
   phimetphimub26->SetBinError(14,0.01182345);
   phimetphimub26->SetBinError(15,0.00117899);
   phimetphimub26->SetBinError(16,0.00068069);
   phimetphimub26->SetBinError(17,0.00831877);
   phimetphimub26->SetBinError(18,0.00831877);
   phimetphimub26->SetBinError(19,0.00068069);
   phimetphimub26->SetBinError(20,0.008401902);
   phimetphimub26->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   phimetphimub26->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphimub26->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphimub26->SetMarkerColor(ci);
   phimetphimub26->SetMarkerStyle(22);
   phimetphimub26->GetXaxis()->SetTitle("phimetphimub2");
   phimetphimub26->GetXaxis()->SetLabelFont(42);
   phimetphimub26->GetXaxis()->SetLabelSize(0.035);
   phimetphimub26->GetXaxis()->SetTitleSize(0.035);
   phimetphimub26->GetXaxis()->SetTitleFont(42);
   phimetphimub26->GetYaxis()->SetTitle("Events/pb");
   phimetphimub26->GetYaxis()->SetLabelFont(42);
   phimetphimub26->GetYaxis()->SetLabelSize(0.035);
   phimetphimub26->GetYaxis()->SetTitleSize(0.035);
   phimetphimub26->GetYaxis()->SetTitleFont(42);
   phimetphimub26->GetZaxis()->SetLabelFont(42);
   phimetphimub26->GetZaxis()->SetLabelSize(0.035);
   phimetphimub26->GetZaxis()->SetTitleSize(0.035);
   phimetphimub26->GetZaxis()->SetTitleFont(42);
   b2/phimetphimub2->Add(phimetphimub2,"");
   
   TH1D *phimetphimub27 = new TH1D("phimetphimub27"," #Delta_{#phi}[#mu,MET]",20,-3.141593,3.141593);
   phimetphimub27->SetBinContent(1,0.01531071);
   phimetphimub27->SetBinContent(2,0.01891584);
   phimetphimub27->SetBinContent(3,0.02159264);
   phimetphimub27->SetBinContent(4,0.02763262);
   phimetphimub27->SetBinContent(5,0.03901648);
   phimetphimub27->SetBinContent(6,0.03865073);
   phimetphimub27->SetBinContent(7,0.03256607);
   phimetphimub27->SetBinContent(8,0.0308346);
   phimetphimub27->SetBinContent(9,0.03656439);
   phimetphimub27->SetBinContent(10,0.04249509);
   phimetphimub27->SetBinContent(11,0.04016723);
   phimetphimub27->SetBinContent(12,0.03269515);
   phimetphimub27->SetBinContent(13,0.03147039);
   phimetphimub27->SetBinContent(14,0.03308513);
   phimetphimub27->SetBinContent(15,0.04107903);
   phimetphimub27->SetBinContent(16,0.03897896);
   phimetphimub27->SetBinContent(17,0.02441886);
   phimetphimub27->SetBinContent(18,0.02154987);
   phimetphimub27->SetBinContent(19,0.01811981);
   phimetphimub27->SetBinContent(20,0.0153177);
   phimetphimub27->SetBinError(1,0.002031437);
   phimetphimub27->SetBinError(2,0.001921028);
   phimetphimub27->SetBinError(3,0.002376295);
   phimetphimub27->SetBinError(4,0.002662669);
   phimetphimub27->SetBinError(5,0.003035244);
   phimetphimub27->SetBinError(6,0.002226469);
   phimetphimub27->SetBinError(7,0.002011525);
   phimetphimub27->SetBinError(8,0.001964583);
   phimetphimub27->SetBinError(9,0.002128395);
   phimetphimub27->SetBinError(10,0.002020783);
   phimetphimub27->SetBinError(11,0.001960637);
   phimetphimub27->SetBinError(12,0.002001037);
   phimetphimub27->SetBinError(13,0.001765085);
   phimetphimub27->SetBinError(14,0.001808715);
   phimetphimub27->SetBinError(15,0.002611835);
   phimetphimub27->SetBinError(16,0.003037558);
   phimetphimub27->SetBinError(17,0.002442726);
   phimetphimub27->SetBinError(18,0.002198695);
   phimetphimub27->SetBinError(19,0.001662565);
   phimetphimub27->SetBinError(20,0.001812623);
   phimetphimub27->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   phimetphimub27->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphimub27->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphimub27->SetMarkerColor(ci);
   phimetphimub27->SetMarkerStyle(20);
   phimetphimub27->GetXaxis()->SetTitle("phimetphimub2");
   phimetphimub27->GetXaxis()->SetLabelFont(42);
   phimetphimub27->GetXaxis()->SetLabelSize(0.035);
   phimetphimub27->GetXaxis()->SetTitleSize(0.035);
   phimetphimub27->GetXaxis()->SetTitleFont(42);
   phimetphimub27->GetYaxis()->SetTitle("Events/pb");
   phimetphimub27->GetYaxis()->SetLabelFont(42);
   phimetphimub27->GetYaxis()->SetLabelSize(0.035);
   phimetphimub27->GetYaxis()->SetTitleSize(0.035);
   phimetphimub27->GetYaxis()->SetTitleFont(42);
   phimetphimub27->GetZaxis()->SetLabelFont(42);
   phimetphimub27->GetZaxis()->SetLabelSize(0.035);
   phimetphimub27->GetZaxis()->SetTitleSize(0.035);
   phimetphimub27->GetZaxis()->SetTitleFont(42);
   b2/phimetphimub2->Add(phimetphimub2,"");
   
   TH1D *phimetphimub28 = new TH1D("phimetphimub28"," #Delta_{#phi}[#mu,MET]",20,-3.141593,3.141593);
   phimetphimub28->SetBinContent(1,0.007260251);
   phimetphimub28->SetBinContent(2,0.007635544);
   phimetphimub28->SetBinContent(3,0.008108625);
   phimetphimub28->SetBinContent(4,0.007616104);
   phimetphimub28->SetBinContent(5,0.007647207);
   phimetphimub28->SetBinContent(6,0.006758342);
   phimetphimub28->SetBinContent(7,0.007818126);
   phimetphimub28->SetBinContent(8,0.007344047);
   phimetphimub28->SetBinContent(9,0.007418872);
   phimetphimub28->SetBinContent(10,0.006993253);
   phimetphimub28->SetBinContent(11,0.007013858);
   phimetphimub28->SetBinContent(12,0.006877421);
   phimetphimub28->SetBinContent(13,0.006585711);
   phimetphimub28->SetBinContent(14,0.006989028);
   phimetphimub28->SetBinContent(15,0.007362312);
   phimetphimub28->SetBinContent(16,0.007174314);
   phimetphimub28->SetBinContent(17,0.006862142);
   phimetphimub28->SetBinContent(18,0.007494497);
   phimetphimub28->SetBinContent(19,0.007831967);
   phimetphimub28->SetBinContent(20,0.00768474);
   phimetphimub28->SetBinError(1,0.0004044406);
   phimetphimub28->SetBinError(2,0.0004415927);
   phimetphimub28->SetBinError(3,0.0004496008);
   phimetphimub28->SetBinError(4,0.000436687);
   phimetphimub28->SetBinError(5,0.0004316904);
   phimetphimub28->SetBinError(6,0.000410296);
   phimetphimub28->SetBinError(7,0.0004473501);
   phimetphimub28->SetBinError(8,0.0004316954);
   phimetphimub28->SetBinError(9,0.0004258914);
   phimetphimub28->SetBinError(10,0.0004205258);
   phimetphimub28->SetBinError(11,0.0004367735);
   phimetphimub28->SetBinError(12,0.0004022927);
   phimetphimub28->SetBinError(13,0.0004005871);
   phimetphimub28->SetBinError(14,0.0004204644);
   phimetphimub28->SetBinError(15,0.0004370073);
   phimetphimub28->SetBinError(16,0.0004077946);
   phimetphimub28->SetBinError(17,0.000389551);
   phimetphimub28->SetBinError(18,0.0004338699);
   phimetphimub28->SetBinError(19,0.0004489678);
   phimetphimub28->SetBinError(20,0.00043513);
   phimetphimub28->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   phimetphimub28->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphimub28->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphimub28->SetMarkerColor(ci);
   phimetphimub28->SetMarkerStyle(21);
   phimetphimub28->GetXaxis()->SetTitle("phimetphimub2");
   phimetphimub28->GetXaxis()->SetLabelFont(42);
   phimetphimub28->GetXaxis()->SetLabelSize(0.035);
   phimetphimub28->GetXaxis()->SetTitleSize(0.035);
   phimetphimub28->GetXaxis()->SetTitleFont(42);
   phimetphimub28->GetYaxis()->SetTitle("Events/pb");
   phimetphimub28->GetYaxis()->SetLabelFont(42);
   phimetphimub28->GetYaxis()->SetLabelSize(0.035);
   phimetphimub28->GetYaxis()->SetTitleSize(0.035);
   phimetphimub28->GetYaxis()->SetTitleFont(42);
   phimetphimub28->GetZaxis()->SetLabelFont(42);
   phimetphimub28->GetZaxis()->SetLabelSize(0.035);
   phimetphimub28->GetZaxis()->SetTitleSize(0.035);
   phimetphimub28->GetZaxis()->SetTitleFont(42);
   b2/phimetphimub2->Add(phimetphimub2,"");
   
   TH1D *phimetphimub29 = new TH1D("phimetphimub29"," #Delta_{#phi}[#mu,MET]",20,-3.141593,3.141593);
   phimetphimub29->SetBinContent(1,0.0004935864);
   phimetphimub29->SetBinContent(2,0.0004781619);
   phimetphimub29->SetBinContent(3,0.0003393407);
   phimetphimub29->SetBinContent(4,0.0004627373);
   phimetphimub29->SetBinContent(5,0.0007249551);
   phimetphimub29->SetBinContent(6,0.0007558042);
   phimetphimub29->SetBinContent(7,0.0009563237);
   phimetphimub29->SetBinContent(8,0.001110569);
   phimetphimub29->SetBinContent(9,0.00128024);
   phimetphimub29->SetBinContent(10,0.001372787);
   phimetphimub29->SetBinContent(11,0.001527033);
   phimetphimub29->SetBinContent(12,0.001187692);
   phimetphimub29->SetBinContent(13,0.001064296);
   phimetphimub29->SetBinContent(14,0.0009408991);
   phimetphimub29->SetBinContent(15,0.0006786813);
   phimetphimub29->SetBinContent(16,0.0007095305);
   phimetphimub29->SetBinContent(17,0.0006941059);
   phimetphimub29->SetBinContent(18,0.0004318881);
   phimetphimub29->SetBinContent(19,0.0004473127);
   phimetphimub29->SetBinContent(20,0.0002776424);
   phimetphimub29->SetBinError(1,8.725458e-05);
   phimetphimub29->SetBinError(2,8.58804e-05);
   phimetphimub29->SetBinError(3,7.234767e-05);
   phimetphimub29->SetBinError(4,8.448388e-05);
   phimetphimub29->SetBinError(5,0.0001057456);
   phimetphimub29->SetBinError(6,0.000107972);
   phimetphimub29->SetBinError(7,0.0001214532);
   phimetphimub29->SetBinError(8,0.0001308819);
   phimetphimub29->SetBinError(9,0.0001405246);
   phimetphimub29->SetBinError(10,0.0001455152);
   phimetphimub29->SetBinError(11,0.0001534726);
   phimetphimub29->SetBinError(12,0.0001353501);
   phimetphimub29->SetBinError(13,0.0001281262);
   phimetphimub29->SetBinError(14,0.0001204698);
   phimetphimub29->SetBinError(15,0.0001023151);
   phimetphimub29->SetBinError(16,0.0001046146);
   phimetphimub29->SetBinError(17,0.0001034712);
   phimetphimub29->SetBinError(18,8.161918e-05);
   phimetphimub29->SetBinError(19,8.306388e-05);
   phimetphimub29->SetBinError(20,6.544093e-05);
   phimetphimub29->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   phimetphimub29->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphimub29->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphimub29->SetMarkerColor(ci);
   phimetphimub29->SetMarkerStyle(20);
   phimetphimub29->GetXaxis()->SetTitle("phimetphimub2");
   phimetphimub29->GetXaxis()->SetLabelFont(42);
   phimetphimub29->GetXaxis()->SetLabelSize(0.035);
   phimetphimub29->GetXaxis()->SetTitleSize(0.035);
   phimetphimub29->GetXaxis()->SetTitleFont(42);
   phimetphimub29->GetYaxis()->SetTitle("Events/pb");
   phimetphimub29->GetYaxis()->SetLabelFont(42);
   phimetphimub29->GetYaxis()->SetLabelSize(0.035);
   phimetphimub29->GetYaxis()->SetTitleSize(0.035);
   phimetphimub29->GetYaxis()->SetTitleFont(42);
   phimetphimub29->GetZaxis()->SetLabelFont(42);
   phimetphimub29->GetZaxis()->SetLabelSize(0.035);
   phimetphimub29->GetZaxis()->SetTitleSize(0.035);
   phimetphimub29->GetZaxis()->SetTitleFont(42);
   b2/phimetphimub2->Add(phimetphimub2,"");
   
   TH1D *phimetphimub210 = new TH1D("phimetphimub210"," #Delta_{#phi}[#mu,MET]",20,-3.141593,3.141593);
   phimetphimub210->SetBinContent(13,1.677165e-05);
   phimetphimub210->SetBinError(13,1.677165e-05);
   phimetphimub210->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   phimetphimub210->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphimub210->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphimub210->SetMarkerColor(ci);
   phimetphimub210->SetMarkerStyle(21);
   phimetphimub210->GetXaxis()->SetTitle("phimetphimub2");
   phimetphimub210->GetXaxis()->SetLabelFont(42);
   phimetphimub210->GetXaxis()->SetLabelSize(0.035);
   phimetphimub210->GetXaxis()->SetTitleSize(0.035);
   phimetphimub210->GetXaxis()->SetTitleFont(42);
   phimetphimub210->GetYaxis()->SetTitle("Events/pb");
   phimetphimub210->GetYaxis()->SetLabelFont(42);
   phimetphimub210->GetYaxis()->SetLabelSize(0.035);
   phimetphimub210->GetYaxis()->SetTitleSize(0.035);
   phimetphimub210->GetYaxis()->SetTitleFont(42);
   phimetphimub210->GetZaxis()->SetLabelFont(42);
   phimetphimub210->GetZaxis()->SetLabelSize(0.035);
   phimetphimub210->GetZaxis()->SetTitleSize(0.035);
   phimetphimub210->GetZaxis()->SetTitleFont(42);
   b2/phimetphimub2->Add(phimetphimub2,"");
   b2/phimetphimub2->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.2672989,0.9342857,0.7327011,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b2/phimetphimub2");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimetphimub2","b2/phimetphimub2_QCD_b2/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphimub2","b2/phimetphimub2_WJetsToLNu_b2/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphimub2","b2/phimetphimub2_ZJetsToNuNu_b2/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphimub2","b2/phimetphimub2_signal_b2/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphimub2","b2/phimetphimub2_ttbar_b2/","lp");

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
   b2/phimetphimub2->Modified();
   b2/phimetphimub2->cd();
   b2/phimetphimub2->SetSelected(b2/phimetphimub2);
}
