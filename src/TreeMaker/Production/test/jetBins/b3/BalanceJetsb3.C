void BalanceJetsb3()
{
//=========Macro generated from canvas: b3/BalanceJetsb3/b3/BalanceJetsb3
//=========  (Tue Nov 24 14:23:54 2015) by ROOT version6.02/05
   TCanvas *b3/BalanceJetsb3 = new TCanvas("b3/BalanceJetsb3", "b3/BalanceJetsb3",0,22,700,700);
   b3/BalanceJetsb3->Range(-1.875,-7.271702,16.875,0.169769);
   b3/BalanceJetsb3->SetFillColor(0);
   b3/BalanceJetsb3->SetBorderMode(0);
   b3/BalanceJetsb3->SetBorderSize(2);
   b3/BalanceJetsb3->SetLogy();
   b3/BalanceJetsb3->SetFrameBorderMode(0);
   b3/BalanceJetsb3->SetFrameBorderMode(0);
   
   THStack *b3/BalanceJetsb3 = new THStack();
   b3/BalanceJetsb3->SetName("b3/BalanceJetsb3");
   b3/BalanceJetsb3->SetTitle("b3/BalanceJetsb3");
   
   TH1F *b3/BalanceJetsb3_stack_1 = new TH1F("b3/BalanceJetsb3_stack_1","b3/BalanceJetsb3",15,0,15);
   b3/BalanceJetsb3_stack_1->SetMinimum(2.967872e-07);
   b3/BalanceJetsb3_stack_1->SetMaximum(0.2664538);
   b3/BalanceJetsb3_stack_1->SetDirectory(0);
   b3/BalanceJetsb3_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b3/BalanceJetsb3_stack_1->SetLineColor(ci);
   b3/BalanceJetsb3_stack_1->GetXaxis()->SetTitle("b3/BalanceJetsb3");
   b3/BalanceJetsb3_stack_1->GetXaxis()->SetLabelFont(42);
   b3/BalanceJetsb3_stack_1->GetXaxis()->SetLabelSize(0.035);
   b3/BalanceJetsb3_stack_1->GetXaxis()->SetTitleSize(0.035);
   b3/BalanceJetsb3_stack_1->GetXaxis()->SetTitleFont(42);
   b3/BalanceJetsb3_stack_1->GetYaxis()->SetTitle("Events/pb");
   b3/BalanceJetsb3_stack_1->GetYaxis()->SetLabelFont(42);
   b3/BalanceJetsb3_stack_1->GetYaxis()->SetLabelSize(0.035);
   b3/BalanceJetsb3_stack_1->GetYaxis()->SetTitleSize(0.035);
   b3/BalanceJetsb3_stack_1->GetYaxis()->SetTitleFont(42);
   b3/BalanceJetsb3_stack_1->GetZaxis()->SetLabelFont(42);
   b3/BalanceJetsb3_stack_1->GetZaxis()->SetLabelSize(0.035);
   b3/BalanceJetsb3_stack_1->GetZaxis()->SetTitleSize(0.035);
   b3/BalanceJetsb3_stack_1->GetZaxis()->SetTitleFont(42);
   b3/BalanceJetsb3->SetHistogram(b3/BalanceJetsb3_stack_1);
   
   
   TH1D *BalanceJetsb31 = new TH1D("BalanceJetsb31"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJetsb31->SetBinContent(1,0.00612621);
   BalanceJetsb31->SetBinContent(2,0.05301509);
   BalanceJetsb31->SetBinContent(3,0.06050268);
   BalanceJetsb31->SetBinContent(4,0.05422598);
   BalanceJetsb31->SetBinContent(5,0.0329741);
   BalanceJetsb31->SetBinContent(6,0.00748759);
   BalanceJetsb31->SetBinContent(7,0.00204207);
   BalanceJetsb31->SetBinContent(11,0.00068069);
   BalanceJetsb31->SetBinError(1,0.00204207);
   BalanceJetsb31->SetBinError(2,0.01703657);
   BalanceJetsb31->SetBinError(3,0.0171855);
   BalanceJetsb31->SetBinError(4,0.01508408);
   BalanceJetsb31->SetBinError(5,0.012228);
   BalanceJetsb31->SetBinError(6,0.002257593);
   BalanceJetsb31->SetBinError(7,0.00117899);
   BalanceJetsb31->SetBinError(11,0.00068069);
   BalanceJetsb31->SetEntries(173);

   ci = TColor::GetColor("#00cc00");
   BalanceJetsb31->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   BalanceJetsb31->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   BalanceJetsb31->SetMarkerColor(ci);
   BalanceJetsb31->SetMarkerStyle(22);
   BalanceJetsb31->GetXaxis()->SetTitle("BalanceJetsb3");
   BalanceJetsb31->GetXaxis()->SetLabelFont(42);
   BalanceJetsb31->GetXaxis()->SetLabelSize(0.035);
   BalanceJetsb31->GetXaxis()->SetTitleSize(0.035);
   BalanceJetsb31->GetXaxis()->SetTitleFont(42);
   BalanceJetsb31->GetYaxis()->SetTitle("Events/pb");
   BalanceJetsb31->GetYaxis()->SetLabelFont(42);
   BalanceJetsb31->GetYaxis()->SetLabelSize(0.035);
   BalanceJetsb31->GetYaxis()->SetTitleSize(0.035);
   BalanceJetsb31->GetYaxis()->SetTitleFont(42);
   BalanceJetsb31->GetZaxis()->SetLabelFont(42);
   BalanceJetsb31->GetZaxis()->SetLabelSize(0.035);
   BalanceJetsb31->GetZaxis()->SetTitleSize(0.035);
   BalanceJetsb31->GetZaxis()->SetTitleFont(42);
   b3/BalanceJetsb3->Add(BalanceJetsb3,"");
   
   TH1D *BalanceJetsb32 = new TH1D("BalanceJetsb32"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJetsb32->SetBinContent(1,0.0111508);
   BalanceJetsb32->SetBinContent(2,0.07049436);
   BalanceJetsb32->SetBinContent(3,0.1319362);
   BalanceJetsb32->SetBinContent(4,0.1270012);
   BalanceJetsb32->SetBinContent(5,0.08854794);
   BalanceJetsb32->SetBinContent(6,0.04073507);
   BalanceJetsb32->SetBinContent(7,0.01628864);
   BalanceJetsb32->SetBinContent(8,0.005553828);
   BalanceJetsb32->SetBinContent(9,0.001282878);
   BalanceJetsb32->SetBinContent(10,0.0004292767);
   BalanceJetsb32->SetBinError(1,0.0006739571);
   BalanceJetsb32->SetBinError(2,0.002068599);
   BalanceJetsb32->SetBinError(3,0.00328014);
   BalanceJetsb32->SetBinError(4,0.003010858);
   BalanceJetsb32->SetBinError(5,0.002847073);
   BalanceJetsb32->SetBinError(6,0.001706019);
   BalanceJetsb32->SetBinError(7,0.001056865);
   BalanceJetsb32->SetBinError(8,0.0006115849);
   BalanceJetsb32->SetBinError(9,0.0002781364);
   BalanceJetsb32->SetBinError(10,0.0001444334);
   BalanceJetsb32->SetEntries(19755);

   ci = TColor::GetColor("#00ffff");
   BalanceJetsb32->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   BalanceJetsb32->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   BalanceJetsb32->SetMarkerColor(ci);
   BalanceJetsb32->SetMarkerStyle(20);
   BalanceJetsb32->GetXaxis()->SetTitle("BalanceJetsb3");
   BalanceJetsb32->GetXaxis()->SetLabelFont(42);
   BalanceJetsb32->GetXaxis()->SetLabelSize(0.035);
   BalanceJetsb32->GetXaxis()->SetTitleSize(0.035);
   BalanceJetsb32->GetXaxis()->SetTitleFont(42);
   BalanceJetsb32->GetYaxis()->SetTitle("Events/pb");
   BalanceJetsb32->GetYaxis()->SetLabelFont(42);
   BalanceJetsb32->GetYaxis()->SetLabelSize(0.035);
   BalanceJetsb32->GetYaxis()->SetTitleSize(0.035);
   BalanceJetsb32->GetYaxis()->SetTitleFont(42);
   BalanceJetsb32->GetZaxis()->SetLabelFont(42);
   BalanceJetsb32->GetZaxis()->SetLabelSize(0.035);
   BalanceJetsb32->GetZaxis()->SetTitleSize(0.035);
   BalanceJetsb32->GetZaxis()->SetTitleFont(42);
   b3/BalanceJetsb3->Add(BalanceJetsb3,"");
   
   TH1D *BalanceJetsb33 = new TH1D("BalanceJetsb33"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJetsb33->SetBinContent(1,0.00313853);
   BalanceJetsb33->SetBinContent(2,0.0171248);
   BalanceJetsb33->SetBinContent(3,0.03374844);
   BalanceJetsb33->SetBinContent(4,0.03366664);
   BalanceJetsb33->SetBinContent(5,0.02127293);
   BalanceJetsb33->SetBinContent(6,0.009909231);
   BalanceJetsb33->SetBinContent(7,0.004094015);
   BalanceJetsb33->SetBinContent(8,0.001565811);
   BalanceJetsb33->SetBinContent(9,0.0002885014);
   BalanceJetsb33->SetBinContent(10,8.825024e-05);
   BalanceJetsb33->SetBinContent(11,1.04568e-05);
   BalanceJetsb33->SetBinContent(12,1.170302e-06);
   BalanceJetsb33->SetBinError(1,0.0001943039);
   BalanceJetsb33->SetBinError(2,0.0004393697);
   BalanceJetsb33->SetBinError(3,0.0007091198);
   BalanceJetsb33->SetBinError(4,0.0007198793);
   BalanceJetsb33->SetBinError(5,0.0005727881);
   BalanceJetsb33->SetBinError(6,0.0003959628);
   BalanceJetsb33->SetBinError(7,0.0002494528);
   BalanceJetsb33->SetBinError(8,0.0001578154);
   BalanceJetsb33->SetBinError(9,4.656358e-05);
   BalanceJetsb33->SetBinError(10,3.067172e-05);
   BalanceJetsb33->SetBinError(11,4.474012e-06);
   BalanceJetsb33->SetBinError(12,1.170302e-06);
   BalanceJetsb33->SetEntries(37083);

   ci = TColor::GetColor("#ffcc00");
   BalanceJetsb33->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   BalanceJetsb33->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   BalanceJetsb33->SetMarkerColor(ci);
   BalanceJetsb33->SetMarkerStyle(21);
   BalanceJetsb33->GetXaxis()->SetTitle("BalanceJetsb3");
   BalanceJetsb33->GetXaxis()->SetLabelFont(42);
   BalanceJetsb33->GetXaxis()->SetLabelSize(0.035);
   BalanceJetsb33->GetXaxis()->SetTitleSize(0.035);
   BalanceJetsb33->GetXaxis()->SetTitleFont(42);
   BalanceJetsb33->GetYaxis()->SetTitle("Events/pb");
   BalanceJetsb33->GetYaxis()->SetLabelFont(42);
   BalanceJetsb33->GetYaxis()->SetLabelSize(0.035);
   BalanceJetsb33->GetYaxis()->SetTitleSize(0.035);
   BalanceJetsb33->GetYaxis()->SetTitleFont(42);
   BalanceJetsb33->GetZaxis()->SetLabelFont(42);
   BalanceJetsb33->GetZaxis()->SetLabelSize(0.035);
   BalanceJetsb33->GetZaxis()->SetTitleSize(0.035);
   BalanceJetsb33->GetZaxis()->SetTitleFont(42);
   b3/BalanceJetsb3->Add(BalanceJetsb3,"");
   
   TH1D *BalanceJetsb34 = new TH1D("BalanceJetsb34"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJetsb34->SetBinContent(1,0.0003393407);
   BalanceJetsb34->SetBinContent(2,0.002606753);
   BalanceJetsb34->SetBinContent(3,0.005074685);
   BalanceJetsb34->SetBinContent(4,0.006246953);
   BalanceJetsb34->SetBinContent(5,0.004858741);
   BalanceJetsb34->SetBinContent(6,0.00310034);
   BalanceJetsb34->SetBinContent(7,0.001496184);
   BalanceJetsb34->SetBinContent(8,0.000401039);
   BalanceJetsb34->SetBinContent(9,0.0002467932);
   BalanceJetsb34->SetBinContent(10,3.084915e-05);
   BalanceJetsb34->SetBinContent(11,1.542458e-05);
   BalanceJetsb34->SetBinError(1,7.234767e-05);
   BalanceJetsb34->SetBinError(2,0.0002005195);
   BalanceJetsb34->SetBinError(3,0.0002797765);
   BalanceJetsb34->SetBinError(4,0.0003104136);
   BalanceJetsb34->SetBinError(5,0.0002737591);
   BalanceJetsb34->SetBinError(6,0.0002186811);
   BalanceJetsb34->SetBinError(7,0.0001519145);
   BalanceJetsb34->SetBinError(8,7.865021e-05);
   BalanceJetsb34->SetBinError(9,6.16983e-05);
   BalanceJetsb34->SetBinError(10,2.181364e-05);
   BalanceJetsb34->SetBinError(11,1.542458e-05);
   BalanceJetsb34->SetEntries(1583);

   ci = TColor::GetColor("#ff0000");
   BalanceJetsb34->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   BalanceJetsb34->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   BalanceJetsb34->SetMarkerColor(ci);
   BalanceJetsb34->SetMarkerStyle(20);
   BalanceJetsb34->GetXaxis()->SetTitle("BalanceJetsb3");
   BalanceJetsb34->GetXaxis()->SetLabelFont(42);
   BalanceJetsb34->GetXaxis()->SetLabelSize(0.035);
   BalanceJetsb34->GetXaxis()->SetTitleSize(0.035);
   BalanceJetsb34->GetXaxis()->SetTitleFont(42);
   BalanceJetsb34->GetYaxis()->SetTitle("Events/pb");
   BalanceJetsb34->GetYaxis()->SetLabelFont(42);
   BalanceJetsb34->GetYaxis()->SetLabelSize(0.035);
   BalanceJetsb34->GetYaxis()->SetTitleSize(0.035);
   BalanceJetsb34->GetYaxis()->SetTitleFont(42);
   BalanceJetsb34->GetZaxis()->SetLabelFont(42);
   BalanceJetsb34->GetZaxis()->SetLabelSize(0.035);
   BalanceJetsb34->GetZaxis()->SetTitleSize(0.035);
   BalanceJetsb34->GetZaxis()->SetTitleFont(42);
   b3/BalanceJetsb3->Add(BalanceJetsb3,"");
   
   TH1D *BalanceJetsb35 = new TH1D("BalanceJetsb35"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJetsb35->SetBinContent(2,0.0001677165);
   BalanceJetsb35->SetBinContent(3,0.0003522046);
   BalanceJetsb35->SetBinContent(4,0.0006876375);
   BalanceJetsb35->SetBinContent(5,0.0005366927);
   BalanceJetsb35->SetBinContent(6,0.0002012598);
   BalanceJetsb35->SetBinContent(7,0.0001341732);
   BalanceJetsb35->SetBinContent(8,6.708659e-05);
   BalanceJetsb35->SetBinContent(9,6.708659e-05);
   BalanceJetsb35->SetBinError(2,5.303661e-05);
   BalanceJetsb35->SetBinError(3,7.685734e-05);
   BalanceJetsb35->SetBinError(4,0.0001073909);
   BalanceJetsb35->SetBinError(5,9.487477e-05);
   BalanceJetsb35->SetBinError(6,5.809869e-05);
   BalanceJetsb35->SetBinError(7,4.743738e-05);
   BalanceJetsb35->SetBinError(8,3.35433e-05);
   BalanceJetsb35->SetBinError(9,3.35433e-05);
   BalanceJetsb35->SetEntries(132);

   ci = TColor::GetColor("#0000ff");
   BalanceJetsb35->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   BalanceJetsb35->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   BalanceJetsb35->SetMarkerColor(ci);
   BalanceJetsb35->SetMarkerStyle(21);
   BalanceJetsb35->GetXaxis()->SetTitle("BalanceJetsb3");
   BalanceJetsb35->GetXaxis()->SetLabelFont(42);
   BalanceJetsb35->GetXaxis()->SetLabelSize(0.035);
   BalanceJetsb35->GetXaxis()->SetTitleSize(0.035);
   BalanceJetsb35->GetXaxis()->SetTitleFont(42);
   BalanceJetsb35->GetYaxis()->SetTitle("Events/pb");
   BalanceJetsb35->GetYaxis()->SetLabelFont(42);
   BalanceJetsb35->GetYaxis()->SetLabelSize(0.035);
   BalanceJetsb35->GetYaxis()->SetTitleSize(0.035);
   BalanceJetsb35->GetYaxis()->SetTitleFont(42);
   BalanceJetsb35->GetZaxis()->SetLabelFont(42);
   BalanceJetsb35->GetZaxis()->SetLabelSize(0.035);
   BalanceJetsb35->GetZaxis()->SetTitleSize(0.035);
   BalanceJetsb35->GetZaxis()->SetTitleFont(42);
   b3/BalanceJetsb3->Add(BalanceJetsb3,"");
   b3/BalanceJetsb3->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.2780747,0.94,0.7219253,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b3/BalanceJetsb3");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("BalanceJetsb3","b3/BalanceJetsb3_QCD_b3/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BalanceJetsb3","b3/BalanceJetsb3_WJetsToLNu_b3/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BalanceJetsb3","b3/BalanceJetsb3_ZJetsToNuNu_b3/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BalanceJetsb3","b3/BalanceJetsb3_signal_b3/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BalanceJetsb3","b3/BalanceJetsb3_ttbar_b3/","lp");

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
   b3/BalanceJetsb3->Modified();
   b3/BalanceJetsb3->cd();
   b3/BalanceJetsb3->SetSelected(b3/BalanceJetsb3);
}
