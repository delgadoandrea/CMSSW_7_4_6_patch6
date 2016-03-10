void hmtb2()
{
//=========Macro generated from canvas: b2/hmtb2/b2/hmtb2
//=========  (Tue Nov 24 14:26:30 2015) by ROOT version6.02/05
   TCanvas *b2/hmtb2 = new TCanvas("b2/hmtb2", "b2/hmtb2",180,202,700,700);
   b2/hmtb2->Range(-25,-6.724317,225,0.233789);
   b2/hmtb2->SetFillColor(0);
   b2/hmtb2->SetBorderMode(0);
   b2/hmtb2->SetBorderSize(2);
   b2/hmtb2->SetLogy();
   b2/hmtb2->SetFrameBorderMode(0);
   b2/hmtb2->SetFrameBorderMode(0);
   
   THStack *b2/hmtb2 = new THStack();
   b2/hmtb2->SetName("b2/hmtb2");
   b2/hmtb2->SetTitle("b2/hmtb2");
   
   TH1F *b2/hmtb2_stack_10 = new TH1F("b2/hmtb2_stack_10","b2/hmtb2",8,0,200);
   b2/hmtb2_stack_10->SetMinimum(9.364696e-07);
   b2/hmtb2_stack_10->SetMaximum(0.3451266);
   b2/hmtb2_stack_10->SetDirectory(0);
   b2/hmtb2_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b2/hmtb2_stack_10->SetLineColor(ci);
   b2/hmtb2_stack_10->GetXaxis()->SetTitle("b2/hmtb2");
   b2/hmtb2_stack_10->GetXaxis()->SetLabelFont(42);
   b2/hmtb2_stack_10->GetXaxis()->SetLabelSize(0.035);
   b2/hmtb2_stack_10->GetXaxis()->SetTitleSize(0.035);
   b2/hmtb2_stack_10->GetXaxis()->SetTitleFont(42);
   b2/hmtb2_stack_10->GetYaxis()->SetTitle("Events/pb");
   b2/hmtb2_stack_10->GetYaxis()->SetLabelFont(42);
   b2/hmtb2_stack_10->GetYaxis()->SetLabelSize(0.035);
   b2/hmtb2_stack_10->GetYaxis()->SetTitleSize(0.035);
   b2/hmtb2_stack_10->GetYaxis()->SetTitleFont(42);
   b2/hmtb2_stack_10->GetZaxis()->SetLabelFont(42);
   b2/hmtb2_stack_10->GetZaxis()->SetLabelSize(0.035);
   b2/hmtb2_stack_10->GetZaxis()->SetTitleSize(0.035);
   b2/hmtb2_stack_10->GetZaxis()->SetTitleFont(42);
   b2/hmtb2->SetHistogram(b2/hmtb2_stack_10);
   
   
   TH1D *hmtb246 = new TH1D("hmtb246"," Transverse mass",8,0,200);
   hmtb246->SetBinContent(1,0.05452696);
   hmtb246->SetBinContent(2,0.06844174);
   hmtb246->SetBinContent(3,0.00899946);
   hmtb246->SetBinError(1,0.01883648);
   hmtb246->SetBinError(2,0.02216672);
   hmtb246->SetBinError(3,0.008346573);
   hmtb246->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   hmtb246->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hmtb246->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   hmtb246->SetMarkerColor(ci);
   hmtb246->SetMarkerStyle(22);
   hmtb246->GetXaxis()->SetTitle("hmtb2");
   hmtb246->GetXaxis()->SetLabelFont(42);
   hmtb246->GetXaxis()->SetLabelSize(0.035);
   hmtb246->GetXaxis()->SetTitleSize(0.035);
   hmtb246->GetXaxis()->SetTitleFont(42);
   hmtb246->GetYaxis()->SetTitle("Events/pb");
   hmtb246->GetYaxis()->SetLabelFont(42);
   hmtb246->GetYaxis()->SetLabelSize(0.035);
   hmtb246->GetYaxis()->SetTitleSize(0.035);
   hmtb246->GetYaxis()->SetTitleFont(42);
   hmtb246->GetZaxis()->SetLabelFont(42);
   hmtb246->GetZaxis()->SetLabelSize(0.035);
   hmtb246->GetZaxis()->SetTitleSize(0.035);
   hmtb246->GetZaxis()->SetTitleFont(42);
   b2/hmtb2->Add(hmtb2,"");
   
   TH1D *hmtb247 = new TH1D("hmtb247"," Transverse mass",8,0,200);
   hmtb247->SetBinContent(1,0.1770178);
   hmtb247->SetBinContent(2,0.1521364);
   hmtb247->SetBinContent(3,0.1500861);
   hmtb247->SetBinContent(4,0.1173096);
   hmtb247->SetBinContent(5,0.003795927);
   hmtb247->SetBinContent(6,8.681582e-05);
   hmtb247->SetBinContent(7,2.866842e-05);
   hmtb247->SetBinError(1,0.004852291);
   hmtb247->SetBinError(2,0.004963724);
   hmtb247->SetBinError(3,0.004982872);
   hmtb247->SetBinError(4,0.004830345);
   hmtb247->SetBinError(5,0.001425256);
   hmtb247->SetBinError(6,3.545477e-05);
   hmtb247->SetBinError(7,2.027973e-05);
   hmtb247->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   hmtb247->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   hmtb247->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   hmtb247->SetMarkerColor(ci);
   hmtb247->SetMarkerStyle(20);
   hmtb247->GetXaxis()->SetTitle("hmtb2");
   hmtb247->GetXaxis()->SetLabelFont(42);
   hmtb247->GetXaxis()->SetLabelSize(0.035);
   hmtb247->GetXaxis()->SetTitleSize(0.035);
   hmtb247->GetXaxis()->SetTitleFont(42);
   hmtb247->GetYaxis()->SetTitle("Events/pb");
   hmtb247->GetYaxis()->SetLabelFont(42);
   hmtb247->GetYaxis()->SetLabelSize(0.035);
   hmtb247->GetYaxis()->SetTitleSize(0.035);
   hmtb247->GetYaxis()->SetTitleFont(42);
   hmtb247->GetZaxis()->SetLabelFont(42);
   hmtb247->GetZaxis()->SetLabelSize(0.035);
   hmtb247->GetZaxis()->SetTitleSize(0.035);
   hmtb247->GetZaxis()->SetTitleFont(42);
   b2/hmtb2->Add(hmtb2,"");
   
   TH1D *hmtb248 = new TH1D("hmtb248"," Transverse mass",8,0,200);
   hmtb248->SetBinContent(1,0.07307961);
   hmtb248->SetBinContent(2,0.06336982);
   hmtb248->SetBinContent(3,0.007199152);
   hmtb248->SetBinContent(4,0.002226667);
   hmtb248->SetBinContent(5,0.0005420272);
   hmtb248->SetBinContent(6,4.854534e-05);
   hmtb248->SetBinContent(7,4.681207e-06);
   hmtb248->SetBinContent(8,3.510905e-06);
   hmtb248->SetBinContent(9,2.340604e-06);
   hmtb248->SetBinError(1,0.001384586);
   hmtb248->SetBinError(2,0.001218745);
   hmtb248->SetBinError(3,0.0004060783);
   hmtb248->SetBinError(4,0.0002266372);
   hmtb248->SetBinError(5,0.0001002692);
   hmtb248->SetBinError(6,1.091083e-05);
   hmtb248->SetBinError(7,2.340604e-06);
   hmtb248->SetBinError(8,2.027022e-06);
   hmtb248->SetBinError(9,1.655057e-06);
   hmtb248->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   hmtb248->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hmtb248->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hmtb248->SetMarkerColor(ci);
   hmtb248->SetMarkerStyle(21);
   hmtb248->GetXaxis()->SetTitle("hmtb2");
   hmtb248->GetXaxis()->SetLabelFont(42);
   hmtb248->GetXaxis()->SetLabelSize(0.035);
   hmtb248->GetXaxis()->SetTitleSize(0.035);
   hmtb248->GetXaxis()->SetTitleFont(42);
   hmtb248->GetYaxis()->SetTitle("Events/pb");
   hmtb248->GetYaxis()->SetLabelFont(42);
   hmtb248->GetYaxis()->SetLabelSize(0.035);
   hmtb248->GetYaxis()->SetTitleSize(0.035);
   hmtb248->GetYaxis()->SetTitleFont(42);
   hmtb248->GetZaxis()->SetLabelFont(42);
   hmtb248->GetZaxis()->SetLabelSize(0.035);
   hmtb248->GetZaxis()->SetTitleSize(0.035);
   hmtb248->GetZaxis()->SetTitleFont(42);
   b2/hmtb2->Add(hmtb2,"");
   
   TH1D *hmtb249 = new TH1D("hmtb249"," Transverse mass",8,0,200);
   hmtb249->SetBinContent(1,0.00600016);
   hmtb249->SetBinContent(2,0.005383177);
   hmtb249->SetBinContent(3,0.002961519);
   hmtb249->SetBinContent(4,0.001203117);
   hmtb249->SetBinContent(5,0.0003547652);
   hmtb249->SetBinContent(6,3.084915e-05);
   hmtb249->SetBinError(1,0.0003042202);
   hmtb249->SetBinError(2,0.0002881549);
   hmtb249->SetBinError(3,0.0002137292);
   hmtb249->SetBinError(4,0.0001362262);
   hmtb249->SetBinError(5,7.397367e-05);
   hmtb249->SetBinError(6,2.181364e-05);
   hmtb249->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   hmtb249->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   hmtb249->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hmtb249->SetMarkerColor(ci);
   hmtb249->SetMarkerStyle(20);
   hmtb249->GetXaxis()->SetTitle("hmtb2");
   hmtb249->GetXaxis()->SetLabelFont(42);
   hmtb249->GetXaxis()->SetLabelSize(0.035);
   hmtb249->GetXaxis()->SetTitleSize(0.035);
   hmtb249->GetXaxis()->SetTitleFont(42);
   hmtb249->GetYaxis()->SetTitle("Events/pb");
   hmtb249->GetYaxis()->SetLabelFont(42);
   hmtb249->GetYaxis()->SetLabelSize(0.035);
   hmtb249->GetYaxis()->SetTitleSize(0.035);
   hmtb249->GetYaxis()->SetTitleFont(42);
   hmtb249->GetZaxis()->SetLabelFont(42);
   hmtb249->GetZaxis()->SetLabelSize(0.035);
   hmtb249->GetZaxis()->SetTitleSize(0.035);
   hmtb249->GetZaxis()->SetTitleFont(42);
   b2/hmtb2->Add(hmtb2,"");
   
   TH1D *hmtb250 = new TH1D("hmtb250"," Transverse mass",8,0,200);
   hmtb250->SetBinContent(2,1.677165e-05);
   hmtb250->SetBinError(2,1.677165e-05);
   hmtb250->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   hmtb250->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   hmtb250->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hmtb250->SetMarkerColor(ci);
   hmtb250->SetMarkerStyle(21);
   hmtb250->GetXaxis()->SetTitle("hmtb2");
   hmtb250->GetXaxis()->SetLabelFont(42);
   hmtb250->GetXaxis()->SetLabelSize(0.035);
   hmtb250->GetXaxis()->SetTitleSize(0.035);
   hmtb250->GetXaxis()->SetTitleFont(42);
   hmtb250->GetYaxis()->SetTitle("Events/pb");
   hmtb250->GetYaxis()->SetLabelFont(42);
   hmtb250->GetYaxis()->SetLabelSize(0.035);
   hmtb250->GetYaxis()->SetTitleSize(0.035);
   hmtb250->GetYaxis()->SetTitleFont(42);
   hmtb250->GetZaxis()->SetLabelFont(42);
   hmtb250->GetZaxis()->SetLabelSize(0.035);
   hmtb250->GetZaxis()->SetTitleSize(0.035);
   hmtb250->GetZaxis()->SetTitleFont(42);
   b2/hmtb2->Add(hmtb2,"");
   b2/hmtb2->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3786494,0.94,0.6213506,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b2/hmtb2");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hmtb2","b2/hmtb2_QCD_b2/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hmtb2","b2/hmtb2_WJetsToLNu_b2/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hmtb2","b2/hmtb2_ZJetsToNuNu_b2/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hmtb2","b2/hmtb2_signal_b2/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hmtb2","b2/hmtb2_ttbar_b2/","lp");

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
   b2/hmtb2->Modified();
   b2/hmtb2->cd();
   b2/hmtb2->SetSelected(b2/hmtb2);
}
