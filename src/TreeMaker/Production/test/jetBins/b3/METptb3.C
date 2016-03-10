void METptb3()
{
//=========Macro generated from canvas: b3/METptb3/b3/METptb3
//=========  (Tue Nov 24 14:23:56 2015) by ROOT version6.02/05
   TCanvas *b3/METptb3 = new TCanvas("b3/METptb3", "b3/METptb3",60,82,700,700);
   b3/METptb3->Range(37.49999,-6.975914,1662.5,0.5018959);
   b3/METptb3->SetFillColor(0);
   b3/METptb3->SetBorderMode(0);
   b3/METptb3->SetBorderSize(2);
   b3/METptb3->SetLogy();
   b3/METptb3->SetFrameBorderMode(0);
   b3/METptb3->SetFrameBorderMode(0);
   
   THStack *b3/METptb3 = new THStack();
   b3/METptb3->SetName("b3/METptb3");
   b3/METptb3->SetTitle("b3/METptb3");
   
   TH1F *b3/METptb3_stack_4 = new TH1F("b3/METptb3_stack_4","b3/METptb3",26,200,1500);
   b3/METptb3_stack_4->SetMinimum(5.913804e-07);
   b3/METptb3_stack_4->SetMaximum(0.5676948);
   b3/METptb3_stack_4->SetDirectory(0);
   b3/METptb3_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b3/METptb3_stack_4->SetLineColor(ci);
   b3/METptb3_stack_4->GetXaxis()->SetTitle("b3/METptb3");
   b3/METptb3_stack_4->GetXaxis()->SetLabelFont(42);
   b3/METptb3_stack_4->GetXaxis()->SetLabelSize(0.035);
   b3/METptb3_stack_4->GetXaxis()->SetTitleSize(0.035);
   b3/METptb3_stack_4->GetXaxis()->SetTitleFont(42);
   b3/METptb3_stack_4->GetYaxis()->SetTitle("Events/pb");
   b3/METptb3_stack_4->GetYaxis()->SetLabelFont(42);
   b3/METptb3_stack_4->GetYaxis()->SetLabelSize(0.035);
   b3/METptb3_stack_4->GetYaxis()->SetTitleSize(0.035);
   b3/METptb3_stack_4->GetYaxis()->SetTitleFont(42);
   b3/METptb3_stack_4->GetZaxis()->SetLabelFont(42);
   b3/METptb3_stack_4->GetZaxis()->SetLabelSize(0.035);
   b3/METptb3_stack_4->GetZaxis()->SetTitleSize(0.035);
   b3/METptb3_stack_4->GetZaxis()->SetTitleFont(42);
   b3/METptb3->SetHistogram(b3/METptb3_stack_4);
   
   
   TH1D *METptb316 = new TH1D("METptb316","MET_{p_{T}}",26,200,1500);
   METptb316->SetBinContent(1,0.1604067);
   METptb316->SetBinContent(2,0.02601671);
   METptb316->SetBinContent(3,0.01701725);
   METptb316->SetBinContent(4,0.00884897);
   METptb316->SetBinContent(5,0.00340345);
   METptb316->SetBinContent(6,0.00136138);
   METptb316->SetBinError(1,0.0295239);
   METptb316->SetBinError(2,0.009013809);
   METptb316->SetBinError(3,0.00340345);
   METptb316->SetBinError(4,0.002454263);
   METptb316->SetBinError(5,0.001522069);
   METptb316->SetBinError(6,0.000962641);
   METptb316->SetEntries(173);

   ci = TColor::GetColor("#00cc00");
   METptb316->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METptb316->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METptb316->SetMarkerColor(ci);
   METptb316->SetMarkerStyle(22);
   METptb316->GetXaxis()->SetTitle("METptb3");
   METptb316->GetXaxis()->SetLabelFont(42);
   METptb316->GetXaxis()->SetLabelSize(0.035);
   METptb316->GetXaxis()->SetTitleSize(0.035);
   METptb316->GetXaxis()->SetTitleFont(42);
   METptb316->GetYaxis()->SetTitle("Events/pb");
   METptb316->GetYaxis()->SetLabelFont(42);
   METptb316->GetYaxis()->SetLabelSize(0.035);
   METptb316->GetYaxis()->SetTitleSize(0.035);
   METptb316->GetYaxis()->SetTitleFont(42);
   METptb316->GetZaxis()->SetLabelFont(42);
   METptb316->GetZaxis()->SetLabelSize(0.035);
   METptb316->GetZaxis()->SetTitleSize(0.035);
   METptb316->GetZaxis()->SetTitleFont(42);
   b3/METptb3->Add(METptb3,"");
   
   TH1D *METptb317 = new TH1D("METptb317","MET_{p_{T}}",26,200,1500);
   METptb317->SetBinContent(1,0.2803665);
   METptb317->SetBinContent(2,0.11264);
   METptb317->SetBinContent(3,0.04993812);
   METptb317->SetBinContent(4,0.02343704);
   METptb317->SetBinContent(5,0.01224713);
   METptb317->SetBinContent(6,0.00585706);
   METptb317->SetBinContent(7,0.003517086);
   METptb317->SetBinContent(8,0.001906492);
   METptb317->SetBinContent(9,0.001337987);
   METptb317->SetBinContent(10,0.0007660909);
   METptb317->SetBinContent(11,0.000376081);
   METptb317->SetBinContent(12,0.0003064364);
   METptb317->SetBinContent(13,0.0002089339);
   METptb317->SetBinContent(14,0.0001532182);
   METptb317->SetBinContent(15,9.750248e-05);
   METptb317->SetBinContent(16,6.964463e-05);
   METptb317->SetBinContent(17,2.785785e-05);
   METptb317->SetBinContent(18,4.178678e-05);
   METptb317->SetBinContent(20,2.785785e-05);
   METptb317->SetBinContent(21,2.785785e-05);
   METptb317->SetBinContent(23,2.785785e-05);
   METptb317->SetBinContent(25,1.392893e-05);
   METptb317->SetBinContent(26,1.392893e-05);
   METptb317->SetBinContent(27,1.392893e-05);
   METptb317->SetBinError(1,0.005069137);
   METptb317->SetBinError(2,0.002704734);
   METptb317->SetBinError(3,0.00148034);
   METptb317->SetBinError(4,0.000776082);
   METptb317->SetBinError(5,0.001072161);
   METptb317->SetBinError(6,0.0002886639);
   METptb317->SetBinError(7,0.0002224926);
   METptb317->SetBinError(8,0.0001635072);
   METptb317->SetBinError(9,0.0001365601);
   METptb317->SetBinError(10,0.0001032997);
   METptb317->SetBinError(11,7.237682e-05);
   METptb317->SetBinError(12,6.533245e-05);
   METptb317->SetBinError(13,5.394649e-05);
   METptb317->SetBinError(14,4.619702e-05);
   METptb317->SetBinError(15,3.685247e-05);
   METptb317->SetBinError(16,3.114602e-05);
   METptb317->SetBinError(17,1.969847e-05);
   METptb317->SetBinError(18,2.412561e-05);
   METptb317->SetBinError(20,1.969847e-05);
   METptb317->SetBinError(21,1.969847e-05);
   METptb317->SetBinError(23,1.969847e-05);
   METptb317->SetBinError(25,1.392893e-05);
   METptb317->SetBinError(26,1.392893e-05);
   METptb317->SetBinError(27,1.392893e-05);
   METptb317->SetEntries(19755);

   ci = TColor::GetColor("#00ffff");
   METptb317->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METptb317->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METptb317->SetMarkerColor(ci);
   METptb317->SetMarkerStyle(20);
   METptb317->GetXaxis()->SetTitle("METptb3");
   METptb317->GetXaxis()->SetLabelFont(42);
   METptb317->GetXaxis()->SetLabelSize(0.035);
   METptb317->GetXaxis()->SetTitleSize(0.035);
   METptb317->GetXaxis()->SetTitleFont(42);
   METptb317->GetYaxis()->SetTitle("Events/pb");
   METptb317->GetYaxis()->SetLabelFont(42);
   METptb317->GetYaxis()->SetLabelSize(0.035);
   METptb317->GetYaxis()->SetTitleSize(0.035);
   METptb317->GetYaxis()->SetTitleFont(42);
   METptb317->GetZaxis()->SetLabelFont(42);
   METptb317->GetZaxis()->SetLabelSize(0.035);
   METptb317->GetZaxis()->SetTitleSize(0.035);
   METptb317->GetZaxis()->SetTitleFont(42);
   b3/METptb3->Add(METptb3,"");
   
   TH1D *METptb318 = new TH1D("METptb318","MET_{p_{T}}",26,200,1500);
   METptb318->SetBinContent(1,0.06308213);
   METptb318->SetBinContent(2,0.03018473);
   METptb318->SetBinContent(3,0.01405642);
   METptb318->SetBinContent(4,0.00725258);
   METptb318->SetBinContent(5,0.004048979);
   METptb318->SetBinContent(6,0.002440907);
   METptb318->SetBinContent(7,0.001413686);
   METptb318->SetBinContent(8,0.0008215075);
   METptb318->SetBinContent(9,0.000526484);
   METptb318->SetBinContent(10,0.0003019379);
   METptb318->SetBinContent(11,0.0002422525);
   METptb318->SetBinContent(12,0.0001579907);
   METptb318->SetBinContent(13,0.0001170302);
   METptb318->SetBinContent(14,7.021811e-05);
   METptb318->SetBinContent(15,5.149328e-05);
   METptb318->SetBinContent(16,2.574664e-05);
   METptb318->SetBinContent(17,2.691694e-05);
   METptb318->SetBinContent(18,2.691694e-05);
   METptb318->SetBinContent(19,1.404362e-05);
   METptb318->SetBinContent(20,1.521392e-05);
   METptb318->SetBinContent(21,5.851509e-06);
   METptb318->SetBinContent(22,1.287332e-05);
   METptb318->SetBinContent(23,3.510905e-06);
   METptb318->SetBinContent(24,3.510905e-06);
   METptb318->SetBinContent(25,2.340604e-06);
   METptb318->SetBinContent(26,2.340604e-06);
   METptb318->SetBinContent(27,1.170302e-06);
   METptb318->SetBinError(1,0.001100643);
   METptb318->SetBinError(2,0.0006528116);
   METptb318->SetBinError(3,0.0003656852);
   METptb318->SetBinError(4,0.0001869992);
   METptb318->SetBinError(5,0.0001016321);
   METptb318->SetBinError(6,7.106564e-05);
   METptb318->SetBinError(7,4.876374e-05);
   METptb318->SetBinError(8,3.295267e-05);
   METptb318->SetBinError(9,2.513371e-05);
   METptb318->SetBinError(10,1.879783e-05);
   METptb318->SetBinError(11,1.683771e-05);
   METptb318->SetBinError(12,1.359768e-05);
   METptb318->SetBinError(13,1.170302e-05);
   METptb318->SetBinError(14,9.065118e-06);
   METptb318->SetBinError(15,7.762904e-06);
   METptb318->SetBinError(16,5.489202e-06);
   METptb318->SetBinError(17,5.61257e-06);
   METptb318->SetBinError(18,5.61257e-06);
   METptb318->SetBinError(19,4.054044e-06);
   METptb318->SetBinError(20,4.219583e-06);
   METptb318->SetBinError(21,2.616874e-06);
   METptb318->SetBinError(22,3.881452e-06);
   METptb318->SetBinError(23,2.027022e-06);
   METptb318->SetBinError(24,2.027022e-06);
   METptb318->SetBinError(25,1.655057e-06);
   METptb318->SetBinError(26,1.655057e-06);
   METptb318->SetBinError(27,1.170302e-06);
   METptb318->SetEntries(37083);

   ci = TColor::GetColor("#ffcc00");
   METptb318->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METptb318->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METptb318->SetMarkerColor(ci);
   METptb318->SetMarkerStyle(21);
   METptb318->GetXaxis()->SetTitle("METptb3");
   METptb318->GetXaxis()->SetLabelFont(42);
   METptb318->GetXaxis()->SetLabelSize(0.035);
   METptb318->GetXaxis()->SetTitleSize(0.035);
   METptb318->GetXaxis()->SetTitleFont(42);
   METptb318->GetYaxis()->SetTitle("Events/pb");
   METptb318->GetYaxis()->SetLabelFont(42);
   METptb318->GetYaxis()->SetLabelSize(0.035);
   METptb318->GetYaxis()->SetTitleSize(0.035);
   METptb318->GetYaxis()->SetTitleFont(42);
   METptb318->GetZaxis()->SetLabelFont(42);
   METptb318->GetZaxis()->SetLabelSize(0.035);
   METptb318->GetZaxis()->SetTitleSize(0.035);
   METptb318->GetZaxis()->SetTitleFont(42);
   b3/METptb3->Add(METptb3,"");
   
   TH1D *METptb319 = new TH1D("METptb319","MET_{p_{T}}",26,200,1500);
   METptb319->SetBinContent(1,0.007049031);
   METptb319->SetBinContent(2,0.005398602);
   METptb319->SetBinContent(3,0.003362558);
   METptb319->SetBinContent(4,0.002653027);
   METptb319->SetBinContent(5,0.001496184);
   METptb319->SetBinContent(6,0.001125994);
   METptb319->SetBinContent(7,0.0008175025);
   METptb319->SetBinContent(8,0.0006324076);
   METptb319->SetBinContent(9,0.0004318881);
   METptb319->SetBinContent(10,0.0003393407);
   METptb319->SetBinContent(11,0.0003393407);
   METptb319->SetBinContent(12,0.0003239161);
   METptb319->SetBinContent(13,0.000107972);
   METptb319->SetBinContent(14,0.0001542458);
   METptb319->SetBinContent(15,3.084915e-05);
   METptb319->SetBinContent(16,7.712288e-05);
   METptb319->SetBinContent(17,3.084915e-05);
   METptb319->SetBinContent(23,1.542458e-05);
   METptb319->SetBinContent(24,1.542458e-05);
   METptb319->SetBinContent(25,1.542458e-05);
   METptb319->SetBinError(1,0.0003297398);
   METptb319->SetBinError(2,0.0002885674);
   METptb319->SetBinError(3,0.0002277411);
   METptb319->SetBinError(4,0.0002022914);
   METptb319->SetBinError(5,0.0001519145);
   METptb319->SetBinError(6,0.0001317876);
   METptb319->SetBinError(7,0.0001122926);
   METptb319->SetBinError(8,9.876548e-05);
   METptb319->SetBinError(9,8.161918e-05);
   METptb319->SetBinError(10,7.234767e-05);
   METptb319->SetBinError(11,7.234767e-05);
   METptb319->SetBinError(12,7.068429e-05);
   METptb319->SetBinError(13,4.080959e-05);
   METptb319->SetBinError(14,4.877679e-05);
   METptb319->SetBinError(15,2.181364e-05);
   METptb319->SetBinError(16,3.44904e-05);
   METptb319->SetBinError(17,2.181364e-05);
   METptb319->SetBinError(23,1.542458e-05);
   METptb319->SetBinError(24,1.542458e-05);
   METptb319->SetBinError(25,1.542458e-05);
   METptb319->SetEntries(1583);

   ci = TColor::GetColor("#ff0000");
   METptb319->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METptb319->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METptb319->SetMarkerColor(ci);
   METptb319->SetMarkerStyle(20);
   METptb319->GetXaxis()->SetTitle("METptb3");
   METptb319->GetXaxis()->SetLabelFont(42);
   METptb319->GetXaxis()->SetLabelSize(0.035);
   METptb319->GetXaxis()->SetTitleSize(0.035);
   METptb319->GetXaxis()->SetTitleFont(42);
   METptb319->GetYaxis()->SetTitle("Events/pb");
   METptb319->GetYaxis()->SetLabelFont(42);
   METptb319->GetYaxis()->SetLabelSize(0.035);
   METptb319->GetYaxis()->SetTitleSize(0.035);
   METptb319->GetYaxis()->SetTitleFont(42);
   METptb319->GetZaxis()->SetLabelFont(42);
   METptb319->GetZaxis()->SetLabelSize(0.035);
   METptb319->GetZaxis()->SetTitleSize(0.035);
   METptb319->GetZaxis()->SetTitleFont(42);
   b3/METptb3->Add(METptb3,"");
   
   TH1D *METptb320 = new TH1D("METptb320","MET_{p_{T}}",26,200,1500);
   METptb320->SetBinContent(1,0.001492677);
   METptb320->SetBinContent(2,0.0004025195);
   METptb320->SetBinContent(3,0.0001509448);
   METptb320->SetBinContent(4,3.35433e-05);
   METptb320->SetBinContent(5,8.385824e-05);
   METptb320->SetBinContent(6,1.677165e-05);
   METptb320->SetBinContent(7,1.677165e-05);
   METptb320->SetBinContent(9,1.677165e-05);
   METptb320->SetBinError(1,0.0001582234);
   METptb320->SetBinError(2,8.216396e-05);
   METptb320->SetBinError(3,5.031494e-05);
   METptb320->SetBinError(4,2.371869e-05);
   METptb320->SetBinError(5,3.750254e-05);
   METptb320->SetBinError(6,1.677165e-05);
   METptb320->SetBinError(7,1.677165e-05);
   METptb320->SetBinError(9,1.677165e-05);
   METptb320->SetEntries(132);

   ci = TColor::GetColor("#0000ff");
   METptb320->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METptb320->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METptb320->SetMarkerColor(ci);
   METptb320->SetMarkerStyle(21);
   METptb320->GetXaxis()->SetTitle("METptb3");
   METptb320->GetXaxis()->SetLabelFont(42);
   METptb320->GetXaxis()->SetLabelSize(0.035);
   METptb320->GetXaxis()->SetTitleSize(0.035);
   METptb320->GetXaxis()->SetTitleFont(42);
   METptb320->GetYaxis()->SetTitle("Events/pb");
   METptb320->GetYaxis()->SetLabelFont(42);
   METptb320->GetYaxis()->SetLabelSize(0.035);
   METptb320->GetYaxis()->SetTitleSize(0.035);
   METptb320->GetYaxis()->SetTitleFont(42);
   METptb320->GetZaxis()->SetLabelFont(42);
   METptb320->GetZaxis()->SetLabelSize(0.035);
   METptb320->GetZaxis()->SetTitleSize(0.035);
   METptb320->GetZaxis()->SetTitleFont(42);
   b3/METptb3->Add(METptb3,"");
   b3/METptb3->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.348477,0.9342857,0.651523,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b3/METptb3");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METptb3","b3/METptb3_QCD_b3/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METptb3","b3/METptb3_WJetsToLNu_b3/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METptb3","b3/METptb3_ZJetsToNuNu_b3/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METptb3","b3/METptb3_signal_b3/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METptb3","b3/METptb3_ttbar_b3/","lp");

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
   b3/METptb3->Modified();
   b3/METptb3->cd();
   b3/METptb3->SetSelected(b3/METptb3);
}
