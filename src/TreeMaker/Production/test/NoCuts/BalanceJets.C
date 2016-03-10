void BalanceJets()
{
//=========Macro generated from canvas: BalanceJets/BalanceJets
//=========  (Mon Nov 23 11:04:59 2015) by ROOT version6.02/05
   TCanvas *BalanceJets = new TCanvas("BalanceJets", "BalanceJets",80,102,700,700);
   BalanceJets->Range(-1.875,-7.52261,16.875,5.203874);
   BalanceJets->SetFillColor(0);
   BalanceJets->SetBorderMode(0);
   BalanceJets->SetBorderSize(2);
   BalanceJets->SetLogy();
   BalanceJets->SetFrameBorderMode(0);
   BalanceJets->SetFrameBorderMode(0);
   
   THStack *BalanceJets = new THStack();
   BalanceJets->SetName("BalanceJets");
   BalanceJets->SetTitle("BalanceJets");
   
   TH1F *BalanceJets_stack_5 = new TH1F("BalanceJets_stack_5","BalanceJets",15,0,15);
   BalanceJets_stack_5->SetMinimum(5.623916e-07);
   BalanceJets_stack_5->SetMaximum(8535.43);
   BalanceJets_stack_5->SetDirectory(0);
   BalanceJets_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   BalanceJets_stack_5->SetLineColor(ci);
   BalanceJets_stack_5->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets_stack_5->GetXaxis()->SetLabelFont(42);
   BalanceJets_stack_5->GetXaxis()->SetLabelSize(0.035);
   BalanceJets_stack_5->GetXaxis()->SetTitleSize(0.035);
   BalanceJets_stack_5->GetXaxis()->SetTitleFont(42);
   BalanceJets_stack_5->GetYaxis()->SetTitle("Events/pb");
   BalanceJets_stack_5->GetYaxis()->SetLabelFont(42);
   BalanceJets_stack_5->GetYaxis()->SetLabelSize(0.035);
   BalanceJets_stack_5->GetYaxis()->SetTitleSize(0.035);
   BalanceJets_stack_5->GetYaxis()->SetTitleFont(42);
   BalanceJets_stack_5->GetZaxis()->SetLabelFont(42);
   BalanceJets_stack_5->GetZaxis()->SetLabelSize(0.035);
   BalanceJets_stack_5->GetZaxis()->SetTitleSize(0.035);
   BalanceJets_stack_5->GetZaxis()->SetTitleFont(42);
   BalanceJets->SetHistogram(BalanceJets_stack_5);
   
   
   TH1D *BalanceJets21 = new TH1D("BalanceJets21"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJets21->SetBinContent(1,2319.548);
   BalanceJets21->SetBinContent(2,3049.657);
   BalanceJets21->SetBinContent(3,331.783);
   BalanceJets21->SetBinContent(4,10.31299);
   BalanceJets21->SetBinContent(5,0.01663754);
   BalanceJets21->SetBinError(1,27.53086);
   BalanceJets21->SetBinError(2,31.59778);
   BalanceJets21->SetBinError(3,10.43207);
   BalanceJets21->SetBinError(4,1.832891);
   BalanceJets21->SetBinError(5,0.01176452);
   BalanceJets21->SetEntries(35032);

   ci = TColor::GetColor("#00cc00");
   BalanceJets21->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   BalanceJets21->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   BalanceJets21->SetMarkerColor(ci);
   BalanceJets21->SetMarkerStyle(22);
   BalanceJets21->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets21->GetXaxis()->SetLabelFont(42);
   BalanceJets21->GetXaxis()->SetLabelSize(0.035);
   BalanceJets21->GetXaxis()->SetTitleSize(0.035);
   BalanceJets21->GetXaxis()->SetTitleFont(42);
   BalanceJets21->GetYaxis()->SetTitle("Events/pb");
   BalanceJets21->GetYaxis()->SetLabelFont(42);
   BalanceJets21->GetYaxis()->SetLabelSize(0.035);
   BalanceJets21->GetYaxis()->SetTitleSize(0.035);
   BalanceJets21->GetYaxis()->SetTitleFont(42);
   BalanceJets21->GetZaxis()->SetLabelFont(42);
   BalanceJets21->GetZaxis()->SetLabelSize(0.035);
   BalanceJets21->GetZaxis()->SetTitleSize(0.035);
   BalanceJets21->GetZaxis()->SetTitleFont(42);
   BalanceJets->Add(BalanceJets,"");
   
   TH1D *BalanceJets22 = new TH1D("BalanceJets22"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJets22->SetBinContent(1,11.29909);
   BalanceJets22->SetBinContent(2,22.40155);
   BalanceJets22->SetBinContent(3,2.221727);
   BalanceJets22->SetBinContent(4,0.03499574);
   BalanceJets22->SetBinContent(5,0.001042605);
   BalanceJets22->SetBinError(1,0.09286954);
   BalanceJets22->SetBinError(2,0.131846);
   BalanceJets22->SetBinError(3,0.0402964);
   BalanceJets22->SetBinError(4,0.004161407);
   BalanceJets22->SetBinError(5,0.0009718625);
   BalanceJets22->SetEntries(136801);

   ci = TColor::GetColor("#00ffff");
   BalanceJets22->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   BalanceJets22->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   BalanceJets22->SetMarkerColor(ci);
   BalanceJets22->SetMarkerStyle(20);
   BalanceJets22->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets22->GetXaxis()->SetLabelFont(42);
   BalanceJets22->GetXaxis()->SetLabelSize(0.035);
   BalanceJets22->GetXaxis()->SetTitleSize(0.035);
   BalanceJets22->GetXaxis()->SetTitleFont(42);
   BalanceJets22->GetYaxis()->SetTitle("Events/pb");
   BalanceJets22->GetYaxis()->SetLabelFont(42);
   BalanceJets22->GetYaxis()->SetLabelSize(0.035);
   BalanceJets22->GetYaxis()->SetTitleSize(0.035);
   BalanceJets22->GetYaxis()->SetTitleFont(42);
   BalanceJets22->GetZaxis()->SetLabelFont(42);
   BalanceJets22->GetZaxis()->SetLabelSize(0.035);
   BalanceJets22->GetZaxis()->SetTitleSize(0.035);
   BalanceJets22->GetZaxis()->SetTitleFont(42);
   BalanceJets->Add(BalanceJets,"");
   
   TH1D *BalanceJets23 = new TH1D("BalanceJets23"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJets23->SetBinContent(1,1.481231);
   BalanceJets23->SetBinContent(2,3.1456);
   BalanceJets23->SetBinContent(3,0.3085742);
   BalanceJets23->SetBinContent(4,0.004596179);
   BalanceJets23->SetBinContent(5,3.502369e-05);
   BalanceJets23->SetBinContent(6,3.434989e-06);
   BalanceJets23->SetBinError(1,0.0105456);
   BalanceJets23->SetBinError(2,0.01550267);
   BalanceJets23->SetBinError(3,0.00476054);
   BalanceJets23->SetBinError(4,0.0004976995);
   BalanceJets23->SetBinError(5,2.856973e-05);
   BalanceJets23->SetBinError(6,3.434989e-06);
   BalanceJets23->SetEntries(131338);

   ci = TColor::GetColor("#ffcc00");
   BalanceJets23->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   BalanceJets23->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   BalanceJets23->SetMarkerColor(ci);
   BalanceJets23->SetMarkerStyle(21);
   BalanceJets23->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets23->GetXaxis()->SetLabelFont(42);
   BalanceJets23->GetXaxis()->SetLabelSize(0.035);
   BalanceJets23->GetXaxis()->SetTitleSize(0.035);
   BalanceJets23->GetXaxis()->SetTitleFont(42);
   BalanceJets23->GetYaxis()->SetTitle("Events/pb");
   BalanceJets23->GetYaxis()->SetLabelFont(42);
   BalanceJets23->GetYaxis()->SetLabelSize(0.035);
   BalanceJets23->GetYaxis()->SetTitleSize(0.035);
   BalanceJets23->GetYaxis()->SetTitleFont(42);
   BalanceJets23->GetZaxis()->SetLabelFont(42);
   BalanceJets23->GetZaxis()->SetLabelSize(0.035);
   BalanceJets23->GetZaxis()->SetTitleSize(0.035);
   BalanceJets23->GetZaxis()->SetTitleFont(42);
   BalanceJets->Add(BalanceJets,"");
   
   TH1D *BalanceJets24 = new TH1D("BalanceJets24"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJets24->SetBinContent(1,0.01403636);
   BalanceJets24->SetBinContent(2,0.04143041);
   BalanceJets24->SetBinContent(3,0.008437243);
   BalanceJets24->SetBinContent(4,0.0003239161);
   BalanceJets24->SetBinError(1,0.0004653009);
   BalanceJets24->SetBinError(2,0.0007994039);
   BalanceJets24->SetBinError(3,0.0003607505);
   BalanceJets24->SetBinError(4,7.068429e-05);
   BalanceJets24->SetEntries(4164);

   ci = TColor::GetColor("#ff0000");
   BalanceJets24->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   BalanceJets24->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   BalanceJets24->SetMarkerColor(ci);
   BalanceJets24->SetMarkerStyle(20);
   BalanceJets24->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets24->GetXaxis()->SetLabelFont(42);
   BalanceJets24->GetXaxis()->SetLabelSize(0.035);
   BalanceJets24->GetXaxis()->SetTitleSize(0.035);
   BalanceJets24->GetXaxis()->SetTitleFont(42);
   BalanceJets24->GetYaxis()->SetTitle("Events/pb");
   BalanceJets24->GetYaxis()->SetLabelFont(42);
   BalanceJets24->GetYaxis()->SetLabelSize(0.035);
   BalanceJets24->GetYaxis()->SetTitleSize(0.035);
   BalanceJets24->GetYaxis()->SetTitleFont(42);
   BalanceJets24->GetZaxis()->SetLabelFont(42);
   BalanceJets24->GetZaxis()->SetLabelSize(0.035);
   BalanceJets24->GetZaxis()->SetTitleSize(0.035);
   BalanceJets24->GetZaxis()->SetTitleFont(42);
   BalanceJets->Add(BalanceJets,"");
   
   TH1D *BalanceJets25 = new TH1D("BalanceJets25"," Number of jets in balancing hemisphere",15,0,15);
   BalanceJets25->SetBinContent(1,0.0002180314);
   BalanceJets25->SetBinContent(2,0.0005366927);
   BalanceJets25->SetBinContent(3,0.0002683464);
   BalanceJets25->SetBinError(1,6.047104e-05);
   BalanceJets25->SetBinError(2,9.487477e-05);
   BalanceJets25->SetBinError(3,6.708659e-05);
   BalanceJets25->SetEntries(61);

   ci = TColor::GetColor("#0000ff");
   BalanceJets25->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   BalanceJets25->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   BalanceJets25->SetMarkerColor(ci);
   BalanceJets25->SetMarkerStyle(21);
   BalanceJets25->GetXaxis()->SetTitle("BalanceJets");
   BalanceJets25->GetXaxis()->SetLabelFont(42);
   BalanceJets25->GetXaxis()->SetLabelSize(0.035);
   BalanceJets25->GetXaxis()->SetTitleSize(0.035);
   BalanceJets25->GetXaxis()->SetTitleFont(42);
   BalanceJets25->GetYaxis()->SetTitle("Events/pb");
   BalanceJets25->GetYaxis()->SetLabelFont(42);
   BalanceJets25->GetYaxis()->SetLabelSize(0.035);
   BalanceJets25->GetYaxis()->SetTitleSize(0.035);
   BalanceJets25->GetYaxis()->SetTitleFont(42);
   BalanceJets25->GetZaxis()->SetLabelFont(42);
   BalanceJets25->GetZaxis()->SetLabelSize(0.035);
   BalanceJets25->GetZaxis()->SetTitleSize(0.035);
   BalanceJets25->GetZaxis()->SetTitleFont(42);
   BalanceJets->Add(BalanceJets,"");
   BalanceJets->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3434483,0.94,0.6565517,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("BalanceJets");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("BalanceJets","BalanceJets_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BalanceJets","BalanceJets_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BalanceJets","BalanceJets_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BalanceJets","BalanceJets_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BalanceJets","BalanceJets_ttbar","lp");

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
   BalanceJets->Modified();
   BalanceJets->cd();
   BalanceJets->SetSelected(BalanceJets);
}
