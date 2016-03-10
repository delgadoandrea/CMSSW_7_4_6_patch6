void METpt()
{
//=========Macro generated from canvas: METpt/METpt
//=========  (Fri Nov  6 09:03:41 2015) by ROOT version6.02/05
   TCanvas *METpt = new TCanvas("METpt", "METpt",0,23,700,700);
   METpt->Range(37.49999,-6.986057,1662.5,0.9864872);
   METpt->SetFillColor(0);
   METpt->SetBorderMode(0);
   METpt->SetBorderSize(2);
   METpt->SetLogy();
   METpt->SetFrameBorderMode(0);
   METpt->SetFrameBorderMode(0);
   
   THStack *METpt = new THStack();
   METpt->SetName("METpt");
   METpt->SetTitle("METpt");
   
   TH1F *METpt_stack_11 = new TH1F("METpt_stack_11","METpt",26,200,1500);
   METpt_stack_11->SetMinimum(6.474369e-07);
   METpt_stack_11->SetMaximum(1.546083);
   METpt_stack_11->SetDirectory(0);
   METpt_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   METpt_stack_11->SetLineColor(ci);
   METpt_stack_11->GetXaxis()->SetTitle("METpt");
   METpt_stack_11->GetXaxis()->SetLabelFont(42);
   METpt_stack_11->GetXaxis()->SetLabelSize(0.035);
   METpt_stack_11->GetXaxis()->SetTitleSize(0.035);
   METpt_stack_11->GetXaxis()->SetTitleFont(42);
   METpt_stack_11->GetYaxis()->SetTitle("Events/pb");
   METpt_stack_11->GetYaxis()->SetLabelFont(42);
   METpt_stack_11->GetYaxis()->SetLabelSize(0.035);
   METpt_stack_11->GetYaxis()->SetTitleSize(0.035);
   METpt_stack_11->GetYaxis()->SetTitleFont(42);
   METpt_stack_11->GetZaxis()->SetLabelFont(42);
   METpt_stack_11->GetZaxis()->SetLabelSize(0.035);
   METpt_stack_11->GetZaxis()->SetTitleSize(0.035);
   METpt_stack_11->GetZaxis()->SetTitleFont(42);
   METpt->SetHistogram(METpt_stack_11);
   
   
   TH1D *METpt51 = new TH1D("METpt51","MET_{p_{T}}",26,200,1500);
   METpt51->SetBinContent(1,0.02632314);
   METpt51->SetBinContent(4,0.002501802);
   METpt51->SetBinContent(6,0.001250901);
   METpt51->SetBinError(1,0.02632314);
   METpt51->SetBinError(4,0.001769041);
   METpt51->SetBinError(6,0.001250901);
   METpt51->SetEntries(4);

   ci = TColor::GetColor("#00cc00");
   METpt51->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METpt51->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METpt51->SetMarkerColor(ci);
   METpt51->SetMarkerStyle(22);
   METpt51->GetXaxis()->SetTitle("METpt");
   METpt51->GetXaxis()->SetLabelFont(42);
   METpt51->GetXaxis()->SetLabelSize(0.035);
   METpt51->GetXaxis()->SetTitleSize(0.035);
   METpt51->GetXaxis()->SetTitleFont(42);
   METpt51->GetYaxis()->SetTitle("Events/pb");
   METpt51->GetYaxis()->SetLabelFont(42);
   METpt51->GetYaxis()->SetLabelSize(0.035);
   METpt51->GetYaxis()->SetTitleSize(0.035);
   METpt51->GetYaxis()->SetTitleFont(42);
   METpt51->GetZaxis()->SetLabelFont(42);
   METpt51->GetZaxis()->SetLabelSize(0.035);
   METpt51->GetZaxis()->SetTitleSize(0.035);
   METpt51->GetZaxis()->SetTitleFont(42);
   METpt->Add(METpt,"");
   
   TH1D *METpt52 = new TH1D("METpt52","MET_{p_{T}}",26,200,1500);
   METpt52->SetBinContent(1,0.7373934);
   METpt52->SetBinContent(2,0.2329011);
   METpt52->SetBinContent(3,0.09601942);
   METpt52->SetBinContent(4,0.03953044);
   METpt52->SetBinContent(5,0.01788678);
   METpt52->SetBinContent(6,0.009583489);
   METpt52->SetBinContent(7,0.004888812);
   METpt52->SetBinContent(8,0.002883944);
   METpt52->SetBinContent(9,0.001840828);
   METpt52->SetBinContent(10,0.0009610958);
   METpt52->SetBinContent(11,0.0006128727);
   METpt52->SetBinContent(12,0.0003482231);
   METpt52->SetBinContent(13,0.0002367917);
   METpt52->SetBinContent(14,0.0001253603);
   METpt52->SetBinContent(15,9.750248e-05);
   METpt52->SetBinContent(16,6.964463e-05);
   METpt52->SetBinContent(17,4.178678e-05);
   METpt52->SetBinContent(18,4.178678e-05);
   METpt52->SetBinContent(19,5.57157e-05);
   METpt52->SetBinContent(20,1.392893e-05);
   METpt52->SetBinContent(21,1.392893e-05);
   METpt52->SetBinContent(23,4.178678e-05);
   METpt52->SetBinContent(25,1.392893e-05);
   METpt52->SetBinContent(27,1.392893e-05);
   METpt52->SetBinError(1,0.01783494);
   METpt52->SetBinError(2,0.008259986);
   METpt52->SetBinError(3,0.004781936);
   METpt52->SetBinError(4,0.002458539);
   METpt52->SetBinError(5,0.0009443172);
   METpt52->SetBinError(6,0.0004861906);
   METpt52->SetBinError(7,0.0003260753);
   METpt52->SetBinError(8,0.0002314976);
   METpt52->SetBinError(9,0.0001663557);
   METpt52->SetBinError(10,0.0001157023);
   METpt52->SetBinError(11,9.239404e-05);
   METpt52->SetBinError(12,6.964463e-05);
   METpt52->SetBinError(13,5.743043e-05);
   METpt52->SetBinError(14,4.178678e-05);
   METpt52->SetBinError(15,3.685247e-05);
   METpt52->SetBinError(16,3.114602e-05);
   METpt52->SetBinError(17,2.412561e-05);
   METpt52->SetBinError(18,2.412561e-05);
   METpt52->SetBinError(19,2.785785e-05);
   METpt52->SetBinError(20,1.392893e-05);
   METpt52->SetBinError(21,1.392893e-05);
   METpt52->SetBinError(23,2.412561e-05);
   METpt52->SetBinError(25,1.392893e-05);
   METpt52->SetBinError(27,1.392893e-05);
   METpt52->SetEntries(9534);

   ci = TColor::GetColor("#00ffff");
   METpt52->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METpt52->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METpt52->SetMarkerColor(ci);
   METpt52->SetMarkerStyle(20);
   METpt52->GetXaxis()->SetTitle("METpt");
   METpt52->GetXaxis()->SetLabelFont(42);
   METpt52->GetXaxis()->SetLabelSize(0.035);
   METpt52->GetXaxis()->SetTitleSize(0.035);
   METpt52->GetXaxis()->SetTitleFont(42);
   METpt52->GetYaxis()->SetTitle("Events/pb");
   METpt52->GetYaxis()->SetLabelFont(42);
   METpt52->GetYaxis()->SetLabelSize(0.035);
   METpt52->GetYaxis()->SetTitleSize(0.035);
   METpt52->GetYaxis()->SetTitleFont(42);
   METpt52->GetZaxis()->SetLabelFont(42);
   METpt52->GetZaxis()->SetLabelSize(0.035);
   METpt52->GetZaxis()->SetTitleSize(0.035);
   METpt52->GetZaxis()->SetTitleFont(42);
   METpt->Add(METpt,"");
   
   TH1D *METpt53 = new TH1D("METpt53","MET_{p_{T}}",26,200,1500);
   METpt53->SetBinContent(1,0.1669056);
   METpt53->SetBinContent(2,0.06068995);
   METpt53->SetBinContent(3,0.02718215);
   METpt53->SetBinContent(4,0.01378227);
   METpt53->SetBinContent(5,0.006643686);
   METpt53->SetBinContent(6,0.003522899);
   METpt53->SetBinContent(7,0.002283746);
   METpt53->SetBinContent(8,0.001156278);
   METpt53->SetBinContent(9,0.0008245);
   METpt53->SetBinContent(10,0.0004430962);
   METpt53->SetBinContent(11,0.0003014697);
   METpt53->SetBinContent(12,0.0001803435);
   METpt53->SetBinContent(13,0.0001345847);
   METpt53->SetBinContent(14,0.0001238179);
   METpt53->SetBinContent(15,6.729235e-05);
   METpt53->SetBinContent(16,3.499202e-05);
   METpt53->SetBinContent(17,2.422525e-05);
   METpt53->SetBinContent(18,2.422525e-05);
   METpt53->SetBinContent(19,1.345847e-05);
   METpt53->SetBinContent(20,1.345847e-05);
   METpt53->SetBinContent(21,8.075082e-06);
   METpt53->SetBinContent(22,1.345847e-05);
   METpt53->SetBinContent(23,5.383388e-06);
   METpt53->SetBinContent(24,2.691694e-06);
   METpt53->SetBinContent(26,2.691694e-06);
   METpt53->SetBinContent(27,2.691694e-06);
   METpt53->SetBinError(1,0.003523282);
   METpt53->SetBinError(2,0.001688398);
   METpt53->SetBinError(3,0.001039868);
   METpt53->SetBinError(4,0.0006071028);
   METpt53->SetBinError(5,0.0002632094);
   METpt53->SetBinError(6,0.0001445967);
   METpt53->SetBinError(7,0.0001092545);
   METpt53->SetBinError(8,6.769542e-05);
   METpt53->SetBinError(9,4.933279e-05);
   METpt53->SetBinError(10,3.497586e-05);
   METpt53->SetBinError(11,2.848621e-05);
   METpt53->SetBinError(12,2.203247e-05);
   METpt53->SetBinError(13,1.903315e-05);
   METpt53->SetBinError(14,1.825596e-05);
   METpt53->SetBinError(15,1.345847e-05);
   METpt53->SetBinError(16,9.705041e-06);
   METpt53->SetBinError(17,8.075082e-06);
   METpt53->SetBinError(18,8.075082e-06);
   METpt53->SetBinError(19,6.018811e-06);
   METpt53->SetBinError(20,6.018811e-06);
   METpt53->SetBinError(21,4.662151e-06);
   METpt53->SetBinError(22,6.018811e-06);
   METpt53->SetBinError(23,3.80663e-06);
   METpt53->SetBinError(24,2.691694e-06);
   METpt53->SetBinError(26,2.691694e-06);
   METpt53->SetBinError(27,2.691694e-06);
   METpt53->SetEntries(13132);

   ci = TColor::GetColor("#ffcc00");
   METpt53->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METpt53->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METpt53->SetMarkerColor(ci);
   METpt53->SetMarkerStyle(21);
   METpt53->GetXaxis()->SetTitle("METpt");
   METpt53->GetXaxis()->SetLabelFont(42);
   METpt53->GetXaxis()->SetLabelSize(0.035);
   METpt53->GetXaxis()->SetTitleSize(0.035);
   METpt53->GetXaxis()->SetTitleFont(42);
   METpt53->GetYaxis()->SetTitle("Events/pb");
   METpt53->GetYaxis()->SetLabelFont(42);
   METpt53->GetYaxis()->SetLabelSize(0.035);
   METpt53->GetYaxis()->SetTitleSize(0.035);
   METpt53->GetYaxis()->SetTitleFont(42);
   METpt53->GetZaxis()->SetLabelFont(42);
   METpt53->GetZaxis()->SetLabelSize(0.035);
   METpt53->GetZaxis()->SetTitleSize(0.035);
   METpt53->GetZaxis()->SetTitleFont(42);
   METpt->Add(METpt,"");
   
   TH1D *METpt54 = new TH1D("METpt54","MET_{p_{T}}",26,200,1500);
   METpt54->SetBinContent(1,0.01161471);
   METpt54->SetBinContent(2,0.007558042);
   METpt54->SetBinContent(3,0.004766194);
   METpt54->SetBinContent(4,0.003069491);
   METpt54->SetBinContent(5,0.001773826);
   METpt54->SetBinContent(6,0.001249391);
   METpt54->SetBinContent(7,0.0007249551);
   METpt54->SetBinContent(8,0.0005861339);
   METpt54->SetBinContent(9,0.0004164636);
   METpt54->SetBinContent(10,0.0001696703);
   METpt54->SetBinContent(11,0.0002159441);
   METpt54->SetBinContent(12,0.0001850949);
   METpt54->SetBinContent(13,4.627373e-05);
   METpt54->SetBinContent(14,7.712288e-05);
   METpt54->SetBinContent(16,3.084915e-05);
   METpt54->SetBinContent(17,3.084915e-05);
   METpt54->SetBinContent(23,1.542458e-05);
   METpt54->SetBinContent(24,1.542458e-05);
   METpt54->SetBinError(1,0.0004232634);
   METpt54->SetBinError(2,0.0003414375);
   METpt54->SetBinError(3,0.0002711393);
   METpt54->SetBinError(4,0.0002175904);
   METpt54->SetBinError(5,0.0001654101);
   METpt54->SetBinError(6,0.0001388212);
   METpt54->SetBinError(7,0.0001057456);
   METpt54->SetBinError(8,9.508347e-05);
   METpt54->SetBinError(9,8.014845e-05);
   METpt54->SetBinError(10,5.115753e-05);
   METpt54->SetBinError(11,5.771348e-05);
   METpt54->SetBinError(12,5.34323e-05);
   METpt54->SetBinError(13,2.671615e-05);
   METpt54->SetBinError(14,3.44904e-05);
   METpt54->SetBinError(16,2.181364e-05);
   METpt54->SetBinError(17,2.181364e-05);
   METpt54->SetBinError(23,1.542458e-05);
   METpt54->SetBinError(24,1.542458e-05);
   METpt54->SetEntries(2110);

   ci = TColor::GetColor("#ff0000");
   METpt54->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METpt54->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METpt54->SetMarkerColor(ci);
   METpt54->SetMarkerStyle(20);
   METpt54->GetXaxis()->SetTitle("METpt");
   METpt54->GetXaxis()->SetLabelFont(42);
   METpt54->GetXaxis()->SetLabelSize(0.035);
   METpt54->GetXaxis()->SetTitleSize(0.035);
   METpt54->GetXaxis()->SetTitleFont(42);
   METpt54->GetYaxis()->SetTitle("Events/pb");
   METpt54->GetYaxis()->SetLabelFont(42);
   METpt54->GetYaxis()->SetLabelSize(0.035);
   METpt54->GetYaxis()->SetTitleSize(0.035);
   METpt54->GetYaxis()->SetTitleFont(42);
   METpt54->GetZaxis()->SetLabelFont(42);
   METpt54->GetZaxis()->SetLabelSize(0.035);
   METpt54->GetZaxis()->SetTitleSize(0.035);
   METpt54->GetZaxis()->SetTitleFont(42);
   METpt->Add(METpt,"");
   
   TH1D *METpt55 = new TH1D("METpt55","MET_{p_{T}}",26,200,1500);
   METpt55->SetBinContent(1,0.0002012598);
   METpt55->SetBinContent(2,6.708659e-05);
   METpt55->SetBinContent(5,1.677165e-05);
   METpt55->SetBinError(1,5.809869e-05);
   METpt55->SetBinError(2,3.35433e-05);
   METpt55->SetBinError(5,1.677165e-05);
   METpt55->SetEntries(17);

   ci = TColor::GetColor("#0000ff");
   METpt55->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METpt55->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METpt55->SetMarkerColor(ci);
   METpt55->SetMarkerStyle(21);
   METpt55->GetXaxis()->SetTitle("METpt");
   METpt55->GetXaxis()->SetLabelFont(42);
   METpt55->GetXaxis()->SetLabelSize(0.035);
   METpt55->GetXaxis()->SetTitleSize(0.035);
   METpt55->GetXaxis()->SetTitleFont(42);
   METpt55->GetYaxis()->SetTitle("Events/pb");
   METpt55->GetYaxis()->SetLabelFont(42);
   METpt55->GetYaxis()->SetLabelSize(0.035);
   METpt55->GetYaxis()->SetTitleSize(0.035);
   METpt55->GetYaxis()->SetTitleFont(42);
   METpt55->GetZaxis()->SetLabelFont(42);
   METpt55->GetZaxis()->SetLabelSize(0.035);
   METpt55->GetZaxis()->SetTitleSize(0.035);
   METpt55->GetZaxis()->SetTitleFont(42);
   METpt->Add(METpt,"");
   METpt->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.4138506,0.9342857,0.5861494,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("METpt");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METpt","METpt_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METpt","METpt_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METpt","METpt_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METpt","METpt_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METpt","METpt_ttbar","lp");

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
   METpt->Modified();
   METpt->cd();
   METpt->SetSelected(METpt);
}
