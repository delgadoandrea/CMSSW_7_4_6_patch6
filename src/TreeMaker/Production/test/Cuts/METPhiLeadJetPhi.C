void METPhiLeadJetPhi()
{
//=========Macro generated from canvas: METPhiLeadJetPhi/METPhiLeadJetPhi
//=========  (Fri Nov  6 09:04:17 2015) by ROOT version6.02/05
   TCanvas *METPhiLeadJetPhi = new TCanvas("METPhiLeadJetPhi", "METPhiLeadJetPhi",0,23,700,700);
   METPhiLeadJetPhi->Range(-0.625,-6.007774,5.625,0.6960287);
   METPhiLeadJetPhi->SetFillColor(0);
   METPhiLeadJetPhi->SetBorderMode(0);
   METPhiLeadJetPhi->SetBorderSize(2);
   METPhiLeadJetPhi->SetLogy();
   METPhiLeadJetPhi->SetFrameBorderMode(0);
   METPhiLeadJetPhi->SetFrameBorderMode(0);
   
   THStack *METPhiLeadJetPhi = new THStack();
   METPhiLeadJetPhi->SetName("METPhiLeadJetPhi");
   METPhiLeadJetPhi->SetTitle("METPhiLeadJetPhi");
   
   TH1F *METPhiLeadJetPhi_stack_17 = new TH1F("METPhiLeadJetPhi_stack_17","METPhiLeadJetPhi",10,0,5);
   METPhiLeadJetPhi_stack_17->SetMinimum(4.598394e-06);
   METPhiLeadJetPhi_stack_17->SetMaximum(1.060836);
   METPhiLeadJetPhi_stack_17->SetDirectory(0);
   METPhiLeadJetPhi_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   METPhiLeadJetPhi_stack_17->SetLineColor(ci);
   METPhiLeadJetPhi_stack_17->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi_stack_17->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi_stack_17->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi_stack_17->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi_stack_17->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi_stack_17->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi_stack_17->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi_stack_17->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi_stack_17->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi_stack_17->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi_stack_17->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi_stack_17->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi_stack_17->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi_stack_17->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->SetHistogram(METPhiLeadJetPhi_stack_17);
   
   
   TH1D *METPhiLeadJetPhi81 = new TH1D("METPhiLeadJetPhi81"," MET and p_{T}^{lead jet} #Delta_{#phi}",10,0,5);
   METPhiLeadJetPhi81->SetBinContent(6,0.002501802);
   METPhiLeadJetPhi81->SetBinContent(7,0.02757404);
   METPhiLeadJetPhi81->SetBinError(6,0.001769041);
   METPhiLeadJetPhi81->SetBinError(7,0.02635285);
   METPhiLeadJetPhi81->SetEntries(4);

   ci = TColor::GetColor("#00cc00");
   METPhiLeadJetPhi81->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METPhiLeadJetPhi81->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METPhiLeadJetPhi81->SetMarkerColor(ci);
   METPhiLeadJetPhi81->SetMarkerStyle(22);
   METPhiLeadJetPhi81->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi81->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi81->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi81->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi81->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi81->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi81->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi81->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi81->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi81->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi81->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi81->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi81->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi81->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->Add(METPhiLeadJetPhi,"");
   
   TH1D *METPhiLeadJetPhi82 = new TH1D("METPhiLeadJetPhi82"," MET and p_{T}^{lead jet} #Delta_{#phi}",10,0,5);
   METPhiLeadJetPhi82->SetBinContent(4,0.006360743);
   METPhiLeadJetPhi82->SetBinContent(5,0.06291386);
   METPhiLeadJetPhi82->SetBinContent(6,0.5218076);
   METPhiLeadJetPhi82->SetBinContent(7,0.5545343);
   METPhiLeadJetPhi82->SetBinError(4,0.0006915362);
   METPhiLeadJetPhi82->SetBinError(5,0.003580289);
   METPhiLeadJetPhi82->SetBinError(6,0.013384);
   METPhiLeadJetPhi82->SetBinError(7,0.0149716);
   METPhiLeadJetPhi82->SetEntries(9534);

   ci = TColor::GetColor("#00ffff");
   METPhiLeadJetPhi82->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METPhiLeadJetPhi82->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METPhiLeadJetPhi82->SetMarkerColor(ci);
   METPhiLeadJetPhi82->SetMarkerStyle(20);
   METPhiLeadJetPhi82->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi82->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi82->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi82->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi82->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi82->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi82->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi82->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi82->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi82->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi82->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi82->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi82->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi82->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->Add(METPhiLeadJetPhi,"");
   
   TH1D *METPhiLeadJetPhi83 = new TH1D("METPhiLeadJetPhi83"," MET and p_{T}^{lead jet} #Delta_{#phi}",10,0,5);
   METPhiLeadJetPhi83->SetBinContent(4,0.002482189);
   METPhiLeadJetPhi83->SetBinContent(5,0.01388585);
   METPhiLeadJetPhi83->SetBinContent(6,0.1264578);
   METPhiLeadJetPhi83->SetBinContent(7,0.1415612);
   METPhiLeadJetPhi83->SetBinError(4,0.0003046394);
   METPhiLeadJetPhi83->SetBinError(5,0.0006836378);
   METPhiLeadJetPhi83->SetBinError(6,0.002670546);
   METPhiLeadJetPhi83->SetBinError(7,0.003022425);
   METPhiLeadJetPhi83->SetEntries(13132);

   ci = TColor::GetColor("#ffcc00");
   METPhiLeadJetPhi83->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METPhiLeadJetPhi83->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METPhiLeadJetPhi83->SetMarkerColor(ci);
   METPhiLeadJetPhi83->SetMarkerStyle(21);
   METPhiLeadJetPhi83->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi83->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi83->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi83->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi83->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi83->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi83->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi83->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi83->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi83->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi83->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi83->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi83->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi83->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->Add(METPhiLeadJetPhi,"");
   
   TH1D *METPhiLeadJetPhi84 = new TH1D("METPhiLeadJetPhi84"," MET and p_{T}^{lead jet} #Delta_{#phi}",10,0,5);
   METPhiLeadJetPhi84->SetBinContent(4,0.0003856144);
   METPhiLeadJetPhi84->SetBinContent(5,0.002205714);
   METPhiLeadJetPhi84->SetBinContent(6,0.0162575);
   METPhiLeadJetPhi84->SetBinContent(7,0.01369702);
   METPhiLeadJetPhi84->SetBinError(4,7.712288e-05);
   METPhiLeadJetPhi84->SetBinError(5,0.0001844511);
   METPhiLeadJetPhi84->SetBinError(6,0.0005007645);
   METPhiLeadJetPhi84->SetBinError(7,0.000459642);
   METPhiLeadJetPhi84->SetEntries(2110);

   ci = TColor::GetColor("#ff0000");
   METPhiLeadJetPhi84->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METPhiLeadJetPhi84->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METPhiLeadJetPhi84->SetMarkerColor(ci);
   METPhiLeadJetPhi84->SetMarkerStyle(20);
   METPhiLeadJetPhi84->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi84->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi84->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi84->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi84->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi84->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi84->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi84->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi84->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi84->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi84->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi84->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi84->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi84->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->Add(METPhiLeadJetPhi,"");
   
   TH1D *METPhiLeadJetPhi85 = new TH1D("METPhiLeadJetPhi85"," MET and p_{T}^{lead jet} #Delta_{#phi}",10,0,5);
   METPhiLeadJetPhi85->SetBinContent(4,1.677165e-05);
   METPhiLeadJetPhi85->SetBinContent(5,1.677165e-05);
   METPhiLeadJetPhi85->SetBinContent(6,0.0001844881);
   METPhiLeadJetPhi85->SetBinContent(7,6.708659e-05);
   METPhiLeadJetPhi85->SetBinError(4,1.677165e-05);
   METPhiLeadJetPhi85->SetBinError(5,1.677165e-05);
   METPhiLeadJetPhi85->SetBinError(6,5.562526e-05);
   METPhiLeadJetPhi85->SetBinError(7,3.35433e-05);
   METPhiLeadJetPhi85->SetEntries(17);

   ci = TColor::GetColor("#0000ff");
   METPhiLeadJetPhi85->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METPhiLeadJetPhi85->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METPhiLeadJetPhi85->SetMarkerColor(ci);
   METPhiLeadJetPhi85->SetMarkerStyle(21);
   METPhiLeadJetPhi85->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi85->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi85->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi85->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi85->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi85->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi85->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi85->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi85->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi85->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi85->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi85->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi85->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi85->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->Add(METPhiLeadJetPhi,"");
   METPhiLeadJetPhi->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.2651437,0.94,0.7348563,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("METPhiLeadJetPhi");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METPhiLeadJetPhi","METPhiLeadJetPhi_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METPhiLeadJetPhi","METPhiLeadJetPhi_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METPhiLeadJetPhi","METPhiLeadJetPhi_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METPhiLeadJetPhi","METPhiLeadJetPhi_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METPhiLeadJetPhi","METPhiLeadJetPhi_ttbar","lp");

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
   METPhiLeadJetPhi->Modified();
   METPhiLeadJetPhi->cd();
   METPhiLeadJetPhi->SetSelected(METPhiLeadJetPhi);
}
