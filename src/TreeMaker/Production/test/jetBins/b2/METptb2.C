void METptb2()
{
//=========Macro generated from canvas: b2/METptb2/b2/METptb2
//=========  (Tue Nov 24 14:26:31 2015) by ROOT version6.02/05
   TCanvas *b2/METptb2 = new TCanvas("b2/METptb2", "b2/METptb2",200,222,700,700);
   b2/METptb2->Range(37.49999,-7.364757,1662.5,0.7273038);
   b2/METptb2->SetFillColor(0);
   b2/METptb2->SetBorderMode(0);
   b2/METptb2->SetBorderSize(2);
   b2/METptb2->SetLogy();
   b2/METptb2->SetFrameBorderMode(0);
   b2/METptb2->SetFrameBorderMode(0);
   
   THStack *b2/METptb2 = new THStack();
   b2/METptb2->SetName("b2/METptb2");
   b2/METptb2->SetTitle("b2/METptb2");
   
   TH1F *b2/METptb2_stack_11 = new TH1F("b2/METptb2_stack_11","b2/METptb2",26,200,1500);
   b2/METptb2_stack_11->SetMinimum(2.782592e-07);
   b2/METptb2_stack_11->SetMaximum(0.8281284);
   b2/METptb2_stack_11->SetDirectory(0);
   b2/METptb2_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b2/METptb2_stack_11->SetLineColor(ci);
   b2/METptb2_stack_11->GetXaxis()->SetTitle("b2/METptb2");
   b2/METptb2_stack_11->GetXaxis()->SetLabelFont(42);
   b2/METptb2_stack_11->GetXaxis()->SetLabelSize(0.035);
   b2/METptb2_stack_11->GetXaxis()->SetTitleSize(0.035);
   b2/METptb2_stack_11->GetXaxis()->SetTitleFont(42);
   b2/METptb2_stack_11->GetYaxis()->SetTitle("Events/pb");
   b2/METptb2_stack_11->GetYaxis()->SetLabelFont(42);
   b2/METptb2_stack_11->GetYaxis()->SetLabelSize(0.035);
   b2/METptb2_stack_11->GetYaxis()->SetTitleSize(0.035);
   b2/METptb2_stack_11->GetYaxis()->SetTitleFont(42);
   b2/METptb2_stack_11->GetZaxis()->SetLabelFont(42);
   b2/METptb2_stack_11->GetZaxis()->SetLabelSize(0.035);
   b2/METptb2_stack_11->GetZaxis()->SetTitleSize(0.035);
   b2/METptb2_stack_11->GetZaxis()->SetTitleFont(42);
   b2/METptb2->SetHistogram(b2/METptb2_stack_11);
   
   
   TH1D *METptb251 = new TH1D("METptb251","MET_{p_{T}}",26,200,1500);
   METptb251->SetBinContent(1,0.1044396);
   METptb251->SetBinContent(2,0.0193603);
   METptb251->SetBinContent(3,0.00544552);
   METptb251->SetBinContent(4,0.00204207);
   METptb251->SetBinContent(8,0.00068069);
   METptb251->SetBinError(1,0.02774932);
   METptb251->SetBinError(2,0.01184302);
   METptb251->SetBinError(3,0.001925282);
   METptb251->SetBinError(4,0.00117899);
   METptb251->SetBinError(8,0.00068069);
   METptb251->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   METptb251->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METptb251->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METptb251->SetMarkerColor(ci);
   METptb251->SetMarkerStyle(22);
   METptb251->GetXaxis()->SetTitle("METptb2");
   METptb251->GetXaxis()->SetLabelFont(42);
   METptb251->GetXaxis()->SetLabelSize(0.035);
   METptb251->GetXaxis()->SetTitleSize(0.035);
   METptb251->GetXaxis()->SetTitleFont(42);
   METptb251->GetYaxis()->SetTitle("Events/pb");
   METptb251->GetYaxis()->SetLabelFont(42);
   METptb251->GetYaxis()->SetLabelSize(0.035);
   METptb251->GetYaxis()->SetTitleSize(0.035);
   METptb251->GetYaxis()->SetTitleFont(42);
   METptb251->GetZaxis()->SetLabelFont(42);
   METptb251->GetZaxis()->SetLabelSize(0.035);
   METptb251->GetZaxis()->SetTitleSize(0.035);
   METptb251->GetZaxis()->SetTitleFont(42);
   b2/METptb2->Add(METptb2,"");
   
   TH1D *METptb252 = new TH1D("METptb252","MET_{p_{T}}",26,200,1500);
   METptb252->SetBinContent(1,0.3917192);
   METptb252->SetBinContent(2,0.1187636);
   METptb252->SetBinContent(3,0.04893815);
   METptb252->SetBinContent(4,0.01957569);
   METptb252->SetBinContent(5,0.00999049);
   METptb252->SetBinContent(6,0.005074523);
   METptb252->SetBinContent(7,0.002797197);
   METptb252->SetBinContent(8,0.001509849);
   METptb252->SetBinContent(9,0.0007554042);
   METptb252->SetBinContent(10,0.0005153702);
   METptb252->SetBinContent(11,0.0003203653);
   METptb252->SetBinContent(12,0.0001671471);
   METptb252->SetBinContent(13,9.750248e-05);
   METptb252->SetBinContent(14,8.357355e-05);
   METptb252->SetBinContent(15,2.785785e-05);
   METptb252->SetBinContent(16,1.392893e-05);
   METptb252->SetBinContent(17,5.57157e-05);
   METptb252->SetBinContent(18,1.392893e-05);
   METptb252->SetBinContent(19,1.392893e-05);
   METptb252->SetBinContent(21,1.392893e-05);
   METptb252->SetBinContent(23,1.392893e-05);
   METptb252->SetBinError(1,0.009015143);
   METptb252->SetBinError(2,0.003467256);
   METptb252->SetBinError(3,0.00198213);
   METptb252->SetBinError(4,0.0009025235);
   METptb252->SetBinError(5,0.0004185742);
   METptb252->SetBinError(6,0.0002713332);
   METptb252->SetBinError(7,0.0002003913);
   METptb252->SetBinError(8,0.0001460045);
   METptb252->SetBinError(9,0.0001028093);
   METptb252->SetBinError(10,8.472634e-05);
   METptb252->SetBinError(11,6.680078e-05);
   METptb252->SetBinError(12,4.825121e-05);
   METptb252->SetBinError(13,3.685247e-05);
   METptb252->SetBinError(14,3.411876e-05);
   METptb252->SetBinError(15,1.969847e-05);
   METptb252->SetBinError(16,1.392893e-05);
   METptb252->SetBinError(17,2.785785e-05);
   METptb252->SetBinError(18,1.392893e-05);
   METptb252->SetBinError(19,1.392893e-05);
   METptb252->SetBinError(21,1.392893e-05);
   METptb252->SetBinError(23,1.392893e-05);
   METptb252->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   METptb252->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METptb252->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METptb252->SetMarkerColor(ci);
   METptb252->SetMarkerStyle(20);
   METptb252->GetXaxis()->SetTitle("METptb2");
   METptb252->GetXaxis()->SetLabelFont(42);
   METptb252->GetXaxis()->SetLabelSize(0.035);
   METptb252->GetXaxis()->SetTitleSize(0.035);
   METptb252->GetXaxis()->SetTitleFont(42);
   METptb252->GetYaxis()->SetTitle("Events/pb");
   METptb252->GetYaxis()->SetLabelFont(42);
   METptb252->GetYaxis()->SetLabelSize(0.035);
   METptb252->GetYaxis()->SetTitleSize(0.035);
   METptb252->GetYaxis()->SetTitleFont(42);
   METptb252->GetZaxis()->SetLabelFont(42);
   METptb252->GetZaxis()->SetLabelSize(0.035);
   METptb252->GetZaxis()->SetTitleSize(0.035);
   METptb252->GetZaxis()->SetTitleFont(42);
   b2/METptb2->Add(METptb2,"");
   
   TH1D *METptb253 = new TH1D("METptb253","MET_{p_{T}}",26,200,1500);
   METptb253->SetBinContent(1,0.08670416);
   METptb253->SetBinContent(2,0.03119945);
   METptb253->SetBinContent(3,0.01373989);
   METptb253->SetBinContent(4,0.006818856);
   METptb253->SetBinContent(5,0.003406878);
   METptb253->SetBinContent(6,0.001827934);
   METptb253->SetBinContent(7,0.001084198);
   METptb253->SetBinContent(8,0.0005744535);
   METptb253->SetBinContent(9,0.0004089983);
   METptb253->SetBinContent(10,0.0002469337);
   METptb253->SetBinContent(11,0.000147458);
   METptb253->SetBinContent(12,8.426173e-05);
   METptb253->SetBinContent(13,7.372901e-05);
   METptb253->SetBinContent(14,4.564177e-05);
   METptb253->SetBinContent(15,3.159815e-05);
   METptb253->SetBinContent(16,2.340604e-05);
   METptb253->SetBinContent(17,1.638422e-05);
   METptb253->SetBinContent(18,1.053272e-05);
   METptb253->SetBinContent(19,8.192112e-06);
   METptb253->SetBinContent(20,8.192112e-06);
   METptb253->SetBinContent(21,4.681207e-06);
   METptb253->SetBinContent(22,2.340604e-06);
   METptb253->SetBinContent(24,1.170302e-06);
   METptb253->SetBinContent(26,2.340604e-06);
   METptb253->SetBinContent(27,4.681207e-06);
   METptb253->SetBinError(1,0.00161953);
   METptb253->SetBinError(2,0.0008248426);
   METptb253->SetBinError(3,0.0004810386);
   METptb253->SetBinError(4,0.0002668444);
   METptb253->SetBinError(5,0.0001146987);
   METptb253->SetBinError(6,7.088941e-05);
   METptb253->SetBinError(7,5.03671e-05);
   METptb253->SetBinError(8,3.047945e-05);
   METptb253->SetBinError(9,2.325693e-05);
   METptb253->SetBinError(10,1.699961e-05);
   METptb253->SetBinError(11,1.31366e-05);
   METptb253->SetBinError(12,9.93034e-06);
   METptb253->SetBinError(13,9.288982e-06);
   METptb253->SetBinError(14,7.308532e-06);
   METptb253->SetBinError(15,6.081066e-06);
   METptb253->SetBinError(16,5.233749e-06);
   METptb253->SetBinError(17,4.378868e-06);
   METptb253->SetBinError(18,3.510905e-06);
   METptb253->SetBinError(19,3.096327e-06);
   METptb253->SetBinError(20,3.096327e-06);
   METptb253->SetBinError(21,2.340604e-06);
   METptb253->SetBinError(22,1.655057e-06);
   METptb253->SetBinError(24,1.170302e-06);
   METptb253->SetBinError(26,1.655057e-06);
   METptb253->SetBinError(27,2.340604e-06);
   METptb253->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   METptb253->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METptb253->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METptb253->SetMarkerColor(ci);
   METptb253->SetMarkerStyle(21);
   METptb253->GetXaxis()->SetTitle("METptb2");
   METptb253->GetXaxis()->SetLabelFont(42);
   METptb253->GetXaxis()->SetLabelSize(0.035);
   METptb253->GetXaxis()->SetTitleSize(0.035);
   METptb253->GetXaxis()->SetTitleFont(42);
   METptb253->GetYaxis()->SetTitle("Events/pb");
   METptb253->GetYaxis()->SetLabelFont(42);
   METptb253->GetYaxis()->SetLabelSize(0.035);
   METptb253->GetYaxis()->SetTitleSize(0.035);
   METptb253->GetYaxis()->SetTitleFont(42);
   METptb253->GetZaxis()->SetLabelFont(42);
   METptb253->GetZaxis()->SetLabelSize(0.035);
   METptb253->GetZaxis()->SetTitleSize(0.035);
   METptb253->GetZaxis()->SetTitleFont(42);
   b2/METptb2->Add(METptb2,"");
   
   TH1D *METptb254 = new TH1D("METptb254","MET_{p_{T}}",26,200,1500);
   METptb254->SetBinContent(1,0.006046434);
   METptb254->SetBinContent(2,0.003609351);
   METptb254->SetBinContent(3,0.002082318);
   METptb254->SetBinContent(4,0.001604156);
   METptb254->SetBinContent(5,0.0008175025);
   METptb254->SetBinContent(6,0.0006941059);
   METptb254->SetBinContent(7,0.0003084915);
   METptb254->SetBinContent(8,0.0002930669);
   METptb254->SetBinContent(9,0.0001388212);
   METptb254->SetBinContent(10,0.000107972);
   METptb254->SetBinContent(11,7.712288e-05);
   METptb254->SetBinContent(12,4.627373e-05);
   METptb254->SetBinContent(13,4.627373e-05);
   METptb254->SetBinContent(14,1.542458e-05);
   METptb254->SetBinContent(15,1.542458e-05);
   METptb254->SetBinContent(18,1.542458e-05);
   METptb254->SetBinContent(21,1.542458e-05);
   METptb254->SetBinError(1,0.000305391);
   METptb254->SetBinError(2,0.0002359506);
   METptb254->SetBinError(3,0.0001792174);
   METptb254->SetBinError(4,0.0001573004);
   METptb254->SetBinError(5,0.0001122926);
   METptb254->SetBinError(6,0.0001034712);
   METptb254->SetBinError(7,6.89808e-05);
   METptb254->SetBinError(8,6.723417e-05);
   METptb254->SetBinError(9,4.627373e-05);
   METptb254->SetBinError(10,4.080959e-05);
   METptb254->SetBinError(11,3.44904e-05);
   METptb254->SetBinError(12,2.671615e-05);
   METptb254->SetBinError(13,2.671615e-05);
   METptb254->SetBinError(14,1.542458e-05);
   METptb254->SetBinError(15,1.542458e-05);
   METptb254->SetBinError(18,1.542458e-05);
   METptb254->SetBinError(21,1.542458e-05);
   METptb254->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   METptb254->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METptb254->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METptb254->SetMarkerColor(ci);
   METptb254->SetMarkerStyle(20);
   METptb254->GetXaxis()->SetTitle("METptb2");
   METptb254->GetXaxis()->SetLabelFont(42);
   METptb254->GetXaxis()->SetLabelSize(0.035);
   METptb254->GetXaxis()->SetTitleSize(0.035);
   METptb254->GetXaxis()->SetTitleFont(42);
   METptb254->GetYaxis()->SetTitle("Events/pb");
   METptb254->GetYaxis()->SetLabelFont(42);
   METptb254->GetYaxis()->SetLabelSize(0.035);
   METptb254->GetYaxis()->SetTitleSize(0.035);
   METptb254->GetYaxis()->SetTitleFont(42);
   METptb254->GetZaxis()->SetLabelFont(42);
   METptb254->GetZaxis()->SetLabelSize(0.035);
   METptb254->GetZaxis()->SetTitleSize(0.035);
   METptb254->GetZaxis()->SetTitleFont(42);
   b2/METptb2->Add(METptb2,"");
   
   TH1D *METptb255 = new TH1D("METptb255","MET_{p_{T}}",26,200,1500);
   METptb255->SetBinContent(1,1.677165e-05);
   METptb255->SetBinError(1,1.677165e-05);
   METptb255->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   METptb255->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METptb255->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METptb255->SetMarkerColor(ci);
   METptb255->SetMarkerStyle(21);
   METptb255->GetXaxis()->SetTitle("METptb2");
   METptb255->GetXaxis()->SetLabelFont(42);
   METptb255->GetXaxis()->SetLabelSize(0.035);
   METptb255->GetXaxis()->SetTitleSize(0.035);
   METptb255->GetXaxis()->SetTitleFont(42);
   METptb255->GetYaxis()->SetTitle("Events/pb");
   METptb255->GetYaxis()->SetLabelFont(42);
   METptb255->GetYaxis()->SetLabelSize(0.035);
   METptb255->GetYaxis()->SetTitleSize(0.035);
   METptb255->GetYaxis()->SetTitleFont(42);
   METptb255->GetZaxis()->SetLabelFont(42);
   METptb255->GetZaxis()->SetLabelSize(0.035);
   METptb255->GetZaxis()->SetTitleSize(0.035);
   METptb255->GetZaxis()->SetTitleFont(42);
   b2/METptb2->Add(METptb2,"");
   b2/METptb2->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.348477,0.9342857,0.651523,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b2/METptb2");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METptb2","b2/METptb2_QCD_b2/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METptb2","b2/METptb2_WJetsToLNu_b2/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METptb2","b2/METptb2_ZJetsToNuNu_b2/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METptb2","b2/METptb2_signal_b2/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METptb2","b2/METptb2_ttbar_b2/","lp");

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
   b2/METptb2->Modified();
   b2/METptb2->cd();
   b2/METptb2->SetSelected(b2/METptb2);
}
