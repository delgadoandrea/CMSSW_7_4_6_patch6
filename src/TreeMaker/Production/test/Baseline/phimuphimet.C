void phimuphimet()
{
//=========Macro generated from canvas: phimuphimet/phimuphimet
//=========  (Mon Nov 23 12:45:28 2015) by ROOT version6.02/05
   TCanvas *phimuphimet = new TCanvas("phimuphimet", "phimuphimet",380,402,700,700);
   phimuphimet->Range(-3.926991,-5.770599,3.926991,-0.6297103);
   phimuphimet->SetFillColor(0);
   phimuphimet->SetBorderMode(0);
   phimuphimet->SetBorderSize(2);
   phimuphimet->SetLogy();
   phimuphimet->SetFrameBorderMode(0);
   phimuphimet->SetFrameBorderMode(0);
   
   THStack *phimuphimet = new THStack();
   phimuphimet->SetName("phimuphimet");
   phimuphimet->SetTitle("phimuphimet");
   
   TH1F *phimuphimet_stack_24 = new TH1F("phimuphimet_stack_24","phimuphimet",20,-3.141593,3.141593);
   phimuphimet_stack_24->SetMinimum(5.539747e-06);
   phimuphimet_stack_24->SetMaximum(0.07181262);
   phimuphimet_stack_24->SetDirectory(0);
   phimuphimet_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   phimuphimet_stack_24->SetLineColor(ci);
   phimuphimet_stack_24->GetXaxis()->SetTitle("phimuphimet");
   phimuphimet_stack_24->GetXaxis()->SetLabelFont(42);
   phimuphimet_stack_24->GetXaxis()->SetLabelSize(0.035);
   phimuphimet_stack_24->GetXaxis()->SetTitleSize(0.035);
   phimuphimet_stack_24->GetXaxis()->SetTitleFont(42);
   phimuphimet_stack_24->GetYaxis()->SetTitle("Events/pb");
   phimuphimet_stack_24->GetYaxis()->SetLabelFont(42);
   phimuphimet_stack_24->GetYaxis()->SetLabelSize(0.035);
   phimuphimet_stack_24->GetYaxis()->SetTitleSize(0.035);
   phimuphimet_stack_24->GetYaxis()->SetTitleFont(42);
   phimuphimet_stack_24->GetZaxis()->SetLabelFont(42);
   phimuphimet_stack_24->GetZaxis()->SetLabelSize(0.035);
   phimuphimet_stack_24->GetZaxis()->SetTitleSize(0.035);
   phimuphimet_stack_24->GetZaxis()->SetTitleFont(42);
   phimuphimet->SetHistogram(phimuphimet_stack_24);
   
   
   TH1D *phimuphimet116 = new TH1D("phimuphimet116"," #Delta_{#phi}[#mu,MET]",20,-3.141593,3.141593);
   phimuphimet116->SetBinContent(1,0.00136138);
   phimuphimet116->SetBinContent(2,0.00204207);
   phimuphimet116->SetBinContent(3,0.01799892);
   phimuphimet116->SetBinContent(4,0.00136138);
   phimuphimet116->SetBinContent(5,0.01799892);
   phimuphimet116->SetBinContent(6,0.00831877);
   phimuphimet116->SetBinContent(7,0.00136138);
   phimuphimet116->SetBinContent(8,0.00272276);
   phimuphimet116->SetBinContent(9,0.00899946);
   phimuphimet116->SetBinContent(10,0.00136138);
   phimuphimet116->SetBinContent(11,0.00831877);
   phimuphimet116->SetBinContent(12,0.00899946);
   phimuphimet116->SetBinContent(13,0.00204207);
   phimuphimet116->SetBinContent(14,0.01867961);
   phimuphimet116->SetBinContent(15,0.00204207);
   phimuphimet116->SetBinContent(16,0.00068069);
   phimuphimet116->SetBinContent(17,0.00831877);
   phimuphimet116->SetBinContent(18,0.00831877);
   phimuphimet116->SetBinContent(19,0.00068069);
   phimuphimet116->SetBinContent(20,0.01036084);
   phimuphimet116->SetBinError(1,0.000962641);
   phimuphimet116->SetBinError(2,0.00117899);
   phimuphimet116->SetBinError(3,0.01180384);
   phimuphimet116->SetBinError(4,0.000962641);
   phimuphimet116->SetBinError(5,0.01180384);
   phimuphimet116->SetBinError(6,0.00831877);
   phimuphimet116->SetBinError(7,0.000962641);
   phimuphimet116->SetBinError(8,0.00136138);
   phimuphimet116->SetBinError(9,0.008346573);
   phimuphimet116->SetBinError(10,0.000962641);
   phimuphimet116->SetBinError(11,0.00831877);
   phimuphimet116->SetBinError(12,0.008346573);
   phimuphimet116->SetBinError(13,0.00117899);
   phimuphimet116->SetBinError(14,0.01182345);
   phimuphimet116->SetBinError(15,0.00117899);
   phimuphimet116->SetBinError(16,0.00068069);
   phimuphimet116->SetBinError(17,0.00831877);
   phimuphimet116->SetBinError(18,0.00831877);
   phimuphimet116->SetBinError(19,0.00068069);
   phimuphimet116->SetBinError(20,0.008401902);
   phimuphimet116->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   phimuphimet116->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimuphimet116->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimuphimet116->SetMarkerColor(ci);
   phimuphimet116->SetMarkerStyle(22);
   phimuphimet116->GetXaxis()->SetTitle("phimuphimet");
   phimuphimet116->GetXaxis()->SetLabelFont(42);
   phimuphimet116->GetXaxis()->SetLabelSize(0.035);
   phimuphimet116->GetXaxis()->SetTitleSize(0.035);
   phimuphimet116->GetXaxis()->SetTitleFont(42);
   phimuphimet116->GetYaxis()->SetTitle("Events/pb");
   phimuphimet116->GetYaxis()->SetLabelFont(42);
   phimuphimet116->GetYaxis()->SetLabelSize(0.035);
   phimuphimet116->GetYaxis()->SetTitleSize(0.035);
   phimuphimet116->GetYaxis()->SetTitleFont(42);
   phimuphimet116->GetZaxis()->SetLabelFont(42);
   phimuphimet116->GetZaxis()->SetLabelSize(0.035);
   phimuphimet116->GetZaxis()->SetTitleSize(0.035);
   phimuphimet116->GetZaxis()->SetTitleFont(42);
   phimuphimet->Add(phimuphimet,"");
   
   TH1D *phimuphimet117 = new TH1D("phimuphimet117"," #Delta_{#phi}[#mu,MET]",20,-3.141593,3.141593);
   phimuphimet117->SetBinContent(1,0.01531071);
   phimuphimet117->SetBinContent(2,0.01891584);
   phimuphimet117->SetBinContent(3,0.02159264);
   phimuphimet117->SetBinContent(4,0.02763262);
   phimuphimet117->SetBinContent(5,0.03901648);
   phimuphimet117->SetBinContent(6,0.03865073);
   phimuphimet117->SetBinContent(7,0.03256607);
   phimuphimet117->SetBinContent(8,0.0308346);
   phimuphimet117->SetBinContent(9,0.03656439);
   phimuphimet117->SetBinContent(10,0.04249509);
   phimuphimet117->SetBinContent(11,0.04016723);
   phimuphimet117->SetBinContent(12,0.03269515);
   phimuphimet117->SetBinContent(13,0.03147039);
   phimuphimet117->SetBinContent(14,0.03308513);
   phimuphimet117->SetBinContent(15,0.04107903);
   phimuphimet117->SetBinContent(16,0.03897896);
   phimuphimet117->SetBinContent(17,0.02441886);
   phimuphimet117->SetBinContent(18,0.02154987);
   phimuphimet117->SetBinContent(19,0.01811981);
   phimuphimet117->SetBinContent(20,0.0153177);
   phimuphimet117->SetBinError(1,0.002031437);
   phimuphimet117->SetBinError(2,0.001921028);
   phimuphimet117->SetBinError(3,0.002376295);
   phimuphimet117->SetBinError(4,0.002662669);
   phimuphimet117->SetBinError(5,0.003035244);
   phimuphimet117->SetBinError(6,0.002226469);
   phimuphimet117->SetBinError(7,0.002011525);
   phimuphimet117->SetBinError(8,0.001964583);
   phimuphimet117->SetBinError(9,0.002128395);
   phimuphimet117->SetBinError(10,0.002020783);
   phimuphimet117->SetBinError(11,0.001960637);
   phimuphimet117->SetBinError(12,0.002001037);
   phimuphimet117->SetBinError(13,0.001765085);
   phimuphimet117->SetBinError(14,0.001808715);
   phimuphimet117->SetBinError(15,0.002611835);
   phimuphimet117->SetBinError(16,0.003037558);
   phimuphimet117->SetBinError(17,0.002442726);
   phimuphimet117->SetBinError(18,0.002198695);
   phimuphimet117->SetBinError(19,0.001662565);
   phimuphimet117->SetBinError(20,0.001812623);
   phimuphimet117->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   phimuphimet117->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimuphimet117->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimuphimet117->SetMarkerColor(ci);
   phimuphimet117->SetMarkerStyle(20);
   phimuphimet117->GetXaxis()->SetTitle("phimuphimet");
   phimuphimet117->GetXaxis()->SetLabelFont(42);
   phimuphimet117->GetXaxis()->SetLabelSize(0.035);
   phimuphimet117->GetXaxis()->SetTitleSize(0.035);
   phimuphimet117->GetXaxis()->SetTitleFont(42);
   phimuphimet117->GetYaxis()->SetTitle("Events/pb");
   phimuphimet117->GetYaxis()->SetLabelFont(42);
   phimuphimet117->GetYaxis()->SetLabelSize(0.035);
   phimuphimet117->GetYaxis()->SetTitleSize(0.035);
   phimuphimet117->GetYaxis()->SetTitleFont(42);
   phimuphimet117->GetZaxis()->SetLabelFont(42);
   phimuphimet117->GetZaxis()->SetLabelSize(0.035);
   phimuphimet117->GetZaxis()->SetTitleSize(0.035);
   phimuphimet117->GetZaxis()->SetTitleFont(42);
   phimuphimet->Add(phimuphimet,"");
   
   TH1D *phimuphimet118 = new TH1D("phimuphimet118"," #Delta_{#phi}[#mu,MET]",20,-3.141593,3.141593);
   phimuphimet118->SetBinContent(1,0.007260251);
   phimuphimet118->SetBinContent(2,0.007635544);
   phimuphimet118->SetBinContent(3,0.008108625);
   phimuphimet118->SetBinContent(4,0.007616104);
   phimuphimet118->SetBinContent(5,0.007647207);
   phimuphimet118->SetBinContent(6,0.006758342);
   phimuphimet118->SetBinContent(7,0.007818126);
   phimuphimet118->SetBinContent(8,0.007344047);
   phimuphimet118->SetBinContent(9,0.007418872);
   phimuphimet118->SetBinContent(10,0.006993253);
   phimuphimet118->SetBinContent(11,0.007013858);
   phimuphimet118->SetBinContent(12,0.006877421);
   phimuphimet118->SetBinContent(13,0.006585711);
   phimuphimet118->SetBinContent(14,0.006989028);
   phimuphimet118->SetBinContent(15,0.007362312);
   phimuphimet118->SetBinContent(16,0.007174314);
   phimuphimet118->SetBinContent(17,0.006862142);
   phimuphimet118->SetBinContent(18,0.007494497);
   phimuphimet118->SetBinContent(19,0.007831967);
   phimuphimet118->SetBinContent(20,0.00768474);
   phimuphimet118->SetBinError(1,0.0004044406);
   phimuphimet118->SetBinError(2,0.0004415927);
   phimuphimet118->SetBinError(3,0.0004496008);
   phimuphimet118->SetBinError(4,0.000436687);
   phimuphimet118->SetBinError(5,0.0004316904);
   phimuphimet118->SetBinError(6,0.000410296);
   phimuphimet118->SetBinError(7,0.0004473501);
   phimuphimet118->SetBinError(8,0.0004316954);
   phimuphimet118->SetBinError(9,0.0004258914);
   phimuphimet118->SetBinError(10,0.0004205258);
   phimuphimet118->SetBinError(11,0.0004367735);
   phimuphimet118->SetBinError(12,0.0004022927);
   phimuphimet118->SetBinError(13,0.0004005871);
   phimuphimet118->SetBinError(14,0.0004204644);
   phimuphimet118->SetBinError(15,0.0004370073);
   phimuphimet118->SetBinError(16,0.0004077946);
   phimuphimet118->SetBinError(17,0.000389551);
   phimuphimet118->SetBinError(18,0.0004338699);
   phimuphimet118->SetBinError(19,0.0004489678);
   phimuphimet118->SetBinError(20,0.00043513);
   phimuphimet118->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   phimuphimet118->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimuphimet118->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimuphimet118->SetMarkerColor(ci);
   phimuphimet118->SetMarkerStyle(21);
   phimuphimet118->GetXaxis()->SetTitle("phimuphimet");
   phimuphimet118->GetXaxis()->SetLabelFont(42);
   phimuphimet118->GetXaxis()->SetLabelSize(0.035);
   phimuphimet118->GetXaxis()->SetTitleSize(0.035);
   phimuphimet118->GetXaxis()->SetTitleFont(42);
   phimuphimet118->GetYaxis()->SetTitle("Events/pb");
   phimuphimet118->GetYaxis()->SetLabelFont(42);
   phimuphimet118->GetYaxis()->SetLabelSize(0.035);
   phimuphimet118->GetYaxis()->SetTitleSize(0.035);
   phimuphimet118->GetYaxis()->SetTitleFont(42);
   phimuphimet118->GetZaxis()->SetLabelFont(42);
   phimuphimet118->GetZaxis()->SetLabelSize(0.035);
   phimuphimet118->GetZaxis()->SetTitleSize(0.035);
   phimuphimet118->GetZaxis()->SetTitleFont(42);
   phimuphimet->Add(phimuphimet,"");
   
   TH1D *phimuphimet119 = new TH1D("phimuphimet119"," #Delta_{#phi}[#mu,MET]",20,-3.141593,3.141593);
   phimuphimet119->SetBinContent(1,0.0004935864);
   phimuphimet119->SetBinContent(2,0.0004781619);
   phimuphimet119->SetBinContent(3,0.0003393407);
   phimuphimet119->SetBinContent(4,0.0004627373);
   phimuphimet119->SetBinContent(5,0.0007249551);
   phimuphimet119->SetBinContent(6,0.0007558042);
   phimuphimet119->SetBinContent(7,0.0009563237);
   phimuphimet119->SetBinContent(8,0.001110569);
   phimuphimet119->SetBinContent(9,0.00128024);
   phimuphimet119->SetBinContent(10,0.001372787);
   phimuphimet119->SetBinContent(11,0.001527033);
   phimuphimet119->SetBinContent(12,0.001187692);
   phimuphimet119->SetBinContent(13,0.001064296);
   phimuphimet119->SetBinContent(14,0.0009408991);
   phimuphimet119->SetBinContent(15,0.0006786813);
   phimuphimet119->SetBinContent(16,0.0007095305);
   phimuphimet119->SetBinContent(17,0.0006941059);
   phimuphimet119->SetBinContent(18,0.0004318881);
   phimuphimet119->SetBinContent(19,0.0004473127);
   phimuphimet119->SetBinContent(20,0.0002776424);
   phimuphimet119->SetBinError(1,8.725458e-05);
   phimuphimet119->SetBinError(2,8.58804e-05);
   phimuphimet119->SetBinError(3,7.234767e-05);
   phimuphimet119->SetBinError(4,8.448388e-05);
   phimuphimet119->SetBinError(5,0.0001057456);
   phimuphimet119->SetBinError(6,0.000107972);
   phimuphimet119->SetBinError(7,0.0001214532);
   phimuphimet119->SetBinError(8,0.0001308819);
   phimuphimet119->SetBinError(9,0.0001405246);
   phimuphimet119->SetBinError(10,0.0001455152);
   phimuphimet119->SetBinError(11,0.0001534726);
   phimuphimet119->SetBinError(12,0.0001353501);
   phimuphimet119->SetBinError(13,0.0001281262);
   phimuphimet119->SetBinError(14,0.0001204698);
   phimuphimet119->SetBinError(15,0.0001023151);
   phimuphimet119->SetBinError(16,0.0001046146);
   phimuphimet119->SetBinError(17,0.0001034712);
   phimuphimet119->SetBinError(18,8.161918e-05);
   phimuphimet119->SetBinError(19,8.306388e-05);
   phimuphimet119->SetBinError(20,6.544093e-05);
   phimuphimet119->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   phimuphimet119->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimuphimet119->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimuphimet119->SetMarkerColor(ci);
   phimuphimet119->SetMarkerStyle(20);
   phimuphimet119->GetXaxis()->SetTitle("phimuphimet");
   phimuphimet119->GetXaxis()->SetLabelFont(42);
   phimuphimet119->GetXaxis()->SetLabelSize(0.035);
   phimuphimet119->GetXaxis()->SetTitleSize(0.035);
   phimuphimet119->GetXaxis()->SetTitleFont(42);
   phimuphimet119->GetYaxis()->SetTitle("Events/pb");
   phimuphimet119->GetYaxis()->SetLabelFont(42);
   phimuphimet119->GetYaxis()->SetLabelSize(0.035);
   phimuphimet119->GetYaxis()->SetTitleSize(0.035);
   phimuphimet119->GetYaxis()->SetTitleFont(42);
   phimuphimet119->GetZaxis()->SetLabelFont(42);
   phimuphimet119->GetZaxis()->SetLabelSize(0.035);
   phimuphimet119->GetZaxis()->SetTitleSize(0.035);
   phimuphimet119->GetZaxis()->SetTitleFont(42);
   phimuphimet->Add(phimuphimet,"");
   
   TH1D *phimuphimet120 = new TH1D("phimuphimet120"," #Delta_{#phi}[#mu,MET]",20,-3.141593,3.141593);
   phimuphimet120->SetBinContent(13,1.677165e-05);
   phimuphimet120->SetBinError(13,1.677165e-05);
   phimuphimet120->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   phimuphimet120->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimuphimet120->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimuphimet120->SetMarkerColor(ci);
   phimuphimet120->SetMarkerStyle(21);
   phimuphimet120->GetXaxis()->SetTitle("phimuphimet");
   phimuphimet120->GetXaxis()->SetLabelFont(42);
   phimuphimet120->GetXaxis()->SetLabelSize(0.035);
   phimuphimet120->GetXaxis()->SetTitleSize(0.035);
   phimuphimet120->GetXaxis()->SetTitleFont(42);
   phimuphimet120->GetYaxis()->SetTitle("Events/pb");
   phimuphimet120->GetYaxis()->SetLabelFont(42);
   phimuphimet120->GetYaxis()->SetLabelSize(0.035);
   phimuphimet120->GetYaxis()->SetTitleSize(0.035);
   phimuphimet120->GetYaxis()->SetTitleFont(42);
   phimuphimet120->GetZaxis()->SetLabelFont(42);
   phimuphimet120->GetZaxis()->SetLabelSize(0.035);
   phimuphimet120->GetZaxis()->SetTitleSize(0.035);
   phimuphimet120->GetZaxis()->SetTitleFont(42);
   phimuphimet->Add(phimuphimet,"");
   phimuphimet->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3326724,0.9342857,0.6673276,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("phimuphimet");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimuphimet","phimuphimet_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphimet","phimuphimet_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphimet","phimuphimet_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphimet","phimuphimet_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphimet","phimuphimet_ttbar","lp");

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
   phimuphimet->Modified();
   phimuphimet->cd();
   phimuphimet->SetSelected(phimuphimet);
}
