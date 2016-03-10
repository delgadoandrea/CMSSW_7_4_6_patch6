void elept()
{
//=========Macro generated from canvas: elept/elept
//=========  (Fri Nov  6 09:03:12 2015) by ROOT version6.02/05
   TCanvas *elept = new TCanvas("elept", "elept",60,83,700,700);
   elept->Range(-6.25,-6.489339,56.25,-1.828247);
   elept->SetFillColor(0);
   elept->SetBorderMode(0);
   elept->SetBorderSize(2);
   elept->SetLogy();
   elept->SetFrameBorderMode(0);
   elept->SetFrameBorderMode(0);
   
   THStack *elept = new THStack();
   elept->SetName("elept");
   elept->SetTitle("elept");
   
   TH1F *elept_stack_6 = new TH1F("elept_stack_6","elept",50,0,50);
   elept_stack_6->SetMinimum(9.479172e-07);
   elept_stack_6->SetMaximum(0.005077431);
   elept_stack_6->SetDirectory(0);
   elept_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   elept_stack_6->SetLineColor(ci);
   elept_stack_6->GetXaxis()->SetTitle("elept");
   elept_stack_6->GetXaxis()->SetLabelFont(42);
   elept_stack_6->GetXaxis()->SetLabelSize(0.035);
   elept_stack_6->GetXaxis()->SetTitleSize(0.035);
   elept_stack_6->GetXaxis()->SetTitleFont(42);
   elept_stack_6->GetYaxis()->SetTitle("Events/pb");
   elept_stack_6->GetYaxis()->SetLabelFont(42);
   elept_stack_6->GetYaxis()->SetLabelSize(0.035);
   elept_stack_6->GetYaxis()->SetTitleSize(0.035);
   elept_stack_6->GetYaxis()->SetTitleFont(42);
   elept_stack_6->GetZaxis()->SetLabelFont(42);
   elept_stack_6->GetZaxis()->SetLabelSize(0.035);
   elept_stack_6->GetZaxis()->SetTitleSize(0.035);
   elept_stack_6->GetZaxis()->SetTitleFont(42);
   elept->SetHistogram(elept_stack_6);
   
   
   TH1D *elept26 = new TH1D("elept26","p_{T, #e}",50,0,50);

   ci = TColor::GetColor("#00cc00");
   elept26->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   elept26->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   elept26->SetMarkerColor(ci);
   elept26->SetMarkerStyle(22);
   elept26->GetXaxis()->SetTitle("elept");
   elept26->GetXaxis()->SetLabelFont(42);
   elept26->GetXaxis()->SetLabelSize(0.035);
   elept26->GetXaxis()->SetTitleSize(0.035);
   elept26->GetXaxis()->SetTitleFont(42);
   elept26->GetYaxis()->SetTitle("Events/pb");
   elept26->GetYaxis()->SetLabelFont(42);
   elept26->GetYaxis()->SetLabelSize(0.035);
   elept26->GetYaxis()->SetTitleSize(0.035);
   elept26->GetYaxis()->SetTitleFont(42);
   elept26->GetZaxis()->SetLabelFont(42);
   elept26->GetZaxis()->SetLabelSize(0.035);
   elept26->GetZaxis()->SetTitleSize(0.035);
   elept26->GetZaxis()->SetTitleFont(42);
   elept->Add(elept,"");
   
   TH1D *elept27 = new TH1D("elept27","p_{T, #e}",50,0,50);
   elept27->SetBinContent(11,0.0008064081);
   elept27->SetBinContent(12,0.003129867);
   elept27->SetBinContent(13,0.001131677);
   elept27->SetBinContent(14,0.0001406152);
   elept27->SetBinContent(15,0.0001837279);
   elept27->SetBinContent(16,0.0005512257);
   elept27->SetBinContent(17,0.0007498085);
   elept27->SetBinContent(18,0.001867115);
   elept27->SetBinContent(19,0.0008773787);
   elept27->SetBinContent(20,0.0008203371);
   elept27->SetBinContent(21,0.001867557);
   elept27->SetBinContent(22,0.0008064081);
   elept27->SetBinContent(23,0.0009474653);
   elept27->SetBinContent(24,0.001245318);
   elept27->SetBinContent(25,0.0005094389);
   elept27->SetBinContent(26,0.0004240975);
   elept27->SetBinContent(27,0.001287547);
   elept27->SetBinContent(28,0.0004240975);
   elept27->SetBinContent(29,0.001230506);
   elept27->SetBinContent(30,0.0004528393);
   elept27->SetBinContent(31,0.0004523973);
   elept27->SetBinContent(32,0.0004523973);
   elept27->SetBinContent(33,0.0007781083);
   elept27->SetBinContent(34,0.0008773787);
   elept27->SetBinContent(35,0.0007924792);
   elept27->SetBinContent(36,0.001160419);
   elept27->SetBinContent(37,0.001160419);
   elept27->SetBinContent(38,0.0004523973);
   elept27->SetBinContent(39,0.0005799675);
   elept27->SetBinContent(40,0.0007637374);
   elept27->SetBinContent(41,0.0004101685);
   elept27->SetBinContent(42,0.0002259566);
   elept27->SetBinContent(43,0.000494626);
   elept27->SetBinContent(44,0.0004245394);
   elept27->SetBinContent(45,0.0005094389);
   elept27->SetBinContent(46,0.000495068);
   elept27->SetBinContent(47,0.0008908656);
   elept27->SetBinContent(48,5.659965e-05);
   elept27->SetBinContent(49,0.0006932088);
   elept27->SetBinContent(50,0.0004667682);
   elept27->SetBinContent(51,0.01789402);
   elept27->SetBinError(11,0.0004838472);
   elept27->SetBinError(12,0.001264769);
   elept27->SetBinError(13,0.0005906408);
   elept27->SetBinError(14,5.637996e-05);
   elept27->SetBinError(15,7.07057e-05);
   elept27->SetBinError(16,0.0003474804);
   elept27->SetBinError(17,0.0004821892);
   elept27->SetBinError(18,0.0007620736);
   elept27->SetBinError(19,0.0004861242);
   elept27->SetBinError(20,0.0004840477);
   elept27->SetBinError(21,0.0007623444);
   elept27->SetBinError(22,0.0004838472);
   elept27->SetBinError(23,0.0004875446);
   elept27->SetBinError(24,0.0005936943);
   elept27->SetBinError(25,0.0003466419);
   elept27->SetBinError(26,0.0003425567);
   elept27->SetBinError(27,0.0005945316);
   elept27->SetBinError(28,0.0003425567);
   elept27->SetBinError(29,0.0005928349);
   elept27->SetBinError(30,0.0003443237);
   elept27->SetBinError(31,0.0003437237);
   elept27->SetBinError(32,0.0003437237);
   elept27->SetBinError(33,0.0004830189);
   elept27->SetBinError(34,0.0004861242);
   elept27->SetBinError(35,0.0004836467);
   elept27->SetBinError(36,0.0005916674);
   elept27->SetBinError(37,0.0005916674);
   elept27->SetBinError(38,0.0003437237);
   elept27->SetBinError(39,0.0003492225);
   elept27->SetBinError(40,0.0004823903);
   elept27->SetBinError(41,0.0003422734);
   elept27->SetBinError(42,7.742216e-05);
   elept27->SetBinError(43,0.0003451679);
   elept27->SetBinError(44,0.0003431588);
   elept27->SetBinError(45,0.0003466419);
   elept27->SetBinError(46,0.0003457654);
   elept27->SetBinError(47,0.0004858991);
   elept27->SetBinError(48,4.0022e-05);
   elept27->SetBinError(49,0.0004805254);
   elept27->SetBinError(50,0.0003446053);
   elept27->SetBinError(51,0.002202526);
   elept27->SetEntries(599);

   ci = TColor::GetColor("#00ffff");
   elept27->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   elept27->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   elept27->SetMarkerColor(ci);
   elept27->SetMarkerStyle(20);
   elept27->GetXaxis()->SetTitle("elept");
   elept27->GetXaxis()->SetLabelFont(42);
   elept27->GetXaxis()->SetLabelSize(0.035);
   elept27->GetXaxis()->SetTitleSize(0.035);
   elept27->GetXaxis()->SetTitleFont(42);
   elept27->GetYaxis()->SetTitle("Events/pb");
   elept27->GetYaxis()->SetLabelFont(42);
   elept27->GetYaxis()->SetLabelSize(0.035);
   elept27->GetYaxis()->SetTitleSize(0.035);
   elept27->GetYaxis()->SetTitleFont(42);
   elept27->GetZaxis()->SetLabelFont(42);
   elept27->GetZaxis()->SetLabelSize(0.035);
   elept27->GetZaxis()->SetTitleSize(0.035);
   elept27->GetZaxis()->SetTitleFont(42);
   elept->Add(elept,"");
   
   TH1D *elept28 = new TH1D("elept28","p_{T, #e}",50,0,50);
   elept28->SetBinContent(12,7.041728e-06);
   elept28->SetBinContent(15,2.691694e-06);
   elept28->SetBinContent(16,2.691694e-06);
   elept28->SetBinContent(17,7.041728e-06);
   elept28->SetBinContent(30,7.041728e-06);
   elept28->SetBinContent(35,5.46182e-05);
   elept28->SetBinContent(40,5.46182e-05);
   elept28->SetBinContent(41,7.041728e-06);
   elept28->SetBinContent(42,7.041728e-06);
   elept28->SetBinContent(51,0.0007793185);
   elept28->SetBinError(12,7.041728e-06);
   elept28->SetBinError(15,2.691694e-06);
   elept28->SetBinError(16,2.691694e-06);
   elept28->SetBinError(17,7.041728e-06);
   elept28->SetBinError(30,7.041728e-06);
   elept28->SetBinError(35,5.46182e-05);
   elept28->SetBinError(40,5.46182e-05);
   elept28->SetBinError(41,7.041728e-06);
   elept28->SetBinError(42,7.041728e-06);
   elept28->SetBinError(51,0.0001841406);
   elept28->SetEntries(54);

   ci = TColor::GetColor("#ffcc00");
   elept28->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   elept28->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   elept28->SetMarkerColor(ci);
   elept28->SetMarkerStyle(21);
   elept28->GetXaxis()->SetTitle("elept");
   elept28->GetXaxis()->SetLabelFont(42);
   elept28->GetXaxis()->SetLabelSize(0.035);
   elept28->GetXaxis()->SetTitleSize(0.035);
   elept28->GetXaxis()->SetTitleFont(42);
   elept28->GetYaxis()->SetTitle("Events/pb");
   elept28->GetYaxis()->SetLabelFont(42);
   elept28->GetYaxis()->SetLabelSize(0.035);
   elept28->GetYaxis()->SetTitleSize(0.035);
   elept28->GetYaxis()->SetTitleFont(42);
   elept28->GetZaxis()->SetLabelFont(42);
   elept28->GetZaxis()->SetLabelSize(0.035);
   elept28->GetZaxis()->SetTitleSize(0.035);
   elept28->GetZaxis()->SetTitleFont(42);
   elept->Add(elept,"");
   
   TH1D *elept29 = new TH1D("elept29","p_{T, #e}",50,0,50);
   elept29->SetBinContent(11,1.542458e-05);
   elept29->SetBinContent(12,7.712288e-05);
   elept29->SetBinContent(13,1.542458e-05);
   elept29->SetBinContent(15,1.542458e-05);
   elept29->SetBinContent(16,4.627373e-05);
   elept29->SetBinContent(17,3.084915e-05);
   elept29->SetBinContent(18,1.542458e-05);
   elept29->SetBinContent(19,1.542458e-05);
   elept29->SetBinContent(22,1.542458e-05);
   elept29->SetBinContent(24,1.542458e-05);
   elept29->SetBinContent(25,1.542458e-05);
   elept29->SetBinContent(51,9.254746e-05);
   elept29->SetBinError(11,1.542458e-05);
   elept29->SetBinError(12,3.44904e-05);
   elept29->SetBinError(13,1.542458e-05);
   elept29->SetBinError(15,1.542458e-05);
   elept29->SetBinError(16,2.671615e-05);
   elept29->SetBinError(17,2.181364e-05);
   elept29->SetBinError(18,1.542458e-05);
   elept29->SetBinError(19,1.542458e-05);
   elept29->SetBinError(22,1.542458e-05);
   elept29->SetBinError(24,1.542458e-05);
   elept29->SetBinError(25,1.542458e-05);
   elept29->SetBinError(51,3.778234e-05);
   elept29->SetEntries(24);

   ci = TColor::GetColor("#ff0000");
   elept29->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   elept29->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   elept29->SetMarkerColor(ci);
   elept29->SetMarkerStyle(20);
   elept29->GetXaxis()->SetTitle("elept");
   elept29->GetXaxis()->SetLabelFont(42);
   elept29->GetXaxis()->SetLabelSize(0.035);
   elept29->GetXaxis()->SetTitleSize(0.035);
   elept29->GetXaxis()->SetTitleFont(42);
   elept29->GetYaxis()->SetTitle("Events/pb");
   elept29->GetYaxis()->SetLabelFont(42);
   elept29->GetYaxis()->SetLabelSize(0.035);
   elept29->GetYaxis()->SetTitleSize(0.035);
   elept29->GetYaxis()->SetTitleFont(42);
   elept29->GetZaxis()->SetLabelFont(42);
   elept29->GetZaxis()->SetLabelSize(0.035);
   elept29->GetZaxis()->SetTitleSize(0.035);
   elept29->GetZaxis()->SetTitleFont(42);
   elept->Add(elept,"");
   
   TH1D *elept30 = new TH1D("elept30","p_{T, #e}",50,0,50);
   elept30->SetBinContent(26,1.677165e-05);
   elept30->SetBinContent(51,3.35433e-05);
   elept30->SetBinError(26,1.677165e-05);
   elept30->SetBinError(51,2.371869e-05);
   elept30->SetEntries(3);

   ci = TColor::GetColor("#0000ff");
   elept30->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   elept30->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   elept30->SetMarkerColor(ci);
   elept30->SetMarkerStyle(21);
   elept30->GetXaxis()->SetTitle("elept");
   elept30->GetXaxis()->SetLabelFont(42);
   elept30->GetXaxis()->SetLabelSize(0.035);
   elept30->GetXaxis()->SetTitleSize(0.035);
   elept30->GetXaxis()->SetTitleFont(42);
   elept30->GetYaxis()->SetTitle("Events/pb");
   elept30->GetYaxis()->SetLabelFont(42);
   elept30->GetYaxis()->SetLabelSize(0.035);
   elept30->GetYaxis()->SetTitleSize(0.035);
   elept30->GetYaxis()->SetTitleFont(42);
   elept30->GetZaxis()->SetLabelFont(42);
   elept30->GetZaxis()->SetLabelSize(0.035);
   elept30->GetZaxis()->SetTitleSize(0.035);
   elept30->GetZaxis()->SetTitleFont(42);
   elept->Add(elept,"");
   elept->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.4318103,0.9342857,0.5681897,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("elept");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("elept","elept_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("elept","elept_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("elept","elept_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("elept","elept_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("elept","elept_ttbar","lp");

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
   elept->Modified();
   elept->cd();
   elept->SetSelected(elept);
}
