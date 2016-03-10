void njetsb3()
{
//=========Macro generated from canvas: b3/njetsb3/b3/njetsb3
//=========  (Tue Nov 24 14:24:02 2015) by ROOT version6.02/05
   TCanvas *b3/njetsb3 = new TCanvas("b3/njetsb3", "b3/njetsb3",260,282,700,700);
   b3/njetsb3->Range(-1.875,-5.816915,16.875,-0.377993);
   b3/njetsb3->SetFillColor(0);
   b3/njetsb3->SetBorderMode(0);
   b3/njetsb3->SetBorderSize(2);
   b3/njetsb3->SetLogy();
   b3/njetsb3->SetFrameBorderMode(0);
   b3/njetsb3->SetFrameBorderMode(0);
   
   THStack *b3/njetsb3 = new THStack();
   b3/njetsb3->SetName("b3/njetsb3");
   b3/njetsb3->SetTitle("b3/njetsb3");
   
   TH1F *b3/njetsb3_stack_14 = new TH1F("b3/njetsb3_stack_14","b3/njetsb3",15,0,15);
   b3/njetsb3_stack_14->SetMinimum(5.333068e-06);
   b3/njetsb3_stack_14->SetMaximum(0.1197057);
   b3/njetsb3_stack_14->SetDirectory(0);
   b3/njetsb3_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b3/njetsb3_stack_14->SetLineColor(ci);
   b3/njetsb3_stack_14->GetXaxis()->SetTitle("b3/njetsb3");
   b3/njetsb3_stack_14->GetXaxis()->SetLabelFont(42);
   b3/njetsb3_stack_14->GetXaxis()->SetLabelSize(0.035);
   b3/njetsb3_stack_14->GetXaxis()->SetTitleSize(0.035);
   b3/njetsb3_stack_14->GetXaxis()->SetTitleFont(42);
   b3/njetsb3_stack_14->GetYaxis()->SetTitle("Events/pb");
   b3/njetsb3_stack_14->GetYaxis()->SetLabelFont(42);
   b3/njetsb3_stack_14->GetYaxis()->SetLabelSize(0.035);
   b3/njetsb3_stack_14->GetYaxis()->SetTitleSize(0.035);
   b3/njetsb3_stack_14->GetYaxis()->SetTitleFont(42);
   b3/njetsb3_stack_14->GetZaxis()->SetLabelFont(42);
   b3/njetsb3_stack_14->GetZaxis()->SetLabelSize(0.035);
   b3/njetsb3_stack_14->GetZaxis()->SetTitleSize(0.035);
   b3/njetsb3_stack_14->GetZaxis()->SetTitleFont(42);
   b3/njetsb3->SetHistogram(b3/njetsb3_stack_14);
   
   
   TH1D *njetsb366 = new TH1D("njetsb366","Number of jets",15,0,15);
   njetsb366->SetBinContent(5,0.00968015);
   njetsb366->SetBinContent(6,0.00544552);
   njetsb366->SetBinContent(7,0.03312459);
   njetsb366->SetBinContent(8,0.0198905);
   njetsb366->SetBinContent(9,0.01157173);
   njetsb366->SetBinContent(10,0.04673839);
   njetsb366->SetBinContent(11,0.01920981);
   njetsb366->SetBinContent(12,0.03516666);
   njetsb366->SetBinContent(13,0.00748759);
   njetsb366->SetBinContent(14,0.02057119);
   njetsb366->SetBinContent(15,0.00340345);
   njetsb366->SetBinContent(16,0.00476483);
   njetsb366->SetBinError(5,0.008374283);
   njetsb366->SetBinError(6,0.001925282);
   njetsb366->SetBinError(7,0.0146002);
   njetsb366->SetBinError(8,0.008779448);
   njetsb366->SetBinError(9,0.002806557);
   njetsb366->SetBinError(10,0.01491418);
   njetsb366->SetBinError(11,0.00875302);
   njetsb366->SetBinError(12,0.01464773);
   njetsb366->SetBinError(13,0.002257593);
   njetsb366->SetBinError(14,0.008805796);
   njetsb366->SetBinError(15,0.001522069);
   njetsb366->SetBinError(16,0.001800936);
   njetsb366->SetEntries(173);

   ci = TColor::GetColor("#00cc00");
   njetsb366->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   njetsb366->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   njetsb366->SetMarkerColor(ci);
   njetsb366->SetMarkerStyle(22);
   njetsb366->GetXaxis()->SetTitle("njetsb3");
   njetsb366->GetXaxis()->SetLabelFont(42);
   njetsb366->GetXaxis()->SetLabelSize(0.035);
   njetsb366->GetXaxis()->SetTitleSize(0.035);
   njetsb366->GetXaxis()->SetTitleFont(42);
   njetsb366->GetYaxis()->SetTitle("Events/pb");
   njetsb366->GetYaxis()->SetLabelFont(42);
   njetsb366->GetYaxis()->SetLabelSize(0.035);
   njetsb366->GetYaxis()->SetTitleSize(0.035);
   njetsb366->GetYaxis()->SetTitleFont(42);
   njetsb366->GetZaxis()->SetLabelFont(42);
   njetsb366->GetZaxis()->SetLabelSize(0.035);
   njetsb366->GetZaxis()->SetTitleSize(0.035);
   njetsb366->GetZaxis()->SetTitleFont(42);
   b3/njetsb3->Add(njetsb3,"");
   
   TH1D *njetsb367 = new TH1D("njetsb367","Number of jets",15,0,15);
   njetsb367->SetBinContent(4,0.002581822);
   njetsb367->SetBinContent(5,0.009187472);
   njetsb367->SetBinContent(6,0.02526359);
   njetsb367->SetBinContent(7,0.04728584);
   njetsb367->SetBinContent(8,0.06117082);
   njetsb367->SetBinContent(9,0.06695751);
   njetsb367->SetBinContent(10,0.06910845);
   njetsb367->SetBinContent(11,0.05966712);
   njetsb367->SetBinContent(12,0.04503545);
   njetsb367->SetBinContent(13,0.03751699);
   njetsb367->SetBinContent(14,0.0257514);
   njetsb367->SetBinContent(15,0.01715869);
   njetsb367->SetBinContent(16,0.0267351);
   njetsb367->SetBinError(4,0.0004930017);
   njetsb367->SetBinError(5,0.0008402537);
   njetsb367->SetBinError(6,0.00140261);
   njetsb367->SetBinError(7,0.001941646);
   njetsb367->SetBinError(8,0.002336245);
   njetsb367->SetBinError(9,0.002140645);
   njetsb367->SetBinError(10,0.002228486);
   njetsb367->SetBinError(11,0.002379045);
   njetsb367->SetBinError(12,0.001604595);
   njetsb367->SetBinError(13,0.001786108);
   njetsb367->SetBinError(14,0.001243707);
   njetsb367->SetBinError(15,0.0009985819);
   njetsb367->SetBinError(16,0.001225473);
   njetsb367->SetEntries(19755);

   ci = TColor::GetColor("#00ffff");
   njetsb367->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   njetsb367->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   njetsb367->SetMarkerColor(ci);
   njetsb367->SetMarkerStyle(20);
   njetsb367->GetXaxis()->SetTitle("njetsb3");
   njetsb367->GetXaxis()->SetLabelFont(42);
   njetsb367->GetXaxis()->SetLabelSize(0.035);
   njetsb367->GetXaxis()->SetTitleSize(0.035);
   njetsb367->GetXaxis()->SetTitleFont(42);
   njetsb367->GetYaxis()->SetTitle("Events/pb");
   njetsb367->GetYaxis()->SetLabelFont(42);
   njetsb367->GetYaxis()->SetLabelSize(0.035);
   njetsb367->GetYaxis()->SetTitleSize(0.035);
   njetsb367->GetYaxis()->SetTitleFont(42);
   njetsb367->GetZaxis()->SetLabelFont(42);
   njetsb367->GetZaxis()->SetLabelSize(0.035);
   njetsb367->GetZaxis()->SetTitleSize(0.035);
   njetsb367->GetZaxis()->SetTitleFont(42);
   b3/njetsb3->Add(njetsb3,"");
   
   TH1D *njetsb368 = new TH1D("njetsb368","Number of jets",15,0,15);
   njetsb368->SetBinContent(4,0.000797507);
   njetsb368->SetBinContent(5,0.004075543);
   njetsb368->SetBinContent(6,0.009482616);
   njetsb368->SetBinContent(7,0.01424842);
   njetsb368->SetBinContent(8,0.01672041);
   njetsb368->SetBinContent(9,0.01875427);
   njetsb368->SetBinContent(10,0.01537689);
   njetsb368->SetBinContent(11,0.01350149);
   njetsb368->SetBinContent(12,0.01102896);
   njetsb368->SetBinContent(13,0.007687062);
   njetsb368->SetBinContent(14,0.00480617);
   njetsb368->SetBinContent(15,0.003343852);
   njetsb368->SetBinContent(16,0.005085598);
   njetsb368->SetBinError(4,0.0001039053);
   njetsb368->SetBinError(5,0.0002559003);
   njetsb368->SetBinError(6,0.0004165106);
   njetsb368->SetBinError(7,0.0004851015);
   njetsb368->SetBinError(8,0.0005104685);
   njetsb368->SetBinError(9,0.0005592441);
   njetsb368->SetBinError(10,0.0004472651);
   njetsb368->SetBinError(11,0.0004163618);
   njetsb368->SetBinError(12,0.0003870704);
   njetsb368->SetBinError(13,0.000304568);
   njetsb368->SetBinError(14,0.0002255647);
   njetsb368->SetBinError(15,0.0002105063);
   njetsb368->SetBinError(16,0.0002396111);
   njetsb368->SetEntries(37083);

   ci = TColor::GetColor("#ffcc00");
   njetsb368->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   njetsb368->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   njetsb368->SetMarkerColor(ci);
   njetsb368->SetMarkerStyle(21);
   njetsb368->GetXaxis()->SetTitle("njetsb3");
   njetsb368->GetXaxis()->SetLabelFont(42);
   njetsb368->GetXaxis()->SetLabelSize(0.035);
   njetsb368->GetXaxis()->SetTitleSize(0.035);
   njetsb368->GetXaxis()->SetTitleFont(42);
   njetsb368->GetYaxis()->SetTitle("Events/pb");
   njetsb368->GetYaxis()->SetLabelFont(42);
   njetsb368->GetYaxis()->SetLabelSize(0.035);
   njetsb368->GetYaxis()->SetTitleSize(0.035);
   njetsb368->GetYaxis()->SetTitleFont(42);
   njetsb368->GetZaxis()->SetLabelFont(42);
   njetsb368->GetZaxis()->SetLabelSize(0.035);
   njetsb368->GetZaxis()->SetTitleSize(0.035);
   njetsb368->GetZaxis()->SetTitleFont(42);
   b3/njetsb3->Add(njetsb3,"");
   
   TH1D *njetsb369 = new TH1D("njetsb369","Number of jets",15,0,15);
   njetsb369->SetBinContent(5,6.16983e-05);
   njetsb369->SetBinContent(6,0.0005398602);
   njetsb369->SetBinContent(7,0.001203117);
   njetsb369->SetBinContent(8,0.001696703);
   njetsb369->SetBinContent(9,0.002606753);
   njetsb369->SetBinContent(10,0.002745575);
   njetsb369->SetBinContent(11,0.002822697);
   njetsb369->SetBinContent(12,0.002807273);
   njetsb369->SetBinContent(13,0.002884396);
   njetsb369->SetBinContent(14,0.001866374);
   njetsb369->SetBinContent(15,0.001881798);
   njetsb369->SetBinContent(16,0.003300859);
   njetsb369->SetBinError(5,3.084915e-05);
   njetsb369->SetBinError(6,9.125302e-05);
   njetsb369->SetBinError(7,0.0001362262);
   njetsb369->SetBinError(8,0.0001617743);
   njetsb369->SetBinError(9,0.0002005195);
   njetsb369->SetBinError(10,0.0002057895);
   njetsb369->SetBinError(11,0.0002086598);
   njetsb369->SetBinError(12,0.0002080889);
   njetsb369->SetBinError(13,0.0002109279);
   njetsb369->SetBinError(14,0.0001696703);
   njetsb369->SetBinError(15,0.00017037);
   njetsb369->SetBinError(16,0.0002256421);
   njetsb369->SetEntries(1583);

   ci = TColor::GetColor("#ff0000");
   njetsb369->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   njetsb369->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   njetsb369->SetMarkerColor(ci);
   njetsb369->SetMarkerStyle(20);
   njetsb369->GetXaxis()->SetTitle("njetsb3");
   njetsb369->GetXaxis()->SetLabelFont(42);
   njetsb369->GetXaxis()->SetLabelSize(0.035);
   njetsb369->GetXaxis()->SetTitleSize(0.035);
   njetsb369->GetXaxis()->SetTitleFont(42);
   njetsb369->GetYaxis()->SetTitle("Events/pb");
   njetsb369->GetYaxis()->SetLabelFont(42);
   njetsb369->GetYaxis()->SetLabelSize(0.035);
   njetsb369->GetYaxis()->SetTitleSize(0.035);
   njetsb369->GetYaxis()->SetTitleFont(42);
   njetsb369->GetZaxis()->SetLabelFont(42);
   njetsb369->GetZaxis()->SetLabelSize(0.035);
   njetsb369->GetZaxis()->SetTitleSize(0.035);
   njetsb369->GetZaxis()->SetTitleFont(42);
   b3/njetsb3->Add(njetsb3,"");
   
   TH1D *njetsb370 = new TH1D("njetsb370","Number of jets",15,0,15);
   njetsb370->SetBinContent(8,1.677165e-05);
   njetsb370->SetBinContent(9,0.0001341732);
   njetsb370->SetBinContent(10,0.0001341732);
   njetsb370->SetBinContent(11,0.0002012598);
   njetsb370->SetBinContent(12,0.0002515747);
   njetsb370->SetBinContent(13,0.0002683464);
   njetsb370->SetBinContent(14,0.0002012598);
   njetsb370->SetBinContent(15,0.000285118);
   njetsb370->SetBinContent(16,0.0007211808);
   njetsb370->SetBinError(8,1.677165e-05);
   njetsb370->SetBinError(9,4.743738e-05);
   njetsb370->SetBinError(10,4.743738e-05);
   njetsb370->SetBinError(11,5.809869e-05);
   njetsb370->SetBinError(12,6.495631e-05);
   njetsb370->SetBinError(13,6.708659e-05);
   njetsb370->SetBinError(14,5.809869e-05);
   njetsb370->SetBinError(15,6.915127e-05);
   njetsb370->SetBinError(16,0.000109979);
   njetsb370->SetEntries(132);

   ci = TColor::GetColor("#0000ff");
   njetsb370->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   njetsb370->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   njetsb370->SetMarkerColor(ci);
   njetsb370->SetMarkerStyle(21);
   njetsb370->GetXaxis()->SetTitle("njetsb3");
   njetsb370->GetXaxis()->SetLabelFont(42);
   njetsb370->GetXaxis()->SetLabelSize(0.035);
   njetsb370->GetXaxis()->SetTitleSize(0.035);
   njetsb370->GetXaxis()->SetTitleFont(42);
   njetsb370->GetYaxis()->SetTitle("Events/pb");
   njetsb370->GetYaxis()->SetLabelFont(42);
   njetsb370->GetYaxis()->SetLabelSize(0.035);
   njetsb370->GetYaxis()->SetTitleSize(0.035);
   njetsb370->GetYaxis()->SetTitleFont(42);
   njetsb370->GetZaxis()->SetLabelFont(42);
   njetsb370->GetZaxis()->SetLabelSize(0.035);
   njetsb370->GetZaxis()->SetTitleSize(0.035);
   njetsb370->GetZaxis()->SetTitleFont(42);
   b3/njetsb3->Add(njetsb3,"");
   b3/njetsb3->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3664368,0.9342857,0.6335632,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b3/njetsb3");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("njetsb3","b3/njetsb3_QCD_b3/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("njetsb3","b3/njetsb3_WJetsToLNu_b3/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("njetsb3","b3/njetsb3_ZJetsToNuNu_b3/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("njetsb3","b3/njetsb3_signal_b3/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("njetsb3","b3/njetsb3_ttbar_b3/","lp");

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
   b3/njetsb3->Modified();
   b3/njetsb3->cd();
   b3/njetsb3->SetSelected(b3/njetsb3);
}
