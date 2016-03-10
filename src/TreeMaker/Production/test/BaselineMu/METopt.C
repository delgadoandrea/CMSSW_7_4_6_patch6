void METopt()
{
//=========Macro generated from canvas: METopt/METopt
//=========  (Fri Nov 13 11:38:52 2015) by ROOT version6.02/05
   TCanvas *METopt = new TCanvas("METopt", "METopt",120,142,700,700);
   METopt->Range(-0.375,-6.799623,3.375,0.6767996);
   METopt->SetFillColor(0);
   METopt->SetBorderMode(0);
   METopt->SetBorderSize(2);
   METopt->SetLogy();
   METopt->SetFrameBorderMode(0);
   METopt->SetFrameBorderMode(0);
   
   THStack *METopt = new THStack();
   METopt->SetName("METopt");
   METopt->SetTitle("METopt");
   
   TH1F *METopt_stack_7 = new TH1F("METopt_stack_7","METopt",15,0,3);
   METopt_stack_7->SetMinimum(8.871959e-07);
   METopt_stack_7->SetMaximum(0.8494881);
   METopt_stack_7->SetDirectory(0);
   METopt_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   METopt_stack_7->SetLineColor(ci);
   METopt_stack_7->GetXaxis()->SetTitle("METopt");
   METopt_stack_7->GetXaxis()->SetLabelFont(42);
   METopt_stack_7->GetXaxis()->SetLabelSize(0.035);
   METopt_stack_7->GetXaxis()->SetTitleSize(0.035);
   METopt_stack_7->GetXaxis()->SetTitleFont(42);
   METopt_stack_7->GetYaxis()->SetTitle("Events/pb");
   METopt_stack_7->GetYaxis()->SetLabelFont(42);
   METopt_stack_7->GetYaxis()->SetLabelSize(0.035);
   METopt_stack_7->GetYaxis()->SetTitleSize(0.035);
   METopt_stack_7->GetYaxis()->SetTitleFont(42);
   METopt_stack_7->GetZaxis()->SetLabelFont(42);
   METopt_stack_7->GetZaxis()->SetLabelSize(0.035);
   METopt_stack_7->GetZaxis()->SetTitleSize(0.035);
   METopt_stack_7->GetZaxis()->SetTitleFont(42);
   METopt->SetHistogram(METopt_stack_7);
   
   
   TH1D *METopt31 = new TH1D("METopt31","MET/p_{T}^{lead jet}",15,0,3);
   METopt31->SetBinContent(1,0.00068069);
   METopt31->SetBinContent(2,0.0068069);
   METopt31->SetBinContent(3,0.02972114);
   METopt31->SetBinContent(4,0.00136138);
   METopt31->SetBinContent(5,0.00831877);
   METopt31->SetBinContent(6,0.00831877);
   METopt31->SetBinContent(7,0.00831877);
   METopt31->SetBinError(1,0.00068069);
   METopt31->SetBinError(2,0.002152531);
   METopt31->SetBinError(3,0.01452065);
   METopt31->SetBinError(4,0.000962641);
   METopt31->SetBinError(5,0.00831877);
   METopt31->SetBinError(6,0.00831877);
   METopt31->SetBinError(7,0.00831877);
   METopt31->SetEntries(26);

   ci = TColor::GetColor("#00cc00");
   METopt31->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METopt31->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METopt31->SetMarkerColor(ci);
   METopt31->SetMarkerStyle(22);
   METopt31->GetXaxis()->SetTitle("METopt");
   METopt31->GetXaxis()->SetLabelFont(42);
   METopt31->GetXaxis()->SetLabelSize(0.035);
   METopt31->GetXaxis()->SetTitleSize(0.035);
   METopt31->GetXaxis()->SetTitleFont(42);
   METopt31->GetYaxis()->SetTitle("Events/pb");
   METopt31->GetYaxis()->SetLabelFont(42);
   METopt31->GetYaxis()->SetLabelSize(0.035);
   METopt31->GetYaxis()->SetTitleSize(0.035);
   METopt31->GetYaxis()->SetTitleFont(42);
   METopt31->GetZaxis()->SetLabelFont(42);
   METopt31->GetZaxis()->SetLabelSize(0.035);
   METopt31->GetZaxis()->SetTitleSize(0.035);
   METopt31->GetZaxis()->SetTitleFont(42);
   METopt->Add(METopt,"");
   
   TH1D *METopt32 = new TH1D("METopt32","MET/p_{T}^{lead jet}",15,0,3);
   METopt32->SetBinContent(1,5.57157e-05);
   METopt32->SetBinContent(2,0.00466619);
   METopt32->SetBinContent(3,0.02284783);
   METopt32->SetBinContent(4,0.07441907);
   METopt32->SetBinContent(5,0.2899851);
   METopt32->SetBinContent(6,0.419577);
   METopt32->SetBinContent(7,0.2270129);
   METopt32->SetBinContent(8,0.1248838);
   METopt32->SetBinContent(9,0.08625556);
   METopt32->SetBinContent(10,0.04944619);
   METopt32->SetBinContent(11,0.03178286);
   METopt32->SetBinContent(12,0.02204382);
   METopt32->SetBinContent(13,0.009873829);
   METopt32->SetBinContent(14,0.01058361);
   METopt32->SetBinContent(15,0.00485316);
   METopt32->SetBinContent(16,0.004849918);
   METopt32->SetBinError(1,2.785785e-05);
   METopt32->SetBinError(2,0.0002549412);
   METopt32->SetBinError(3,0.000578681);
   METopt32->SetBinError(4,0.001503924);
   METopt32->SetBinError(5,0.005415307);
   METopt32->SetBinError(6,0.008638407);
   METopt32->SetBinError(7,0.007182542);
   METopt32->SetBinError(8,0.00510982);
   METopt32->SetBinError(9,0.0047039);
   METopt32->SetBinError(10,0.003248699);
   METopt32->SetBinError(11,0.002312143);
   METopt32->SetBinError(12,0.001858127);
   METopt32->SetBinError(13,0.001408354);
   METopt32->SetBinError(14,0.001943965);
   METopt32->SetBinError(15,0.001187908);
   METopt32->SetBinError(16,0.001187869);
   METopt32->SetEntries(30221);

   ci = TColor::GetColor("#00ffff");
   METopt32->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METopt32->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METopt32->SetMarkerColor(ci);
   METopt32->SetMarkerStyle(20);
   METopt32->GetXaxis()->SetTitle("METopt");
   METopt32->GetXaxis()->SetLabelFont(42);
   METopt32->GetXaxis()->SetLabelSize(0.035);
   METopt32->GetXaxis()->SetTitleSize(0.035);
   METopt32->GetXaxis()->SetTitleFont(42);
   METopt32->GetYaxis()->SetTitle("Events/pb");
   METopt32->GetYaxis()->SetLabelFont(42);
   METopt32->GetYaxis()->SetLabelSize(0.035);
   METopt32->GetYaxis()->SetTitleSize(0.035);
   METopt32->GetYaxis()->SetTitleFont(42);
   METopt32->GetZaxis()->SetLabelFont(42);
   METopt32->GetZaxis()->SetLabelSize(0.035);
   METopt32->GetZaxis()->SetTitleSize(0.035);
   METopt32->GetZaxis()->SetTitleFont(42);
   METopt->Add(METopt,"");
   
   TH1D *METopt33 = new TH1D("METopt33","MET/p_{T}^{lead jet}",15,0,3);
   METopt33->SetBinContent(1,3.510905e-06);
   METopt33->SetBinContent(2,0.0001369253);
   METopt33->SetBinContent(3,0.0007671865);
   METopt33->SetBinContent(4,0.002549653);
   METopt33->SetBinContent(5,0.008043497);
   METopt33->SetBinContent(6,0.01241665);
   METopt33->SetBinContent(7,0.007474649);
   METopt33->SetBinContent(8,0.004701453);
   METopt33->SetBinContent(9,0.003043937);
   METopt33->SetBinContent(10,0.001912015);
   METopt33->SetBinContent(11,0.001291726);
   METopt33->SetBinContent(12,0.0006502711);
   METopt33->SetBinContent(13,0.0003096451);
   METopt33->SetBinContent(14,0.0002573149);
   METopt33->SetBinContent(15,0.0001757922);
   METopt33->SetBinContent(16,0.0002682937);
   METopt33->SetBinError(1,2.027022e-06);
   METopt33->SetBinError(2,1.265875e-05);
   METopt33->SetBinError(3,3.085926e-05);
   METopt33->SetBinError(4,0.0001235771);
   METopt33->SetBinError(5,0.0003708024);
   METopt33->SetBinError(6,0.0005564217);
   METopt33->SetBinError(7,0.0004925372);
   METopt33->SetBinError(8,0.0003688967);
   METopt33->SetBinError(9,0.0003116909);
   METopt33->SetBinError(10,0.000228108);
   METopt33->SetBinError(11,0.0002280738);
   METopt33->SetBinError(12,0.0001270181);
   METopt33->SetBinError(13,0.0001179666);
   METopt33->SetBinError(14,8.030326e-05);
   METopt33->SetBinError(15,6.913311e-05);
   METopt33->SetBinError(16,8.474815e-05);
   METopt33->SetEntries(7352);

   ci = TColor::GetColor("#ffcc00");
   METopt33->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METopt33->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METopt33->SetMarkerColor(ci);
   METopt33->SetMarkerStyle(21);
   METopt33->GetXaxis()->SetTitle("METopt");
   METopt33->GetXaxis()->SetLabelFont(42);
   METopt33->GetXaxis()->SetLabelSize(0.035);
   METopt33->GetXaxis()->SetTitleSize(0.035);
   METopt33->GetXaxis()->SetTitleFont(42);
   METopt33->GetYaxis()->SetTitle("Events/pb");
   METopt33->GetYaxis()->SetLabelFont(42);
   METopt33->GetYaxis()->SetLabelSize(0.035);
   METopt33->GetYaxis()->SetTitleSize(0.035);
   METopt33->GetYaxis()->SetTitleFont(42);
   METopt33->GetZaxis()->SetLabelFont(42);
   METopt33->GetZaxis()->SetLabelSize(0.035);
   METopt33->GetZaxis()->SetTitleSize(0.035);
   METopt33->GetZaxis()->SetTitleFont(42);
   METopt->Add(METopt,"");
   
   TH1D *METopt34 = new TH1D("METopt34","MET/p_{T}^{lead jet}",15,0,3);
   METopt34->SetBinContent(2,4.627373e-05);
   METopt34->SetBinContent(3,0.0004164636);
   METopt34->SetBinContent(4,0.002082318);
   METopt34->SetBinContent(5,0.007959081);
   METopt34->SetBinContent(6,0.0091005);
   METopt34->SetBinContent(7,0.005876763);
   METopt34->SetBinContent(8,0.004133786);
   METopt34->SetBinContent(9,0.002976943);
   METopt34->SetBinContent(10,0.002313686);
   METopt34->SetBinContent(11,0.001233966);
   METopt34->SetBinContent(12,0.001033447);
   METopt34->SetBinContent(13,0.0006015585);
   METopt34->SetBinContent(14,0.0004318881);
   METopt34->SetBinContent(15,0.0002159441);
   METopt34->SetBinContent(16,0.0004164636);
   METopt34->SetBinError(2,2.671615e-05);
   METopt34->SetBinError(3,8.014845e-05);
   METopt34->SetBinError(4,0.0001792174);
   METopt34->SetBinError(5,0.000350379);
   METopt34->SetBinError(6,0.0003746616);
   METopt34->SetBinError(7,0.0003010757);
   METopt34->SetBinError(8,0.0002525112);
   METopt34->SetBinError(9,0.0002142851);
   METopt34->SetBinError(10,0.0001889117);
   METopt34->SetBinError(11,0.0001379616);
   METopt34->SetBinError(12,0.0001262556);
   METopt34->SetBinError(13,9.632645e-05);
   METopt34->SetBinError(14,8.161918e-05);
   METopt34->SetBinError(15,5.771348e-05);
   METopt34->SetBinError(16,8.014845e-05);
   METopt34->SetEntries(2518);

   ci = TColor::GetColor("#ff0000");
   METopt34->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METopt34->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METopt34->SetMarkerColor(ci);
   METopt34->SetMarkerStyle(20);
   METopt34->GetXaxis()->SetTitle("METopt");
   METopt34->GetXaxis()->SetLabelFont(42);
   METopt34->GetXaxis()->SetLabelSize(0.035);
   METopt34->GetXaxis()->SetTitleSize(0.035);
   METopt34->GetXaxis()->SetTitleFont(42);
   METopt34->GetYaxis()->SetTitle("Events/pb");
   METopt34->GetYaxis()->SetLabelFont(42);
   METopt34->GetYaxis()->SetLabelSize(0.035);
   METopt34->GetYaxis()->SetTitleSize(0.035);
   METopt34->GetYaxis()->SetTitleFont(42);
   METopt34->GetZaxis()->SetLabelFont(42);
   METopt34->GetZaxis()->SetLabelSize(0.035);
   METopt34->GetZaxis()->SetTitleSize(0.035);
   METopt34->GetZaxis()->SetTitleFont(42);
   METopt->Add(METopt,"");
   
   TH1D *METopt35 = new TH1D("METopt35","MET/p_{T}^{lead jet}",15,0,3);
   METopt35->SetBinContent(2,8.385824e-05);
   METopt35->SetBinContent(3,0.0001844881);
   METopt35->SetBinContent(4,0.0003186613);
   METopt35->SetBinContent(5,0.0002348031);
   METopt35->SetBinContent(6,0.0002348031);
   METopt35->SetBinContent(7,0.0003689762);
   METopt35->SetBinContent(8,0.0002683464);
   METopt35->SetBinContent(9,0.0001341732);
   METopt35->SetBinContent(10,0.0001174015);
   METopt35->SetBinContent(11,5.031494e-05);
   METopt35->SetBinContent(12,5.031494e-05);
   METopt35->SetBinContent(13,5.031494e-05);
   METopt35->SetBinContent(15,3.35433e-05);
   METopt35->SetBinContent(16,1.677165e-05);
   METopt35->SetBinError(2,3.750254e-05);
   METopt35->SetBinError(3,5.562526e-05);
   METopt35->SetBinError(4,7.310592e-05);
   METopt35->SetBinError(5,6.275376e-05);
   METopt35->SetBinError(6,6.275376e-05);
   METopt35->SetBinError(7,7.8666e-05);
   METopt35->SetBinError(8,6.708659e-05);
   METopt35->SetBinError(9,4.743738e-05);
   METopt35->SetBinError(10,4.437361e-05);
   METopt35->SetBinError(11,2.904935e-05);
   METopt35->SetBinError(12,2.904935e-05);
   METopt35->SetBinError(13,2.904935e-05);
   METopt35->SetBinError(15,2.371869e-05);
   METopt35->SetBinError(16,1.677165e-05);
   METopt35->SetEntries(128);

   ci = TColor::GetColor("#0000ff");
   METopt35->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METopt35->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METopt35->SetMarkerColor(ci);
   METopt35->SetMarkerStyle(21);
   METopt35->GetXaxis()->SetTitle("METopt");
   METopt35->GetXaxis()->SetLabelFont(42);
   METopt35->GetXaxis()->SetLabelSize(0.035);
   METopt35->GetXaxis()->SetTitleSize(0.035);
   METopt35->GetXaxis()->SetTitleFont(42);
   METopt35->GetYaxis()->SetTitle("Events/pb");
   METopt35->GetYaxis()->SetLabelFont(42);
   METopt35->GetYaxis()->SetLabelSize(0.035);
   METopt35->GetYaxis()->SetTitleSize(0.035);
   METopt35->GetYaxis()->SetTitleFont(42);
   METopt35->GetZaxis()->SetLabelFont(42);
   METopt35->GetZaxis()->SetLabelSize(0.035);
   METopt35->GetZaxis()->SetTitleSize(0.035);
   METopt35->GetZaxis()->SetTitleFont(42);
   METopt->Add(METopt,"");
   METopt->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.398046,0.9342857,0.601954,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("METopt");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METopt","METopt_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METopt","METopt_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METopt","METopt_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METopt","METopt_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METopt","METopt_ttbar","lp");

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
   METopt->Modified();
   METopt->cd();
   METopt->SetSelected(METopt);
}
