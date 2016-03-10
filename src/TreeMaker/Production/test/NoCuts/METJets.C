void METJets()
{
//=========Macro generated from canvas: METJets/METJets
//=========  (Mon Nov 23 11:05:00 2015) by ROOT version6.02/05
   TCanvas *METJets = new TCanvas("METJets", "METJets",100,122,700,700);
   METJets->Range(-1.875,-6.772831,16.875,5.054722);
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
   METJets_stack_6->SetMinimum(2.569948e-06);
   METJets_stack_6->SetMaximum(7446.75);
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
   METJets26->SetBinContent(1,2.358311);
   METJets26->SetBinContent(2,1799.25);
   METJets26->SetBinContent(3,2794.573);
   METJets26->SetBinContent(4,982.1805);
   METJets26->SetBinContent(5,126.0732);
   METJets26->SetBinContent(6,6.831502);
   METJets26->SetBinContent(7,0.05059331);
   METJets26->SetBinError(1,0.8851475);
   METJets26->SetBinError(2,24.25261);
   METJets26->SetBinError(3,30.24717);
   METJets26->SetBinError(4,17.9355);
   METJets26->SetBinError(5,6.393654);
   METJets26->SetBinError(6,1.459512);
   METJets26->SetBinError(7,0.02038811);
   METJets26->SetEntries(35032);

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
   METJets27->SetBinContent(1,0.8785647);
   METJets27->SetBinContent(2,19.65506);
   METJets27->SetBinContent(3,13.48662);
   METJets27->SetBinContent(4,1.798839);
   METJets27->SetBinContent(5,0.132607);
   METJets27->SetBinContent(6,0.006526677);
   METJets27->SetBinContent(7,0.0001605133);
   METJets27->SetBinContent(8,1.473949e-05);
   METJets27->SetBinError(1,0.02795641);
   METJets27->SetBinError(2,0.1254575);
   METJets27->SetBinError(3,0.1000964);
   METJets27->SetBinError(4,0.03249664);
   METJets27->SetBinError(5,0.007171238);
   METJets27->SetBinError(6,0.001513783);
   METJets27->SetBinError(7,4.840768e-05);
   METJets27->SetBinError(8,1.473949e-05);
   METJets27->SetEntries(136801);

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
   METJets28->SetBinContent(1,0.1431715);
   METJets28->SetBinContent(2,2.860636);
   METJets28->SetBinContent(3,1.738326);
   METJets28->SetBinContent(4,0.1855333);
   METJets28->SetBinContent(5,0.01162161);
   METJets28->SetBinContent(6,0.0007176836);
   METJets28->SetBinContent(7,3.39293e-05);
   METJets28->SetBinError(1,0.003525434);
   METJets28->SetBinError(2,0.01498037);
   METJets28->SetBinError(3,0.0112588);
   METJets28->SetBinError(4,0.003217574);
   METJets28->SetBinError(5,0.0006944844);
   METJets28->SetBinError(6,0.0001304861);
   METJets28->SetBinError(7,2.841073e-05);
   METJets28->SetEntries(131338);

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
   METJets29->SetBinContent(1,0.003208312);
   METJets29->SetBinContent(2,0.03535313);
   METJets29->SetBinContent(3,0.02142474);
   METJets29->SetBinContent(4,0.003779021);
   METJets29->SetBinContent(5,0.0003701898);
   METJets29->SetBinContent(6,9.254746e-05);
   METJets29->SetBinError(1,0.0002224564);
   METJets29->SetBinError(2,0.0007384491);
   METJets29->SetBinError(3,0.000574863);
   METJets29->SetBinError(4,0.0002414328);
   METJets29->SetBinError(5,7.556468e-05);
   METJets29->SetBinError(6,3.778234e-05);
   METJets29->SetEntries(4164);

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
   METJets30->SetBinContent(2,0.000335433);
   METJets30->SetBinContent(3,0.000335433);
   METJets30->SetBinContent(4,0.0002180314);
   METJets30->SetBinContent(5,0.0001341732);
   METJets30->SetBinError(2,7.500509e-05);
   METJets30->SetBinError(3,7.500509e-05);
   METJets30->SetBinError(4,6.047104e-05);
   METJets30->SetBinError(5,4.743738e-05);
   METJets30->SetEntries(61);

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
