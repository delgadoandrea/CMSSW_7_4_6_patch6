void phimu2phimet()
{
//=========Macro generated from canvas: phimu2phimet/phimu2phimet
//=========  (Mon Nov 23 12:45:24 2015) by ROOT version6.02/05
   TCanvas *phimu2phimet = new TCanvas("phimu2phimet", "phimu2phimet",400,422,700,700);
   phimu2phimet->Range(-3.926991,-5.45737,3.926991,-2.439123);
   phimu2phimet->SetFillColor(0);
   phimu2phimet->SetBorderMode(0);
   phimu2phimet->SetBorderSize(2);
   phimu2phimet->SetLogy();
   phimu2phimet->SetFrameBorderMode(0);
   phimu2phimet->SetFrameBorderMode(0);
   
   THStack *phimu2phimet = new THStack();
   phimu2phimet->SetName("phimu2phimet");
   phimu2phimet->SetTitle("phimu2phimet");
   
   TH1F *phimu2phimet_stack_22 = new TH1F("phimu2phimet_stack_22","phimu2phimet",20,-3.141593,3.141593);
   phimu2phimet_stack_22->SetMinimum(6.989642e-06);
   phimu2phimet_stack_22->SetMaximum(0.001815735);
   phimu2phimet_stack_22->SetDirectory(0);
   phimu2phimet_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   phimu2phimet_stack_22->SetLineColor(ci);
   phimu2phimet_stack_22->GetXaxis()->SetTitle("phimu2phimet");
   phimu2phimet_stack_22->GetXaxis()->SetLabelFont(42);
   phimu2phimet_stack_22->GetXaxis()->SetLabelSize(0.035);
   phimu2phimet_stack_22->GetXaxis()->SetTitleSize(0.035);
   phimu2phimet_stack_22->GetXaxis()->SetTitleFont(42);
   phimu2phimet_stack_22->GetYaxis()->SetTitle("Events/pb");
   phimu2phimet_stack_22->GetYaxis()->SetLabelFont(42);
   phimu2phimet_stack_22->GetYaxis()->SetLabelSize(0.035);
   phimu2phimet_stack_22->GetYaxis()->SetTitleSize(0.035);
   phimu2phimet_stack_22->GetYaxis()->SetTitleFont(42);
   phimu2phimet_stack_22->GetZaxis()->SetLabelFont(42);
   phimu2phimet_stack_22->GetZaxis()->SetLabelSize(0.035);
   phimu2phimet_stack_22->GetZaxis()->SetTitleSize(0.035);
   phimu2phimet_stack_22->GetZaxis()->SetTitleFont(42);
   phimu2phimet->SetHistogram(phimu2phimet_stack_22);
   
   
   TH1D *phimu2phimet106 = new TH1D("phimu2phimet106"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);
   phimu2phimet106->SetBinContent(14,0.00068069);
   phimu2phimet106->SetBinError(14,0.00068069);
   phimu2phimet106->SetEntries(1);

   ci = TColor::GetColor("#00cc00");
   phimu2phimet106->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimu2phimet106->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimu2phimet106->SetMarkerColor(ci);
   phimu2phimet106->SetMarkerStyle(22);
   phimu2phimet106->GetXaxis()->SetTitle("phimu2phimet");
   phimu2phimet106->GetXaxis()->SetLabelFont(42);
   phimu2phimet106->GetXaxis()->SetLabelSize(0.035);
   phimu2phimet106->GetXaxis()->SetTitleSize(0.035);
   phimu2phimet106->GetXaxis()->SetTitleFont(42);
   phimu2phimet106->GetYaxis()->SetTitle("Events/pb");
   phimu2phimet106->GetYaxis()->SetLabelFont(42);
   phimu2phimet106->GetYaxis()->SetLabelSize(0.035);
   phimu2phimet106->GetYaxis()->SetTitleSize(0.035);
   phimu2phimet106->GetYaxis()->SetTitleFont(42);
   phimu2phimet106->GetZaxis()->SetLabelFont(42);
   phimu2phimet106->GetZaxis()->SetLabelSize(0.035);
   phimu2phimet106->GetZaxis()->SetTitleSize(0.035);
   phimu2phimet106->GetZaxis()->SetTitleFont(42);
   phimu2phimet->Add(phimu2phimet,"");
   
   TH1D *phimu2phimet107 = new TH1D("phimu2phimet107"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);
   phimu2phimet107->SetBinContent(1,0.0003596931);
   phimu2phimet107->SetBinContent(2,0.0003449536);
   phimu2phimet107->SetBinContent(3,0.0009046371);
   phimu2phimet107->SetBinContent(4,0.000403101);
   phimu2phimet107->SetBinContent(5,0.0004170299);
   phimu2phimet107->SetBinContent(6,0.001133235);
   phimu2phimet107->SetBinContent(7,0.0003489454);
   phimu2phimet107->SetBinContent(8,0.0005325752);
   phimu2phimet107->SetBinContent(9,0.0005039068);
   phimu2phimet107->SetBinContent(10,0.000889087);
   phimu2phimet107->SetBinContent(11,0.0005588119);
   phimu2phimet107->SetBinContent(12,0.0002768081);
   phimu2phimet107->SetBinContent(13,0.0001752528);
   phimu2phimet107->SetBinContent(14,0.000344143);
   phimu2phimet107->SetBinContent(15,0.0004628695);
   phimu2phimet107->SetBinContent(16,0.0006743571);
   phimu2phimet107->SetBinContent(17,0.000560433);
   phimu2phimet107->SetBinContent(18,0.0005170251);
   phimu2phimet107->SetBinContent(19,0.001061969);
   phimu2phimet107->SetBinContent(20,0.001302125);
   phimu2phimet107->SetBinError(1,0.0001860274);
   phimu2phimet107->SetBinError(2,0.0001854425);
   phimu2phimet107->SetBinError(3,0.0003182471);
   phimu2phimet107->SetBinError(4,0.0001877091);
   phimu2phimet107->SetBinError(5,0.0001882252);
   phimu2phimet107->SetBinError(6,0.0003453453);
   phimu2phimet107->SetBinError(7,0.0001406765);
   phimu2phimet107->SetBinError(8,0.0002276231);
   phimu2phimet107->SetBinError(9,0.0002267179);
   phimu2phimet107->SetBinError(10,0.000317869);
   phimu2phimet107->SetBinError(11,0.0002283721);
   phimu2phimet107->SetBinError(12,6.352046e-05);
   phimu2phimet107->SetBinError(13,5.060194e-05);
   phimu2phimet107->SetBinError(14,0.0001853799);
   phimu2phimet107->SetBinError(15,0.0001900709);
   phimu2phimet107->SetBinError(16,0.0002617964);
   phimu2phimet107->SetBinError(17,0.0002284738);
   phimu2phimet107->SetBinError(18,0.0002270942);
   phimu2phimet107->SetBinError(19,0.0003438703);
   phimu2phimet107->SetBinError(20,0.0003886753);
   phimu2phimet107->SetEntries(283);

   ci = TColor::GetColor("#00ffff");
   phimu2phimet107->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimu2phimet107->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimu2phimet107->SetMarkerColor(ci);
   phimu2phimet107->SetMarkerStyle(20);
   phimu2phimet107->GetXaxis()->SetTitle("phimu2phimet");
   phimu2phimet107->GetXaxis()->SetLabelFont(42);
   phimu2phimet107->GetXaxis()->SetLabelSize(0.035);
   phimu2phimet107->GetXaxis()->SetTitleSize(0.035);
   phimu2phimet107->GetXaxis()->SetTitleFont(42);
   phimu2phimet107->GetYaxis()->SetTitle("Events/pb");
   phimu2phimet107->GetYaxis()->SetLabelFont(42);
   phimu2phimet107->GetYaxis()->SetLabelSize(0.035);
   phimu2phimet107->GetYaxis()->SetTitleSize(0.035);
   phimu2phimet107->GetYaxis()->SetTitleFont(42);
   phimu2phimet107->GetZaxis()->SetLabelFont(42);
   phimu2phimet107->GetZaxis()->SetLabelSize(0.035);
   phimu2phimet107->GetZaxis()->SetTitleSize(0.035);
   phimu2phimet107->GetZaxis()->SetTitleFont(42);
   phimu2phimet->Add(phimu2phimet,"");
   
   TH1D *phimu2phimet108 = new TH1D("phimu2phimet108"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);
   phimu2phimet108->SetBinContent(1,0.0001097523);
   phimu2phimet108->SetBinContent(2,0.0001368116);
   phimu2phimet108->SetBinContent(3,0.0001551568);
   phimu2phimet108->SetBinContent(4,0.0002063927);
   phimu2phimet108->SetBinContent(5,6.273135e-05);
   phimu2phimet108->SetBinContent(6,6.499604e-05);
   phimu2phimet108->SetBinContent(7,0.0001800071);
   phimu2phimet108->SetBinContent(8,9.096098e-05);
   phimu2phimet108->SetBinContent(9,9.549035e-05);
   phimu2phimet108->SetBinContent(10,0.0001551568);
   phimu2phimet108->SetBinContent(11,0.0001626247);
   phimu2phimet108->SetBinContent(12,0.0001622546);
   phimu2phimet108->SetBinContent(13,0.0001844809);
   phimu2phimet108->SetBinContent(14,0.0001202091);
   phimu2phimet108->SetBinContent(15,7.253981e-05);
   phimu2phimet108->SetBinContent(16,0.000232748);
   phimu2phimet108->SetBinContent(17,0.0002159936);
   phimu2phimet108->SetBinContent(18,0.0001075635);
   phimu2phimet108->SetBinContent(19,8.217098e-05);
   phimu2phimet108->SetBinContent(20,0.0001178685);
   phimu2phimet108->SetBinError(1,4.953956e-05);
   phimu2phimet108->SetBinError(2,5.690113e-05);
   phimu2phimet108->SetBinError(3,5.742913e-05);
   phimu2phimet108->SetBinError(4,0.0001037138);
   phimu2phimet108->SetBinError(5,2.979181e-05);
   phimu2phimet108->SetBinError(6,2.996634e-05);
   phimu2phimet108->SetBinError(7,0.0001033016);
   phimu2phimet108->SetBinError(8,4.089612e-05);
   phimu2phimet108->SetBinError(9,4.115036e-05);
   phimu2phimet108->SetBinError(10,5.742913e-05);
   phimu2phimet108->SetBinError(11,6.346362e-05);
   phimu2phimet108->SetBinError(12,5.743372e-05);
   phimu2phimet108->SetBinError(13,6.396957e-05);
   phimu2phimet108->SetBinError(14,4.974117e-05);
   phimu2phimet108->SetBinError(15,4.024696e-05);
   phimu2phimet108->SetBinError(16,7.518245e-05);
   phimu2phimet108->SetBinError(17,7.003018e-05);
   phimu2phimet108->SetBinError(18,4.935633e-05);
   phimu2phimet108->SetBinError(19,3.093505e-05);
   phimu2phimet108->SetBinError(20,4.971363e-05);
   phimu2phimet108->SetEntries(383);

   ci = TColor::GetColor("#ffcc00");
   phimu2phimet108->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimu2phimet108->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimu2phimet108->SetMarkerColor(ci);
   phimu2phimet108->SetMarkerStyle(21);
   phimu2phimet108->GetXaxis()->SetTitle("phimu2phimet");
   phimu2phimet108->GetXaxis()->SetLabelFont(42);
   phimu2phimet108->GetXaxis()->SetLabelSize(0.035);
   phimu2phimet108->GetXaxis()->SetTitleSize(0.035);
   phimu2phimet108->GetXaxis()->SetTitleFont(42);
   phimu2phimet108->GetYaxis()->SetTitle("Events/pb");
   phimu2phimet108->GetYaxis()->SetLabelFont(42);
   phimu2phimet108->GetYaxis()->SetLabelSize(0.035);
   phimu2phimet108->GetYaxis()->SetTitleSize(0.035);
   phimu2phimet108->GetYaxis()->SetTitleFont(42);
   phimu2phimet108->GetZaxis()->SetLabelFont(42);
   phimu2phimet108->GetZaxis()->SetLabelSize(0.035);
   phimu2phimet108->GetZaxis()->SetTitleSize(0.035);
   phimu2phimet108->GetZaxis()->SetTitleFont(42);
   phimu2phimet->Add(phimu2phimet,"");
   
   TH1D *phimu2phimet109 = new TH1D("phimu2phimet109"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);
   phimu2phimet109->SetBinContent(1,6.16983e-05);
   phimu2phimet109->SetBinContent(4,4.627373e-05);
   phimu2phimet109->SetBinContent(5,4.627373e-05);
   phimu2phimet109->SetBinContent(6,4.627373e-05);
   phimu2phimet109->SetBinContent(7,1.542458e-05);
   phimu2phimet109->SetBinContent(8,4.627373e-05);
   phimu2phimet109->SetBinContent(10,3.084915e-05);
   phimu2phimet109->SetBinContent(11,3.084915e-05);
   phimu2phimet109->SetBinContent(12,1.542458e-05);
   phimu2phimet109->SetBinContent(13,3.084915e-05);
   phimu2phimet109->SetBinContent(14,4.627373e-05);
   phimu2phimet109->SetBinContent(15,4.627373e-05);
   phimu2phimet109->SetBinContent(17,3.084915e-05);
   phimu2phimet109->SetBinContent(18,3.084915e-05);
   phimu2phimet109->SetBinContent(19,1.542458e-05);
   phimu2phimet109->SetBinContent(20,1.542458e-05);
   phimu2phimet109->SetBinError(1,3.084915e-05);
   phimu2phimet109->SetBinError(4,2.671615e-05);
   phimu2phimet109->SetBinError(5,2.671615e-05);
   phimu2phimet109->SetBinError(6,2.671615e-05);
   phimu2phimet109->SetBinError(7,1.542458e-05);
   phimu2phimet109->SetBinError(8,2.671615e-05);
   phimu2phimet109->SetBinError(10,2.181364e-05);
   phimu2phimet109->SetBinError(11,2.181364e-05);
   phimu2phimet109->SetBinError(12,1.542458e-05);
   phimu2phimet109->SetBinError(13,2.181364e-05);
   phimu2phimet109->SetBinError(14,2.671615e-05);
   phimu2phimet109->SetBinError(15,2.671615e-05);
   phimu2phimet109->SetBinError(17,2.181364e-05);
   phimu2phimet109->SetBinError(18,2.181364e-05);
   phimu2phimet109->SetBinError(19,1.542458e-05);
   phimu2phimet109->SetBinError(20,1.542458e-05);
   phimu2phimet109->SetEntries(36);

   ci = TColor::GetColor("#ff0000");
   phimu2phimet109->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimu2phimet109->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimu2phimet109->SetMarkerColor(ci);
   phimu2phimet109->SetMarkerStyle(20);
   phimu2phimet109->GetXaxis()->SetTitle("phimu2phimet");
   phimu2phimet109->GetXaxis()->SetLabelFont(42);
   phimu2phimet109->GetXaxis()->SetLabelSize(0.035);
   phimu2phimet109->GetXaxis()->SetTitleSize(0.035);
   phimu2phimet109->GetXaxis()->SetTitleFont(42);
   phimu2phimet109->GetYaxis()->SetTitle("Events/pb");
   phimu2phimet109->GetYaxis()->SetLabelFont(42);
   phimu2phimet109->GetYaxis()->SetLabelSize(0.035);
   phimu2phimet109->GetYaxis()->SetTitleSize(0.035);
   phimu2phimet109->GetYaxis()->SetTitleFont(42);
   phimu2phimet109->GetZaxis()->SetLabelFont(42);
   phimu2phimet109->GetZaxis()->SetLabelSize(0.035);
   phimu2phimet109->GetZaxis()->SetTitleSize(0.035);
   phimu2phimet109->GetZaxis()->SetTitleFont(42);
   phimu2phimet->Add(phimu2phimet,"");
   
   TH1D *phimu2phimet110 = new TH1D("phimu2phimet110"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);

   ci = TColor::GetColor("#0000ff");
   phimu2phimet110->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimu2phimet110->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimu2phimet110->SetMarkerColor(ci);
   phimu2phimet110->SetMarkerStyle(21);
   phimu2phimet110->GetXaxis()->SetTitle("phimu2phimet");
   phimu2phimet110->GetXaxis()->SetLabelFont(42);
   phimu2phimet110->GetXaxis()->SetLabelSize(0.035);
   phimu2phimet110->GetXaxis()->SetTitleSize(0.035);
   phimu2phimet110->GetXaxis()->SetTitleFont(42);
   phimu2phimet110->GetYaxis()->SetTitle("Events/pb");
   phimu2phimet110->GetYaxis()->SetLabelFont(42);
   phimu2phimet110->GetYaxis()->SetLabelSize(0.035);
   phimu2phimet110->GetYaxis()->SetTitleSize(0.035);
   phimu2phimet110->GetYaxis()->SetTitleFont(42);
   phimu2phimet110->GetZaxis()->SetLabelFont(42);
   phimu2phimet110->GetZaxis()->SetLabelSize(0.035);
   phimu2phimet110->GetZaxis()->SetTitleSize(0.035);
   phimu2phimet110->GetZaxis()->SetTitleFont(42);
   phimu2phimet->Add(phimu2phimet,"");
   phimu2phimet->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3183046,0.9342857,0.6816954,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("phimu2phimet");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimu2phimet","phimu2phimet_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimu2phimet","phimu2phimet_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimu2phimet","phimu2phimet_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimu2phimet","phimu2phimet_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimu2phimet","phimu2phimet_ttbar","lp");

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
   phimu2phimet->Modified();
   phimu2phimet->cd();
   phimu2phimet->SetSelected(phimu2phimet);
}
