void METoptb3()
{
//=========Macro generated from canvas: b3/METoptb3/b3/METoptb3
//=========  (Tue Nov 24 14:23:55 2015) by ROOT version6.02/05
   TCanvas *b3/METoptb3 = new TCanvas("b3/METoptb3", "b3/METoptb3",40,62,700,700);
   b3/METoptb3->Range(-0.375,-5.714668,3.375,-0.2967931);
   b3/METoptb3->SetFillColor(0);
   b3/METoptb3->SetBorderMode(0);
   b3/METoptb3->SetBorderSize(2);
   b3/METoptb3->SetLogy();
   b3/METoptb3->SetFrameBorderMode(0);
   b3/METoptb3->SetFrameBorderMode(0);
   
   THStack *b3/METoptb3 = new THStack();
   b3/METoptb3->SetName("b3/METoptb3");
   b3/METoptb3->SetTitle("b3/METoptb3");
   
   TH1F *b3/METoptb3_stack_3 = new TH1F("b3/METoptb3_stack_3","b3/METoptb3",15,0,3);
   b3/METoptb3_stack_3->SetMinimum(6.716136e-06);
   b3/METoptb3_stack_3->SetMaximum(0.1450172);
   b3/METoptb3_stack_3->SetDirectory(0);
   b3/METoptb3_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b3/METoptb3_stack_3->SetLineColor(ci);
   b3/METoptb3_stack_3->GetXaxis()->SetTitle("b3/METoptb3");
   b3/METoptb3_stack_3->GetXaxis()->SetLabelFont(42);
   b3/METoptb3_stack_3->GetXaxis()->SetLabelSize(0.035);
   b3/METoptb3_stack_3->GetXaxis()->SetTitleSize(0.035);
   b3/METoptb3_stack_3->GetXaxis()->SetTitleFont(42);
   b3/METoptb3_stack_3->GetYaxis()->SetTitle("Events/pb");
   b3/METoptb3_stack_3->GetYaxis()->SetLabelFont(42);
   b3/METoptb3_stack_3->GetYaxis()->SetLabelSize(0.035);
   b3/METoptb3_stack_3->GetYaxis()->SetTitleSize(0.035);
   b3/METoptb3_stack_3->GetYaxis()->SetTitleFont(42);
   b3/METoptb3_stack_3->GetZaxis()->SetLabelFont(42);
   b3/METoptb3_stack_3->GetZaxis()->SetLabelSize(0.035);
   b3/METoptb3_stack_3->GetZaxis()->SetTitleSize(0.035);
   b3/METoptb3_stack_3->GetZaxis()->SetTitleFont(42);
   b3/METoptb3->SetHistogram(b3/METoptb3_stack_3);
   
   
   TH1D *METoptb311 = new TH1D("METoptb311","MET/p_{T}^{lead jet}",15,0,3);
   METoptb311->SetBinContent(1,0.00136138);
   METoptb311->SetBinContent(2,0.03607657);
   METoptb311->SetBinContent(3,0.05679825);
   METoptb311->SetBinContent(4,0.04673839);
   METoptb311->SetBinContent(5,0.02904045);
   METoptb311->SetBinContent(6,0.02004099);
   METoptb311->SetBinContent(7,0.01731823);
   METoptb311->SetBinContent(8,0.00831877);
   METoptb311->SetBinContent(9,0.00136138);
   METoptb311->SetBinError(1,0.000962641);
   METoptb311->SetBinError(2,0.004955498);
   METoptb311->SetBinError(3,0.01287404);
   METoptb311->SetBinError(4,0.01491418);
   METoptb311->SetBinError(5,0.01450468);
   METoptb311->SetBinError(6,0.01186257);
   METoptb311->SetBinError(7,0.01178419);
   METoptb311->SetBinError(8,0.00831877);
   METoptb311->SetBinError(9,0.000962641);
   METoptb311->SetEntries(173);

   ci = TColor::GetColor("#00cc00");
   METoptb311->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METoptb311->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METoptb311->SetMarkerColor(ci);
   METoptb311->SetMarkerStyle(22);
   METoptb311->GetXaxis()->SetTitle("METoptb3");
   METoptb311->GetXaxis()->SetLabelFont(42);
   METoptb311->GetXaxis()->SetLabelSize(0.035);
   METoptb311->GetXaxis()->SetTitleSize(0.035);
   METoptb311->GetXaxis()->SetTitleFont(42);
   METoptb311->GetYaxis()->SetTitle("Events/pb");
   METoptb311->GetYaxis()->SetLabelFont(42);
   METoptb311->GetYaxis()->SetLabelSize(0.035);
   METoptb311->GetYaxis()->SetTitleSize(0.035);
   METoptb311->GetYaxis()->SetTitleFont(42);
   METoptb311->GetZaxis()->SetLabelFont(42);
   METoptb311->GetZaxis()->SetLabelSize(0.035);
   METoptb311->GetZaxis()->SetTitleSize(0.035);
   METoptb311->GetZaxis()->SetTitleFont(42);
   b3/METoptb3->Add(METoptb3,"");
   
   TH1D *METoptb312 = new TH1D("METoptb312","MET/p_{T}^{lead jet}",15,0,3);
   METoptb312->SetBinContent(1,8.357355e-05);
   METoptb312->SetBinContent(2,0.005085679);
   METoptb312->SetBinContent(3,0.02292831);
   METoptb312->SetBinContent(4,0.05271946);
   METoptb312->SetBinContent(5,0.07939629);
   METoptb312->SetBinContent(6,0.08386593);
   METoptb312->SetBinContent(7,0.06971453);
   METoptb312->SetBinContent(8,0.05025008);
   METoptb312->SetBinContent(9,0.04104191);
   METoptb312->SetBinContent(10,0.02629597);
   METoptb312->SetBinContent(11,0.02211274);
   METoptb312->SetBinContent(12,0.01570127);
   METoptb312->SetBinContent(13,0.00771984);
   METoptb312->SetBinContent(14,0.009057389);
   METoptb312->SetBinContent(15,0.004083371);
   METoptb312->SetBinContent(16,0.003363924);
   METoptb312->SetBinError(1,3.411876e-05);
   METoptb312->SetBinError(2,0.000266199);
   METoptb312->SetBinError(3,0.0005794323);
   METoptb312->SetBinError(4,0.001016444);
   METoptb312->SetBinError(5,0.002069295);
   METoptb312->SetBinError(6,0.002312002);
   METoptb312->SetBinError(7,0.002528588);
   METoptb312->SetBinError(8,0.002084277);
   METoptb312->SetBinError(9,0.001993785);
   METoptb312->SetBinError(10,0.001626111);
   METoptb312->SetBinError(11,0.001556146);
   METoptb312->SetBinError(12,0.001341516);
   METoptb312->SetBinError(13,0.0009359289);
   METoptb312->SetBinError(14,0.001659528);
   METoptb312->SetBinError(15,0.0006965938);
   METoptb312->SetBinError(16,0.0006334946);
   METoptb312->SetEntries(19755);

   ci = TColor::GetColor("#00ffff");
   METoptb312->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METoptb312->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METoptb312->SetMarkerColor(ci);
   METoptb312->SetMarkerStyle(20);
   METoptb312->GetXaxis()->SetTitle("METoptb3");
   METoptb312->GetXaxis()->SetLabelFont(42);
   METoptb312->GetXaxis()->SetLabelSize(0.035);
   METoptb312->GetXaxis()->SetTitleSize(0.035);
   METoptb312->GetXaxis()->SetTitleFont(42);
   METoptb312->GetYaxis()->SetTitle("Events/pb");
   METoptb312->GetYaxis()->SetLabelFont(42);
   METoptb312->GetYaxis()->SetLabelSize(0.035);
   METoptb312->GetYaxis()->SetTitleSize(0.035);
   METoptb312->GetYaxis()->SetTitleFont(42);
   METoptb312->GetZaxis()->SetLabelFont(42);
   METoptb312->GetZaxis()->SetLabelSize(0.035);
   METoptb312->GetZaxis()->SetTitleSize(0.035);
   METoptb312->GetZaxis()->SetTitleFont(42);
   b3/METoptb3->Add(METoptb3,"");
   
   TH1D *METoptb313 = new TH1D("METoptb313","MET/p_{T}^{lead jet}",15,0,3);
   METoptb313->SetBinContent(1,2.106543e-05);
   METoptb313->SetBinContent(2,0.0009303899);
   METoptb313->SetBinContent(3,0.004705423);
   METoptb313->SetBinContent(4,0.01147367);
   METoptb313->SetBinContent(5,0.01835109);
   METoptb313->SetBinContent(6,0.02113982);
   METoptb313->SetBinContent(7,0.01816013);
   METoptb313->SetBinContent(8,0.0147942);
   METoptb313->SetBinContent(9,0.01067539);
   METoptb313->SetBinContent(10,0.007676742);
   METoptb313->SetBinContent(11,0.005773069);
   METoptb313->SetBinContent(12,0.004588516);
   METoptb313->SetBinContent(13,0.002202489);
   METoptb313->SetBinContent(14,0.001554376);
   METoptb313->SetBinContent(15,0.0008104033);
   METoptb313->SetBinContent(16,0.002052008);
   METoptb313->SetBinError(1,4.96517e-06);
   METoptb313->SetBinError(2,3.299753e-05);
   METoptb313->SetBinError(3,7.683425e-05);
   METoptb313->SetBinError(4,0.000168475);
   METoptb313->SetBinError(5,0.000360295);
   METoptb313->SetBinError(6,0.0005024133);
   METoptb313->SetBinError(7,0.0005254951);
   METoptb313->SetBinError(8,0.0005185403);
   METoptb313->SetBinError(9,0.0004683616);
   METoptb313->SetBinError(10,0.0004123574);
   METoptb313->SetBinError(11,0.0003735006);
   METoptb313->SetBinError(12,0.0003551823);
   METoptb313->SetBinError(13,0.0002553549);
   METoptb313->SetBinError(14,0.0002095261);
   METoptb313->SetBinError(15,0.0001420347);
   METoptb313->SetBinError(16,0.0002828622);
   METoptb313->SetEntries(37083);

   ci = TColor::GetColor("#ffcc00");
   METoptb313->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METoptb313->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METoptb313->SetMarkerColor(ci);
   METoptb313->SetMarkerStyle(21);
   METoptb313->GetXaxis()->SetTitle("METoptb3");
   METoptb313->GetXaxis()->SetLabelFont(42);
   METoptb313->GetXaxis()->SetLabelSize(0.035);
   METoptb313->GetXaxis()->SetTitleSize(0.035);
   METoptb313->GetXaxis()->SetTitleFont(42);
   METoptb313->GetYaxis()->SetTitle("Events/pb");
   METoptb313->GetYaxis()->SetLabelFont(42);
   METoptb313->GetYaxis()->SetLabelSize(0.035);
   METoptb313->GetYaxis()->SetTitleSize(0.035);
   METoptb313->GetYaxis()->SetTitleFont(42);
   METoptb313->GetZaxis()->SetLabelFont(42);
   METoptb313->GetZaxis()->SetLabelSize(0.035);
   METoptb313->GetZaxis()->SetTitleSize(0.035);
   METoptb313->GetZaxis()->SetTitleFont(42);
   b3/METoptb3->Add(METoptb3,"");
   
   TH1D *METoptb314 = new TH1D("METoptb314","MET/p_{T}^{lead jet}",15,0,3);
   METoptb314->SetBinContent(2,3.084915e-05);
   METoptb314->SetBinContent(3,0.0005244356);
   METoptb314->SetBinContent(4,0.001419061);
   METoptb314->SetBinContent(5,0.003547652);
   METoptb314->SetBinContent(6,0.004133786);
   METoptb314->SetBinContent(7,0.003485954);
   METoptb314->SetBinContent(8,0.003054066);
   METoptb314->SetBinContent(9,0.002498781);
   METoptb314->SetBinContent(10,0.00198977);
   METoptb314->SetBinContent(11,0.001187692);
   METoptb314->SetBinContent(12,0.0008792008);
   METoptb314->SetBinContent(13,0.0006015585);
   METoptb314->SetBinContent(14,0.0004318881);
   METoptb314->SetBinContent(15,0.0002005195);
   METoptb314->SetBinContent(16,0.0004318881);
   METoptb314->SetBinError(2,2.181364e-05);
   METoptb314->SetBinError(3,8.993996e-05);
   METoptb314->SetBinError(4,0.0001479473);
   METoptb314->SetBinError(5,0.0002339253);
   METoptb314->SetBinError(6,0.0002525112);
   METoptb314->SetBinError(7,0.0002318822);
   METoptb314->SetBinError(8,0.000217043);
   METoptb314->SetBinError(9,0.0001963228);
   METoptb314->SetBinError(10,0.0001751895);
   METoptb314->SetBinError(11,0.0001353501);
   METoptb314->SetBinError(12,0.000116453);
   METoptb314->SetBinError(13,9.632645e-05);
   METoptb314->SetBinError(14,8.161918e-05);
   METoptb314->SetBinError(15,5.56141e-05);
   METoptb314->SetBinError(16,8.161918e-05);
   METoptb314->SetEntries(1583);

   ci = TColor::GetColor("#ff0000");
   METoptb314->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METoptb314->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METoptb314->SetMarkerColor(ci);
   METoptb314->SetMarkerStyle(20);
   METoptb314->GetXaxis()->SetTitle("METoptb3");
   METoptb314->GetXaxis()->SetLabelFont(42);
   METoptb314->GetXaxis()->SetLabelSize(0.035);
   METoptb314->GetXaxis()->SetTitleSize(0.035);
   METoptb314->GetXaxis()->SetTitleFont(42);
   METoptb314->GetYaxis()->SetTitle("Events/pb");
   METoptb314->GetYaxis()->SetLabelFont(42);
   METoptb314->GetYaxis()->SetLabelSize(0.035);
   METoptb314->GetYaxis()->SetTitleSize(0.035);
   METoptb314->GetYaxis()->SetTitleFont(42);
   METoptb314->GetZaxis()->SetLabelFont(42);
   METoptb314->GetZaxis()->SetLabelSize(0.035);
   METoptb314->GetZaxis()->SetTitleSize(0.035);
   METoptb314->GetZaxis()->SetTitleFont(42);
   b3/METoptb3->Add(METoptb3,"");
   
   TH1D *METoptb315 = new TH1D("METoptb315","MET/p_{T}^{lead jet}",15,0,3);
   METoptb315->SetBinContent(2,5.031494e-05);
   METoptb315->SetBinContent(3,0.0002348031);
   METoptb315->SetBinContent(4,0.0003522046);
   METoptb315->SetBinContent(5,0.0002515747);
   METoptb315->SetBinContent(6,0.0002348031);
   METoptb315->SetBinContent(7,0.000335433);
   METoptb315->SetBinContent(8,0.0002683464);
   METoptb315->SetBinContent(9,0.0001174015);
   METoptb315->SetBinContent(10,0.0001509448);
   METoptb315->SetBinContent(11,8.385824e-05);
   METoptb315->SetBinContent(12,5.031494e-05);
   METoptb315->SetBinContent(13,3.35433e-05);
   METoptb315->SetBinContent(15,3.35433e-05);
   METoptb315->SetBinContent(16,1.677165e-05);
   METoptb315->SetBinError(2,2.904935e-05);
   METoptb315->SetBinError(3,6.275376e-05);
   METoptb315->SetBinError(4,7.685734e-05);
   METoptb315->SetBinError(5,6.495631e-05);
   METoptb315->SetBinError(6,6.275376e-05);
   METoptb315->SetBinError(7,7.500509e-05);
   METoptb315->SetBinError(8,6.708659e-05);
   METoptb315->SetBinError(9,4.437361e-05);
   METoptb315->SetBinError(10,5.031494e-05);
   METoptb315->SetBinError(11,3.750254e-05);
   METoptb315->SetBinError(12,2.904935e-05);
   METoptb315->SetBinError(13,2.371869e-05);
   METoptb315->SetBinError(15,2.371869e-05);
   METoptb315->SetBinError(16,1.677165e-05);
   METoptb315->SetEntries(132);

   ci = TColor::GetColor("#0000ff");
   METoptb315->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METoptb315->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METoptb315->SetMarkerColor(ci);
   METoptb315->SetMarkerStyle(21);
   METoptb315->GetXaxis()->SetTitle("METoptb3");
   METoptb315->GetXaxis()->SetLabelFont(42);
   METoptb315->GetXaxis()->SetLabelSize(0.035);
   METoptb315->GetXaxis()->SetTitleSize(0.035);
   METoptb315->GetXaxis()->SetTitleFont(42);
   METoptb315->GetYaxis()->SetTitle("Events/pb");
   METoptb315->GetYaxis()->SetLabelFont(42);
   METoptb315->GetYaxis()->SetLabelSize(0.035);
   METoptb315->GetYaxis()->SetTitleSize(0.035);
   METoptb315->GetYaxis()->SetTitleFont(42);
   METoptb315->GetZaxis()->SetLabelFont(42);
   METoptb315->GetZaxis()->SetLabelSize(0.035);
   METoptb315->GetZaxis()->SetTitleSize(0.035);
   METoptb315->GetZaxis()->SetTitleFont(42);
   b3/METoptb3->Add(METoptb3,"");
   b3/METoptb3->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3326724,0.9342857,0.6673276,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b3/METoptb3");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METoptb3","b3/METoptb3_QCD_b3/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METoptb3","b3/METoptb3_WJetsToLNu_b3/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METoptb3","b3/METoptb3_ZJetsToNuNu_b3/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METoptb3","b3/METoptb3_signal_b3/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METoptb3","b3/METoptb3_ttbar_b3/","lp");

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
   b3/METoptb3->Modified();
   b3/METoptb3->cd();
   b3/METoptb3->SetSelected(b3/METoptb3);
}
