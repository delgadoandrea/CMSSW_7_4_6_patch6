void muptb3()
{
//=========Macro generated from canvas: b3/muptb3/b3/muptb3
//=========  (Tue Nov 24 14:24:01 2015) by ROOT version6.02/05
   TCanvas *b3/muptb3 = new TCanvas("b3/muptb3", "b3/muptb3",240,262,700,700);
   b3/muptb3->Range(1.5,-5.015617,16.5,-0.8319159);
   b3/muptb3->SetFillColor(0);
   b3/muptb3->SetBorderMode(0);
   b3/muptb3->SetBorderSize(2);
   b3/muptb3->SetLogy();
   b3/muptb3->SetFrameBorderMode(0);
   b3/muptb3->SetFrameBorderMode(0);
   
   THStack *b3/muptb3 = new THStack();
   b3/muptb3->SetName("b3/muptb3");
   b3/muptb3->SetTitle("b3/muptb3");
   
   TH1F *b3/muptb3_stack_13 = new TH1F("b3/muptb3_stack_13","b3/muptb3",12,3,15);
   b3/muptb3_stack_13->SetMinimum(2.527863e-05);
   b3/muptb3_stack_13->SetMaximum(0.05619712);
   b3/muptb3_stack_13->SetDirectory(0);
   b3/muptb3_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b3/muptb3_stack_13->SetLineColor(ci);
   b3/muptb3_stack_13->GetXaxis()->SetTitle("b3/muptb3");
   b3/muptb3_stack_13->GetXaxis()->SetLabelFont(42);
   b3/muptb3_stack_13->GetXaxis()->SetLabelSize(0.035);
   b3/muptb3_stack_13->GetXaxis()->SetTitleSize(0.035);
   b3/muptb3_stack_13->GetXaxis()->SetTitleFont(42);
   b3/muptb3_stack_13->GetYaxis()->SetTitle("Events/pb");
   b3/muptb3_stack_13->GetYaxis()->SetLabelFont(42);
   b3/muptb3_stack_13->GetYaxis()->SetLabelSize(0.035);
   b3/muptb3_stack_13->GetYaxis()->SetTitleSize(0.035);
   b3/muptb3_stack_13->GetYaxis()->SetTitleFont(42);
   b3/muptb3_stack_13->GetZaxis()->SetLabelFont(42);
   b3/muptb3_stack_13->GetZaxis()->SetLabelSize(0.035);
   b3/muptb3_stack_13->GetZaxis()->SetTitleSize(0.035);
   b3/muptb3_stack_13->GetZaxis()->SetTitleFont(42);
   b3/muptb3->SetHistogram(b3/muptb3_stack_13);
   
   
   TH1D *muptb361 = new TH1D("muptb361","p_{T, #mu}",12,3,15);
   muptb361->SetBinContent(0,0.1902065);
   muptb361->SetBinContent(1,0.02004099);
   muptb361->SetBinContent(2,0.00204207);
   muptb361->SetBinContent(4,0.00068069);
   muptb361->SetBinContent(5,0.00204207);
   muptb361->SetBinContent(10,0.00136138);
   muptb361->SetBinContent(11,0.00068069);
   muptb361->SetBinError(0,0.02878203);
   muptb361->SetBinError(1,0.01186257);
   muptb361->SetBinError(2,0.00117899);
   muptb361->SetBinError(4,0.00068069);
   muptb361->SetBinError(5,0.00117899);
   muptb361->SetBinError(10,0.000962641);
   muptb361->SetBinError(11,0.00068069);
   muptb361->SetEntries(173);

   ci = TColor::GetColor("#00cc00");
   muptb361->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   muptb361->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   muptb361->SetMarkerColor(ci);
   muptb361->SetMarkerStyle(22);
   muptb361->GetXaxis()->SetTitle("muptb3");
   muptb361->GetXaxis()->SetLabelFont(42);
   muptb361->GetXaxis()->SetLabelSize(0.035);
   muptb361->GetXaxis()->SetTitleSize(0.035);
   muptb361->GetXaxis()->SetTitleFont(42);
   muptb361->GetYaxis()->SetTitle("Events/pb");
   muptb361->GetYaxis()->SetLabelFont(42);
   muptb361->GetYaxis()->SetLabelSize(0.035);
   muptb361->GetYaxis()->SetTitleSize(0.035);
   muptb361->GetYaxis()->SetTitleFont(42);
   muptb361->GetZaxis()->SetLabelFont(42);
   muptb361->GetZaxis()->SetLabelSize(0.035);
   muptb361->GetZaxis()->SetTitleSize(0.035);
   muptb361->GetZaxis()->SetTitleFont(42);
   b3/muptb3->Add(muptb3,"");
   
   TH1D *muptb362 = new TH1D("muptb362","p_{T, #mu}",12,3,15);
   muptb362->SetBinContent(0,0.1326856);
   muptb362->SetBinContent(1,0.0124905);
   muptb362->SetBinContent(2,0.02064608);
   muptb362->SetBinContent(3,0.02760453);
   muptb362->SetBinContent(4,0.02775893);
   muptb362->SetBinContent(5,0.03349568);
   muptb362->SetBinContent(6,0.03206996);
   muptb362->SetBinContent(7,0.03490815);
   muptb362->SetBinContent(8,0.03529936);
   muptb362->SetBinContent(9,0.03613036);
   muptb362->SetBinContent(10,0.03283353);
   muptb362->SetBinContent(11,0.03445372);
   muptb362->SetBinContent(12,0.03304387);
   muptb362->SetBinError(0,0.003243423);
   muptb362->SetBinError(1,0.0009333845);
   muptb362->SetBinError(2,0.001170876);
   muptb362->SetBinError(3,0.001445208);
   muptb362->SetBinError(4,0.001633371);
   muptb362->SetBinError(5,0.001566173);
   muptb362->SetBinError(6,0.001487368);
   muptb362->SetBinError(7,0.001553906);
   muptb362->SetBinError(8,0.001801806);
   muptb362->SetBinError(9,0.00158303);
   muptb362->SetBinError(10,0.001495922);
   muptb362->SetBinError(11,0.001556494);
   muptb362->SetBinError(12,0.001467053);
   muptb362->SetEntries(19755);

   ci = TColor::GetColor("#00ffff");
   muptb362->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   muptb362->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   muptb362->SetMarkerColor(ci);
   muptb362->SetMarkerStyle(20);
   muptb362->GetXaxis()->SetTitle("muptb3");
   muptb362->GetXaxis()->SetLabelFont(42);
   muptb362->GetXaxis()->SetLabelSize(0.035);
   muptb362->GetXaxis()->SetTitleSize(0.035);
   muptb362->GetXaxis()->SetTitleFont(42);
   muptb362->GetYaxis()->SetTitle("Events/pb");
   muptb362->GetYaxis()->SetLabelFont(42);
   muptb362->GetYaxis()->SetLabelSize(0.035);
   muptb362->GetYaxis()->SetTitleSize(0.035);
   muptb362->GetYaxis()->SetTitleFont(42);
   muptb362->GetZaxis()->SetLabelFont(42);
   muptb362->GetZaxis()->SetLabelSize(0.035);
   muptb362->GetZaxis()->SetTitleSize(0.035);
   muptb362->GetZaxis()->SetTitleFont(42);
   b3/muptb3->Add(muptb3,"");
   
   TH1D *muptb363 = new TH1D("muptb363","p_{T, #mu}",12,3,15);
   muptb363->SetBinContent(0,0.1107027);
   muptb363->SetBinContent(1,0.004194928);
   muptb363->SetBinContent(2,0.003155046);
   muptb363->SetBinContent(3,0.001710184);
   muptb363->SetBinContent(4,0.001066126);
   muptb363->SetBinContent(5,0.000868753);
   muptb363->SetBinContent(6,0.0008045132);
   muptb363->SetBinContent(7,0.0007264921);
   muptb363->SetBinContent(8,0.0004465208);
   muptb363->SetBinContent(9,0.0003340738);
   muptb363->SetBinContent(10,0.0003970994);
   muptb363->SetBinContent(11,0.0002633781);
   muptb363->SetBinContent(12,0.0002389536);
   muptb363->SetBinError(0,0.001279305);
   muptb363->SetBinError(1,0.0002306347);
   muptb363->SetBinError(2,0.000209916);
   muptb363->SetBinError(3,0.0001373028);
   muptb363->SetBinError(4,0.0001126946);
   muptb363->SetBinError(5,0.000100637);
   muptb363->SetBinError(6,0.0001134273);
   muptb363->SetBinError(7,0.0001093988);
   muptb363->SetBinError(8,7.86297e-05);
   muptb363->SetBinError(9,7.193512e-05);
   muptb363->SetBinError(10,8.245546e-05);
   muptb363->SetBinError(11,6.522616e-05);
   muptb363->SetBinError(12,6.48869e-05);
   muptb363->SetEntries(37083);

   ci = TColor::GetColor("#ffcc00");
   muptb363->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   muptb363->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   muptb363->SetMarkerColor(ci);
   muptb363->SetMarkerStyle(21);
   muptb363->GetXaxis()->SetTitle("muptb3");
   muptb363->GetXaxis()->SetLabelFont(42);
   muptb363->GetXaxis()->SetLabelSize(0.035);
   muptb363->GetXaxis()->SetTitleSize(0.035);
   muptb363->GetXaxis()->SetTitleFont(42);
   muptb363->GetYaxis()->SetTitle("Events/pb");
   muptb363->GetYaxis()->SetLabelFont(42);
   muptb363->GetYaxis()->SetLabelSize(0.035);
   muptb363->GetYaxis()->SetTitleSize(0.035);
   muptb363->GetYaxis()->SetTitleFont(42);
   muptb363->GetZaxis()->SetLabelFont(42);
   muptb363->GetZaxis()->SetLabelSize(0.035);
   muptb363->GetZaxis()->SetTitleSize(0.035);
   muptb363->GetZaxis()->SetTitleFont(42);
   b3/muptb3->Add(muptb3,"");
   
   TH1D *muptb364 = new TH1D("muptb364","p_{T, #mu}",12,3,15);
   muptb364->SetBinContent(0,0.00637035);
   muptb364->SetBinContent(1,0.00198977);
   muptb364->SetBinContent(2,0.002144016);
   muptb364->SetBinContent(3,0.002236564);
   muptb364->SetBinContent(4,0.002236564);
   muptb364->SetBinContent(5,0.002036044);
   muptb364->SetBinContent(6,0.001557882);
   muptb364->SetBinContent(7,0.001403636);
   muptb364->SetBinContent(8,0.001095145);
   muptb364->SetBinContent(9,0.001110569);
   muptb364->SetBinContent(10,0.0008329271);
   muptb364->SetBinContent(11,0.0008483517);
   muptb364->SetBinContent(12,0.0005552847);
   muptb364->SetBinError(0,0.0003134644);
   muptb364->SetBinError(1,0.0001751895);
   muptb364->SetBinError(2,0.0001818531);
   muptb364->SetBinError(3,0.0001857365);
   muptb364->SetBinError(4,0.0001857365);
   muptb364->SetBinError(5,0.0001772149);
   muptb364->SetBinError(6,0.0001550151);
   muptb364->SetBinError(7,0.0001471411);
   muptb364->SetBinError(8,0.0001299698);
   muptb364->SetBinError(9,0.0001308819);
   muptb364->SetBinError(10,0.000113347);
   muptb364->SetBinError(11,0.0001143917);
   muptb364->SetBinError(12,9.254746e-05);
   muptb364->SetEntries(1583);

   ci = TColor::GetColor("#ff0000");
   muptb364->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   muptb364->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   muptb364->SetMarkerColor(ci);
   muptb364->SetMarkerStyle(20);
   muptb364->GetXaxis()->SetTitle("muptb3");
   muptb364->GetXaxis()->SetLabelFont(42);
   muptb364->GetXaxis()->SetLabelSize(0.035);
   muptb364->GetXaxis()->SetTitleSize(0.035);
   muptb364->GetXaxis()->SetTitleFont(42);
   muptb364->GetYaxis()->SetTitle("Events/pb");
   muptb364->GetYaxis()->SetLabelFont(42);
   muptb364->GetYaxis()->SetLabelSize(0.035);
   muptb364->GetYaxis()->SetTitleSize(0.035);
   muptb364->GetYaxis()->SetTitleFont(42);
   muptb364->GetZaxis()->SetLabelFont(42);
   muptb364->GetZaxis()->SetLabelSize(0.035);
   muptb364->GetZaxis()->SetTitleSize(0.035);
   muptb364->GetZaxis()->SetTitleFont(42);
   b3/muptb3->Add(muptb3,"");
   
   TH1D *muptb365 = new TH1D("muptb365","p_{T, #mu}",12,3,15);
   muptb365->SetBinContent(0,0.0005534644);
   muptb365->SetBinContent(1,8.385824e-05);
   muptb365->SetBinContent(2,0.0001174015);
   muptb365->SetBinContent(3,0.0001677165);
   muptb365->SetBinContent(4,6.708659e-05);
   muptb365->SetBinContent(5,0.0001509448);
   muptb365->SetBinContent(6,0.0001677165);
   muptb365->SetBinContent(7,0.0002348031);
   muptb365->SetBinContent(8,0.0001509448);
   muptb365->SetBinContent(9,8.385824e-05);
   muptb365->SetBinContent(10,0.0001677165);
   muptb365->SetBinContent(11,0.0001341732);
   muptb365->SetBinContent(12,0.0001341732);
   muptb365->SetBinError(0,9.634578e-05);
   muptb365->SetBinError(1,3.750254e-05);
   muptb365->SetBinError(2,4.437361e-05);
   muptb365->SetBinError(3,5.303661e-05);
   muptb365->SetBinError(4,3.35433e-05);
   muptb365->SetBinError(5,5.031494e-05);
   muptb365->SetBinError(6,5.303661e-05);
   muptb365->SetBinError(7,6.275376e-05);
   muptb365->SetBinError(8,5.031494e-05);
   muptb365->SetBinError(9,3.750254e-05);
   muptb365->SetBinError(10,5.303661e-05);
   muptb365->SetBinError(11,4.743738e-05);
   muptb365->SetBinError(12,4.743738e-05);
   muptb365->SetEntries(132);

   ci = TColor::GetColor("#0000ff");
   muptb365->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   muptb365->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   muptb365->SetMarkerColor(ci);
   muptb365->SetMarkerStyle(21);
   muptb365->GetXaxis()->SetTitle("muptb3");
   muptb365->GetXaxis()->SetLabelFont(42);
   muptb365->GetXaxis()->SetLabelSize(0.035);
   muptb365->GetXaxis()->SetTitleSize(0.035);
   muptb365->GetXaxis()->SetTitleFont(42);
   muptb365->GetYaxis()->SetTitle("Events/pb");
   muptb365->GetYaxis()->SetLabelFont(42);
   muptb365->GetYaxis()->SetLabelSize(0.035);
   muptb365->GetYaxis()->SetTitleSize(0.035);
   muptb365->GetYaxis()->SetTitleFont(42);
   muptb365->GetZaxis()->SetLabelFont(42);
   muptb365->GetZaxis()->SetLabelSize(0.035);
   muptb365->GetZaxis()->SetTitleSize(0.035);
   muptb365->GetZaxis()->SetTitleFont(42);
   b3/muptb3->Add(muptb3,"");
   b3/muptb3->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3635632,0.9342857,0.6364368,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b3/muptb3");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("muptb3","b3/muptb3_QCD_b3/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("muptb3","b3/muptb3_WJetsToLNu_b3/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("muptb3","b3/muptb3_ZJetsToNuNu_b3/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("muptb3","b3/muptb3_signal_b3/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("muptb3","b3/muptb3_ttbar_b3/","lp");

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
   b3/muptb3->Modified();
   b3/muptb3->cd();
   b3/muptb3->SetSelected(b3/muptb3);
}
