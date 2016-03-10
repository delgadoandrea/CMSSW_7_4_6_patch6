void deltaeta()
{
//=========Macro generated from canvas: deltaeta/deltaeta
//=========  (Fri Nov 13 11:38:54 2015) by ROOT version6.02/05
   TCanvas *deltaeta = new TCanvas("deltaeta", "deltaeta",180,202,700,700);
   deltaeta->Range(-1.25,-6.794506,11.25,0.5807329);
   deltaeta->SetFillColor(0);
   deltaeta->SetBorderMode(0);
   deltaeta->SetBorderSize(2);
   deltaeta->SetLogy();
   deltaeta->SetFrameBorderMode(0);
   deltaeta->SetFrameBorderMode(0);
   
   THStack *deltaeta = new THStack();
   deltaeta->SetName("deltaeta");
   deltaeta->SetTitle("deltaeta");
   
   TH1F *deltaeta_stack_10 = new TH1F("deltaeta_stack_10","deltaeta",10,0,10);
   deltaeta_stack_10->SetMinimum(8.77037e-07);
   deltaeta_stack_10->SetMaximum(0.6969618);
   deltaeta_stack_10->SetDirectory(0);
   deltaeta_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   deltaeta_stack_10->SetLineColor(ci);
   deltaeta_stack_10->GetXaxis()->SetTitle("deltaeta");
   deltaeta_stack_10->GetXaxis()->SetLabelFont(42);
   deltaeta_stack_10->GetXaxis()->SetLabelSize(0.035);
   deltaeta_stack_10->GetXaxis()->SetTitleSize(0.035);
   deltaeta_stack_10->GetXaxis()->SetTitleFont(42);
   deltaeta_stack_10->GetYaxis()->SetTitle("Events/pb");
   deltaeta_stack_10->GetYaxis()->SetLabelFont(42);
   deltaeta_stack_10->GetYaxis()->SetLabelSize(0.035);
   deltaeta_stack_10->GetYaxis()->SetTitleSize(0.035);
   deltaeta_stack_10->GetYaxis()->SetTitleFont(42);
   deltaeta_stack_10->GetZaxis()->SetLabelFont(42);
   deltaeta_stack_10->GetZaxis()->SetLabelSize(0.035);
   deltaeta_stack_10->GetZaxis()->SetTitleSize(0.035);
   deltaeta_stack_10->GetZaxis()->SetTitleFont(42);
   deltaeta->SetHistogram(deltaeta_stack_10);
   
   
   TH1D *deltaeta46 = new TH1D("deltaeta46","#Delta_{#eta}",10,0,10);
   deltaeta46->SetBinContent(1,0.0130836);
   deltaeta46->SetBinContent(2,0.00408414);
   deltaeta46->SetBinContent(3,0.00968015);
   deltaeta46->SetBinContent(4,0.01731823);
   deltaeta46->SetBinContent(5,0.01036084);
   deltaeta46->SetBinContent(7,0.00899946);
   deltaeta46->SetBinError(1,0.008511481);
   deltaeta46->SetBinError(2,0.001667343);
   deltaeta46->SetBinError(3,0.008374283);
   deltaeta46->SetBinError(4,0.01178419);
   deltaeta46->SetBinError(5,0.008401902);
   deltaeta46->SetBinError(7,0.008346573);
   deltaeta46->SetEntries(26);

   ci = TColor::GetColor("#00cc00");
   deltaeta46->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   deltaeta46->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   deltaeta46->SetMarkerColor(ci);
   deltaeta46->SetMarkerStyle(22);
   deltaeta46->GetXaxis()->SetTitle("deltaeta");
   deltaeta46->GetXaxis()->SetLabelFont(42);
   deltaeta46->GetXaxis()->SetLabelSize(0.035);
   deltaeta46->GetXaxis()->SetTitleSize(0.035);
   deltaeta46->GetXaxis()->SetTitleFont(42);
   deltaeta46->GetYaxis()->SetTitle("Events/pb");
   deltaeta46->GetYaxis()->SetLabelFont(42);
   deltaeta46->GetYaxis()->SetLabelSize(0.035);
   deltaeta46->GetYaxis()->SetTitleSize(0.035);
   deltaeta46->GetYaxis()->SetTitleFont(42);
   deltaeta46->GetZaxis()->SetLabelFont(42);
   deltaeta46->GetZaxis()->SetLabelSize(0.035);
   deltaeta46->GetZaxis()->SetTitleSize(0.035);
   deltaeta46->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   
   TH1D *deltaeta47 = new TH1D("deltaeta47","#Delta_{#eta}",10,0,10);
   deltaeta47->SetBinContent(1,0.1162961);
   deltaeta47->SetBinContent(2,0.1622044);
   deltaeta47->SetBinContent(3,0.2588836);
   deltaeta47->SetBinContent(4,0.3467523);
   deltaeta47->SetBinContent(5,0.2892359);
   deltaeta47->SetBinContent(6,0.1477108);
   deltaeta47->SetBinContent(7,0.04997848);
   deltaeta47->SetBinContent(8,0.01100903);
   deltaeta47->SetBinContent(9,0.001051971);
   deltaeta47->SetBinContent(10,1.392893e-05);
   deltaeta47->SetBinError(1,0.004006151);
   deltaeta47->SetBinError(2,0.004984063);
   deltaeta47->SetBinError(3,0.006497042);
   deltaeta47->SetBinError(4,0.008214369);
   deltaeta47->SetBinError(5,0.007147185);
   deltaeta47->SetBinError(6,0.004749045);
   deltaeta47->SetBinError(7,0.002864131);
   deltaeta47->SetBinError(8,0.001366666);
   deltaeta47->SetBinError(9,0.0002978901);
   deltaeta47->SetBinError(10,1.392893e-05);
   deltaeta47->SetEntries(30221);

   ci = TColor::GetColor("#00ffff");
   deltaeta47->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   deltaeta47->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   deltaeta47->SetMarkerColor(ci);
   deltaeta47->SetMarkerStyle(20);
   deltaeta47->GetXaxis()->SetTitle("deltaeta");
   deltaeta47->GetXaxis()->SetLabelFont(42);
   deltaeta47->GetXaxis()->SetLabelSize(0.035);
   deltaeta47->GetXaxis()->SetTitleSize(0.035);
   deltaeta47->GetXaxis()->SetTitleFont(42);
   deltaeta47->GetYaxis()->SetTitle("Events/pb");
   deltaeta47->GetYaxis()->SetLabelFont(42);
   deltaeta47->GetYaxis()->SetLabelSize(0.035);
   deltaeta47->GetYaxis()->SetTitleSize(0.035);
   deltaeta47->GetYaxis()->SetTitleFont(42);
   deltaeta47->GetZaxis()->SetLabelFont(42);
   deltaeta47->GetZaxis()->SetLabelSize(0.035);
   deltaeta47->GetZaxis()->SetTitleSize(0.035);
   deltaeta47->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   
   TH1D *deltaeta48 = new TH1D("deltaeta48","#Delta_{#eta}",10,0,10);
   deltaeta48->SetBinContent(1,0.003588853);
   deltaeta48->SetBinContent(2,0.004665777);
   deltaeta48->SetBinContent(3,0.008996388);
   deltaeta48->SetBinContent(4,0.01058045);
   deltaeta48->SetBinContent(5,0.009001937);
   deltaeta48->SetBinContent(6,0.004770819);
   deltaeta48->SetBinContent(7,0.001995309);
   deltaeta48->SetBinContent(8,0.0003540765);
   deltaeta48->SetBinContent(9,4.548049e-05);
   deltaeta48->SetBinContent(10,3.434989e-06);
   deltaeta48->SetBinError(1,0.0002689097);
   deltaeta48->SetBinError(2,0.0002781942);
   deltaeta48->SetBinError(3,0.000473779);
   deltaeta48->SetBinError(4,0.000540378);
   deltaeta48->SetBinError(5,0.0004931538);
   deltaeta48->SetBinError(6,0.0003362004);
   deltaeta48->SetBinError(7,0.0002515184);
   deltaeta48->SetBinError(8,7.284902e-05);
   deltaeta48->SetBinError(9,2.891793e-05);
   deltaeta48->SetBinError(10,3.434989e-06);
   deltaeta48->SetEntries(7352);

   ci = TColor::GetColor("#ffcc00");
   deltaeta48->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   deltaeta48->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   deltaeta48->SetMarkerColor(ci);
   deltaeta48->SetMarkerStyle(21);
   deltaeta48->GetXaxis()->SetTitle("deltaeta");
   deltaeta48->GetXaxis()->SetLabelFont(42);
   deltaeta48->GetXaxis()->SetLabelSize(0.035);
   deltaeta48->GetXaxis()->SetTitleSize(0.035);
   deltaeta48->GetXaxis()->SetTitleFont(42);
   deltaeta48->GetYaxis()->SetTitle("Events/pb");
   deltaeta48->GetYaxis()->SetLabelFont(42);
   deltaeta48->GetYaxis()->SetLabelSize(0.035);
   deltaeta48->GetYaxis()->SetTitleSize(0.035);
   deltaeta48->GetYaxis()->SetTitleFont(42);
   deltaeta48->GetZaxis()->SetLabelFont(42);
   deltaeta48->GetZaxis()->SetLabelSize(0.035);
   deltaeta48->GetZaxis()->SetTitleSize(0.035);
   deltaeta48->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   
   TH1D *deltaeta49 = new TH1D("deltaeta49","#Delta_{#eta}",10,0,10);
   deltaeta49->SetBinContent(1,0.001511608);
   deltaeta49->SetBinContent(2,0.002406234);
   deltaeta49->SetBinContent(3,0.004997563);
   deltaeta49->SetBinContent(4,0.008468092);
   deltaeta49->SetBinContent(5,0.009316444);
   deltaeta49->SetBinContent(6,0.00691021);
   deltaeta49->SetBinContent(7,0.003732747);
   deltaeta49->SetBinContent(8,0.001156843);
   deltaeta49->SetBinContent(9,0.0003084915);
   deltaeta49->SetBinContent(10,3.084915e-05);
   deltaeta49->SetBinError(1,0.0001526955);
   deltaeta49->SetBinError(2,0.0001926529);
   deltaeta49->SetBinError(3,0.0002776424);
   deltaeta49->SetBinError(4,0.0003614094);
   deltaeta49->SetBinError(5,0.0003790807);
   deltaeta49->SetBinError(6,0.0003264767);
   deltaeta49->SetBinError(7,0.0002399501);
   deltaeta49->SetBinError(8,0.0001335807);
   deltaeta49->SetBinError(9,6.89808e-05);
   deltaeta49->SetBinError(10,2.181364e-05);
   deltaeta49->SetEntries(2518);

   ci = TColor::GetColor("#ff0000");
   deltaeta49->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   deltaeta49->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   deltaeta49->SetMarkerColor(ci);
   deltaeta49->SetMarkerStyle(20);
   deltaeta49->GetXaxis()->SetTitle("deltaeta");
   deltaeta49->GetXaxis()->SetLabelFont(42);
   deltaeta49->GetXaxis()->SetLabelSize(0.035);
   deltaeta49->GetXaxis()->SetTitleSize(0.035);
   deltaeta49->GetXaxis()->SetTitleFont(42);
   deltaeta49->GetYaxis()->SetTitle("Events/pb");
   deltaeta49->GetYaxis()->SetLabelFont(42);
   deltaeta49->GetYaxis()->SetLabelSize(0.035);
   deltaeta49->GetYaxis()->SetTitleSize(0.035);
   deltaeta49->GetYaxis()->SetTitleFont(42);
   deltaeta49->GetZaxis()->SetLabelFont(42);
   deltaeta49->GetZaxis()->SetLabelSize(0.035);
   deltaeta49->GetZaxis()->SetTitleSize(0.035);
   deltaeta49->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   
   TH1D *deltaeta50 = new TH1D("deltaeta50","#Delta_{#eta}",10,0,10);
   deltaeta50->SetBinContent(1,0.0003522046);
   deltaeta50->SetBinContent(2,0.0002515747);
   deltaeta50->SetBinContent(3,0.0003186613);
   deltaeta50->SetBinContent(4,0.0004192912);
   deltaeta50->SetBinContent(5,0.0003522046);
   deltaeta50->SetBinContent(6,0.000335433);
   deltaeta50->SetBinContent(7,0.0001006299);
   deltaeta50->SetBinContent(8,1.677165e-05);
   deltaeta50->SetBinError(1,7.685734e-05);
   deltaeta50->SetBinError(2,6.495631e-05);
   deltaeta50->SetBinError(3,7.310592e-05);
   deltaeta50->SetBinError(4,8.385824e-05);
   deltaeta50->SetBinError(5,7.685734e-05);
   deltaeta50->SetBinError(6,7.500509e-05);
   deltaeta50->SetBinError(7,4.108198e-05);
   deltaeta50->SetBinError(8,1.677165e-05);
   deltaeta50->SetEntries(128);

   ci = TColor::GetColor("#0000ff");
   deltaeta50->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   deltaeta50->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   deltaeta50->SetMarkerColor(ci);
   deltaeta50->SetMarkerStyle(21);
   deltaeta50->GetXaxis()->SetTitle("deltaeta");
   deltaeta50->GetXaxis()->SetLabelFont(42);
   deltaeta50->GetXaxis()->SetLabelSize(0.035);
   deltaeta50->GetXaxis()->SetTitleSize(0.035);
   deltaeta50->GetXaxis()->SetTitleFont(42);
   deltaeta50->GetYaxis()->SetTitle("Events/pb");
   deltaeta50->GetYaxis()->SetLabelFont(42);
   deltaeta50->GetYaxis()->SetLabelSize(0.035);
   deltaeta50->GetYaxis()->SetTitleSize(0.035);
   deltaeta50->GetYaxis()->SetTitleFont(42);
   deltaeta50->GetZaxis()->SetLabelFont(42);
   deltaeta50->GetZaxis()->SetLabelSize(0.035);
   deltaeta50->GetZaxis()->SetTitleSize(0.035);
   deltaeta50->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   deltaeta->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3951724,0.94,0.6048276,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("deltaeta");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("deltaeta","deltaeta_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaeta","deltaeta_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaeta","deltaeta_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaeta","deltaeta_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaeta","deltaeta_ttbar","lp");

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
   deltaeta->Modified();
   deltaeta->cd();
   deltaeta->SetSelected(deltaeta);
}
