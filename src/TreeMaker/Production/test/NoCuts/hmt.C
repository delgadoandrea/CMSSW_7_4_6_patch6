void hmt()
{
//=========Macro generated from canvas: hmt/hmt
//=========  (Mon Nov 23 11:05:05 2015) by ROOT version6.02/05
   TCanvas *hmt = new TCanvas("hmt", "hmt",220,242,700,700);
   hmt->Range(-25,-7.557249,225,5.510816);
   hmt->SetFillColor(0);
   hmt->SetBorderMode(0);
   hmt->SetBorderSize(2);
   hmt->SetLogy();
   hmt->SetFrameBorderMode(0);
   hmt->SetFrameBorderMode(0);
   
   THStack *hmt = new THStack();
   hmt->SetName("hmt");
   hmt->SetTitle("hmt");
   
   TH1F *hmt_stack_12 = new TH1F("hmt_stack_12","hmt",8,0,200);
   hmt_stack_12->SetMinimum(5.617689e-07);
   hmt_stack_12->SetMaximum(15995.94);
   hmt_stack_12->SetDirectory(0);
   hmt_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hmt_stack_12->SetLineColor(ci);
   hmt_stack_12->GetXaxis()->SetTitle("hmt");
   hmt_stack_12->GetXaxis()->SetLabelFont(42);
   hmt_stack_12->GetXaxis()->SetLabelSize(0.035);
   hmt_stack_12->GetXaxis()->SetTitleSize(0.035);
   hmt_stack_12->GetXaxis()->SetTitleFont(42);
   hmt_stack_12->GetYaxis()->SetTitle("Events/pb");
   hmt_stack_12->GetYaxis()->SetLabelFont(42);
   hmt_stack_12->GetYaxis()->SetLabelSize(0.035);
   hmt_stack_12->GetYaxis()->SetTitleSize(0.035);
   hmt_stack_12->GetYaxis()->SetTitleFont(42);
   hmt_stack_12->GetZaxis()->SetLabelFont(42);
   hmt_stack_12->GetZaxis()->SetLabelSize(0.035);
   hmt_stack_12->GetZaxis()->SetTitleSize(0.035);
   hmt_stack_12->GetZaxis()->SetTitleFont(42);
   hmt->SetHistogram(hmt_stack_12);
   
   
   TH1D *hmt56 = new TH1D("hmt56"," Transverse mass",8,0,200);
   hmt56->SetBinContent(1,5612.801);
   hmt56->SetBinContent(2,96.67354);
   hmt56->SetBinContent(3,1.843083);
   hmt56->SetBinContent(4,0.00068069);
   hmt56->SetBinError(1,42.85727);
   hmt56->SetBinError(2,5.590091);
   hmt56->SetBinError(3,0.7489465);
   hmt56->SetBinError(4,0.00068069);
   hmt56->SetEntries(35032);

   ci = TColor::GetColor("#00cc00");
   hmt56->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hmt56->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   hmt56->SetMarkerColor(ci);
   hmt56->SetMarkerStyle(22);
   hmt56->GetXaxis()->SetTitle("hmt");
   hmt56->GetXaxis()->SetLabelFont(42);
   hmt56->GetXaxis()->SetLabelSize(0.035);
   hmt56->GetXaxis()->SetTitleSize(0.035);
   hmt56->GetXaxis()->SetTitleFont(42);
   hmt56->GetYaxis()->SetTitle("Events/pb");
   hmt56->GetYaxis()->SetLabelFont(42);
   hmt56->GetYaxis()->SetLabelSize(0.035);
   hmt56->GetYaxis()->SetTitleSize(0.035);
   hmt56->GetYaxis()->SetTitleFont(42);
   hmt56->GetZaxis()->SetLabelFont(42);
   hmt56->GetZaxis()->SetLabelSize(0.035);
   hmt56->GetZaxis()->SetTitleSize(0.035);
   hmt56->GetZaxis()->SetTitleFont(42);
   hmt->Add(hmt,"");
   
   TH1D *hmt57 = new TH1D("hmt57"," Transverse mass",8,0,200);
   hmt57->SetBinContent(1,20.71688);
   hmt57->SetBinContent(2,9.067683);
   hmt57->SetBinContent(3,5.102584);
   hmt57->SetBinContent(4,1.066239);
   hmt57->SetBinContent(5,0.004897312);
   hmt57->SetBinContent(6,8.681582e-05);
   hmt57->SetBinContent(7,2.866842e-05);
   hmt57->SetBinError(1,0.1278328);
   hmt57->SetBinError(2,0.08350833);
   hmt57->SetBinError(3,0.06062541);
   hmt57->SetBinError(4,0.025646);
   hmt57->SetBinError(5,0.001471335);
   hmt57->SetBinError(6,3.545477e-05);
   hmt57->SetBinError(7,2.027973e-05);
   hmt57->SetEntries(136801);

   ci = TColor::GetColor("#00ffff");
   hmt57->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   hmt57->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   hmt57->SetMarkerColor(ci);
   hmt57->SetMarkerStyle(20);
   hmt57->GetXaxis()->SetTitle("hmt");
   hmt57->GetXaxis()->SetLabelFont(42);
   hmt57->GetXaxis()->SetLabelSize(0.035);
   hmt57->GetXaxis()->SetTitleSize(0.035);
   hmt57->GetXaxis()->SetTitleFont(42);
   hmt57->GetYaxis()->SetTitle("Events/pb");
   hmt57->GetYaxis()->SetLabelFont(42);
   hmt57->GetYaxis()->SetLabelSize(0.035);
   hmt57->GetYaxis()->SetTitleSize(0.035);
   hmt57->GetYaxis()->SetTitleFont(42);
   hmt57->GetZaxis()->SetLabelFont(42);
   hmt57->GetZaxis()->SetLabelSize(0.035);
   hmt57->GetZaxis()->SetTitleSize(0.035);
   hmt57->GetZaxis()->SetTitleFont(42);
   hmt->Add(hmt,"");
   
   TH1D *hmt58 = new TH1D("hmt58"," Transverse mass",8,0,200);
   hmt58->SetBinContent(1,4.450283);
   hmt58->SetBinContent(2,0.4423873);
   hmt58->SetBinContent(3,0.0414851);
   hmt58->SetBinContent(4,0.005226811);
   hmt58->SetBinContent(5,0.0005983346);
   hmt58->SetBinContent(6,4.854534e-05);
   hmt58->SetBinContent(7,4.681207e-06);
   hmt58->SetBinContent(8,3.510905e-06);
   hmt58->SetBinContent(9,2.340604e-06);
   hmt58->SetBinError(1,0.01852365);
   hmt58->SetBinError(2,0.005347213);
   hmt58->SetBinError(3,0.001581388);
   hmt58->SetBinError(4,0.000472027);
   hmt58->SetBinError(5,0.000107885);
   hmt58->SetBinError(6,1.091083e-05);
   hmt58->SetBinError(7,2.340604e-06);
   hmt58->SetBinError(8,2.027022e-06);
   hmt58->SetBinError(9,1.655057e-06);
   hmt58->SetEntries(131338);

   ci = TColor::GetColor("#ffcc00");
   hmt58->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hmt58->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hmt58->SetMarkerColor(ci);
   hmt58->SetMarkerStyle(21);
   hmt58->GetXaxis()->SetTitle("hmt");
   hmt58->GetXaxis()->SetLabelFont(42);
   hmt58->GetXaxis()->SetLabelSize(0.035);
   hmt58->GetXaxis()->SetTitleSize(0.035);
   hmt58->GetXaxis()->SetTitleFont(42);
   hmt58->GetYaxis()->SetTitle("Events/pb");
   hmt58->GetYaxis()->SetLabelFont(42);
   hmt58->GetYaxis()->SetLabelSize(0.035);
   hmt58->GetYaxis()->SetTitleSize(0.035);
   hmt58->GetYaxis()->SetTitleFont(42);
   hmt58->GetZaxis()->SetLabelFont(42);
   hmt58->GetZaxis()->SetLabelSize(0.035);
   hmt58->GetZaxis()->SetTitleSize(0.035);
   hmt58->GetZaxis()->SetTitleFont(42);
   hmt->Add(hmt,"");
   
   TH1D *hmt59 = new TH1D("hmt59"," Transverse mass",8,0,200);
   hmt59->SetBinContent(1,0.03415001);
   hmt59->SetBinContent(2,0.02037586);
   hmt59->SetBinContent(3,0.007434646);
   hmt59->SetBinContent(4,0.001881798);
   hmt59->SetBinContent(5,0.0003547652);
   hmt59->SetBinContent(6,3.084915e-05);
   hmt59->SetBinError(1,0.0007257751);
   hmt59->SetBinError(2,0.0005606149);
   hmt59->SetBinError(3,0.0003386388);
   hmt59->SetBinError(4,0.00017037);
   hmt59->SetBinError(5,7.397367e-05);
   hmt59->SetBinError(6,2.181364e-05);
   hmt59->SetEntries(4164);

   ci = TColor::GetColor("#ff0000");
   hmt59->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   hmt59->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hmt59->SetMarkerColor(ci);
   hmt59->SetMarkerStyle(20);
   hmt59->GetXaxis()->SetTitle("hmt");
   hmt59->GetXaxis()->SetLabelFont(42);
   hmt59->GetXaxis()->SetLabelSize(0.035);
   hmt59->GetXaxis()->SetTitleSize(0.035);
   hmt59->GetXaxis()->SetTitleFont(42);
   hmt59->GetYaxis()->SetTitle("Events/pb");
   hmt59->GetYaxis()->SetLabelFont(42);
   hmt59->GetYaxis()->SetLabelSize(0.035);
   hmt59->GetYaxis()->SetTitleSize(0.035);
   hmt59->GetYaxis()->SetTitleFont(42);
   hmt59->GetZaxis()->SetLabelFont(42);
   hmt59->GetZaxis()->SetLabelSize(0.035);
   hmt59->GetZaxis()->SetTitleSize(0.035);
   hmt59->GetZaxis()->SetTitleFont(42);
   hmt->Add(hmt,"");
   
   TH1D *hmt60 = new TH1D("hmt60"," Transverse mass",8,0,200);
   hmt60->SetBinContent(1,0.0006037793);
   hmt60->SetBinContent(2,0.0002683464);
   hmt60->SetBinContent(3,0.0001341732);
   hmt60->SetBinContent(4,1.677165e-05);
   hmt60->SetBinError(1,0.0001006299);
   hmt60->SetBinError(2,6.708659e-05);
   hmt60->SetBinError(3,4.743738e-05);
   hmt60->SetBinError(4,1.677165e-05);
   hmt60->SetEntries(61);

   ci = TColor::GetColor("#0000ff");
   hmt60->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   hmt60->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hmt60->SetMarkerColor(ci);
   hmt60->SetMarkerStyle(21);
   hmt60->GetXaxis()->SetTitle("hmt");
   hmt60->GetXaxis()->SetLabelFont(42);
   hmt60->GetXaxis()->SetLabelSize(0.035);
   hmt60->GetXaxis()->SetTitleSize(0.035);
   hmt60->GetXaxis()->SetTitleFont(42);
   hmt60->GetYaxis()->SetTitle("Events/pb");
   hmt60->GetYaxis()->SetLabelFont(42);
   hmt60->GetYaxis()->SetLabelSize(0.035);
   hmt60->GetYaxis()->SetTitleSize(0.035);
   hmt60->GetYaxis()->SetTitleFont(42);
   hmt60->GetZaxis()->SetLabelFont(42);
   hmt60->GetZaxis()->SetLabelSize(0.035);
   hmt60->GetZaxis()->SetTitleSize(0.035);
   hmt60->GetZaxis()->SetTitleFont(42);
   hmt->Add(hmt,"");
   hmt->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.444023,0.94,0.555977,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("hmt");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hmt","hmt_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hmt","hmt_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hmt","hmt_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hmt","hmt_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hmt","hmt_ttbar","lp");

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
   hmt->Modified();
   hmt->cd();
   hmt->SetSelected(hmt);
}
