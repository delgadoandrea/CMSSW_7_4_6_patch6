void njets()
{
//=========Macro generated from canvas: njets/njets
//=========  (Mon Nov 23 11:05:09 2015) by ROOT version6.02/05
   TCanvas *njets = new TCanvas("njets", "njets",160,182,700,700);
   njets->Range(-1.875,-6.962589,16.875,5.126877);
   njets->SetFillColor(0);
   njets->SetBorderMode(0);
   njets->SetBorderSize(2);
   njets->SetLogy();
   njets->SetFrameBorderMode(0);
   njets->SetFrameBorderMode(0);
   
   THStack *njets = new THStack();
   njets->SetName("njets");
   njets->SetTitle("njets");
   
   TH1F *njets_stack_17 = new TH1F("njets_stack_17","njets",15,0,15);
   njets_stack_17->SetMinimum(1.763429e-06);
   njets_stack_17->SetMaximum(8278.102);
   njets_stack_17->SetDirectory(0);
   njets_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   njets_stack_17->SetLineColor(ci);
   njets_stack_17->GetXaxis()->SetTitle("njets");
   njets_stack_17->GetXaxis()->SetLabelFont(42);
   njets_stack_17->GetXaxis()->SetLabelSize(0.035);
   njets_stack_17->GetXaxis()->SetTitleSize(0.035);
   njets_stack_17->GetXaxis()->SetTitleFont(42);
   njets_stack_17->GetYaxis()->SetTitle("Events/pb");
   njets_stack_17->GetYaxis()->SetLabelFont(42);
   njets_stack_17->GetYaxis()->SetLabelSize(0.035);
   njets_stack_17->GetYaxis()->SetTitleSize(0.035);
   njets_stack_17->GetYaxis()->SetTitleFont(42);
   njets_stack_17->GetZaxis()->SetLabelFont(42);
   njets_stack_17->GetZaxis()->SetLabelSize(0.035);
   njets_stack_17->GetZaxis()->SetTitleSize(0.035);
   njets_stack_17->GetZaxis()->SetTitleFont(42);
   njets->SetHistogram(njets_stack_17);
   
   
   TH1D *njets81 = new TH1D("njets81","Number of jets",15,0,15);
   njets81->SetBinContent(3,3061.728);
   njets81->SetBinContent(4,2157.518);
   njets81->SetBinContent(5,440.8174);
   njets81->SetBinContent(6,48.89569);
   njets81->SetBinContent(7,2.350941);
   njets81->SetBinContent(8,0.00831877);
   njets81->SetBinError(3,31.61656);
   njets81->SetBinError(4,26.62141);
   njets81->SetBinError(5,11.99545);
   njets81->SetBinError(6,3.96031);
   njets81->SetBinError(7,0.8211456);
   njets81->SetBinError(8,0.00831877);
   njets81->SetEntries(35032);

   ci = TColor::GetColor("#00cc00");
   njets81->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   njets81->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   njets81->SetMarkerColor(ci);
   njets81->SetMarkerStyle(22);
   njets81->GetXaxis()->SetTitle("njets");
   njets81->GetXaxis()->SetLabelFont(42);
   njets81->GetXaxis()->SetLabelSize(0.035);
   njets81->GetXaxis()->SetTitleSize(0.035);
   njets81->GetXaxis()->SetTitleFont(42);
   njets81->GetYaxis()->SetTitle("Events/pb");
   njets81->GetYaxis()->SetLabelFont(42);
   njets81->GetYaxis()->SetLabelSize(0.035);
   njets81->GetYaxis()->SetTitleSize(0.035);
   njets81->GetYaxis()->SetTitleFont(42);
   njets81->GetZaxis()->SetLabelFont(42);
   njets81->GetZaxis()->SetLabelSize(0.035);
   njets81->GetZaxis()->SetTitleSize(0.035);
   njets81->GetZaxis()->SetTitleFont(42);
   njets->Add(njets,"");
   
   TH1D *njets82 = new TH1D("njets82","Number of jets",15,0,15);
   njets82->SetBinContent(3,29.18033);
   njets82->SetBinContent(4,6.001515);
   njets82->SetBinContent(5,0.7075019);
   njets82->SetBinContent(6,0.06648642);
   njets82->SetBinContent(7,0.002492304);
   njets82->SetBinContent(8,7.369746e-05);
   njets82->SetBinError(3,0.1532494);
   njets82->SetBinError(4,0.06170528);
   njets82->SetBinError(5,0.0181601);
   njets82->SetBinError(6,0.005221729);
   njets82->SetBinError(7,0.0004609712);
   njets82->SetBinError(8,3.295851e-05);
   njets82->SetEntries(136801);

   ci = TColor::GetColor("#00ffff");
   njets82->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   njets82->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   njets82->SetMarkerColor(ci);
   njets82->SetMarkerStyle(20);
   njets82->GetXaxis()->SetTitle("njets");
   njets82->GetXaxis()->SetLabelFont(42);
   njets82->GetXaxis()->SetLabelSize(0.035);
   njets82->GetXaxis()->SetTitleSize(0.035);
   njets82->GetXaxis()->SetTitleFont(42);
   njets82->GetYaxis()->SetTitle("Events/pb");
   njets82->GetYaxis()->SetLabelFont(42);
   njets82->GetYaxis()->SetLabelSize(0.035);
   njets82->GetYaxis()->SetTitleSize(0.035);
   njets82->GetYaxis()->SetTitleFont(42);
   njets82->GetZaxis()->SetLabelFont(42);
   njets82->GetZaxis()->SetLabelSize(0.035);
   njets82->GetZaxis()->SetTitleSize(0.035);
   njets82->GetZaxis()->SetTitleFont(42);
   njets->Add(njets,"");
   
   TH1D *njets83 = new TH1D("njets83","Number of jets",15,0,15);
   njets83->SetBinContent(3,4.179266);
   njets83->SetBinContent(4,0.6862973);
   njets83->SetBinContent(5,0.0694354);
   njets83->SetBinContent(6,0.004561252);
   njets83->SetBinContent(7,0.0004694831);
   njets83->SetBinContent(8,1.030497e-05);
   njets83->SetBinError(3,0.0181505);
   njets83->SetBinError(4,0.006458376);
   njets83->SetBinError(5,0.001768376);
   njets83->SetBinError(6,0.0003972908);
   njets83->SetBinError(7,0.0001312238);
   njets83->SetBinError(8,5.949576e-06);
   njets83->SetEntries(131338);

   ci = TColor::GetColor("#ffcc00");
   njets83->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   njets83->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   njets83->SetMarkerColor(ci);
   njets83->SetMarkerStyle(21);
   njets83->GetXaxis()->SetTitle("njets");
   njets83->GetXaxis()->SetLabelFont(42);
   njets83->GetXaxis()->SetLabelSize(0.035);
   njets83->GetXaxis()->SetTitleSize(0.035);
   njets83->GetXaxis()->SetTitleFont(42);
   njets83->GetYaxis()->SetTitle("Events/pb");
   njets83->GetYaxis()->SetLabelFont(42);
   njets83->GetYaxis()->SetLabelSize(0.035);
   njets83->GetYaxis()->SetTitleSize(0.035);
   njets83->GetYaxis()->SetTitleFont(42);
   njets83->GetZaxis()->SetLabelFont(42);
   njets83->GetZaxis()->SetLabelSize(0.035);
   njets83->GetZaxis()->SetTitleSize(0.035);
   njets83->GetZaxis()->SetTitleFont(42);
   njets->Add(njets,"");
   
   TH1D *njets84 = new TH1D("njets84","Number of jets",15,0,15);
   njets84->SetBinContent(3,0.04574929);
   njets84->SetBinContent(4,0.01525491);
   njets84->SetBinContent(5,0.002653027);
   njets84->SetBinContent(6,0.0005398602);
   njets84->SetBinContent(7,3.084915e-05);
   njets84->SetBinError(3,0.0008400378);
   njets84->SetBinError(4,0.0004850778);
   njets84->SetBinError(5,0.0002022914);
   njets84->SetBinError(6,9.125302e-05);
   njets84->SetBinError(7,2.181364e-05);
   njets84->SetEntries(4164);

   ci = TColor::GetColor("#ff0000");
   njets84->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   njets84->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   njets84->SetMarkerColor(ci);
   njets84->SetMarkerStyle(20);
   njets84->GetXaxis()->SetTitle("njets");
   njets84->GetXaxis()->SetLabelFont(42);
   njets84->GetXaxis()->SetLabelSize(0.035);
   njets84->GetXaxis()->SetTitleSize(0.035);
   njets84->GetXaxis()->SetTitleFont(42);
   njets84->GetYaxis()->SetTitle("Events/pb");
   njets84->GetYaxis()->SetLabelFont(42);
   njets84->GetYaxis()->SetLabelSize(0.035);
   njets84->GetYaxis()->SetTitleSize(0.035);
   njets84->GetYaxis()->SetTitleFont(42);
   njets84->GetZaxis()->SetLabelFont(42);
   njets84->GetZaxis()->SetLabelSize(0.035);
   njets84->GetZaxis()->SetTitleSize(0.035);
   njets84->GetZaxis()->SetTitleFont(42);
   njets->Add(njets,"");
   
   TH1D *njets85 = new TH1D("njets85","Number of jets",15,0,15);
   njets85->SetBinContent(3,0.0003522046);
   njets85->SetBinContent(4,0.0003186613);
   njets85->SetBinContent(5,0.0001844881);
   njets85->SetBinContent(6,0.0001341732);
   njets85->SetBinContent(7,3.35433e-05);
   njets85->SetBinError(3,7.685734e-05);
   njets85->SetBinError(4,7.310592e-05);
   njets85->SetBinError(5,5.562526e-05);
   njets85->SetBinError(6,4.743738e-05);
   njets85->SetBinError(7,2.371869e-05);
   njets85->SetEntries(61);

   ci = TColor::GetColor("#0000ff");
   njets85->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   njets85->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   njets85->SetMarkerColor(ci);
   njets85->SetMarkerStyle(21);
   njets85->GetXaxis()->SetTitle("njets");
   njets85->GetXaxis()->SetLabelFont(42);
   njets85->GetXaxis()->SetLabelSize(0.035);
   njets85->GetXaxis()->SetTitleSize(0.035);
   njets85->GetXaxis()->SetTitleFont(42);
   njets85->GetYaxis()->SetTitle("Events/pb");
   njets85->GetYaxis()->SetLabelFont(42);
   njets85->GetYaxis()->SetLabelSize(0.035);
   njets85->GetYaxis()->SetTitleSize(0.035);
   njets85->GetYaxis()->SetTitleFont(42);
   njets85->GetZaxis()->SetLabelFont(42);
   njets85->GetZaxis()->SetLabelSize(0.035);
   njets85->GetZaxis()->SetTitleSize(0.035);
   njets85->GetZaxis()->SetTitleFont(42);
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
