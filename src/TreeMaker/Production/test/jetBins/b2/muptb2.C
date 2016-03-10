void muptb2()
{
//=========Macro generated from canvas: b2/muptb2/b2/muptb2
//=========  (Tue Nov 24 14:26:28 2015) by ROOT version6.02/05
   TCanvas *b2/muptb2 = new TCanvas("b2/muptb2", "b2/muptb2",120,142,700,700);
   b2/muptb2->Range(1.5,-5.779573,16.5,-0.5812232);
   b2/muptb2->SetFillColor(0);
   b2/muptb2->SetBorderMode(0);
   b2/muptb2->SetBorderSize(2);
   b2/muptb2->SetLogy();
   b2/muptb2->SetFrameBorderMode(0);
   b2/muptb2->SetFrameBorderMode(0);
   
   THStack *b2/muptb2 = new THStack();
   b2/muptb2->SetName("b2/muptb2");
   b2/muptb2->SetTitle("b2/muptb2");
   
   TH1F *b2/muptb2_stack_7 = new TH1F("b2/muptb2_stack_7","b2/muptb2",12,3,15);
   b2/muptb2_stack_7->SetMinimum(5.498724e-06);
   b2/muptb2_stack_7->SetMaximum(0.0792395);
   b2/muptb2_stack_7->SetDirectory(0);
   b2/muptb2_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b2/muptb2_stack_7->SetLineColor(ci);
   b2/muptb2_stack_7->GetXaxis()->SetTitle("b2/muptb2");
   b2/muptb2_stack_7->GetXaxis()->SetLabelFont(42);
   b2/muptb2_stack_7->GetXaxis()->SetLabelSize(0.035);
   b2/muptb2_stack_7->GetXaxis()->SetTitleSize(0.035);
   b2/muptb2_stack_7->GetXaxis()->SetTitleFont(42);
   b2/muptb2_stack_7->GetYaxis()->SetTitle("Events/pb");
   b2/muptb2_stack_7->GetYaxis()->SetLabelFont(42);
   b2/muptb2_stack_7->GetYaxis()->SetLabelSize(0.035);
   b2/muptb2_stack_7->GetYaxis()->SetTitleSize(0.035);
   b2/muptb2_stack_7->GetYaxis()->SetTitleFont(42);
   b2/muptb2_stack_7->GetZaxis()->SetLabelFont(42);
   b2/muptb2_stack_7->GetZaxis()->SetLabelSize(0.035);
   b2/muptb2_stack_7->GetZaxis()->SetTitleSize(0.035);
   b2/muptb2_stack_7->GetZaxis()->SetTitleFont(42);
   b2/muptb2->SetHistogram(b2/muptb2_stack_7);
   
   
   TH1D *muptb231 = new TH1D("muptb231","p_{T, #mu}",12,3,15);
   muptb231->SetBinContent(0,0.09528963);
   muptb231->SetBinContent(1,0.01036084);
   muptb231->SetBinContent(2,0.00831877);
   muptb231->SetBinContent(3,0.00831877);
   muptb231->SetBinContent(4,0.00136138);
   muptb231->SetBinContent(5,0.00831877);
   muptb231->SetBinError(0,0.02523326);
   muptb231->SetBinError(1,0.008401902);
   muptb231->SetBinError(2,0.00831877);
   muptb231->SetBinError(3,0.00831877);
   muptb231->SetBinError(4,0.000962641);
   muptb231->SetBinError(5,0.00831877);
   muptb231->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   muptb231->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   muptb231->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   muptb231->SetMarkerColor(ci);
   muptb231->SetMarkerStyle(22);
   muptb231->GetXaxis()->SetTitle("muptb2");
   muptb231->GetXaxis()->SetLabelFont(42);
   muptb231->GetXaxis()->SetLabelSize(0.035);
   muptb231->GetXaxis()->SetTitleSize(0.035);
   muptb231->GetXaxis()->SetTitleFont(42);
   muptb231->GetYaxis()->SetTitle("Events/pb");
   muptb231->GetYaxis()->SetLabelFont(42);
   muptb231->GetYaxis()->SetLabelSize(0.035);
   muptb231->GetYaxis()->SetTitleSize(0.035);
   muptb231->GetYaxis()->SetTitleFont(42);
   muptb231->GetZaxis()->SetLabelFont(42);
   muptb231->GetZaxis()->SetLabelSize(0.035);
   muptb231->GetZaxis()->SetTitleSize(0.035);
   muptb231->GetZaxis()->SetTitleFont(42);
   b2/muptb2->Add(muptb2,"");
   
   TH1D *muptb232 = new TH1D("muptb232","p_{T, #mu}",12,3,15);
   muptb232->SetBinContent(0,0.1226832);
   muptb232->SetBinContent(1,0.01576664);
   muptb232->SetBinContent(2,0.02686123);
   muptb232->SetBinContent(3,0.0300653);
   muptb232->SetBinContent(4,0.04313908);
   muptb232->SetBinContent(5,0.04622656);
   muptb232->SetBinContent(6,0.04397269);
   muptb232->SetBinContent(7,0.0466654);
   muptb232->SetBinContent(8,0.04464428);
   muptb232->SetBinContent(9,0.04567161);
   muptb232->SetBinContent(10,0.04576718);
   muptb232->SetBinContent(11,0.04573604);
   muptb232->SetBinContent(12,0.0432621);
   muptb232->SetBinError(0,0.004632997);
   muptb232->SetBinError(1,0.00154665);
   muptb232->SetBinError(2,0.002297567);
   muptb232->SetBinError(3,0.001976577);
   muptb232->SetBinError(4,0.002653762);
   muptb232->SetBinError(5,0.002880241);
   muptb232->SetBinError(6,0.002311441);
   muptb232->SetBinError(7,0.003138895);
   muptb232->SetBinError(8,0.002657904);
   muptb232->SetBinError(9,0.002518092);
   muptb232->SetBinError(10,0.002967733);
   muptb232->SetBinError(11,0.002376385);
   muptb232->SetBinError(12,0.002634681);
   muptb232->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   muptb232->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   muptb232->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   muptb232->SetMarkerColor(ci);
   muptb232->SetMarkerStyle(20);
   muptb232->GetXaxis()->SetTitle("muptb2");
   muptb232->GetXaxis()->SetLabelFont(42);
   muptb232->GetXaxis()->SetLabelSize(0.035);
   muptb232->GetXaxis()->SetTitleSize(0.035);
   muptb232->GetXaxis()->SetTitleFont(42);
   muptb232->GetYaxis()->SetTitle("Events/pb");
   muptb232->GetYaxis()->SetLabelFont(42);
   muptb232->GetYaxis()->SetLabelSize(0.035);
   muptb232->GetYaxis()->SetTitleSize(0.035);
   muptb232->GetYaxis()->SetTitleFont(42);
   muptb232->GetZaxis()->SetLabelFont(42);
   muptb232->GetZaxis()->SetLabelSize(0.035);
   muptb232->GetZaxis()->SetTitleSize(0.035);
   muptb232->GetZaxis()->SetTitleFont(42);
   b2/muptb2->Add(muptb2,"");
   
   TH1D *muptb233 = new TH1D("muptb233","p_{T, #mu}",12,3,15);
   muptb233->SetBinContent(0,0.1312741);
   muptb233->SetBinContent(1,0.0052046);
   muptb233->SetBinContent(2,0.003033367);
   muptb233->SetBinContent(3,0.002084436);
   muptb233->SetBinContent(4,0.001236077);
   muptb233->SetBinContent(5,0.0009835193);
   muptb233->SetBinContent(6,0.0007210172);
   muptb233->SetBinContent(7,0.00041467);
   muptb233->SetBinContent(8,0.0005353807);
   muptb233->SetBinContent(9,0.0004087223);
   muptb233->SetBinContent(10,0.0002236638);
   muptb233->SetBinContent(11,0.00018097);
   muptb233->SetBinContent(12,0.0001758427);
   muptb233->SetBinError(0,0.001797165);
   muptb233->SetBinError(1,0.000370839);
   muptb233->SetBinError(2,0.0002911441);
   muptb233->SetBinError(3,0.0002416489);
   muptb233->SetBinError(4,0.0001645486);
   muptb233->SetBinError(5,0.0001436155);
   muptb233->SetBinError(6,0.0001250425);
   muptb233->SetBinError(7,9.485455e-05);
   muptb233->SetBinError(8,0.000137087);
   muptb233->SetBinError(9,0.0001249235);
   muptb233->SetBinError(10,6.480891e-05);
   muptb233->SetBinError(11,6.393744e-05);
   muptb233->SetBinError(12,5.797593e-05);
   muptb233->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   muptb233->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   muptb233->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   muptb233->SetMarkerColor(ci);
   muptb233->SetMarkerStyle(21);
   muptb233->GetXaxis()->SetTitle("muptb2");
   muptb233->GetXaxis()->SetLabelFont(42);
   muptb233->GetXaxis()->SetLabelSize(0.035);
   muptb233->GetXaxis()->SetTitleSize(0.035);
   muptb233->GetXaxis()->SetTitleFont(42);
   muptb233->GetYaxis()->SetTitle("Events/pb");
   muptb233->GetYaxis()->SetLabelFont(42);
   muptb233->GetYaxis()->SetLabelSize(0.035);
   muptb233->GetYaxis()->SetTitleSize(0.035);
   muptb233->GetYaxis()->SetTitleFont(42);
   muptb233->GetZaxis()->SetLabelFont(42);
   muptb233->GetZaxis()->SetLabelSize(0.035);
   muptb233->GetZaxis()->SetTitleSize(0.035);
   muptb233->GetZaxis()->SetTitleFont(42);
   b2/muptb2->Add(muptb2,"");
   
   TH1D *muptb234 = new TH1D("muptb234","p_{T, #mu}",12,3,15);
   muptb234->SetBinContent(0,0.00418006);
   muptb234->SetBinContent(1,0.001465335);
   muptb234->SetBinContent(2,0.001665854);
   muptb234->SetBinContent(3,0.001527033);
   muptb234->SetBinContent(4,0.001388212);
   muptb234->SetBinContent(5,0.001187692);
   muptb234->SetBinContent(6,0.00128024);
   muptb234->SetBinContent(7,0.0009871729);
   muptb234->SetBinContent(8,0.0005707093);
   muptb234->SetBinContent(9,0.0005552847);
   muptb234->SetBinContent(10,0.0003856144);
   muptb234->SetBinContent(11,0.0003856144);
   muptb234->SetBinContent(12,0.0003547652);
   muptb234->SetBinError(0,0.0002539206);
   muptb234->SetBinError(1,0.0001503402);
   muptb234->SetBinError(2,0.0001602969);
   muptb234->SetBinError(3,0.0001534726);
   muptb234->SetBinError(4,0.0001463304);
   muptb234->SetBinError(5,0.0001353501);
   muptb234->SetBinError(6,0.0001405246);
   muptb234->SetBinError(7,0.0001233966);
   muptb234->SetBinError(8,9.382403e-05);
   muptb234->SetBinError(9,9.254746e-05);
   muptb234->SetBinError(10,7.712288e-05);
   muptb234->SetBinError(11,7.712288e-05);
   muptb234->SetBinError(12,7.397367e-05);
   muptb234->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   muptb234->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   muptb234->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   muptb234->SetMarkerColor(ci);
   muptb234->SetMarkerStyle(20);
   muptb234->GetXaxis()->SetTitle("muptb2");
   muptb234->GetXaxis()->SetLabelFont(42);
   muptb234->GetXaxis()->SetLabelSize(0.035);
   muptb234->GetXaxis()->SetTitleSize(0.035);
   muptb234->GetXaxis()->SetTitleFont(42);
   muptb234->GetYaxis()->SetTitle("Events/pb");
   muptb234->GetYaxis()->SetLabelFont(42);
   muptb234->GetYaxis()->SetLabelSize(0.035);
   muptb234->GetYaxis()->SetTitleSize(0.035);
   muptb234->GetYaxis()->SetTitleFont(42);
   muptb234->GetZaxis()->SetLabelFont(42);
   muptb234->GetZaxis()->SetLabelSize(0.035);
   muptb234->GetZaxis()->SetTitleSize(0.035);
   muptb234->GetZaxis()->SetTitleFont(42);
   b2/muptb2->Add(muptb2,"");
   
   TH1D *muptb235 = new TH1D("muptb235","p_{T, #mu}",12,3,15);
   muptb235->SetBinContent(2,1.677165e-05);
   muptb235->SetBinError(2,1.677165e-05);
   muptb235->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   muptb235->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   muptb235->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   muptb235->SetMarkerColor(ci);
   muptb235->SetMarkerStyle(21);
   muptb235->GetXaxis()->SetTitle("muptb2");
   muptb235->GetXaxis()->SetLabelFont(42);
   muptb235->GetXaxis()->SetLabelSize(0.035);
   muptb235->GetXaxis()->SetTitleSize(0.035);
   muptb235->GetXaxis()->SetTitleFont(42);
   muptb235->GetYaxis()->SetTitle("Events/pb");
   muptb235->GetYaxis()->SetLabelFont(42);
   muptb235->GetYaxis()->SetLabelSize(0.035);
   muptb235->GetYaxis()->SetTitleSize(0.035);
   muptb235->GetYaxis()->SetTitleFont(42);
   muptb235->GetZaxis()->SetLabelFont(42);
   muptb235->GetZaxis()->SetLabelSize(0.035);
   muptb235->GetZaxis()->SetTitleSize(0.035);
   muptb235->GetZaxis()->SetTitleFont(42);
   b2/muptb2->Add(muptb2,"");
   b2/muptb2->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3635632,0.9342857,0.6364368,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b2/muptb2");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("muptb2","b2/muptb2_QCD_b2/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("muptb2","b2/muptb2_WJetsToLNu_b2/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("muptb2","b2/muptb2_ZJetsToNuNu_b2/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("muptb2","b2/muptb2_signal_b2/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("muptb2","b2/muptb2_ttbar_b2/","lp");

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
   b2/muptb2->Modified();
   b2/muptb2->cd();
   b2/muptb2->SetSelected(b2/muptb2);
}
