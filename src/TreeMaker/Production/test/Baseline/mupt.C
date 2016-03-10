void mupt()
{
//=========Macro generated from canvas: mupt/mupt
//=========  (Mon Nov 23 12:45:13 2015) by ROOT version6.02/05
   TCanvas *mupt = new TCanvas("mupt", "mupt",280,302,700,700);
   mupt->Range(1.5,-5.779573,16.5,-0.5812232);
   mupt->SetFillColor(0);
   mupt->SetBorderMode(0);
   mupt->SetBorderSize(2);
   mupt->SetLogy();
   mupt->SetFrameBorderMode(0);
   mupt->SetFrameBorderMode(0);
   
   THStack *mupt = new THStack();
   mupt->SetName("mupt");
   mupt->SetTitle("mupt");
   
   TH1F *mupt_stack_15 = new TH1F("mupt_stack_15","mupt",12,3,15);
   mupt_stack_15->SetMinimum(5.498724e-06);
   mupt_stack_15->SetMaximum(0.0792395);
   mupt_stack_15->SetDirectory(0);
   mupt_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   mupt_stack_15->SetLineColor(ci);
   mupt_stack_15->GetXaxis()->SetTitle("mupt");
   mupt_stack_15->GetXaxis()->SetLabelFont(42);
   mupt_stack_15->GetXaxis()->SetLabelSize(0.035);
   mupt_stack_15->GetXaxis()->SetTitleSize(0.035);
   mupt_stack_15->GetXaxis()->SetTitleFont(42);
   mupt_stack_15->GetYaxis()->SetTitle("Events/pb");
   mupt_stack_15->GetYaxis()->SetLabelFont(42);
   mupt_stack_15->GetYaxis()->SetLabelSize(0.035);
   mupt_stack_15->GetYaxis()->SetTitleSize(0.035);
   mupt_stack_15->GetYaxis()->SetTitleFont(42);
   mupt_stack_15->GetZaxis()->SetLabelFont(42);
   mupt_stack_15->GetZaxis()->SetLabelSize(0.035);
   mupt_stack_15->GetZaxis()->SetTitleSize(0.035);
   mupt_stack_15->GetZaxis()->SetTitleFont(42);
   mupt->SetHistogram(mupt_stack_15);
   
   
   TH1D *mupt71 = new TH1D("mupt71","p_{T, #mu}",12,3,15);
   mupt71->SetBinContent(0,0.09528963);
   mupt71->SetBinContent(1,0.01036084);
   mupt71->SetBinContent(2,0.00831877);
   mupt71->SetBinContent(3,0.00831877);
   mupt71->SetBinContent(4,0.00136138);
   mupt71->SetBinContent(5,0.00831877);
   mupt71->SetBinError(0,0.02523326);
   mupt71->SetBinError(1,0.008401902);
   mupt71->SetBinError(2,0.00831877);
   mupt71->SetBinError(3,0.00831877);
   mupt71->SetBinError(4,0.000962641);
   mupt71->SetBinError(5,0.00831877);
   mupt71->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   mupt71->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   mupt71->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   mupt71->SetMarkerColor(ci);
   mupt71->SetMarkerStyle(22);
   mupt71->GetXaxis()->SetTitle("mupt");
   mupt71->GetXaxis()->SetLabelFont(42);
   mupt71->GetXaxis()->SetLabelSize(0.035);
   mupt71->GetXaxis()->SetTitleSize(0.035);
   mupt71->GetXaxis()->SetTitleFont(42);
   mupt71->GetYaxis()->SetTitle("Events/pb");
   mupt71->GetYaxis()->SetLabelFont(42);
   mupt71->GetYaxis()->SetLabelSize(0.035);
   mupt71->GetYaxis()->SetTitleSize(0.035);
   mupt71->GetYaxis()->SetTitleFont(42);
   mupt71->GetZaxis()->SetLabelFont(42);
   mupt71->GetZaxis()->SetLabelSize(0.035);
   mupt71->GetZaxis()->SetTitleSize(0.035);
   mupt71->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   
   TH1D *mupt72 = new TH1D("mupt72","p_{T, #mu}",12,3,15);
   mupt72->SetBinContent(0,0.1226832);
   mupt72->SetBinContent(1,0.01576664);
   mupt72->SetBinContent(2,0.02686123);
   mupt72->SetBinContent(3,0.0300653);
   mupt72->SetBinContent(4,0.04313908);
   mupt72->SetBinContent(5,0.04622656);
   mupt72->SetBinContent(6,0.04397269);
   mupt72->SetBinContent(7,0.0466654);
   mupt72->SetBinContent(8,0.04464428);
   mupt72->SetBinContent(9,0.04567161);
   mupt72->SetBinContent(10,0.04576718);
   mupt72->SetBinContent(11,0.04573604);
   mupt72->SetBinContent(12,0.0432621);
   mupt72->SetBinError(0,0.004632997);
   mupt72->SetBinError(1,0.00154665);
   mupt72->SetBinError(2,0.002297567);
   mupt72->SetBinError(3,0.001976577);
   mupt72->SetBinError(4,0.002653762);
   mupt72->SetBinError(5,0.002880241);
   mupt72->SetBinError(6,0.002311441);
   mupt72->SetBinError(7,0.003138895);
   mupt72->SetBinError(8,0.002657904);
   mupt72->SetBinError(9,0.002518092);
   mupt72->SetBinError(10,0.002967733);
   mupt72->SetBinError(11,0.002376385);
   mupt72->SetBinError(12,0.002634681);
   mupt72->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   mupt72->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   mupt72->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   mupt72->SetMarkerColor(ci);
   mupt72->SetMarkerStyle(20);
   mupt72->GetXaxis()->SetTitle("mupt");
   mupt72->GetXaxis()->SetLabelFont(42);
   mupt72->GetXaxis()->SetLabelSize(0.035);
   mupt72->GetXaxis()->SetTitleSize(0.035);
   mupt72->GetXaxis()->SetTitleFont(42);
   mupt72->GetYaxis()->SetTitle("Events/pb");
   mupt72->GetYaxis()->SetLabelFont(42);
   mupt72->GetYaxis()->SetLabelSize(0.035);
   mupt72->GetYaxis()->SetTitleSize(0.035);
   mupt72->GetYaxis()->SetTitleFont(42);
   mupt72->GetZaxis()->SetLabelFont(42);
   mupt72->GetZaxis()->SetLabelSize(0.035);
   mupt72->GetZaxis()->SetTitleSize(0.035);
   mupt72->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   
   TH1D *mupt73 = new TH1D("mupt73","p_{T, #mu}",12,3,15);
   mupt73->SetBinContent(0,0.1312741);
   mupt73->SetBinContent(1,0.0052046);
   mupt73->SetBinContent(2,0.003033367);
   mupt73->SetBinContent(3,0.002084436);
   mupt73->SetBinContent(4,0.001236077);
   mupt73->SetBinContent(5,0.0009835193);
   mupt73->SetBinContent(6,0.0007210172);
   mupt73->SetBinContent(7,0.00041467);
   mupt73->SetBinContent(8,0.0005353807);
   mupt73->SetBinContent(9,0.0004087223);
   mupt73->SetBinContent(10,0.0002236638);
   mupt73->SetBinContent(11,0.00018097);
   mupt73->SetBinContent(12,0.0001758427);
   mupt73->SetBinError(0,0.001797165);
   mupt73->SetBinError(1,0.000370839);
   mupt73->SetBinError(2,0.0002911441);
   mupt73->SetBinError(3,0.0002416489);
   mupt73->SetBinError(4,0.0001645486);
   mupt73->SetBinError(5,0.0001436155);
   mupt73->SetBinError(6,0.0001250425);
   mupt73->SetBinError(7,9.485455e-05);
   mupt73->SetBinError(8,0.000137087);
   mupt73->SetBinError(9,0.0001249235);
   mupt73->SetBinError(10,6.480891e-05);
   mupt73->SetBinError(11,6.393744e-05);
   mupt73->SetBinError(12,5.797593e-05);
   mupt73->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   mupt73->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   mupt73->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   mupt73->SetMarkerColor(ci);
   mupt73->SetMarkerStyle(21);
   mupt73->GetXaxis()->SetTitle("mupt");
   mupt73->GetXaxis()->SetLabelFont(42);
   mupt73->GetXaxis()->SetLabelSize(0.035);
   mupt73->GetXaxis()->SetTitleSize(0.035);
   mupt73->GetXaxis()->SetTitleFont(42);
   mupt73->GetYaxis()->SetTitle("Events/pb");
   mupt73->GetYaxis()->SetLabelFont(42);
   mupt73->GetYaxis()->SetLabelSize(0.035);
   mupt73->GetYaxis()->SetTitleSize(0.035);
   mupt73->GetYaxis()->SetTitleFont(42);
   mupt73->GetZaxis()->SetLabelFont(42);
   mupt73->GetZaxis()->SetLabelSize(0.035);
   mupt73->GetZaxis()->SetTitleSize(0.035);
   mupt73->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   
   TH1D *mupt74 = new TH1D("mupt74","p_{T, #mu}",12,3,15);
   mupt74->SetBinContent(0,0.00418006);
   mupt74->SetBinContent(1,0.001465335);
   mupt74->SetBinContent(2,0.001665854);
   mupt74->SetBinContent(3,0.001527033);
   mupt74->SetBinContent(4,0.001388212);
   mupt74->SetBinContent(5,0.001187692);
   mupt74->SetBinContent(6,0.00128024);
   mupt74->SetBinContent(7,0.0009871729);
   mupt74->SetBinContent(8,0.0005707093);
   mupt74->SetBinContent(9,0.0005552847);
   mupt74->SetBinContent(10,0.0003856144);
   mupt74->SetBinContent(11,0.0003856144);
   mupt74->SetBinContent(12,0.0003547652);
   mupt74->SetBinError(0,0.0002539206);
   mupt74->SetBinError(1,0.0001503402);
   mupt74->SetBinError(2,0.0001602969);
   mupt74->SetBinError(3,0.0001534726);
   mupt74->SetBinError(4,0.0001463304);
   mupt74->SetBinError(5,0.0001353501);
   mupt74->SetBinError(6,0.0001405246);
   mupt74->SetBinError(7,0.0001233966);
   mupt74->SetBinError(8,9.382403e-05);
   mupt74->SetBinError(9,9.254746e-05);
   mupt74->SetBinError(10,7.712288e-05);
   mupt74->SetBinError(11,7.712288e-05);
   mupt74->SetBinError(12,7.397367e-05);
   mupt74->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   mupt74->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   mupt74->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   mupt74->SetMarkerColor(ci);
   mupt74->SetMarkerStyle(20);
   mupt74->GetXaxis()->SetTitle("mupt");
   mupt74->GetXaxis()->SetLabelFont(42);
   mupt74->GetXaxis()->SetLabelSize(0.035);
   mupt74->GetXaxis()->SetTitleSize(0.035);
   mupt74->GetXaxis()->SetTitleFont(42);
   mupt74->GetYaxis()->SetTitle("Events/pb");
   mupt74->GetYaxis()->SetLabelFont(42);
   mupt74->GetYaxis()->SetLabelSize(0.035);
   mupt74->GetYaxis()->SetTitleSize(0.035);
   mupt74->GetYaxis()->SetTitleFont(42);
   mupt74->GetZaxis()->SetLabelFont(42);
   mupt74->GetZaxis()->SetLabelSize(0.035);
   mupt74->GetZaxis()->SetTitleSize(0.035);
   mupt74->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   
   TH1D *mupt75 = new TH1D("mupt75","p_{T, #mu}",12,3,15);
   mupt75->SetBinContent(2,1.677165e-05);
   mupt75->SetBinError(2,1.677165e-05);
   mupt75->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   mupt75->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   mupt75->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   mupt75->SetMarkerColor(ci);
   mupt75->SetMarkerStyle(21);
   mupt75->GetXaxis()->SetTitle("mupt");
   mupt75->GetXaxis()->SetLabelFont(42);
   mupt75->GetXaxis()->SetLabelSize(0.035);
   mupt75->GetXaxis()->SetTitleSize(0.035);
   mupt75->GetXaxis()->SetTitleFont(42);
   mupt75->GetYaxis()->SetTitle("Events/pb");
   mupt75->GetYaxis()->SetLabelFont(42);
   mupt75->GetYaxis()->SetLabelSize(0.035);
   mupt75->GetYaxis()->SetTitleSize(0.035);
   mupt75->GetYaxis()->SetTitleFont(42);
   mupt75->GetZaxis()->SetLabelFont(42);
   mupt75->GetZaxis()->SetLabelSize(0.035);
   mupt75->GetZaxis()->SetTitleSize(0.035);
   mupt75->GetZaxis()->SetTitleFont(42);
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
