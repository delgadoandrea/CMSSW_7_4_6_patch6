void mupt()
{
//=========Macro generated from canvas: mupt/mupt
//=========  (Fri Nov  6 09:03:01 2015) by ROOT version6.02/05
   TCanvas *mupt = new TCanvas("mupt", "mupt",20,43,700,700);
   mupt->Range(-1.875,-5.897223,16.875,0.06690938);
   mupt->SetFillColor(0);
   mupt->SetBorderMode(0);
   mupt->SetBorderSize(2);
   mupt->SetLogy();
   mupt->SetFrameBorderMode(0);
   mupt->SetFrameBorderMode(0);
   
   THStack *mupt = new THStack();
   mupt->SetName("mupt");
   mupt->SetTitle("mupt");
   
   TH1F *mupt_stack_4 = new TH1F("mupt_stack_4","mupt",15,0,15);
   mupt_stack_4->SetMinimum(5.002536e-06);
   mupt_stack_4->SetMaximum(0.2954582);
   mupt_stack_4->SetDirectory(0);
   mupt_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   mupt_stack_4->SetLineColor(ci);
   mupt_stack_4->GetXaxis()->SetTitle("mupt");
   mupt_stack_4->GetXaxis()->SetLabelFont(42);
   mupt_stack_4->GetXaxis()->SetLabelSize(0.035);
   mupt_stack_4->GetXaxis()->SetTitleSize(0.035);
   mupt_stack_4->GetXaxis()->SetTitleFont(42);
   mupt_stack_4->GetYaxis()->SetTitle("Events/pb");
   mupt_stack_4->GetYaxis()->SetLabelFont(42);
   mupt_stack_4->GetYaxis()->SetLabelSize(0.035);
   mupt_stack_4->GetYaxis()->SetTitleSize(0.035);
   mupt_stack_4->GetYaxis()->SetTitleFont(42);
   mupt_stack_4->GetZaxis()->SetLabelFont(42);
   mupt_stack_4->GetZaxis()->SetLabelSize(0.035);
   mupt_stack_4->GetZaxis()->SetTitleSize(0.035);
   mupt_stack_4->GetZaxis()->SetTitleFont(42);
   mupt->SetHistogram(mupt_stack_4);
   
   
   TH1D *mupt16 = new TH1D("mupt16","p_{T, #mu}",15,0,15);
   mupt16->SetBinContent(1,0.001250901);
   mupt16->SetBinContent(2,0.02882494);
   mupt16->SetBinError(1,0.001250901);
   mupt16->SetBinError(2,0.02638252);
   mupt16->SetEntries(4);

   ci = TColor::GetColor("#00cc00");
   mupt16->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   mupt16->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   mupt16->SetMarkerColor(ci);
   mupt16->SetMarkerStyle(22);
   mupt16->GetXaxis()->SetTitle("mupt");
   mupt16->GetXaxis()->SetLabelFont(42);
   mupt16->GetXaxis()->SetLabelSize(0.035);
   mupt16->GetXaxis()->SetTitleSize(0.035);
   mupt16->GetXaxis()->SetTitleFont(42);
   mupt16->GetYaxis()->SetTitle("Events/pb");
   mupt16->GetYaxis()->SetLabelFont(42);
   mupt16->GetYaxis()->SetLabelSize(0.035);
   mupt16->GetYaxis()->SetTitleSize(0.035);
   mupt16->GetYaxis()->SetTitleFont(42);
   mupt16->GetZaxis()->SetLabelFont(42);
   mupt16->GetZaxis()->SetLabelSize(0.035);
   mupt16->GetZaxis()->SetTitleSize(0.035);
   mupt16->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   
   TH1D *mupt17 = new TH1D("mupt17","p_{T, #mu}",15,0,15);
   mupt17->SetBinContent(1,0.08500384);
   mupt17->SetBinContent(2,0.1635124);
   mupt17->SetBinContent(3,0.02486783);
   mupt17->SetBinContent(4,0.02842852);
   mupt17->SetBinContent(5,0.05280865);
   mupt17->SetBinContent(6,0.06135093);
   mupt17->SetBinContent(7,0.07064846);
   mupt17->SetBinContent(8,0.09623916);
   mupt17->SetBinContent(9,0.08191805);
   mupt17->SetBinContent(10,0.0864474);
   mupt17->SetBinContent(11,0.08083551);
   mupt17->SetBinContent(12,0.08834037);
   mupt17->SetBinContent(13,0.09117462);
   mupt17->SetBinContent(14,0.08064821);
   mupt17->SetBinContent(15,0.08087173);
   mupt17->SetBinError(1,0.005392805);
   mupt17->SetBinError(2,0.007690025);
   mupt17->SetBinError(3,0.002756144);
   mupt17->SetBinError(4,0.003267139);
   mupt17->SetBinError(5,0.004347159);
   mupt17->SetBinError(6,0.00458363);
   mupt17->SetBinError(7,0.004904158);
   mupt17->SetBinError(8,0.006160291);
   mupt17->SetBinError(9,0.005350915);
   mupt17->SetBinError(10,0.005855723);
   mupt17->SetBinError(11,0.005586724);
   mupt17->SetBinError(12,0.005544716);
   mupt17->SetBinError(13,0.006018414);
   mupt17->SetBinError(14,0.005180555);
   mupt17->SetBinError(15,0.005424892);
   mupt17->SetEntries(9764);

   ci = TColor::GetColor("#00ffff");
   mupt17->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   mupt17->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   mupt17->SetMarkerColor(ci);
   mupt17->SetMarkerStyle(20);
   mupt17->GetXaxis()->SetTitle("mupt");
   mupt17->GetXaxis()->SetLabelFont(42);
   mupt17->GetXaxis()->SetLabelSize(0.035);
   mupt17->GetXaxis()->SetTitleSize(0.035);
   mupt17->GetXaxis()->SetTitleFont(42);
   mupt17->GetYaxis()->SetTitle("Events/pb");
   mupt17->GetYaxis()->SetLabelFont(42);
   mupt17->GetYaxis()->SetLabelSize(0.035);
   mupt17->GetYaxis()->SetTitleSize(0.035);
   mupt17->GetYaxis()->SetTitleFont(42);
   mupt17->GetZaxis()->SetLabelFont(42);
   mupt17->GetZaxis()->SetLabelSize(0.035);
   mupt17->GetZaxis()->SetTitleSize(0.035);
   mupt17->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   
   TH1D *mupt18 = new TH1D("mupt18","p_{T, #mu}",15,0,15);
   mupt18->SetBinContent(1,0.0917682);
   mupt18->SetBinContent(2,0.1508204);
   mupt18->SetBinContent(3,0.02076429);
   mupt18->SetBinContent(4,0.008816112);
   mupt18->SetBinContent(5,0.006215125);
   mupt18->SetBinContent(6,0.002885923);
   mupt18->SetBinContent(7,0.002245902);
   mupt18->SetBinContent(8,0.001391976);
   mupt18->SetBinContent(9,0.001282229);
   mupt18->SetBinContent(10,0.0006804405);
   mupt18->SetBinContent(11,0.0006779977);
   mupt18->SetBinContent(12,0.000742917);
   mupt18->SetBinContent(13,0.0003763763);
   mupt18->SetBinContent(14,0.0002503648);
   mupt18->SetBinContent(15,0.0001595618);
   mupt18->SetBinError(1,0.00230497);
   mupt18->SetBinError(2,0.00297049);
   mupt18->SetBinError(3,0.001180494);
   mupt18->SetBinError(4,0.0006919085);
   mupt18->SetBinError(5,0.0006323664);
   mupt18->SetBinError(6,0.0003889813);
   mupt18->SetBinError(7,0.0003624532);
   mupt18->SetBinError(8,0.0002531837);
   mupt18->SetBinError(9,0.0002973706);
   mupt18->SetBinError(10,0.0001675149);
   mupt18->SetBinError(11,0.0002465513);
   mupt18->SetBinError(12,0.0002578993);
   mupt18->SetBinError(13,0.0001348445);
   mupt18->SetBinError(14,0.0001100469);
   mupt18->SetBinError(15,7.928144e-05);
   mupt18->SetEntries(13377);

   ci = TColor::GetColor("#ffcc00");
   mupt18->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   mupt18->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   mupt18->SetMarkerColor(ci);
   mupt18->SetMarkerStyle(21);
   mupt18->GetXaxis()->SetTitle("mupt");
   mupt18->GetXaxis()->SetLabelFont(42);
   mupt18->GetXaxis()->SetLabelSize(0.035);
   mupt18->GetXaxis()->SetTitleSize(0.035);
   mupt18->GetXaxis()->SetTitleFont(42);
   mupt18->GetYaxis()->SetTitle("Events/pb");
   mupt18->GetYaxis()->SetLabelFont(42);
   mupt18->GetYaxis()->SetLabelSize(0.035);
   mupt18->GetYaxis()->SetTitleSize(0.035);
   mupt18->GetYaxis()->SetTitleFont(42);
   mupt18->GetZaxis()->SetLabelFont(42);
   mupt18->GetZaxis()->SetLabelSize(0.035);
   mupt18->GetZaxis()->SetTitleSize(0.035);
   mupt18->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   
   TH1D *mupt19 = new TH1D("mupt19","p_{T, #mu}",15,0,15);
   mupt19->SetBinContent(1,0.002251988);
   mupt19->SetBinContent(2,0.005074685);
   mupt19->SetBinContent(3,0.001912647);
   mupt19->SetBinContent(4,0.002760999);
   mupt19->SetBinContent(5,0.003131189);
   mupt19->SetBinContent(6,0.003300859);
   mupt19->SetBinContent(7,0.00343968);
   mupt19->SetBinContent(8,0.002760999);
   mupt19->SetBinContent(9,0.002375385);
   mupt19->SetBinContent(10,0.002051469);
   mupt19->SetBinContent(11,0.001357363);
   mupt19->SetBinContent(12,0.00128024);
   mupt19->SetBinContent(13,0.0009254746);
   mupt19->SetBinContent(14,0.0008946254);
   mupt19->SetBinContent(15,0.0006941059);
   mupt19->SetBinError(1,0.0001863759);
   mupt19->SetBinError(2,0.0002797765);
   mupt19->SetBinError(3,0.0001717608);
   mupt19->SetBinError(4,0.0002063668);
   mupt19->SetBinError(5,0.0002197664);
   mupt19->SetBinError(6,0.0002256421);
   mupt19->SetBinError(7,0.000230338);
   mupt19->SetBinError(8,0.0002063668);
   mupt19->SetBinError(9,0.000191414);
   mupt19->SetBinError(10,0.0001778849);
   mupt19->SetBinError(11,0.0001446953);
   mupt19->SetBinError(12,0.0001405246);
   mupt19->SetBinError(13,0.0001194783);
   mupt19->SetBinError(14,0.0001174701);
   mupt19->SetBinError(15,0.0001034712);
   mupt19->SetEntries(2218);

   ci = TColor::GetColor("#ff0000");
   mupt19->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   mupt19->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   mupt19->SetMarkerColor(ci);
   mupt19->SetMarkerStyle(20);
   mupt19->GetXaxis()->SetTitle("mupt");
   mupt19->GetXaxis()->SetLabelFont(42);
   mupt19->GetXaxis()->SetLabelSize(0.035);
   mupt19->GetXaxis()->SetTitleSize(0.035);
   mupt19->GetXaxis()->SetTitleFont(42);
   mupt19->GetYaxis()->SetTitle("Events/pb");
   mupt19->GetYaxis()->SetLabelFont(42);
   mupt19->GetYaxis()->SetLabelSize(0.035);
   mupt19->GetYaxis()->SetTitleSize(0.035);
   mupt19->GetYaxis()->SetTitleFont(42);
   mupt19->GetZaxis()->SetLabelFont(42);
   mupt19->GetZaxis()->SetLabelSize(0.035);
   mupt19->GetZaxis()->SetTitleSize(0.035);
   mupt19->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   
   TH1D *mupt20 = new TH1D("mupt20","p_{T, #mu}",15,0,15);
   mupt20->SetBinContent(1,3.35433e-05);
   mupt20->SetBinContent(4,1.677165e-05);
   mupt20->SetBinContent(6,3.35433e-05);
   mupt20->SetBinContent(7,1.677165e-05);
   mupt20->SetBinContent(9,1.677165e-05);
   mupt20->SetBinContent(10,1.677165e-05);
   mupt20->SetBinContent(11,1.677165e-05);
   mupt20->SetBinContent(12,3.35433e-05);
   mupt20->SetBinContent(13,5.031494e-05);
   mupt20->SetBinContent(15,6.708659e-05);
   mupt20->SetBinError(1,2.371869e-05);
   mupt20->SetBinError(4,1.677165e-05);
   mupt20->SetBinError(6,2.371869e-05);
   mupt20->SetBinError(7,1.677165e-05);
   mupt20->SetBinError(9,1.677165e-05);
   mupt20->SetBinError(10,1.677165e-05);
   mupt20->SetBinError(11,1.677165e-05);
   mupt20->SetBinError(12,2.371869e-05);
   mupt20->SetBinError(13,2.904935e-05);
   mupt20->SetBinError(15,3.35433e-05);
   mupt20->SetEntries(18);

   ci = TColor::GetColor("#0000ff");
   mupt20->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   mupt20->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   mupt20->SetMarkerColor(ci);
   mupt20->SetMarkerStyle(21);
   mupt20->GetXaxis()->SetTitle("mupt");
   mupt20->GetXaxis()->SetLabelFont(42);
   mupt20->GetXaxis()->SetLabelSize(0.035);
   mupt20->GetXaxis()->SetTitleSize(0.035);
   mupt20->GetXaxis()->SetTitleFont(42);
   mupt20->GetYaxis()->SetTitle("Events/pb");
   mupt20->GetYaxis()->SetLabelFont(42);
   mupt20->GetYaxis()->SetLabelSize(0.035);
   mupt20->GetYaxis()->SetTitleSize(0.035);
   mupt20->GetYaxis()->SetTitleFont(42);
   mupt20->GetZaxis()->SetLabelFont(42);
   mupt20->GetZaxis()->SetLabelSize(0.035);
   mupt20->GetZaxis()->SetTitleSize(0.035);
   mupt20->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   mupt->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.4289368,0.9378571,0.5710632,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("mupt");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("mupt","mupt_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mupt","mupt_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mupt","mupt_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mupt","mupt_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mupt","mupt_ttbar","lp");

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
   mupt->Modified();
   mupt->cd();
   mupt->SetSelected(mupt);
}
