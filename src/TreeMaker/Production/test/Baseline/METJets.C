void METJets()
{
//=========Macro generated from canvas: METJets/METJets
//=========  (Mon Nov 23 12:44:57 2015) by ROOT version6.02/05
   TCanvas *METJets = new TCanvas("METJets", "METJets",100,122,700,700);
   METJets->Range(-1.875,-6.017385,16.875,0.5057179);
   METJets->SetFillColor(0);
   METJets->SetBorderMode(0);
   METJets->SetBorderSize(2);
   METJets->SetLogy();
   METJets->SetFrameBorderMode(0);
   METJets->SetFrameBorderMode(0);
   
   THStack *METJets = new THStack();
   METJets->SetName("METJets");
   METJets->SetTitle("METJets");
   
   TH1F *METJets_stack_6 = new TH1F("METJets_stack_6","METJets",15,0,15);
   METJets_stack_6->SetMinimum(4.314451e-06);
   METJets_stack_6->SetMaximum(0.7135223);
   METJets_stack_6->SetDirectory(0);
   METJets_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   METJets_stack_6->SetLineColor(ci);
   METJets_stack_6->GetXaxis()->SetTitle("METJets");
   METJets_stack_6->GetXaxis()->SetLabelFont(42);
   METJets_stack_6->GetXaxis()->SetLabelSize(0.035);
   METJets_stack_6->GetXaxis()->SetTitleSize(0.035);
   METJets_stack_6->GetXaxis()->SetTitleFont(42);
   METJets_stack_6->GetYaxis()->SetTitle("Events/pb");
   METJets_stack_6->GetYaxis()->SetLabelFont(42);
   METJets_stack_6->GetYaxis()->SetLabelSize(0.035);
   METJets_stack_6->GetYaxis()->SetTitleSize(0.035);
   METJets_stack_6->GetYaxis()->SetTitleFont(42);
   METJets_stack_6->GetZaxis()->SetLabelFont(42);
   METJets_stack_6->GetZaxis()->SetLabelSize(0.035);
   METJets_stack_6->GetZaxis()->SetTitleSize(0.035);
   METJets_stack_6->GetZaxis()->SetTitleFont(42);
   METJets->SetHistogram(METJets_stack_6);
   
   
   TH1D *METJets26 = new TH1D("METJets26"," Number of jets in MET hemisphere",15,0,15);
   METJets26->SetBinContent(2,0.04212405);
   METJets26->SetBinContent(3,0.07948327);
   METJets26->SetBinContent(4,0.01036084);
   METJets26->SetBinError(2,0.01681759);
   METJets26->SetBinError(3,0.02371537);
   METJets26->SetBinError(4,0.008401902);
   METJets26->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   METJets26->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METJets26->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METJets26->SetMarkerColor(ci);
   METJets26->SetMarkerStyle(22);
   METJets26->GetXaxis()->SetTitle("METJets");
   METJets26->GetXaxis()->SetLabelFont(42);
   METJets26->GetXaxis()->SetLabelSize(0.035);
   METJets26->GetXaxis()->SetTitleSize(0.035);
   METJets26->GetXaxis()->SetTitleFont(42);
   METJets26->GetYaxis()->SetTitle("Events/pb");
   METJets26->GetYaxis()->SetLabelFont(42);
   METJets26->GetYaxis()->SetLabelSize(0.035);
   METJets26->GetYaxis()->SetTitleSize(0.035);
   METJets26->GetYaxis()->SetTitleFont(42);
   METJets26->GetZaxis()->SetLabelFont(42);
   METJets26->GetZaxis()->SetLabelSize(0.035);
   METJets26->GetZaxis()->SetTitleSize(0.035);
   METJets26->GetZaxis()->SetTitleFont(42);
   METJets->Add(METJets,"");
   
   TH1D *METJets27 = new TH1D("METJets27"," Number of jets in MET hemisphere",15,0,15);
   METJets27->SetBinContent(1,0.03065968);
   METJets27->SetBinContent(2,0.3781184);
   METJets27->SetBinContent(3,0.170029);
   METJets27->SetBinContent(4,0.01983644);
   METJets27->SetBinContent(5,0.001731819);
   METJets27->SetBinContent(6,8.600525e-05);
   METJets27->SetBinError(1,0.00294369);
   METJets27->SetBinError(2,0.007985565);
   METJets27->SetBinError(3,0.00484409);
   METJets27->SetBinError(4,0.001537283);
   METJets27->SetBinError(5,0.00033659);
   METJets27->SetBinError(6,3.512553e-05);
   METJets27->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   METJets27->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METJets27->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METJets27->SetMarkerColor(ci);
   METJets27->SetMarkerStyle(20);
   METJets27->GetXaxis()->SetTitle("METJets");
   METJets27->GetXaxis()->SetLabelFont(42);
   METJets27->GetXaxis()->SetLabelSize(0.035);
   METJets27->GetXaxis()->SetTitleSize(0.035);
   METJets27->GetXaxis()->SetTitleFont(42);
   METJets27->GetYaxis()->SetTitle("Events/pb");
   METJets27->GetYaxis()->SetLabelFont(42);
   METJets27->GetYaxis()->SetLabelSize(0.035);
   METJets27->GetYaxis()->SetTitleSize(0.035);
   METJets27->GetYaxis()->SetTitleFont(42);
   METJets27->GetZaxis()->SetLabelFont(42);
   METJets27->GetZaxis()->SetLabelSize(0.035);
   METJets27->GetZaxis()->SetTitleSize(0.035);
   METJets27->GetZaxis()->SetTitleFont(42);
   METJets->Add(METJets,"");
   
   TH1D *METJets28 = new TH1D("METJets28"," Number of jets in MET hemisphere",15,0,15);
   METJets28->SetBinContent(1,0.006934464);
   METJets28->SetBinContent(2,0.09758253);
   METJets28->SetBinContent(3,0.03751483);
   METJets28->SetBinContent(4,0.004169631);
   METJets28->SetBinContent(5,0.0002374636);
   METJets28->SetBinContent(6,3.744021e-05);
   METJets28->SetBinError(1,0.0004695246);
   METJets28->SetBinError(2,0.001593906);
   METJets28->SetBinError(3,0.000898225);
   METJets28->SetBinError(4,0.0002412372);
   METJets28->SetBinError(5,4.540663e-05);
   METJets28->SetBinError(6,2.848295e-05);
   METJets28->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   METJets28->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METJets28->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METJets28->SetMarkerColor(ci);
   METJets28->SetMarkerStyle(21);
   METJets28->GetXaxis()->SetTitle("METJets");
   METJets28->GetXaxis()->SetLabelFont(42);
   METJets28->GetXaxis()->SetLabelSize(0.035);
   METJets28->GetXaxis()->SetTitleSize(0.035);
   METJets28->GetXaxis()->SetTitleFont(42);
   METJets28->GetYaxis()->SetTitle("Events/pb");
   METJets28->GetYaxis()->SetLabelFont(42);
   METJets28->GetYaxis()->SetLabelSize(0.035);
   METJets28->GetYaxis()->SetTitleSize(0.035);
   METJets28->GetYaxis()->SetTitleFont(42);
   METJets28->GetZaxis()->SetLabelFont(42);
   METJets28->GetZaxis()->SetLabelSize(0.035);
   METJets28->GetZaxis()->SetTitleSize(0.035);
   METJets28->GetZaxis()->SetTitleFont(42);
   METJets->Add(METJets,"");
   
   TH1D *METJets29 = new TH1D("METJets29"," Number of jets in MET hemisphere",15,0,15);
   METJets29->SetBinContent(1,0.0008483517);
   METJets29->SetBinContent(2,0.008946254);
   METJets29->SetBinContent(3,0.00525978);
   METJets29->SetBinContent(4,0.0007866534);
   METJets29->SetBinContent(5,7.712288e-05);
   METJets29->SetBinContent(6,1.542458e-05);
   METJets29->SetBinError(1,0.0001143917);
   METJets29->SetBinError(2,0.000371473);
   METJets29->SetBinError(3,0.0002848331);
   METJets29->SetBinError(4,0.0001101535);
   METJets29->SetBinError(5,3.44904e-05);
   METJets29->SetBinError(6,1.542458e-05);
   METJets29->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   METJets29->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METJets29->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METJets29->SetMarkerColor(ci);
   METJets29->SetMarkerStyle(20);
   METJets29->GetXaxis()->SetTitle("METJets");
   METJets29->GetXaxis()->SetLabelFont(42);
   METJets29->GetXaxis()->SetLabelSize(0.035);
   METJets29->GetXaxis()->SetTitleSize(0.035);
   METJets29->GetXaxis()->SetTitleFont(42);
   METJets29->GetYaxis()->SetTitle("Events/pb");
   METJets29->GetYaxis()->SetLabelFont(42);
   METJets29->GetYaxis()->SetLabelSize(0.035);
   METJets29->GetYaxis()->SetTitleSize(0.035);
   METJets29->GetYaxis()->SetTitleFont(42);
   METJets29->GetZaxis()->SetLabelFont(42);
   METJets29->GetZaxis()->SetLabelSize(0.035);
   METJets29->GetZaxis()->SetTitleSize(0.035);
   METJets29->GetZaxis()->SetTitleFont(42);
   METJets->Add(METJets,"");
   
   TH1D *METJets30 = new TH1D("METJets30"," Number of jets in MET hemisphere",15,0,15);
   METJets30->SetBinContent(3,1.677165e-05);
   METJets30->SetBinError(3,1.677165e-05);
   METJets30->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   METJets30->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METJets30->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METJets30->SetMarkerColor(ci);
   METJets30->SetMarkerStyle(21);
   METJets30->GetXaxis()->SetTitle("METJets");
   METJets30->GetXaxis()->SetLabelFont(42);
   METJets30->GetXaxis()->SetLabelSize(0.035);
   METJets30->GetXaxis()->SetTitleSize(0.035);
   METJets30->GetXaxis()->SetTitleFont(42);
   METJets30->GetYaxis()->SetTitle("Events/pb");
   METJets30->GetYaxis()->SetLabelFont(42);
   METJets30->GetYaxis()->SetLabelSize(0.035);
   METJets30->GetYaxis()->SetTitleSize(0.035);
   METJets30->GetYaxis()->SetTitleFont(42);
   METJets30->GetZaxis()->SetLabelFont(42);
   METJets30->GetZaxis()->SetLabelSize(0.035);
   METJets30->GetZaxis()->SetTitleSize(0.035);
   METJets30->GetZaxis()->SetTitleFont(42);
   METJets->Add(METJets,"");
   METJets->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3872701,0.94,0.6127299,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("METJets");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METJets","METJets_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METJets","METJets_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METJets","METJets_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METJets","METJets_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METJets","METJets_ttbar","lp");

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
   METJets->Modified();
   METJets->cd();
   METJets->SetSelected(METJets);
}
