void deltaeta()
{
//=========Macro generated from canvas: deltaeta/deltaeta
//=========  (Mon Nov 23 12:45:07 2015) by ROOT version6.02/05
   TCanvas *deltaeta = new TCanvas("deltaeta", "deltaeta",200,222,700,700);
   deltaeta->Range(-1.25,-7.28157,11.25,0.2283368);
   deltaeta->SetFillColor(0);
   deltaeta->SetBorderMode(0);
   deltaeta->SetBorderSize(2);
   deltaeta->SetLogy();
   deltaeta->SetFrameBorderMode(0);
   deltaeta->SetFrameBorderMode(0);
   
   THStack *deltaeta = new THStack();
   deltaeta->SetName("deltaeta");
   deltaeta->SetTitle("deltaeta");
   
   TH1F *deltaeta_stack_11 = new TH1F("deltaeta_stack_11","deltaeta",10,0,10);
   deltaeta_stack_11->SetMinimum(2.947278e-07);
   deltaeta_stack_11->SetMaximum(0.3001554);
   deltaeta_stack_11->SetDirectory(0);
   deltaeta_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   deltaeta_stack_11->SetLineColor(ci);
   deltaeta_stack_11->GetXaxis()->SetTitle("deltaeta");
   deltaeta_stack_11->GetXaxis()->SetLabelFont(42);
   deltaeta_stack_11->GetXaxis()->SetLabelSize(0.035);
   deltaeta_stack_11->GetXaxis()->SetTitleSize(0.035);
   deltaeta_stack_11->GetXaxis()->SetTitleFont(42);
   deltaeta_stack_11->GetYaxis()->SetTitle("Events/pb");
   deltaeta_stack_11->GetYaxis()->SetLabelFont(42);
   deltaeta_stack_11->GetYaxis()->SetLabelSize(0.035);
   deltaeta_stack_11->GetYaxis()->SetTitleSize(0.035);
   deltaeta_stack_11->GetYaxis()->SetTitleFont(42);
   deltaeta_stack_11->GetZaxis()->SetLabelFont(42);
   deltaeta_stack_11->GetZaxis()->SetLabelSize(0.035);
   deltaeta_stack_11->GetZaxis()->SetTitleSize(0.035);
   deltaeta_stack_11->GetZaxis()->SetTitleFont(42);
   deltaeta->SetHistogram(deltaeta_stack_11);
   
   
   TH1D *deltaeta51 = new TH1D("deltaeta51","#Delta_{#eta}",10,0,10);
   deltaeta51->SetBinContent(1,0.01784843);
   deltaeta51->SetBinContent(2,0.04703937);
   deltaeta51->SetBinContent(3,0.02767907);
   deltaeta51->SetBinContent(4,0.00968015);
   deltaeta51->SetBinContent(5,0.02072168);
   deltaeta51->SetBinContent(7,0.00899946);
   deltaeta51->SetBinError(1,0.008699924);
   deltaeta51->SetBinError(2,0.01870071);
   deltaeta51->SetBinError(3,0.0144727);
   deltaeta51->SetBinError(4,0.008374283);
   deltaeta51->SetBinError(5,0.01188208);
   deltaeta51->SetBinError(7,0.008346573);
   deltaeta51->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   deltaeta51->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   deltaeta51->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   deltaeta51->SetMarkerColor(ci);
   deltaeta51->SetMarkerStyle(22);
   deltaeta51->GetXaxis()->SetTitle("deltaeta");
   deltaeta51->GetXaxis()->SetLabelFont(42);
   deltaeta51->GetXaxis()->SetLabelSize(0.035);
   deltaeta51->GetXaxis()->SetTitleSize(0.035);
   deltaeta51->GetXaxis()->SetTitleFont(42);
   deltaeta51->GetYaxis()->SetTitle("Events/pb");
   deltaeta51->GetYaxis()->SetLabelFont(42);
   deltaeta51->GetYaxis()->SetLabelSize(0.035);
   deltaeta51->GetYaxis()->SetTitleSize(0.035);
   deltaeta51->GetYaxis()->SetTitleFont(42);
   deltaeta51->GetZaxis()->SetLabelFont(42);
   deltaeta51->GetZaxis()->SetLabelSize(0.035);
   deltaeta51->GetZaxis()->SetTitleSize(0.035);
   deltaeta51->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   
   TH1D *deltaeta52 = new TH1D("deltaeta52","#Delta_{#eta}",10,0,10);
   deltaeta52->SetBinContent(1,0.0608501);
   deltaeta52->SetBinContent(2,0.06997583);
   deltaeta52->SetBinContent(3,0.1011139);
   deltaeta52->SetBinContent(4,0.1478974);
   deltaeta52->SetBinContent(5,0.1258231);
   deltaeta52->SetBinContent(6,0.06879078);
   deltaeta52->SetBinContent(7,0.02056057);
   deltaeta52->SetBinContent(8,0.005002294);
   deltaeta52->SetBinContent(9,0.0004473195);
   deltaeta52->SetBinError(1,0.002623592);
   deltaeta52->SetBinError(2,0.003273401);
   deltaeta52->SetBinError(3,0.0037277);
   deltaeta52->SetBinError(4,0.005255049);
   deltaeta52->SetBinError(5,0.004584496);
   deltaeta52->SetBinError(6,0.003732004);
   deltaeta52->SetBinError(7,0.001942461);
   deltaeta52->SetBinError(8,0.0007164958);
   deltaeta52->SetBinError(9,0.0001894372);
   deltaeta52->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   deltaeta52->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   deltaeta52->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   deltaeta52->SetMarkerColor(ci);
   deltaeta52->SetMarkerStyle(20);
   deltaeta52->GetXaxis()->SetTitle("deltaeta");
   deltaeta52->GetXaxis()->SetLabelFont(42);
   deltaeta52->GetXaxis()->SetLabelSize(0.035);
   deltaeta52->GetXaxis()->SetTitleSize(0.035);
   deltaeta52->GetXaxis()->SetTitleFont(42);
   deltaeta52->GetYaxis()->SetTitle("Events/pb");
   deltaeta52->GetYaxis()->SetLabelFont(42);
   deltaeta52->GetYaxis()->SetLabelSize(0.035);
   deltaeta52->GetYaxis()->SetTitleSize(0.035);
   deltaeta52->GetYaxis()->SetTitleFont(42);
   deltaeta52->GetZaxis()->SetLabelFont(42);
   deltaeta52->GetZaxis()->SetLabelSize(0.035);
   deltaeta52->GetZaxis()->SetTitleSize(0.035);
   deltaeta52->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   
   TH1D *deltaeta53 = new TH1D("deltaeta53","#Delta_{#eta}",10,0,10);
   deltaeta53->SetBinContent(1,0.01507862);
   deltaeta53->SetBinContent(2,0.01854643);
   deltaeta53->SetBinContent(3,0.02730304);
   deltaeta53->SetBinContent(4,0.03559811);
   deltaeta53->SetBinContent(5,0.02931509);
   deltaeta53->SetBinContent(6,0.01458596);
   deltaeta53->SetBinContent(7,0.004733624);
   deltaeta53->SetBinContent(8,0.001195425);
   deltaeta53->SetBinContent(9,0.0001188869);
   deltaeta53->SetBinContent(10,1.170302e-06);
   deltaeta53->SetBinError(1,0.0005731643);
   deltaeta53->SetBinError(2,0.0006348213);
   deltaeta53->SetBinError(3,0.0008275212);
   deltaeta53->SetBinError(4,0.0009460465);
   deltaeta53->SetBinError(5,0.0008836082);
   deltaeta53->SetBinError(6,0.0006177865);
   deltaeta53->SetBinError(7,0.0003490933);
   deltaeta53->SetBinError(8,0.0001754324);
   deltaeta53->SetBinError(9,4.988181e-05);
   deltaeta53->SetBinError(10,1.170302e-06);
   deltaeta53->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   deltaeta53->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   deltaeta53->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   deltaeta53->SetMarkerColor(ci);
   deltaeta53->SetMarkerStyle(21);
   deltaeta53->GetXaxis()->SetTitle("deltaeta");
   deltaeta53->GetXaxis()->SetLabelFont(42);
   deltaeta53->GetXaxis()->SetLabelSize(0.035);
   deltaeta53->GetXaxis()->SetTitleSize(0.035);
   deltaeta53->GetXaxis()->SetTitleFont(42);
   deltaeta53->GetYaxis()->SetTitle("Events/pb");
   deltaeta53->GetYaxis()->SetLabelFont(42);
   deltaeta53->GetYaxis()->SetLabelSize(0.035);
   deltaeta53->GetYaxis()->SetTitleSize(0.035);
   deltaeta53->GetYaxis()->SetTitleFont(42);
   deltaeta53->GetZaxis()->SetLabelFont(42);
   deltaeta53->GetZaxis()->SetLabelSize(0.035);
   deltaeta53->GetZaxis()->SetTitleSize(0.035);
   deltaeta53->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   
   TH1D *deltaeta54 = new TH1D("deltaeta54","#Delta_{#eta}",10,0,10);
   deltaeta54->SetBinContent(1,0.0006015585);
   deltaeta54->SetBinContent(2,0.001033447);
   deltaeta54->SetBinContent(3,0.002144016);
   deltaeta54->SetBinContent(4,0.003254586);
   deltaeta54->SetBinContent(5,0.003933267);
   deltaeta54->SetBinContent(6,0.002946094);
   deltaeta54->SetBinContent(7,0.001542458);
   deltaeta54->SetBinContent(8,0.0004164636);
   deltaeta54->SetBinContent(9,6.16983e-05);
   deltaeta54->SetBinError(1,9.632645e-05);
   deltaeta54->SetBinError(2,0.0001262556);
   deltaeta54->SetBinError(3,0.0001818531);
   deltaeta54->SetBinError(4,0.0002240549);
   deltaeta54->SetBinError(5,0.0002463107);
   deltaeta54->SetBinError(6,0.0002131719);
   deltaeta54->SetBinError(7,0.0001542458);
   deltaeta54->SetBinError(8,8.014845e-05);
   deltaeta54->SetBinError(9,3.084915e-05);
   deltaeta54->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   deltaeta54->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   deltaeta54->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   deltaeta54->SetMarkerColor(ci);
   deltaeta54->SetMarkerStyle(20);
   deltaeta54->GetXaxis()->SetTitle("deltaeta");
   deltaeta54->GetXaxis()->SetLabelFont(42);
   deltaeta54->GetXaxis()->SetLabelSize(0.035);
   deltaeta54->GetXaxis()->SetTitleSize(0.035);
   deltaeta54->GetXaxis()->SetTitleFont(42);
   deltaeta54->GetYaxis()->SetTitle("Events/pb");
   deltaeta54->GetYaxis()->SetLabelFont(42);
   deltaeta54->GetYaxis()->SetLabelSize(0.035);
   deltaeta54->GetYaxis()->SetTitleSize(0.035);
   deltaeta54->GetYaxis()->SetTitleFont(42);
   deltaeta54->GetZaxis()->SetLabelFont(42);
   deltaeta54->GetZaxis()->SetLabelSize(0.035);
   deltaeta54->GetZaxis()->SetTitleSize(0.035);
   deltaeta54->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   
   TH1D *deltaeta55 = new TH1D("deltaeta55","#Delta_{#eta}",10,0,10);
   deltaeta55->SetBinContent(5,1.677165e-05);
   deltaeta55->SetBinError(5,1.677165e-05);
   deltaeta55->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   deltaeta55->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   deltaeta55->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   deltaeta55->SetMarkerColor(ci);
   deltaeta55->SetMarkerStyle(21);
   deltaeta55->GetXaxis()->SetTitle("deltaeta");
   deltaeta55->GetXaxis()->SetLabelFont(42);
   deltaeta55->GetXaxis()->SetLabelSize(0.035);
   deltaeta55->GetXaxis()->SetTitleSize(0.035);
   deltaeta55->GetXaxis()->SetTitleFont(42);
   deltaeta55->GetYaxis()->SetTitle("Events/pb");
   deltaeta55->GetYaxis()->SetLabelFont(42);
   deltaeta55->GetYaxis()->SetLabelSize(0.035);
   deltaeta55->GetYaxis()->SetTitleSize(0.035);
   deltaeta55->GetYaxis()->SetTitleFont(42);
   deltaeta55->GetZaxis()->SetLabelFont(42);
   deltaeta55->GetZaxis()->SetLabelSize(0.035);
   deltaeta55->GetZaxis()->SetTitleSize(0.035);
   deltaeta55->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   deltaeta->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3951724,0.94,0.6048276,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("deltaeta");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("deltaeta","deltaeta_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaeta","deltaeta_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaeta","deltaeta_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaeta","deltaeta_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaeta","deltaeta_ttbar","lp");

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
   deltaeta->Modified();
   deltaeta->cd();
   deltaeta->SetSelected(deltaeta);
}
