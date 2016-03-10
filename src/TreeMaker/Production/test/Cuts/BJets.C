void BJets()
{
//=========Macro generated from canvas: BJets/BJets
//=========  (Fri Nov  6 09:02:43 2015) by ROOT version6.02/05
   TCanvas *BJets = new TCanvas("BJets", "BJets",0,23,700,700);
   BJets->Range(-1.25,-4.584085,11.25,0.8394249);
   BJets->SetFillColor(0);
   BJets->SetBorderMode(0);
   BJets->SetBorderSize(2);
   BJets->SetLogy();
   BJets->SetFrameBorderMode(0);
   BJets->SetFrameBorderMode(0);
   
   THStack *BJets = new THStack();
   BJets->SetName("BJets");
   BJets->SetTitle("BJets");
   
   TH1F *BJets_stack_1 = new TH1F("BJets_stack_1","BJets",10,0,10);
   BJets_stack_1->SetMinimum(9.083772e-05);
   BJets_stack_1->SetMaximum(1.981864);
   BJets_stack_1->SetDirectory(0);
   BJets_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   BJets_stack_1->SetLineColor(ci);
   BJets_stack_1->GetXaxis()->SetTitle("BJets");
   BJets_stack_1->GetXaxis()->SetLabelFont(42);
   BJets_stack_1->GetXaxis()->SetLabelSize(0.035);
   BJets_stack_1->GetXaxis()->SetTitleSize(0.035);
   BJets_stack_1->GetXaxis()->SetTitleFont(42);
   BJets_stack_1->GetYaxis()->SetTitle("Events/pb");
   BJets_stack_1->GetYaxis()->SetLabelFont(42);
   BJets_stack_1->GetYaxis()->SetLabelSize(0.035);
   BJets_stack_1->GetYaxis()->SetTitleSize(0.035);
   BJets_stack_1->GetYaxis()->SetTitleFont(42);
   BJets_stack_1->GetZaxis()->SetLabelFont(42);
   BJets_stack_1->GetZaxis()->SetLabelSize(0.035);
   BJets_stack_1->GetZaxis()->SetTitleSize(0.035);
   BJets_stack_1->GetZaxis()->SetTitleFont(42);
   BJets->SetHistogram(BJets_stack_1);
   
   
   TH1D *BJets1 = new TH1D("BJets1"," Number of b-tagged jets",10,0,10);
   BJets1->SetBinContent(1,0.03007584);
   BJets1->SetBinError(1,0.02641216);
   BJets1->SetEntries(4);

   ci = TColor::GetColor("#00cc00");
   BJets1->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   BJets1->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   BJets1->SetMarkerColor(ci);
   BJets1->SetMarkerStyle(22);
   BJets1->GetXaxis()->SetTitle("BJets");
   BJets1->GetXaxis()->SetLabelFont(42);
   BJets1->GetXaxis()->SetLabelSize(0.035);
   BJets1->GetXaxis()->SetTitleSize(0.035);
   BJets1->GetXaxis()->SetTitleFont(42);
   BJets1->GetYaxis()->SetTitle("Events/pb");
   BJets1->GetYaxis()->SetLabelFont(42);
   BJets1->GetYaxis()->SetLabelSize(0.035);
   BJets1->GetYaxis()->SetTitleSize(0.035);
   BJets1->GetYaxis()->SetTitleFont(42);
   BJets1->GetZaxis()->SetLabelFont(42);
   BJets1->GetZaxis()->SetLabelSize(0.035);
   BJets1->GetZaxis()->SetTitleSize(0.035);
   BJets1->GetZaxis()->SetTitleFont(42);
   BJets->Add(BJets,"");
   
   TH1D *BJets2 = new TH1D("BJets2"," Number of b-tagged jets",10,0,10);
   BJets2->SetBinContent(1,1.145616);
   BJets2->SetBinError(1,0.02041022);
   BJets2->SetEntries(9534);

   ci = TColor::GetColor("#00ffff");
   BJets2->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   BJets2->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   BJets2->SetMarkerColor(ci);
   BJets2->SetMarkerStyle(20);
   BJets2->GetXaxis()->SetTitle("BJets");
   BJets2->GetXaxis()->SetLabelFont(42);
   BJets2->GetXaxis()->SetLabelSize(0.035);
   BJets2->GetXaxis()->SetTitleSize(0.035);
   BJets2->GetXaxis()->SetTitleFont(42);
   BJets2->GetYaxis()->SetTitle("Events/pb");
   BJets2->GetYaxis()->SetLabelFont(42);
   BJets2->GetYaxis()->SetLabelSize(0.035);
   BJets2->GetYaxis()->SetTitleSize(0.035);
   BJets2->GetYaxis()->SetTitleFont(42);
   BJets2->GetZaxis()->SetLabelFont(42);
   BJets2->GetZaxis()->SetLabelSize(0.035);
   BJets2->GetZaxis()->SetTitleSize(0.035);
   BJets2->GetZaxis()->SetTitleFont(42);
   BJets->Add(BJets,"");
   
   TH1D *BJets3 = new TH1D("BJets3"," Number of b-tagged jets",10,0,10);
   BJets3->SetBinContent(1,0.284387);
   BJets3->SetBinError(1,0.004102077);
   BJets3->SetEntries(13132);

   ci = TColor::GetColor("#ffcc00");
   BJets3->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   BJets3->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   BJets3->SetMarkerColor(ci);
   BJets3->SetMarkerStyle(21);
   BJets3->GetXaxis()->SetTitle("BJets");
   BJets3->GetXaxis()->SetLabelFont(42);
   BJets3->GetXaxis()->SetLabelSize(0.035);
   BJets3->GetXaxis()->SetTitleSize(0.035);
   BJets3->GetXaxis()->SetTitleFont(42);
   BJets3->GetYaxis()->SetTitle("Events/pb");
   BJets3->GetYaxis()->SetLabelFont(42);
   BJets3->GetYaxis()->SetLabelSize(0.035);
   BJets3->GetYaxis()->SetTitleSize(0.035);
   BJets3->GetYaxis()->SetTitleFont(42);
   BJets3->GetZaxis()->SetLabelFont(42);
   BJets3->GetZaxis()->SetLabelSize(0.035);
   BJets3->GetZaxis()->SetTitleSize(0.035);
   BJets3->GetZaxis()->SetTitleFont(42);
   BJets->Add(BJets,"");
   
   TH1D *BJets4 = new TH1D("BJets4"," Number of b-tagged jets",10,0,10);
   BJets4->SetBinContent(1,0.03254586);
   BJets4->SetBinError(1,0.0007085238);
   BJets4->SetEntries(2110);

   ci = TColor::GetColor("#ff0000");
   BJets4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   BJets4->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   BJets4->SetMarkerColor(ci);
   BJets4->SetMarkerStyle(20);
   BJets4->GetXaxis()->SetTitle("BJets");
   BJets4->GetXaxis()->SetLabelFont(42);
   BJets4->GetXaxis()->SetLabelSize(0.035);
   BJets4->GetXaxis()->SetTitleSize(0.035);
   BJets4->GetXaxis()->SetTitleFont(42);
   BJets4->GetYaxis()->SetTitle("Events/pb");
   BJets4->GetYaxis()->SetLabelFont(42);
   BJets4->GetYaxis()->SetLabelSize(0.035);
   BJets4->GetYaxis()->SetTitleSize(0.035);
   BJets4->GetYaxis()->SetTitleFont(42);
   BJets4->GetZaxis()->SetLabelFont(42);
   BJets4->GetZaxis()->SetLabelSize(0.035);
   BJets4->GetZaxis()->SetTitleSize(0.035);
   BJets4->GetZaxis()->SetTitleFont(42);
   BJets->Add(BJets,"");
   
   TH1D *BJets5 = new TH1D("BJets5"," Number of b-tagged jets",10,0,10);
   BJets5->SetBinContent(1,0.000285118);
   BJets5->SetBinError(1,6.915127e-05);
   BJets5->SetEntries(17);

   ci = TColor::GetColor("#0000ff");
   BJets5->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   BJets5->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   BJets5->SetMarkerColor(ci);
   BJets5->SetMarkerStyle(21);
   BJets5->GetXaxis()->SetTitle("BJets");
   BJets5->GetXaxis()->SetLabelFont(42);
   BJets5->GetXaxis()->SetLabelSize(0.035);
   BJets5->GetXaxis()->SetTitleSize(0.035);
   BJets5->GetXaxis()->SetTitleFont(42);
   BJets5->GetYaxis()->SetTitle("Events/pb");
   BJets5->GetYaxis()->SetLabelFont(42);
   BJets5->GetYaxis()->SetLabelSize(0.035);
   BJets5->GetYaxis()->SetTitleSize(0.035);
   BJets5->GetYaxis()->SetTitleFont(42);
   BJets5->GetZaxis()->SetLabelFont(42);
   BJets5->GetZaxis()->SetLabelSize(0.035);
   BJets5->GetZaxis()->SetTitleSize(0.035);
   BJets5->GetZaxis()->SetTitleFont(42);
   BJets->Add(BJets,"");
   BJets->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.4217529,0.94,0.5782471,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("BJets");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("BJets","BJets_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BJets","BJets_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BJets","BJets_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BJets","BJets_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BJets","BJets_ttbar","lp");

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
   BJets->Modified();
   BJets->cd();
   BJets->SetSelected(BJets);
}
