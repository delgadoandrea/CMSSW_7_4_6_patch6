void njets()
{
//=========Macro generated from canvas: njets/njets
//=========  (Fri Nov  6 09:03:52 2015) by ROOT version6.02/05
   TCanvas *njets = new TCanvas("njets", "njets",0,23,700,700);
   njets->Range(-1.875,-5.675225,16.875,1.362239);
   njets->SetFillColor(0);
   njets->SetBorderMode(0);
   njets->SetBorderSize(2);
   njets->SetLogy();
   njets->SetFrameBorderMode(0);
   njets->SetFrameBorderMode(0);
   
   THStack *njets = new THStack();
   njets->SetName("njets");
   njets->SetTitle("njets");
   
   TH1F *njets_stack_13 = new TH1F("njets_stack_13","njets",15,0,15);
   njets_stack_13->SetMinimum(1.067877e-05);
   njets_stack_13->SetMaximum(4.555042);
   njets_stack_13->SetDirectory(0);
   njets_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   njets_stack_13->SetLineColor(ci);
   njets_stack_13->GetXaxis()->SetTitle("njets");
   njets_stack_13->GetXaxis()->SetLabelFont(42);
   njets_stack_13->GetXaxis()->SetLabelSize(0.035);
   njets_stack_13->GetXaxis()->SetTitleSize(0.035);
   njets_stack_13->GetXaxis()->SetTitleFont(42);
   njets_stack_13->GetYaxis()->SetTitle("Events/pb");
   njets_stack_13->GetYaxis()->SetLabelFont(42);
   njets_stack_13->GetYaxis()->SetLabelSize(0.035);
   njets_stack_13->GetYaxis()->SetTitleSize(0.035);
   njets_stack_13->GetYaxis()->SetTitleFont(42);
   njets_stack_13->GetZaxis()->SetLabelFont(42);
   njets_stack_13->GetZaxis()->SetLabelSize(0.035);
   njets_stack_13->GetZaxis()->SetTitleSize(0.035);
   njets_stack_13->GetZaxis()->SetTitleFont(42);
   njets->SetHistogram(njets_stack_13);
   
   
   TH1D *njets61 = new TH1D("njets61","Number of jets",15,0,15);
   njets61->SetBinContent(2,0.03007584);
   njets61->SetBinContent(3,0.03007584);
   njets61->SetBinContent(4,0.03007584);
   njets61->SetBinContent(5,0.03007584);
   njets61->SetBinContent(6,0.03007584);
   njets61->SetBinContent(7,0.03633035);
   njets61->SetBinContent(8,0.1867638);
   njets61->SetBinError(2,0.02641216);
   njets61->SetBinError(3,0.02641216);
   njets61->SetBinError(4,0.02641216);
   njets61->SetBinError(5,0.02641216);
   njets61->SetBinError(6,0.02641216);
   njets61->SetBinError(7,0.02655985);
   njets61->SetBinError(8,0.06966695);
   njets61->SetEntries(38);

   ci = TColor::GetColor("#00cc00");
   njets61->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   njets61->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   njets61->SetMarkerColor(ci);
   njets61->SetMarkerStyle(22);
   njets61->GetXaxis()->SetTitle("njets");
   njets61->GetXaxis()->SetLabelFont(42);
   njets61->GetXaxis()->SetLabelSize(0.035);
   njets61->GetXaxis()->SetTitleSize(0.035);
   njets61->GetXaxis()->SetTitleFont(42);
   njets61->GetYaxis()->SetTitle("Events/pb");
   njets61->GetYaxis()->SetLabelFont(42);
   njets61->GetYaxis()->SetLabelSize(0.035);
   njets61->GetYaxis()->SetTitleSize(0.035);
   njets61->GetYaxis()->SetTitleFont(42);
   njets61->GetZaxis()->SetLabelFont(42);
   njets61->GetZaxis()->SetLabelSize(0.035);
   njets61->GetZaxis()->SetTitleSize(0.035);
   njets61->GetZaxis()->SetTitleFont(42);
   njets->Add(njets,"");
   
   TH1D *njets62 = new TH1D("njets62","Number of jets",15,0,15);
   njets62->SetBinContent(2,1.886546);
   njets62->SetBinContent(3,2.322667);
   njets62->SetBinContent(4,2.001354);
   njets62->SetBinContent(5,1.31221);
   njets62->SetBinContent(6,0.6715119);
   njets62->SetBinContent(7,0.2869193);
   njets62->SetBinContent(8,0.1401031);
   njets62->SetBinContent(9,0.05657859);
   njets62->SetBinContent(10,0.02585521);
   njets62->SetBinContent(11,0.004971884);
   njets62->SetBinContent(12,0.002242544);
   njets62->SetBinContent(13,0.0005903186);
   njets62->SetBinContent(14,0.0002367917);
   njets62->SetBinError(2,0.02779426);
   njets62->SetBinError(3,0.03040425);
   njets62->SetBinError(4,0.02614696);
   njets62->SetBinError(5,0.01979337);
   njets62->SetBinError(6,0.01267235);
   njets62->SetBinError(7,0.007461604);
   njets62->SetBinError(8,0.005347669);
   njets62->SetBinError(9,0.00316684);
   njets62->SetBinError(10,0.002115659);
   njets62->SetBinError(11,0.0007366544);
   njets62->SetBinError(12,0.000238449);
   njets62->SetBinError(13,0.0001144676);
   njets62->SetBinError(14,5.743043e-05);
   njets62->SetEntries(82834);

   ci = TColor::GetColor("#00ffff");
   njets62->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   njets62->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   njets62->SetMarkerColor(ci);
   njets62->SetMarkerStyle(20);
   njets62->GetXaxis()->SetTitle("njets");
   njets62->GetXaxis()->SetLabelFont(42);
   njets62->GetXaxis()->SetLabelSize(0.035);
   njets62->GetXaxis()->SetTitleSize(0.035);
   njets62->GetXaxis()->SetTitleFont(42);
   njets62->GetYaxis()->SetTitle("Events/pb");
   njets62->GetYaxis()->SetLabelFont(42);
   njets62->GetYaxis()->SetLabelSize(0.035);
   njets62->GetYaxis()->SetTitleSize(0.035);
   njets62->GetYaxis()->SetTitleFont(42);
   njets62->GetZaxis()->SetLabelFont(42);
   njets62->GetZaxis()->SetLabelSize(0.035);
   njets62->GetZaxis()->SetTitleSize(0.035);
   njets62->GetZaxis()->SetTitleFont(42);
   njets->Add(njets,"");
   
   TH1D *njets63 = new TH1D("njets63","Number of jets",15,0,15);
   njets63->SetBinContent(2,0.4627092);
   njets63->SetBinContent(3,0.5370841);
   njets63->SetBinContent(4,0.431533);
   njets63->SetBinContent(5,0.2756728);
   njets63->SetBinContent(6,0.1513528);
   njets63->SetBinContent(7,0.06688933);
   njets63->SetBinContent(8,0.02539879);
   njets63->SetBinContent(9,0.007357956);
   njets63->SetBinContent(10,0.003242763);
   njets63->SetBinContent(11,0.0006512728);
   njets63->SetBinContent(12,0.0002234355);
   njets63->SetBinContent(13,4.037541e-05);
   njets63->SetBinError(2,0.005629322);
   njets63->SetBinError(3,0.005737145);
   njets63->SetBinError(4,0.00475309);
   njets63->SetBinError(5,0.003471509);
   njets63->SetBinError(6,0.002513471);
   njets63->SetBinError(7,0.00152596);
   njets63->SetBinError(8,0.0008155508);
   njets63->SetBinError(9,0.0003428152);
   njets63->SetBinError(10,0.0002863618);
   njets63->SetBinError(11,5.650415e-05);
   njets63->SetBinError(12,3.161697e-05);
   njets63->SetBinError(13,1.042489e-05);
   njets63->SetEntries(103299);

   ci = TColor::GetColor("#ffcc00");
   njets63->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   njets63->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   njets63->SetMarkerColor(ci);
   njets63->SetMarkerStyle(21);
   njets63->GetXaxis()->SetTitle("njets");
   njets63->GetXaxis()->SetLabelFont(42);
   njets63->GetXaxis()->SetLabelSize(0.035);
   njets63->GetXaxis()->SetTitleSize(0.035);
   njets63->GetXaxis()->SetTitleFont(42);
   njets63->GetYaxis()->SetTitle("Events/pb");
   njets63->GetYaxis()->SetLabelFont(42);
   njets63->GetYaxis()->SetLabelSize(0.035);
   njets63->GetYaxis()->SetTitleSize(0.035);
   njets63->GetYaxis()->SetTitleFont(42);
   njets63->GetZaxis()->SetLabelFont(42);
   njets63->GetZaxis()->SetLabelSize(0.035);
   njets63->GetZaxis()->SetTitleSize(0.035);
   njets63->GetZaxis()->SetTitleFont(42);
   njets->Add(njets,"");
   
   TH1D *njets64 = new TH1D("njets64","Number of jets",15,0,15);
   njets64->SetBinContent(2,0.03849974);
   njets64->SetBinContent(3,0.05207337);
   njets64->SetBinContent(4,0.06675756);
   njets64->SetBinContent(5,0.05458757);
   njets64->SetBinContent(6,0.04479297);
   njets64->SetBinContent(7,0.02665367);
   njets64->SetBinContent(8,0.01315716);
   njets64->SetBinContent(9,0.006802238);
   njets64->SetBinContent(10,0.003763597);
   njets64->SetBinContent(11,0.001665854);
   njets64->SetBinContent(12,0.0007095305);
   njets64->SetBinContent(13,0.0003084915);
   njets64->SetBinError(2,0.0007706116);
   njets64->SetBinError(3,0.0008962196);
   njets64->SetBinError(4,0.001014745);
   njets64->SetBinError(5,0.0009176002);
   njets64->SetBinError(6,0.0008312115);
   njets64->SetBinError(7,0.0006411876);
   njets64->SetBinError(8,0.0004504927);
   njets64->SetBinError(9,0.0003239161);
   njets64->SetBinError(10,0.0002409396);
   njets64->SetBinError(11,0.0001602969);
   njets64->SetBinError(12,0.0001046146);
   njets64->SetBinError(13,6.89808e-05);
   njets64->SetEntries(20083);

   ci = TColor::GetColor("#ff0000");
   njets64->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   njets64->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   njets64->SetMarkerColor(ci);
   njets64->SetMarkerStyle(20);
   njets64->GetXaxis()->SetTitle("njets");
   njets64->GetXaxis()->SetLabelFont(42);
   njets64->GetXaxis()->SetLabelSize(0.035);
   njets64->GetXaxis()->SetTitleSize(0.035);
   njets64->GetXaxis()->SetTitleFont(42);
   njets64->GetYaxis()->SetTitle("Events/pb");
   njets64->GetYaxis()->SetLabelFont(42);
   njets64->GetYaxis()->SetLabelSize(0.035);
   njets64->GetYaxis()->SetTitleSize(0.035);
   njets64->GetYaxis()->SetTitleFont(42);
   njets64->GetZaxis()->SetLabelFont(42);
   njets64->GetZaxis()->SetLabelSize(0.035);
   njets64->GetZaxis()->SetTitleSize(0.035);
   njets64->GetZaxis()->SetTitleFont(42);
   njets->Add(njets,"");
   
   TH1D *njets65 = new TH1D("njets65","Number of jets",15,0,15);
   njets65->SetBinContent(2,0.000285118);
   njets65->SetBinContent(3,0.000285118);
   njets65->SetBinContent(4,0.000285118);
   njets65->SetBinContent(5,0.000285118);
   njets65->SetBinContent(6,0.000570236);
   njets65->SetBinContent(7,0.0003857479);
   njets65->SetBinContent(8,0.0007714958);
   njets65->SetBinContent(9,0.0002180314);
   njets65->SetBinContent(10,0.0001844881);
   njets65->SetBinContent(11,0.0001677165);
   njets65->SetBinContent(12,0.0001677165);
   njets65->SetBinError(2,6.915127e-05);
   njets65->SetBinError(3,6.915127e-05);
   njets65->SetBinError(4,6.915127e-05);
   njets65->SetBinError(5,6.915127e-05);
   njets65->SetBinError(6,9.779467e-05);
   njets65->SetBinError(7,8.0434e-05);
   njets65->SetBinError(8,0.0001137508);
   njets65->SetBinError(9,6.047104e-05);
   njets65->SetBinError(10,5.562526e-05);
   njets65->SetBinError(11,5.303661e-05);
   njets65->SetBinError(12,5.303661e-05);
   njets65->SetEntries(215);

   ci = TColor::GetColor("#0000ff");
   njets65->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   njets65->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   njets65->SetMarkerColor(ci);
   njets65->SetMarkerStyle(21);
   njets65->GetXaxis()->SetTitle("njets");
   njets65->GetXaxis()->SetLabelFont(42);
   njets65->GetXaxis()->SetLabelSize(0.035);
   njets65->GetXaxis()->SetTitleSize(0.035);
   njets65->GetXaxis()->SetTitleFont(42);
   njets65->GetYaxis()->SetTitle("Events/pb");
   njets65->GetYaxis()->SetLabelFont(42);
   njets65->GetYaxis()->SetLabelSize(0.035);
   njets65->GetYaxis()->SetTitleSize(0.035);
   njets65->GetYaxis()->SetTitleFont(42);
   njets65->GetZaxis()->SetLabelFont(42);
   njets65->GetZaxis()->SetLabelSize(0.035);
   njets65->GetZaxis()->SetTitleSize(0.035);
   njets65->GetZaxis()->SetTitleFont(42);
   njets->Add(njets,"");
   njets->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.4318103,0.9342857,0.5681897,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("njets");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("njets","njets_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("njets","njets_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("njets","njets_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("njets","njets_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("njets","njets_ttbar","lp");

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
   njets->Modified();
   njets->cd();
   njets->SetSelected(njets);
}
