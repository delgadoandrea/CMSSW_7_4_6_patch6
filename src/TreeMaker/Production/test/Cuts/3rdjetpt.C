void 3rdjetpt()
{
//=========Macro generated from canvas: 3rdjetpt/3rdjetpt
//=========  (Fri Nov  6 09:03:35 2015) by ROOT version6.02/05
   TCanvas *3rdjetpt = new TCanvas("3rdjetpt", "3rdjetpt",0,23,700,700);
   3rdjetpt->Range(-100,-6.850455,900,0.1811145);
   3rdjetpt->SetFillColor(0);
   3rdjetpt->SetBorderMode(0);
   3rdjetpt->SetBorderSize(2);
   3rdjetpt->SetLogy();
   3rdjetpt->SetFrameBorderMode(0);
   3rdjetpt->SetFrameBorderMode(0);
   
   THStack *3rdjetpt = new THStack();
   3rdjetpt->SetName("3rdjetpt");
   3rdjetpt->SetTitle("3rdjetpt");
   
   TH1F *3rdjetpt_stack_10 = new TH1F("3rdjetpt_stack_10","3rdjetpt",32,0,800);
   3rdjetpt_stack_10->SetMinimum(7.123635e-07);
   3rdjetpt_stack_10->SetMaximum(0.3005782);
   3rdjetpt_stack_10->SetDirectory(0);
   3rdjetpt_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   3rdjetpt_stack_10->SetLineColor(ci);
   3rdjetpt_stack_10->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt_stack_10->GetXaxis()->SetLabelFont(42);
   3rdjetpt_stack_10->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt_stack_10->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt_stack_10->GetXaxis()->SetTitleFont(42);
   3rdjetpt_stack_10->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt_stack_10->GetYaxis()->SetLabelFont(42);
   3rdjetpt_stack_10->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt_stack_10->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt_stack_10->GetYaxis()->SetTitleFont(42);
   3rdjetpt_stack_10->GetZaxis()->SetLabelFont(42);
   3rdjetpt_stack_10->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt_stack_10->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt_stack_10->GetZaxis()->SetTitleFont(42);
   3rdjetpt->SetHistogram(3rdjetpt_stack_10);
   
   
   TH1D *3rdjetpt46 = new TH1D("3rdjetpt46","p_{T}^{3rd jet}",32,0,800);
   3rdjetpt46->SetBinContent(4,0.02632314);
   3rdjetpt46->SetBinContent(5,0.002501802);
   3rdjetpt46->SetBinContent(6,0.001250901);
   3rdjetpt46->SetBinError(4,0.02632314);
   3rdjetpt46->SetBinError(5,0.001769041);
   3rdjetpt46->SetBinError(6,0.001250901);
   3rdjetpt46->SetEntries(4);

   ci = TColor::GetColor("#00cc00");
   3rdjetpt46->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   3rdjetpt46->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   3rdjetpt46->SetMarkerColor(ci);
   3rdjetpt46->SetMarkerStyle(22);
   3rdjetpt46->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt46->GetXaxis()->SetLabelFont(42);
   3rdjetpt46->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt46->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt46->GetXaxis()->SetTitleFont(42);
   3rdjetpt46->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt46->GetYaxis()->SetLabelFont(42);
   3rdjetpt46->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt46->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt46->GetYaxis()->SetTitleFont(42);
   3rdjetpt46->GetZaxis()->SetLabelFont(42);
   3rdjetpt46->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt46->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt46->GetZaxis()->SetTitleFont(42);
   3rdjetpt->Add(3rdjetpt,"");
   
   TH1D *3rdjetpt47 = new TH1D("3rdjetpt47","p_{T}^{3rd jet}",32,0,800);
   3rdjetpt47->SetBinContent(2,0.1533347);
   3rdjetpt47->SetBinContent(3,0.09372228);
   3rdjetpt47->SetBinContent(4,0.03210307);
   3rdjetpt47->SetBinContent(5,0.01356801);
   3rdjetpt47->SetBinContent(6,0.004587465);
   3rdjetpt47->SetBinContent(7,0.001858293);
   3rdjetpt47->SetBinContent(8,0.0009619798);
   3rdjetpt47->SetBinContent(9,0.0004596545);
   3rdjetpt47->SetBinContent(10,0.000181518);
   3rdjetpt47->SetBinContent(11,0.0001114314);
   3rdjetpt47->SetBinContent(12,2.785785e-05);
   3rdjetpt47->SetBinContent(14,1.392893e-05);
   3rdjetpt47->SetBinError(2,0.006618532);
   3rdjetpt47->SetBinError(3,0.00462021);
   3rdjetpt47->SetBinError(4,0.001898103);
   3rdjetpt47->SetBinError(5,0.0009271703);
   3rdjetpt47->SetBinError(6,0.0003065841);
   3rdjetpt47->SetBinError(7,0.0001765532);
   3rdjetpt47->SetBinError(8,0.0001192172);
   3rdjetpt47->SetBinError(9,8.001558e-05);
   3rdjetpt47->SetBinError(10,5.417605e-05);
   3rdjetpt47->SetBinError(11,3.939695e-05);
   3rdjetpt47->SetBinError(12,1.969847e-05);
   3rdjetpt47->SetBinError(14,1.392893e-05);
   3rdjetpt47->SetEntries(5120);

   ci = TColor::GetColor("#00ffff");
   3rdjetpt47->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   3rdjetpt47->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   3rdjetpt47->SetMarkerColor(ci);
   3rdjetpt47->SetMarkerStyle(20);
   3rdjetpt47->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt47->GetXaxis()->SetLabelFont(42);
   3rdjetpt47->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt47->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt47->GetXaxis()->SetTitleFont(42);
   3rdjetpt47->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt47->GetYaxis()->SetLabelFont(42);
   3rdjetpt47->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt47->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt47->GetYaxis()->SetTitleFont(42);
   3rdjetpt47->GetZaxis()->SetLabelFont(42);
   3rdjetpt47->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt47->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt47->GetZaxis()->SetTitleFont(42);
   3rdjetpt->Add(3rdjetpt,"");
   
   TH1D *3rdjetpt48 = new TH1D("3rdjetpt48","p_{T}^{3rd jet}",32,0,800);
   3rdjetpt48->SetBinContent(2,0.0393544);
   3rdjetpt48->SetBinContent(3,0.02078058);
   3rdjetpt48->SetBinContent(4,0.007982847);
   3rdjetpt48->SetBinContent(5,0.002776777);
   3rdjetpt48->SetBinContent(6,0.001134119);
   3rdjetpt48->SetBinContent(7,0.0004745798);
   3rdjetpt48->SetBinContent(8,0.0002234106);
   3rdjetpt48->SetBinContent(9,0.0001076678);
   3rdjetpt48->SetBinContent(10,6.190896e-05);
   3rdjetpt48->SetBinContent(11,2.422525e-05);
   3rdjetpt48->SetBinContent(12,8.075082e-06);
   3rdjetpt48->SetBinContent(13,8.075082e-06);
   3rdjetpt48->SetBinContent(14,2.691694e-06);
   3rdjetpt48->SetBinContent(17,2.691694e-06);
   3rdjetpt48->SetBinContent(19,2.691694e-06);
   3rdjetpt48->SetBinError(2,0.001373017);
   3rdjetpt48->SetBinError(3,0.0008420004);
   3rdjetpt48->SetBinError(4,0.0003935403);
   3rdjetpt48->SetBinError(5,0.0001318571);
   3rdjetpt48->SetBinError(6,6.679643e-05);
   3rdjetpt48->SetBinError(7,3.862442e-05);
   3rdjetpt48->SetBinError(8,2.45225e-05);
   3rdjetpt48->SetBinError(9,1.702377e-05);
   3rdjetpt48->SetBinError(10,1.290891e-05);
   3rdjetpt48->SetBinError(11,8.075082e-06);
   3rdjetpt48->SetBinError(12,4.662151e-06);
   3rdjetpt48->SetBinError(13,4.662151e-06);
   3rdjetpt48->SetBinError(14,2.691694e-06);
   3rdjetpt48->SetBinError(17,2.691694e-06);
   3rdjetpt48->SetBinError(19,2.691694e-06);
   3rdjetpt48->SetEntries(6356);

   ci = TColor::GetColor("#ffcc00");
   3rdjetpt48->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   3rdjetpt48->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   3rdjetpt48->SetMarkerColor(ci);
   3rdjetpt48->SetMarkerStyle(21);
   3rdjetpt48->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt48->GetXaxis()->SetLabelFont(42);
   3rdjetpt48->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt48->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt48->GetXaxis()->SetTitleFont(42);
   3rdjetpt48->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt48->GetYaxis()->SetLabelFont(42);
   3rdjetpt48->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt48->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt48->GetYaxis()->SetTitleFont(42);
   3rdjetpt48->GetZaxis()->SetLabelFont(42);
   3rdjetpt48->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt48->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt48->GetZaxis()->SetTitleFont(42);
   3rdjetpt->Add(3rdjetpt,"");
   
   TH1D *3rdjetpt49 = new TH1D("3rdjetpt49","p_{T}^{3rd jet}",32,0,800);
   3rdjetpt49->SetBinContent(2,0.006092708);
   3rdjetpt49->SetBinContent(3,0.004874166);
   3rdjetpt49->SetBinContent(4,0.002205714);
   3rdjetpt49->SetBinContent(5,0.0008946254);
   3rdjetpt49->SetBinContent(6,0.0003239161);
   3rdjetpt49->SetBinContent(7,0.0002005195);
   3rdjetpt49->SetBinContent(8,0.0001233966);
   3rdjetpt49->SetBinContent(9,9.254746e-05);
   3rdjetpt49->SetBinContent(10,1.542458e-05);
   3rdjetpt49->SetBinError(2,0.0003065574);
   3rdjetpt49->SetBinError(3,0.0002741933);
   3rdjetpt49->SetBinError(4,0.0001844511);
   3rdjetpt49->SetBinError(5,0.0001174701);
   3rdjetpt49->SetBinError(6,7.068429e-05);
   3rdjetpt49->SetBinError(7,5.56141e-05);
   3rdjetpt49->SetBinError(8,4.362729e-05);
   3rdjetpt49->SetBinError(9,3.778234e-05);
   3rdjetpt49->SetBinError(10,1.542458e-05);
   3rdjetpt49->SetEntries(961);

   ci = TColor::GetColor("#ff0000");
   3rdjetpt49->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   3rdjetpt49->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   3rdjetpt49->SetMarkerColor(ci);
   3rdjetpt49->SetMarkerStyle(20);
   3rdjetpt49->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt49->GetXaxis()->SetLabelFont(42);
   3rdjetpt49->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt49->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt49->GetXaxis()->SetTitleFont(42);
   3rdjetpt49->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt49->GetYaxis()->SetLabelFont(42);
   3rdjetpt49->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt49->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt49->GetYaxis()->SetTitleFont(42);
   3rdjetpt49->GetZaxis()->SetLabelFont(42);
   3rdjetpt49->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt49->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt49->GetZaxis()->SetTitleFont(42);
   3rdjetpt->Add(3rdjetpt,"");
   
   TH1D *3rdjetpt50 = new TH1D("3rdjetpt50","p_{T}^{3rd jet}",32,0,800);
   3rdjetpt50->SetBinContent(2,3.35433e-05);
   3rdjetpt50->SetBinContent(3,6.708659e-05);
   3rdjetpt50->SetBinContent(4,0.0001174015);
   3rdjetpt50->SetBinContent(6,1.677165e-05);
   3rdjetpt50->SetBinContent(8,1.677165e-05);
   3rdjetpt50->SetBinError(2,2.371869e-05);
   3rdjetpt50->SetBinError(3,3.35433e-05);
   3rdjetpt50->SetBinError(4,4.437361e-05);
   3rdjetpt50->SetBinError(6,1.677165e-05);
   3rdjetpt50->SetBinError(8,1.677165e-05);
   3rdjetpt50->SetEntries(15);

   ci = TColor::GetColor("#0000ff");
   3rdjetpt50->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   3rdjetpt50->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   3rdjetpt50->SetMarkerColor(ci);
   3rdjetpt50->SetMarkerStyle(21);
   3rdjetpt50->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt50->GetXaxis()->SetLabelFont(42);
   3rdjetpt50->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt50->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt50->GetXaxis()->SetTitleFont(42);
   3rdjetpt50->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt50->GetYaxis()->SetLabelFont(42);
   3rdjetpt50->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt50->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt50->GetYaxis()->SetTitleFont(42);
   3rdjetpt50->GetZaxis()->SetLabelFont(42);
   3rdjetpt50->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt50->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt50->GetZaxis()->SetTitleFont(42);
   3rdjetpt->Add(3rdjetpt,"");
   3rdjetpt->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.398046,0.9342857,0.601954,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("3rdjetpt");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("3rdjetpt","3rdjetpt_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("3rdjetpt","3rdjetpt_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("3rdjetpt","3rdjetpt_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("3rdjetpt","3rdjetpt_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("3rdjetpt","3rdjetpt_ttbar","lp");

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
   3rdjetpt->Modified();
   3rdjetpt->cd();
   3rdjetpt->SetSelected(3rdjetpt);
}
