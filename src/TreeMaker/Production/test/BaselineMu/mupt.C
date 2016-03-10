void mupt()
{
//=========Macro generated from canvas: mupt/mupt
//=========  (Fri Nov 13 11:38:56 2015) by ROOT version6.02/05
   TCanvas *mupt = new TCanvas("mupt", "mupt",260,282,700,700);
   mupt->Range(1.5,-3.91893,16.5,3.863808);
   mupt->SetFillColor(0);
   mupt->SetBorderMode(0);
   mupt->SetBorderSize(2);
   mupt->SetLogy();
   mupt->SetFrameBorderMode(0);
   mupt->SetFrameBorderMode(0);
   
   THStack *mupt = new THStack();
   mupt->SetName("mupt");
   mupt->SetTitle("mupt");
   
   TH1F *mupt_stack_14 = new TH1F("mupt_stack_14","mupt",12,3,15);
   mupt_stack_14->SetMinimum(0.0007233425);
   mupt_stack_14->SetMaximum(1217.684);
   mupt_stack_14->SetDirectory(0);
   mupt_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   mupt_stack_14->SetLineColor(ci);
   mupt_stack_14->GetXaxis()->SetTitle("mupt");
   mupt_stack_14->GetXaxis()->SetLabelFont(42);
   mupt_stack_14->GetXaxis()->SetLabelSize(0.035);
   mupt_stack_14->GetXaxis()->SetTitleSize(0.035);
   mupt_stack_14->GetXaxis()->SetTitleFont(42);
   mupt_stack_14->GetYaxis()->SetTitle("Events/pb");
   mupt_stack_14->GetYaxis()->SetLabelFont(42);
   mupt_stack_14->GetYaxis()->SetLabelSize(0.035);
   mupt_stack_14->GetYaxis()->SetTitleSize(0.035);
   mupt_stack_14->GetYaxis()->SetTitleFont(42);
   mupt_stack_14->GetZaxis()->SetLabelFont(42);
   mupt_stack_14->GetZaxis()->SetLabelSize(0.035);
   mupt_stack_14->GetZaxis()->SetTitleSize(0.035);
   mupt_stack_14->GetZaxis()->SetTitleFont(42);
   mupt->SetHistogram(mupt_stack_14);
   
   
   TH1D *mupt66 = new TH1D("mupt66","p_{T, #mu}",12,3,15);
   mupt66->SetBinContent(1,588.5132);
   mupt66->SetBinContent(2,381.672);
   mupt66->SetBinContent(3,261.2386);
   mupt66->SetBinContent(4,173.2469);
   mupt66->SetBinContent(5,131.2828);
   mupt66->SetBinContent(6,96.76936);
   mupt66->SetBinContent(7,71.16363);
   mupt66->SetBinContent(8,64.3466);
   mupt66->SetBinContent(9,43.13859);
   mupt66->SetBinContent(10,38.95085);
   mupt66->SetBinContent(11,25.96522);
   mupt66->SetBinContent(12,27.99788);
   mupt66->SetBinError(1,13.75107);
   mupt66->SetBinError(2,11.08024);
   mupt66->SetBinError(3,9.171865);
   mupt66->SetBinError(4,7.454191);
   mupt66->SetBinError(5,6.490113);
   mupt66->SetBinError(6,5.570591);
   mupt66->SetBinError(7,4.780451);
   mupt66->SetBinError(8,4.564195);
   mupt66->SetBinError(9,3.712236);
   mupt66->SetBinError(10,3.541972);
   mupt66->SetBinError(11,2.87939);
   mupt66->SetBinError(12,3.011932);
   mupt66->SetEntries(17572);

   ci = TColor::GetColor("#00cc00");
   mupt66->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   mupt66->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   mupt66->SetMarkerColor(ci);
   mupt66->SetMarkerStyle(22);
   mupt66->GetXaxis()->SetTitle("mupt");
   mupt66->GetXaxis()->SetLabelFont(42);
   mupt66->GetXaxis()->SetLabelSize(0.035);
   mupt66->GetXaxis()->SetTitleSize(0.035);
   mupt66->GetXaxis()->SetTitleFont(42);
   mupt66->GetYaxis()->SetTitle("Events/pb");
   mupt66->GetYaxis()->SetLabelFont(42);
   mupt66->GetYaxis()->SetLabelSize(0.035);
   mupt66->GetYaxis()->SetTitleSize(0.035);
   mupt66->GetYaxis()->SetTitleFont(42);
   mupt66->GetZaxis()->SetLabelFont(42);
   mupt66->GetZaxis()->SetLabelSize(0.035);
   mupt66->GetZaxis()->SetTitleSize(0.035);
   mupt66->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   
   TH1D *mupt67 = new TH1D("mupt67","p_{T, #mu}",12,3,15);
   mupt67->SetBinContent(1,2.717972);
   mupt67->SetBinContent(2,2.96834);
   mupt67->SetBinContent(3,3.17787);
   mupt67->SetBinContent(4,3.61246);
   mupt67->SetBinContent(5,3.970871);
   mupt67->SetBinContent(6,4.568953);
   mupt67->SetBinContent(7,5.345757);
   mupt67->SetBinContent(8,5.717921);
   mupt67->SetBinContent(9,6.37085);
   mupt67->SetBinContent(10,7.021058);
   mupt67->SetBinContent(11,7.570196);
   mupt67->SetBinContent(12,8.192971);
   mupt67->SetBinError(1,0.04525418);
   mupt67->SetBinError(2,0.0475363);
   mupt67->SetBinError(3,0.04903745);
   mupt67->SetBinError(4,0.05232615);
   mupt67->SetBinError(5,0.05465658);
   mupt67->SetBinError(6,0.05876055);
   mupt67->SetBinError(7,0.06389136);
   mupt67->SetBinError(8,0.06626895);
   mupt67->SetBinError(9,0.06998673);
   mupt67->SetBinError(10,0.07372826);
   mupt67->SetBinError(11,0.07645673);
   mupt67->SetBinError(12,0.07991755);
   mupt67->SetEntries(277262);

   ci = TColor::GetColor("#00ffff");
   mupt67->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   mupt67->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   mupt67->SetMarkerColor(ci);
   mupt67->SetMarkerStyle(20);
   mupt67->GetXaxis()->SetTitle("mupt");
   mupt67->GetXaxis()->SetLabelFont(42);
   mupt67->GetXaxis()->SetLabelSize(0.035);
   mupt67->GetXaxis()->SetTitleSize(0.035);
   mupt67->GetXaxis()->SetTitleFont(42);
   mupt67->GetYaxis()->SetTitle("Events/pb");
   mupt67->GetYaxis()->SetLabelFont(42);
   mupt67->GetYaxis()->SetLabelSize(0.035);
   mupt67->GetYaxis()->SetTitleSize(0.035);
   mupt67->GetYaxis()->SetTitleFont(42);
   mupt67->GetZaxis()->SetLabelFont(42);
   mupt67->GetZaxis()->SetLabelSize(0.035);
   mupt67->GetZaxis()->SetTitleSize(0.035);
   mupt67->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   
   TH1D *mupt68 = new TH1D("mupt68","p_{T, #mu}",12,3,15);
   mupt68->SetBinContent(1,0.4565102);
   mupt68->SetBinContent(2,0.2881962);
   mupt68->SetBinContent(3,0.1906555);
   mupt68->SetBinContent(4,0.1371655);
   mupt68->SetBinContent(5,0.09408421);
   mupt68->SetBinContent(6,0.07879013);
   mupt68->SetBinContent(7,0.05994843);
   mupt68->SetBinContent(8,0.04782358);
   mupt68->SetBinContent(9,0.03716505);
   mupt68->SetBinContent(10,0.02966118);
   mupt68->SetBinContent(11,0.02565226);
   mupt68->SetBinContent(12,0.02198361);
   mupt68->SetBinError(1,0.005903156);
   mupt68->SetBinError(2,0.004683659);
   mupt68->SetBinError(3,0.003824035);
   mupt68->SetBinError(4,0.003250784);
   mupt68->SetBinError(5,0.002688356);
   mupt68->SetBinError(6,0.002448154);
   mupt68->SetBinError(7,0.002149404);
   mupt68->SetBinError(8,0.0019033);
   mupt68->SetBinError(9,0.001693127);
   mupt68->SetBinError(10,0.001526389);
   mupt68->SetBinError(11,0.001403223);
   mupt68->SetBinError(12,0.001304992);
   mupt68->SetEntries(46443);

   ci = TColor::GetColor("#ffcc00");
   mupt68->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   mupt68->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   mupt68->SetMarkerColor(ci);
   mupt68->SetMarkerStyle(21);
   mupt68->GetXaxis()->SetTitle("mupt");
   mupt68->GetXaxis()->SetLabelFont(42);
   mupt68->GetXaxis()->SetLabelSize(0.035);
   mupt68->GetXaxis()->SetTitleSize(0.035);
   mupt68->GetXaxis()->SetTitleFont(42);
   mupt68->GetYaxis()->SetTitle("Events/pb");
   mupt68->GetYaxis()->SetLabelFont(42);
   mupt68->GetYaxis()->SetLabelSize(0.035);
   mupt68->GetYaxis()->SetTitleSize(0.035);
   mupt68->GetYaxis()->SetTitleFont(42);
   mupt68->GetZaxis()->SetLabelFont(42);
   mupt68->GetZaxis()->SetLabelSize(0.035);
   mupt68->GetZaxis()->SetTitleSize(0.035);
   mupt68->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   
   TH1D *mupt69 = new TH1D("mupt69","p_{T, #mu}",12,3,15);
   mupt69->SetBinContent(1,0.01867916);
   mupt69->SetBinContent(2,0.02421658);
   mupt69->SetBinContent(3,0.02256615);
   mupt69->SetBinContent(4,0.01978973);
   mupt69->SetBinContent(5,0.01746062);
   mupt69->SetBinContent(6,0.01423688);
   mupt69->SetBinContent(7,0.0119849);
   mupt69->SetBinContent(8,0.008699461);
   mupt69->SetBinContent(9,0.008468092);
   mupt69->SetBinContent(10,0.00654002);
   mupt69->SetBinContent(11,0.005660819);
   mupt69->SetBinContent(12,0.004288032);
   mupt69->SetBinError(1,0.0005367664);
   mupt69->SetBinError(2,0.0006111715);
   mupt69->SetBinError(3,0.0005899774);
   mupt69->SetBinError(4,0.0005524927);
   mupt69->SetBinError(5,0.0005189631);
   mupt69->SetBinError(6,0.0004686127);
   mupt69->SetBinError(7,0.0004299557);
   mupt69->SetBinError(8,0.0003663134);
   mupt69->SetBinError(9,0.0003614094);
   mupt69->SetBinError(10,0.0003176115);
   mupt69->SetBinError(11,0.0002954924);
   mupt69->SetBinError(12,0.0002571791);
   mupt69->SetEntries(10541);

   ci = TColor::GetColor("#ff0000");
   mupt69->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   mupt69->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   mupt69->SetMarkerColor(ci);
   mupt69->SetMarkerStyle(20);
   mupt69->GetXaxis()->SetTitle("mupt");
   mupt69->GetXaxis()->SetLabelFont(42);
   mupt69->GetXaxis()->SetLabelSize(0.035);
   mupt69->GetXaxis()->SetTitleSize(0.035);
   mupt69->GetXaxis()->SetTitleFont(42);
   mupt69->GetYaxis()->SetTitle("Events/pb");
   mupt69->GetYaxis()->SetLabelFont(42);
   mupt69->GetYaxis()->SetLabelSize(0.035);
   mupt69->GetYaxis()->SetTitleSize(0.035);
   mupt69->GetYaxis()->SetTitleFont(42);
   mupt69->GetZaxis()->SetLabelFont(42);
   mupt69->GetZaxis()->SetLabelSize(0.035);
   mupt69->GetZaxis()->SetTitleSize(0.035);
   mupt69->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   
   TH1D *mupt70 = new TH1D("mupt70","p_{T, #mu}",12,3,15);
   mupt70->SetBinContent(1,0.00295181);
   mupt70->SetBinContent(2,0.003672991);
   mupt70->SetBinContent(3,0.00305244);
   mupt70->SetBinContent(4,0.003421416);
   mupt70->SetBinContent(5,0.003505274);
   mupt70->SetBinContent(6,0.003387873);
   mupt70->SetBinContent(7,0.003656219);
   mupt70->SetBinContent(8,0.003823936);
   mupt70->SetBinContent(9,0.003505274);
   mupt70->SetBinContent(10,0.004041967);
   mupt70->SetBinContent(11,0.00407551);
   mupt70->SetBinContent(12,0.003689762);
   mupt70->SetBinError(1,0.000222501);
   mupt70->SetBinError(2,0.0002481977);
   mupt70->SetBinError(3,0.0002262619);
   mupt70->SetBinError(4,0.000239547);
   mupt70->SetBinError(5,0.0002424649);
   mupt70->SetBinError(6,0.0002383699);
   mupt70->SetBinError(7,0.0002476304);
   mupt70->SetBinError(8,0.0002532463);
   mupt70->SetBinError(9,0.0002424649);
   mupt70->SetBinError(10,0.000260366);
   mupt70->SetBinError(11,0.0002614441);
   mupt70->SetBinError(12,0.0002487637);
   mupt70->SetEntries(2551);

   ci = TColor::GetColor("#0000ff");
   mupt70->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   mupt70->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   mupt70->SetMarkerColor(ci);
   mupt70->SetMarkerStyle(21);
   mupt70->GetXaxis()->SetTitle("mupt");
   mupt70->GetXaxis()->SetLabelFont(42);
   mupt70->GetXaxis()->SetLabelSize(0.035);
   mupt70->GetXaxis()->SetTitleSize(0.035);
   mupt70->GetXaxis()->SetTitleFont(42);
   mupt70->GetYaxis()->SetTitle("Events/pb");
   mupt70->GetYaxis()->SetLabelFont(42);
   mupt70->GetYaxis()->SetLabelSize(0.035);
   mupt70->GetYaxis()->SetTitleSize(0.035);
   mupt70->GetYaxis()->SetTitleFont(42);
   mupt70->GetZaxis()->SetLabelFont(42);
   mupt70->GetZaxis()->SetLabelSize(0.035);
   mupt70->GetZaxis()->SetTitleSize(0.035);
   mupt70->GetZaxis()->SetTitleFont(42);
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
