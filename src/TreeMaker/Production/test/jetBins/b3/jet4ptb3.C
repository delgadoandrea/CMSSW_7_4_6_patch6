void jet4ptb3()
{
//=========Macro generated from canvas: b3/jet4ptb3/b3/jet4ptb3
//=========  (Tue Nov 24 14:24:00 2015) by ROOT version6.02/05
   TCanvas *b3/jet4ptb3 = new TCanvas("b3/jet4ptb3", "b3/jet4ptb3",200,222,700,700);
   b3/jet4ptb3->Range(-66.25001,-7.269237,896.25,0.1551586);
   b3/jet4ptb3->SetFillColor(0);
   b3/jet4ptb3->SetBorderMode(0);
   b3/jet4ptb3->SetBorderSize(2);
   b3/jet4ptb3->SetLogy();
   b3/jet4ptb3->SetFrameBorderMode(0);
   b3/jet4ptb3->SetFrameBorderMode(0);
   
   THStack *b3/jet4ptb3 = new THStack();
   b3/jet4ptb3->SetName("b3/jet4ptb3");
   b3/jet4ptb3->SetTitle("b3/jet4ptb3");
   
   TH1F *b3/jet4ptb3_stack_11 = new TH1F("b3/jet4ptb3_stack_11","b3/jet4ptb3",32,30,800);
   b3/jet4ptb3_stack_11->SetMinimum(2.973054e-07);
   b3/jet4ptb3_stack_11->SetMaximum(0.2586539);
   b3/jet4ptb3_stack_11->SetDirectory(0);
   b3/jet4ptb3_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b3/jet4ptb3_stack_11->SetLineColor(ci);
   b3/jet4ptb3_stack_11->GetXaxis()->SetTitle("b3/jet4ptb3");
   b3/jet4ptb3_stack_11->GetXaxis()->SetLabelFont(42);
   b3/jet4ptb3_stack_11->GetXaxis()->SetLabelSize(0.035);
   b3/jet4ptb3_stack_11->GetXaxis()->SetTitleSize(0.035);
   b3/jet4ptb3_stack_11->GetXaxis()->SetTitleFont(42);
   b3/jet4ptb3_stack_11->GetYaxis()->SetTitle("Events/pb");
   b3/jet4ptb3_stack_11->GetYaxis()->SetLabelFont(42);
   b3/jet4ptb3_stack_11->GetYaxis()->SetLabelSize(0.035);
   b3/jet4ptb3_stack_11->GetYaxis()->SetTitleSize(0.035);
   b3/jet4ptb3_stack_11->GetYaxis()->SetTitleFont(42);
   b3/jet4ptb3_stack_11->GetZaxis()->SetLabelFont(42);
   b3/jet4ptb3_stack_11->GetZaxis()->SetLabelSize(0.035);
   b3/jet4ptb3_stack_11->GetZaxis()->SetTitleSize(0.035);
   b3/jet4ptb3_stack_11->GetZaxis()->SetTitleFont(42);
   b3/jet4ptb3->SetHistogram(b3/jet4ptb3_stack_11);
   
   
   TH1D *jet4ptb351 = new TH1D("jet4ptb351","p_{T}^{3rd jet}",32,30,800);
   jet4ptb351->SetBinContent(1,0.06405662);
   jet4ptb351->SetBinContent(2,0.0329741);
   jet4ptb351->SetBinContent(3,0.01497518);
   jet4ptb351->SetBinContent(4,0.00204207);
   jet4ptb351->SetBinContent(5,0.00476483);
   jet4ptb351->SetBinContent(6,0.00272276);
   jet4ptb351->SetBinContent(7,0.00136138);
   jet4ptb351->SetBinContent(8,0.00272276);
   jet4ptb351->SetBinContent(9,0.00204207);
   jet4ptb351->SetBinContent(12,0.00068069);
   jet4ptb351->SetBinError(1,0.01900789);
   jet4ptb351->SetBinError(2,0.012228);
   jet4ptb351->SetBinError(3,0.003192719);
   jet4ptb351->SetBinError(4,0.00117899);
   jet4ptb351->SetBinError(5,0.001800936);
   jet4ptb351->SetBinError(6,0.00136138);
   jet4ptb351->SetBinError(7,0.000962641);
   jet4ptb351->SetBinError(8,0.00136138);
   jet4ptb351->SetBinError(9,0.00117899);
   jet4ptb351->SetBinError(12,0.00068069);
   jet4ptb351->SetEntries(110);

   ci = TColor::GetColor("#00cc00");
   jet4ptb351->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   jet4ptb351->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   jet4ptb351->SetMarkerColor(ci);
   jet4ptb351->SetMarkerStyle(22);
   jet4ptb351->GetXaxis()->SetTitle("jet4ptb3");
   jet4ptb351->GetXaxis()->SetLabelFont(42);
   jet4ptb351->GetXaxis()->SetLabelSize(0.035);
   jet4ptb351->GetXaxis()->SetTitleSize(0.035);
   jet4ptb351->GetXaxis()->SetTitleFont(42);
   jet4ptb351->GetYaxis()->SetTitle("Events/pb");
   jet4ptb351->GetYaxis()->SetLabelFont(42);
   jet4ptb351->GetYaxis()->SetLabelSize(0.035);
   jet4ptb351->GetYaxis()->SetTitleSize(0.035);
   jet4ptb351->GetYaxis()->SetTitleFont(42);
   jet4ptb351->GetZaxis()->SetLabelFont(42);
   jet4ptb351->GetZaxis()->SetLabelSize(0.035);
   jet4ptb351->GetZaxis()->SetTitleSize(0.035);
   jet4ptb351->GetZaxis()->SetTitleFont(42);
   b3/jet4ptb3->Add(jet4ptb3,"");
   
   TH1D *jet4ptb352 = new TH1D("jet4ptb352","p_{T}^{3rd jet}",32,30,800);
   jet4ptb352->SetBinContent(1,0.1282312);
   jet4ptb352->SetBinContent(2,0.03771129);
   jet4ptb352->SetBinContent(3,0.01260857);
   jet4ptb352->SetBinContent(4,0.004178528);
   jet4ptb352->SetBinContent(5,0.00145104);
   jet4ptb352->SetBinContent(6,0.0007529725);
   jet4ptb352->SetBinContent(7,0.000376081);
   jet4ptb352->SetBinContent(8,0.0002646496);
   jet4ptb352->SetBinContent(9,6.964463e-05);
   jet4ptb352->SetBinContent(10,1.392893e-05);
   jet4ptb352->SetBinContent(11,8.357355e-05);
   jet4ptb352->SetBinContent(13,2.785785e-05);
   jet4ptb352->SetBinContent(17,1.392893e-05);
   jet4ptb352->SetBinError(1,0.002938006);
   jet4ptb352->SetBinError(2,0.001103254);
   jet4ptb352->SetBinError(3,0.0004560349);
   jet4ptb352->SetBinError(4,0.0002416723);
   jet4ptb352->SetBinError(5,0.0001422929);
   jet4ptb352->SetBinError(6,0.0001024697);
   jet4ptb352->SetBinError(7,7.237682e-05);
   jet4ptb352->SetBinError(8,6.071478e-05);
   jet4ptb352->SetBinError(9,3.114602e-05);
   jet4ptb352->SetBinError(10,1.392893e-05);
   jet4ptb352->SetBinError(11,3.411876e-05);
   jet4ptb352->SetBinError(13,1.969847e-05);
   jet4ptb352->SetBinError(17,1.392893e-05);
   jet4ptb352->SetEntries(9321);

   ci = TColor::GetColor("#00ffff");
   jet4ptb352->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   jet4ptb352->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   jet4ptb352->SetMarkerColor(ci);
   jet4ptb352->SetMarkerStyle(20);
   jet4ptb352->GetXaxis()->SetTitle("jet4ptb3");
   jet4ptb352->GetXaxis()->SetLabelFont(42);
   jet4ptb352->GetXaxis()->SetLabelSize(0.035);
   jet4ptb352->GetXaxis()->SetTitleSize(0.035);
   jet4ptb352->GetXaxis()->SetTitleFont(42);
   jet4ptb352->GetYaxis()->SetTitle("Events/pb");
   jet4ptb352->GetYaxis()->SetLabelFont(42);
   jet4ptb352->GetYaxis()->SetLabelSize(0.035);
   jet4ptb352->GetYaxis()->SetTitleSize(0.035);
   jet4ptb352->GetYaxis()->SetTitleFont(42);
   jet4ptb352->GetZaxis()->SetLabelFont(42);
   jet4ptb352->GetZaxis()->SetLabelSize(0.035);
   jet4ptb352->GetZaxis()->SetTitleSize(0.035);
   jet4ptb352->GetZaxis()->SetTitleFont(42);
   b3/jet4ptb3->Add(jet4ptb3,"");
   
   TH1D *jet4ptb353 = new TH1D("jet4ptb353","p_{T}^{3rd jet}",32,30,800);
   jet4ptb353->SetBinContent(1,0.03410257);
   jet4ptb353->SetBinContent(2,0.008762469);
   jet4ptb353->SetBinContent(3,0.003090943);
   jet4ptb353->SetBinContent(4,0.001166323);
   jet4ptb353->SetBinContent(5,0.0004783498);
   jet4ptb353->SetBinContent(6,0.0002059731);
   jet4ptb353->SetBinContent(7,0.0001076678);
   jet4ptb353->SetBinContent(8,5.266358e-05);
   jet4ptb353->SetBinContent(9,3.276845e-05);
   jet4ptb353->SetBinContent(10,8.192112e-06);
   jet4ptb353->SetBinContent(11,9.362414e-06);
   jet4ptb353->SetBinContent(13,2.340604e-06);
   jet4ptb353->SetBinContent(14,1.170302e-06);
   jet4ptb353->SetBinContent(15,3.510905e-06);
   jet4ptb353->SetBinError(1,0.0006673957);
   jet4ptb353->SetBinError(2,0.0001926707);
   jet4ptb353->SetBinError(3,9.134632e-05);
   jet4ptb353->SetBinError(4,4.065438e-05);
   jet4ptb353->SetBinError(5,2.430906e-05);
   jet4ptb353->SetBinError(6,1.552581e-05);
   jet4ptb353->SetBinError(7,1.122514e-05);
   jet4ptb353->SetBinError(8,7.850623e-06);
   jet4ptb353->SetBinError(9,6.192655e-06);
   jet4ptb353->SetBinError(10,3.096327e-06);
   jet4ptb353->SetBinError(11,3.310113e-06);
   jet4ptb353->SetBinError(13,1.655057e-06);
   jet4ptb353->SetBinError(14,1.170302e-06);
   jet4ptb353->SetBinError(15,2.027022e-06);
   jet4ptb353->SetEntries(19142);

   ci = TColor::GetColor("#ffcc00");
   jet4ptb353->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   jet4ptb353->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   jet4ptb353->SetMarkerColor(ci);
   jet4ptb353->SetMarkerStyle(21);
   jet4ptb353->GetXaxis()->SetTitle("jet4ptb3");
   jet4ptb353->GetXaxis()->SetLabelFont(42);
   jet4ptb353->GetXaxis()->SetLabelSize(0.035);
   jet4ptb353->GetXaxis()->SetTitleSize(0.035);
   jet4ptb353->GetXaxis()->SetTitleFont(42);
   jet4ptb353->GetYaxis()->SetTitle("Events/pb");
   jet4ptb353->GetYaxis()->SetLabelFont(42);
   jet4ptb353->GetYaxis()->SetLabelSize(0.035);
   jet4ptb353->GetYaxis()->SetTitleSize(0.035);
   jet4ptb353->GetYaxis()->SetTitleFont(42);
   jet4ptb353->GetZaxis()->SetLabelFont(42);
   jet4ptb353->GetZaxis()->SetLabelSize(0.035);
   jet4ptb353->GetZaxis()->SetTitleSize(0.035);
   jet4ptb353->GetZaxis()->SetTitleFont(42);
   b3/jet4ptb3->Add(jet4ptb3,"");
   
   TH1D *jet4ptb354 = new TH1D("jet4ptb354","p_{T}^{3rd jet}",32,30,800);
   jet4ptb354->SetBinContent(1,0.007773986);
   jet4ptb354->SetBinContent(2,0.002791848);
   jet4ptb354->SetBinContent(3,0.0008792008);
   jet4ptb354->SetBinContent(4,0.0003701898);
   jet4ptb354->SetBinContent(5,0.0001388212);
   jet4ptb354->SetBinContent(6,1.542458e-05);
   jet4ptb354->SetBinContent(11,1.542458e-05);
   jet4ptb354->SetBinError(1,0.0003462809);
   jet4ptb354->SetBinError(2,0.0002075164);
   jet4ptb354->SetBinError(3,0.000116453);
   jet4ptb354->SetBinError(4,7.556468e-05);
   jet4ptb354->SetBinError(5,4.627373e-05);
   jet4ptb354->SetBinError(6,1.542458e-05);
   jet4ptb354->SetBinError(11,1.542458e-05);
   jet4ptb354->SetEntries(777);

   ci = TColor::GetColor("#ff0000");
   jet4ptb354->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   jet4ptb354->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   jet4ptb354->SetMarkerColor(ci);
   jet4ptb354->SetMarkerStyle(20);
   jet4ptb354->GetXaxis()->SetTitle("jet4ptb3");
   jet4ptb354->GetXaxis()->SetLabelFont(42);
   jet4ptb354->GetXaxis()->SetLabelSize(0.035);
   jet4ptb354->GetXaxis()->SetTitleSize(0.035);
   jet4ptb354->GetXaxis()->SetTitleFont(42);
   jet4ptb354->GetYaxis()->SetTitle("Events/pb");
   jet4ptb354->GetYaxis()->SetLabelFont(42);
   jet4ptb354->GetYaxis()->SetLabelSize(0.035);
   jet4ptb354->GetYaxis()->SetTitleSize(0.035);
   jet4ptb354->GetYaxis()->SetTitleFont(42);
   jet4ptb354->GetZaxis()->SetLabelFont(42);
   jet4ptb354->GetZaxis()->SetLabelSize(0.035);
   jet4ptb354->GetZaxis()->SetTitleSize(0.035);
   jet4ptb354->GetZaxis()->SetTitleFont(42);
   b3/jet4ptb3->Add(jet4ptb3,"");
   
   TH1D *jet4ptb355 = new TH1D("jet4ptb355","p_{T}^{3rd jet}",32,30,800);
   jet4ptb355->SetBinContent(1,0.000570236);
   jet4ptb355->SetBinContent(2,0.0006876375);
   jet4ptb355->SetBinContent(3,0.0004696061);
   jet4ptb355->SetBinContent(4,0.0001844881);
   jet4ptb355->SetBinContent(5,0.0001174015);
   jet4ptb355->SetBinContent(6,1.677165e-05);
   jet4ptb355->SetBinContent(7,1.677165e-05);
   jet4ptb355->SetBinError(1,9.779467e-05);
   jet4ptb355->SetBinError(2,0.0001073909);
   jet4ptb355->SetBinError(3,8.874722e-05);
   jet4ptb355->SetBinError(4,5.562526e-05);
   jet4ptb355->SetBinError(5,4.437361e-05);
   jet4ptb355->SetBinError(6,1.677165e-05);
   jet4ptb355->SetBinError(7,1.677165e-05);
   jet4ptb355->SetEntries(123);

   ci = TColor::GetColor("#0000ff");
   jet4ptb355->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   jet4ptb355->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   jet4ptb355->SetMarkerColor(ci);
   jet4ptb355->SetMarkerStyle(21);
   jet4ptb355->GetXaxis()->SetTitle("jet4ptb3");
   jet4ptb355->GetXaxis()->SetLabelFont(42);
   jet4ptb355->GetXaxis()->SetLabelSize(0.035);
   jet4ptb355->GetXaxis()->SetTitleSize(0.035);
   jet4ptb355->GetXaxis()->SetTitleFont(42);
   jet4ptb355->GetYaxis()->SetTitle("Events/pb");
   jet4ptb355->GetYaxis()->SetLabelFont(42);
   jet4ptb355->GetYaxis()->SetLabelSize(0.035);
   jet4ptb355->GetYaxis()->SetTitleSize(0.035);
   jet4ptb355->GetYaxis()->SetTitleFont(42);
   jet4ptb355->GetZaxis()->SetLabelFont(42);
   jet4ptb355->GetZaxis()->SetLabelSize(0.035);
   jet4ptb355->GetZaxis()->SetTitleSize(0.035);
   jet4ptb355->GetZaxis()->SetTitleFont(42);
   b3/jet4ptb3->Add(jet4ptb3,"");
   b3/jet4ptb3->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3578161,0.9342857,0.6421839,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b3/jet4ptb3");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("jet4ptb3","b3/jet4ptb3_QCD_b3/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("jet4ptb3","b3/jet4ptb3_WJetsToLNu_b3/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("jet4ptb3","b3/jet4ptb3_ZJetsToNuNu_b3/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("jet4ptb3","b3/jet4ptb3_signal_b3/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("jet4ptb3","b3/jet4ptb3_ttbar_b3/","lp");

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
   b3/jet4ptb3->Modified();
   b3/jet4ptb3->cd();
   b3/jet4ptb3->SetSelected(b3/jet4ptb3);
}
