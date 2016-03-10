void elept()
{
//=========Macro generated from canvas: elept/elept
//=========  (Sun Nov  8 21:54:26 2015) by ROOT version6.02/05
   TCanvas *elept = new TCanvas("elept", "elept",80,103,700,700);
   elept->Range(5,-6.016269,55,0.4993181);
   elept->SetFillColor(0);
   elept->SetBorderMode(0);
   elept->SetBorderSize(2);
   elept->SetLogy();
   elept->SetFrameBorderMode(0);
   elept->SetFrameBorderMode(0);
   
   THStack *elept = new THStack();
   elept->SetName("elept");
   elept->SetTitle("elept");
   
   TH1F *elept_stack_6 = new TH1F("elept_stack_6","elept",8,10,50);
   elept_stack_6->SetMinimum(4.318075e-06);
   elept_stack_6->SetMaximum(0.7043027);
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
   
   
   TH1D *elept26 = new TH1D("elept26","p_{T, #e}",8,10,50);
   elept26->SetBinContent(2,0.001250901);
   elept26->SetBinContent(9,0.05884657);
   elept26->SetBinError(2,0.001250901);
   elept26->SetBinError(9,0.02708489);
   elept26->SetEntries(28);

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
   
   TH1D *elept27 = new TH1D("elept27","p_{T, #e}",8,10,50);
   elept27->SetBinContent(1,0.3182421);
   elept27->SetBinContent(2,0.3606039);
   elept27->SetBinContent(3,0.3734463);
   elept27->SetBinContent(4,0.3683926);
   elept27->SetBinContent(5,0.3388622);
   elept27->SetBinContent(6,0.3037537);
   elept27->SetBinContent(7,0.2722177);
   elept27->SetBinContent(8,0.2590312);
   elept27->SetBinContent(9,2.67943);
   elept27->SetBinError(1,0.009824514);
   elept27->SetBinError(2,0.010232);
   elept27->SetBinError(3,0.01017266);
   elept27->SetBinError(4,0.009998111);
   elept27->SetBinError(5,0.009335115);
   elept27->SetBinError(6,0.00865203);
   elept27->SetBinError(7,0.008087256);
   elept27->SetBinError(8,0.007706779);
   elept27->SetBinError(9,0.021194);
   elept27->SetEntries(120946);

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
   
   TH1D *elept28 = new TH1D("elept28","p_{T, #e}",8,10,50);
   elept28->SetBinContent(1,0.003195141);
   elept28->SetBinContent(2,0.001615755);
   elept28->SetBinContent(3,0.0008668172);
   elept28->SetBinContent(4,0.0008911445);
   elept28->SetBinContent(5,0.0006238453);
   elept28->SetBinContent(6,0.0005640603);
   elept28->SetBinContent(7,0.0005488862);
   elept28->SetBinContent(8,0.0004318237);
   elept28->SetBinContent(9,0.0678783);
   elept28->SetBinError(1,0.0003873076);
   elept28->SetBinError(2,0.0002914994);
   elept28->SetBinError(3,0.0001703596);
   elept28->SetBinError(4,0.0001856999);
   elept28->SetBinError(5,0.0001396153);
   elept28->SetBinError(6,0.0001290292);
   elept28->SetBinError(7,0.0001385596);
   elept28->SetBinError(8,0.0002143462);
   elept28->SetBinError(9,0.001802175);
   elept28->SetEntries(6831);

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
   
   TH1D *elept29 = new TH1D("elept29","p_{T, #e}",8,10,50);
   elept29->SetBinContent(1,0.004365155);
   elept29->SetBinContent(2,0.002313686);
   elept29->SetBinContent(3,0.0007558042);
   elept29->SetBinContent(4,0.0005552847);
   elept29->SetBinContent(5,0.0002622178);
   elept29->SetBinContent(6,7.712288e-05);
   elept29->SetBinContent(7,1.542458e-05);
   elept29->SetBinContent(8,1.542458e-05);
   elept29->SetBinContent(9,0.001557882);
   elept29->SetBinError(1,0.0002594815);
   elept29->SetBinError(2,0.0001889117);
   elept29->SetBinError(3,0.000107972);
   elept29->SetBinError(4,9.254746e-05);
   elept29->SetBinError(5,6.359716e-05);
   elept29->SetBinError(6,3.44904e-05);
   elept29->SetBinError(7,1.542458e-05);
   elept29->SetBinError(8,1.542458e-05);
   elept29->SetBinError(9,0.0001550151);
   elept29->SetEntries(643);

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
   
   TH1D *elept30 = new TH1D("elept30","p_{T, #e}",8,10,50);
   elept30->SetBinContent(1,0.0003018897);
   elept30->SetBinContent(2,0.0007044092);
   elept30->SetBinContent(3,0.0004696061);
   elept30->SetBinContent(4,0.0008218107);
   elept30->SetBinContent(5,0.0008050391);
   elept30->SetBinContent(6,0.0006708659);
   elept30->SetBinContent(7,0.0004696061);
   elept30->SetBinContent(8,0.0006373226);
   elept30->SetBinContent(9,0.007463383);
   elept30->SetBinError(1,7.115607e-05);
   elept30->SetBinError(2,0.0001086927);
   elept30->SetBinError(3,8.874722e-05);
   elept30->SetBinError(4,0.0001174015);
   elept30->SetBinError(5,0.0001161974);
   elept30->SetBinError(6,0.0001060732);
   elept30->SetBinError(7,8.874722e-05);
   elept30->SetBinError(8,0.0001033874);
   elept30->SetBinError(9,0.0003537983);
   elept30->SetEntries(736);

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
