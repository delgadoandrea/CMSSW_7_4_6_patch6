void hmt()
{
//=========Macro generated from canvas: hmt/hmt
//=========  (Fri Nov 13 11:38:54 2015) by ROOT version6.02/05
   TCanvas *hmt = new TCanvas("hmt", "hmt",200,222,700,700);
   hmt->Range(-25,-7.030656,225,4.817751);
   hmt->SetFillColor(0);
   hmt->SetBorderMode(0);
   hmt->SetBorderSize(2);
   hmt->SetLogy();
   hmt->SetFrameBorderMode(0);
   hmt->SetFrameBorderMode(0);
   
   THStack *hmt = new THStack();
   hmt->SetName("hmt");
   hmt->SetTitle("hmt");
   
   TH1F *hmt_stack_11 = new TH1F("hmt_stack_11","hmt",8,0,200);
   hmt_stack_11->SetMinimum(1.426215e-06);
   hmt_stack_11->SetMaximum(4294.474);
   hmt_stack_11->SetDirectory(0);
   hmt_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hmt_stack_11->SetLineColor(ci);
   hmt_stack_11->GetXaxis()->SetTitle("hmt");
   hmt_stack_11->GetXaxis()->SetLabelFont(42);
   hmt_stack_11->GetXaxis()->SetLabelSize(0.035);
   hmt_stack_11->GetXaxis()->SetTitleSize(0.035);
   hmt_stack_11->GetXaxis()->SetTitleFont(42);
   hmt_stack_11->GetYaxis()->SetTitle("Events/pb");
   hmt_stack_11->GetYaxis()->SetLabelFont(42);
   hmt_stack_11->GetYaxis()->SetLabelSize(0.035);
   hmt_stack_11->GetYaxis()->SetTitleSize(0.035);
   hmt_stack_11->GetYaxis()->SetTitleFont(42);
   hmt_stack_11->GetZaxis()->SetLabelFont(42);
   hmt_stack_11->GetZaxis()->SetLabelSize(0.035);
   hmt_stack_11->GetZaxis()->SetTitleSize(0.035);
   hmt_stack_11->GetZaxis()->SetTitleFont(42);
   hmt->SetHistogram(hmt_stack_11);
   
   
   TH1D *hmt51 = new TH1D("hmt51"," Transverse mass",8,0,200);
   hmt51->SetBinContent(1,1609.73);
   hmt51->SetBinContent(2,287.8382);
   hmt51->SetBinContent(3,6.707748);
   hmt51->SetBinContent(4,0.00968015);
   hmt51->SetBinError(1,22.7709);
   hmt51->SetBinError(2,9.567899);
   hmt51->SetBinError(3,1.421178);
   hmt51->SetBinError(4,0.008374283);
   hmt51->SetEntries(17572);

   ci = TColor::GetColor("#00cc00");
   hmt51->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hmt51->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   hmt51->SetMarkerColor(ci);
   hmt51->SetMarkerStyle(22);
   hmt51->GetXaxis()->SetTitle("hmt");
   hmt51->GetXaxis()->SetLabelFont(42);
   hmt51->GetXaxis()->SetLabelSize(0.035);
   hmt51->GetXaxis()->SetTitleSize(0.035);
   hmt51->GetXaxis()->SetTitleFont(42);
   hmt51->GetYaxis()->SetTitle("Events/pb");
   hmt51->GetYaxis()->SetLabelFont(42);
   hmt51->GetYaxis()->SetLabelSize(0.035);
   hmt51->GetYaxis()->SetTitleSize(0.035);
   hmt51->GetYaxis()->SetTitleFont(42);
   hmt51->GetZaxis()->SetLabelFont(42);
   hmt51->GetZaxis()->SetLabelSize(0.035);
   hmt51->GetZaxis()->SetTitleSize(0.035);
   hmt51->GetZaxis()->SetTitleFont(42);
   hmt->Add(hmt,"");
   
   TH1D *hmt52 = new TH1D("hmt52"," Transverse mass",8,0,200);
   hmt52->SetBinContent(1,22.67863);
   hmt52->SetBinContent(2,21.53161);
   hmt52->SetBinContent(3,13.76314);
   hmt52->SetBinContent(4,3.248186);
   hmt52->SetBinContent(5,0.01285874);
   hmt52->SetBinContent(6,0.000741448);
   hmt52->SetBinContent(7,5.652627e-05);
   hmt52->SetBinError(1,0.1328747);
   hmt52->SetBinError(2,0.1295472);
   hmt52->SetBinError(3,0.1013403);
   hmt52->SetBinError(4,0.04710427);
   hmt52->SetBinError(5,0.001929586);
   hmt52->SetBinError(6,0.0002000181);
   hmt52->SetBinError(7,2.827185e-05);
   hmt52->SetEntries(277262);

   ci = TColor::GetColor("#00ffff");
   hmt52->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   hmt52->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   hmt52->SetMarkerColor(ci);
   hmt52->SetMarkerStyle(20);
   hmt52->GetXaxis()->SetTitle("hmt");
   hmt52->GetXaxis()->SetLabelFont(42);
   hmt52->GetXaxis()->SetLabelSize(0.035);
   hmt52->GetXaxis()->SetTitleSize(0.035);
   hmt52->GetXaxis()->SetTitleFont(42);
   hmt52->GetYaxis()->SetTitle("Events/pb");
   hmt52->GetYaxis()->SetLabelFont(42);
   hmt52->GetYaxis()->SetLabelSize(0.035);
   hmt52->GetYaxis()->SetTitleSize(0.035);
   hmt52->GetYaxis()->SetTitleFont(42);
   hmt52->GetZaxis()->SetLabelFont(42);
   hmt52->GetZaxis()->SetLabelSize(0.035);
   hmt52->GetZaxis()->SetTitleSize(0.035);
   hmt52->GetZaxis()->SetTitleFont(42);
   hmt->Add(hmt,"");
   
   TH1D *hmt53 = new TH1D("hmt53"," Transverse mass",8,0,200);
   hmt53->SetBinContent(1,0.7501114);
   hmt53->SetBinContent(2,0.5912004);
   hmt53->SetBinContent(3,0.1094151);
   hmt53->SetBinContent(4,0.01490389);
   hmt53->SetBinContent(5,0.001699795);
   hmt53->SetBinContent(6,0.0002516591);
   hmt53->SetBinContent(7,3.963843e-05);
   hmt53->SetBinContent(8,8.192112e-06);
   hmt53->SetBinContent(9,5.851509e-06);
   hmt53->SetBinError(1,0.007682425);
   hmt53->SetBinError(2,0.006752066);
   hmt53->SetBinError(3,0.0026455);
   hmt53->SetBinError(4,0.0008170719);
   hmt53->SetBinError(5,0.0001675414);
   hmt53->SetBinError(6,4.541824e-05);
   hmt53->SetBinError(7,7.870659e-06);
   hmt53->SetBinError(8,3.096327e-06);
   hmt53->SetBinError(9,2.616874e-06);
   hmt53->SetEntries(46443);

   ci = TColor::GetColor("#ffcc00");
   hmt53->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hmt53->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hmt53->SetMarkerColor(ci);
   hmt53->SetMarkerStyle(21);
   hmt53->GetXaxis()->SetTitle("hmt");
   hmt53->GetXaxis()->SetLabelFont(42);
   hmt53->GetXaxis()->SetLabelSize(0.035);
   hmt53->GetXaxis()->SetTitleSize(0.035);
   hmt53->GetXaxis()->SetTitleFont(42);
   hmt53->GetYaxis()->SetTitle("Events/pb");
   hmt53->GetYaxis()->SetLabelFont(42);
   hmt53->GetYaxis()->SetLabelSize(0.035);
   hmt53->GetYaxis()->SetTitleSize(0.035);
   hmt53->GetYaxis()->SetTitleFont(42);
   hmt53->GetZaxis()->SetLabelFont(42);
   hmt53->GetZaxis()->SetLabelSize(0.035);
   hmt53->GetZaxis()->SetTitleSize(0.035);
   hmt53->GetZaxis()->SetTitleFont(42);
   hmt->Add(hmt,"");
   
   TH1D *hmt54 = new TH1D("hmt54"," Transverse mass",8,0,200);
   hmt54->SetBinContent(1,0.0719248);
   hmt54->SetBinContent(2,0.0600016);
   hmt54->SetBinContent(3,0.02309059);
   hmt54->SetBinContent(4,0.006046434);
   hmt54->SetBinContent(5,0.001203117);
   hmt54->SetBinContent(6,0.0002622178);
   hmt54->SetBinContent(7,6.16983e-05);
   hmt54->SetBinError(1,0.001053285);
   hmt54->SetBinError(2,0.0009620287);
   hmt54->SetBinError(3,0.0005967936);
   hmt54->SetBinError(4,0.000305391);
   hmt54->SetBinError(5,0.0001362262);
   hmt54->SetBinError(6,6.359716e-05);
   hmt54->SetBinError(7,3.084915e-05);
   hmt54->SetEntries(10541);

   ci = TColor::GetColor("#ff0000");
   hmt54->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   hmt54->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hmt54->SetMarkerColor(ci);
   hmt54->SetMarkerStyle(20);
   hmt54->GetXaxis()->SetTitle("hmt");
   hmt54->GetXaxis()->SetLabelFont(42);
   hmt54->GetXaxis()->SetLabelSize(0.035);
   hmt54->GetXaxis()->SetTitleSize(0.035);
   hmt54->GetXaxis()->SetTitleFont(42);
   hmt54->GetYaxis()->SetTitle("Events/pb");
   hmt54->GetYaxis()->SetLabelFont(42);
   hmt54->GetYaxis()->SetLabelSize(0.035);
   hmt54->GetYaxis()->SetTitleSize(0.035);
   hmt54->GetYaxis()->SetTitleFont(42);
   hmt54->GetZaxis()->SetLabelFont(42);
   hmt54->GetZaxis()->SetLabelSize(0.035);
   hmt54->GetZaxis()->SetTitleSize(0.035);
   hmt54->GetZaxis()->SetTitleFont(42);
   hmt->Add(hmt,"");
   
   TH1D *hmt55 = new TH1D("hmt55"," Transverse mass",8,0,200);
   hmt55->SetBinContent(1,0.019757);
   hmt55->SetBinContent(2,0.0141385);
   hmt55->SetBinContent(3,0.007077635);
   hmt55->SetBinContent(4,0.001677165);
   hmt55->SetBinContent(5,0.0001341732);
   hmt55->SetBinError(1,0.0005756366);
   hmt55->SetBinError(2,0.0004869558);
   hmt55->SetBinError(3,0.0003445339);
   hmt55->SetBinError(4,0.0001677165);
   hmt55->SetBinError(5,4.743738e-05);
   hmt55->SetEntries(2551);

   ci = TColor::GetColor("#0000ff");
   hmt55->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   hmt55->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hmt55->SetMarkerColor(ci);
   hmt55->SetMarkerStyle(21);
   hmt55->GetXaxis()->SetTitle("hmt");
   hmt55->GetXaxis()->SetLabelFont(42);
   hmt55->GetXaxis()->SetLabelSize(0.035);
   hmt55->GetXaxis()->SetTitleSize(0.035);
   hmt55->GetXaxis()->SetTitleFont(42);
   hmt55->GetYaxis()->SetTitle("Events/pb");
   hmt55->GetYaxis()->SetLabelFont(42);
   hmt55->GetYaxis()->SetLabelSize(0.035);
   hmt55->GetYaxis()->SetTitleSize(0.035);
   hmt55->GetYaxis()->SetTitleFont(42);
   hmt55->GetZaxis()->SetLabelFont(42);
   hmt55->GetZaxis()->SetLabelSize(0.035);
   hmt55->GetZaxis()->SetTitleSize(0.035);
   hmt55->GetZaxis()->SetTitleFont(42);
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
