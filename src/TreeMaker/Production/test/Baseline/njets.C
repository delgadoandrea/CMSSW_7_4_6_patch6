void njets()
{
//=========Macro generated from canvas: njets/njets
//=========  (Mon Nov 23 12:45:17 2015) by ROOT version6.02/05
   TCanvas *njets = new TCanvas("njets", "njets",320,342,700,700);
   njets->Range(-1.875,-6.097011,16.875,0.6409509);
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
   njets_stack_17->SetMinimum(3.773855e-06);
   njets_stack_17->SetMaximum(0.92716);
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
   njets81->SetBinContent(3,0.1029277);
   njets81->SetBinContent(4,0.02004099);
   njets81->SetBinContent(5,0.00899946);
   njets81->SetBinError(3,0.02656043);
   njets81->SetBinError(4,0.01186257);
   njets81->SetBinError(5,0.008346573);
   njets81->SetEntries(48);

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
   njets82->SetBinContent(3,0.4834145);
   njets82->SetBinContent(4,0.1025111);
   njets82->SetBinContent(5,0.01284213);
   njets82->SetBinContent(6,0.001478066);
   njets82->SetBinContent(7,0.0002007399);
   njets82->SetBinContent(8,1.473949e-05);
   njets82->SetBinError(3,0.008999294);
   njets82->SetBinError(4,0.004027942);
   njets82->SetBinError(5,0.001011882);
   njets82->SetBinError(6,0.0003524511);
   njets82->SetBinError(7,0.0001326428);
   njets82->SetBinError(8,1.473949e-05);
   njets82->SetEntries(12325);

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
   njets83->SetBinContent(3,0.1200826);
   njets83->SetBinContent(4,0.02324993);
   njets83->SetBinContent(5,0.002772838);
   njets83->SetBinContent(6,0.0003571668);
   njets83->SetBinContent(7,1.381587e-05);
   njets83->SetBinError(3,0.001753594);
   njets83->SetBinError(4,0.0007120349);
   njets83->SetBinError(5,0.0002018466);
   njets83->SetBinError(6,7.746139e-05);
   njets83->SetBinError(7,6.285401e-06);
   njets83->SetEntries(19290);

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
   njets84->SetBinContent(3,0.01038074);
   njets84->SetBinContent(4,0.004488552);
   njets84->SetBinContent(5,0.0008483517);
   njets84->SetBinContent(6,0.0002005195);
   njets84->SetBinContent(7,1.542458e-05);
   njets84->SetBinError(3,0.0004001481);
   njets84->SetBinError(4,0.0002631236);
   njets84->SetBinError(5,0.0001143917);
   njets84->SetBinError(6,5.56141e-05);
   njets84->SetBinError(7,1.542458e-05);
   njets84->SetEntries(1033);

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
   njets85->SetBinContent(5,1.677165e-05);
   njets85->SetBinError(5,1.677165e-05);
   njets85->SetEntries(1);

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
