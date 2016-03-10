void METopt()
{
//=========Macro generated from canvas: METopt/METopt
//=========  (Fri Nov  6 09:04:11 2015) by ROOT version6.02/05
   TCanvas *METopt = new TCanvas("METopt", "METopt",0,23,700,700);
   METopt->Range(-0.25,-5.998402,2.25,0.6419734);
   METopt->SetFillColor(0);
   METopt->SetBorderMode(0);
   METopt->SetBorderSize(2);
   METopt->SetLogy();
   METopt->SetFrameBorderMode(0);
   METopt->SetFrameBorderMode(0);
   
   THStack *METopt = new THStack();
   METopt->SetName("METopt");
   METopt->SetTitle("METopt");
   
   TH1F *METopt_stack_16 = new TH1F("METopt_stack_16","METopt",10,0,2);
   METopt_stack_16->SetMinimum(4.630583e-06);
   METopt_stack_16->SetMaximum(0.9504642);
   METopt_stack_16->SetDirectory(0);
   METopt_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   METopt_stack_16->SetLineColor(ci);
   METopt_stack_16->GetXaxis()->SetTitle("METopt");
   METopt_stack_16->GetXaxis()->SetLabelFont(42);
   METopt_stack_16->GetXaxis()->SetLabelSize(0.035);
   METopt_stack_16->GetXaxis()->SetTitleSize(0.035);
   METopt_stack_16->GetXaxis()->SetTitleFont(42);
   METopt_stack_16->GetYaxis()->SetTitle("Events/pb");
   METopt_stack_16->GetYaxis()->SetLabelFont(42);
   METopt_stack_16->GetYaxis()->SetLabelSize(0.035);
   METopt_stack_16->GetYaxis()->SetTitleSize(0.035);
   METopt_stack_16->GetYaxis()->SetTitleFont(42);
   METopt_stack_16->GetZaxis()->SetLabelFont(42);
   METopt_stack_16->GetZaxis()->SetLabelSize(0.035);
   METopt_stack_16->GetZaxis()->SetTitleSize(0.035);
   METopt_stack_16->GetZaxis()->SetTitleFont(42);
   METopt->SetHistogram(METopt_stack_16);
   
   
   TH1D *METopt76 = new TH1D("METopt76","MET/p_{T}^{lead jet}",10,0,2);
   METopt76->SetBinContent(6,0.02882494);
   METopt76->SetBinContent(9,0.001250901);
   METopt76->SetBinError(6,0.02638252);
   METopt76->SetBinError(9,0.001250901);
   METopt76->SetEntries(4);

   ci = TColor::GetColor("#00cc00");
   METopt76->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METopt76->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METopt76->SetMarkerColor(ci);
   METopt76->SetMarkerStyle(22);
   METopt76->GetXaxis()->SetTitle("METopt");
   METopt76->GetXaxis()->SetLabelFont(42);
   METopt76->GetXaxis()->SetLabelSize(0.035);
   METopt76->GetXaxis()->SetTitleSize(0.035);
   METopt76->GetXaxis()->SetTitleFont(42);
   METopt76->GetYaxis()->SetTitle("Events/pb");
   METopt76->GetYaxis()->SetLabelFont(42);
   METopt76->GetYaxis()->SetLabelSize(0.035);
   METopt76->GetYaxis()->SetTitleSize(0.035);
   METopt76->GetYaxis()->SetTitleFont(42);
   METopt76->GetZaxis()->SetLabelFont(42);
   METopt76->GetZaxis()->SetLabelSize(0.035);
   METopt76->GetZaxis()->SetTitleSize(0.035);
   METopt76->GetZaxis()->SetTitleFont(42);
   METopt->Add(METopt,"");
   
   TH1D *METopt77 = new TH1D("METopt77","MET/p_{T}^{lead jet}",10,0,2);
   METopt77->SetBinContent(6,0.499221);
   METopt77->SetBinContent(7,0.249054);
   METopt77->SetBinContent(8,0.1534715);
   METopt77->SetBinContent(9,0.09974644);
   METopt77->SetBinContent(10,0.05778587);
   METopt77->SetBinContent(11,0.08633773);
   METopt77->SetBinError(6,0.0129014);
   METopt77->SetBinError(7,0.009763443);
   METopt77->SetBinError(8,0.00769975);
   METopt77->SetBinError(9,0.006309378);
   METopt77->SetBinError(10,0.004708622);
   METopt77->SetBinError(11,0.005791417);
   METopt77->SetEntries(9534);

   ci = TColor::GetColor("#00ffff");
   METopt77->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METopt77->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METopt77->SetMarkerColor(ci);
   METopt77->SetMarkerStyle(20);
   METopt77->GetXaxis()->SetTitle("METopt");
   METopt77->GetXaxis()->SetLabelFont(42);
   METopt77->GetXaxis()->SetLabelSize(0.035);
   METopt77->GetXaxis()->SetTitleSize(0.035);
   METopt77->GetXaxis()->SetTitleFont(42);
   METopt77->GetYaxis()->SetTitle("Events/pb");
   METopt77->GetYaxis()->SetLabelFont(42);
   METopt77->GetYaxis()->SetLabelSize(0.035);
   METopt77->GetYaxis()->SetTitleSize(0.035);
   METopt77->GetYaxis()->SetTitleFont(42);
   METopt77->GetZaxis()->SetLabelFont(42);
   METopt77->GetZaxis()->SetLabelSize(0.035);
   METopt77->GetZaxis()->SetTitleSize(0.035);
   METopt77->GetZaxis()->SetTitleFont(42);
   METopt->Add(METopt,"");
   
   TH1D *METopt78 = new TH1D("METopt78","MET/p_{T}^{lead jet}",10,0,2);
   METopt78->SetBinContent(6,0.1274887);
   METopt78->SetBinContent(7,0.06211875);
   METopt78->SetBinContent(8,0.03701281);
   METopt78->SetBinContent(9,0.01994553);
   METopt78->SetBinContent(10,0.01437936);
   METopt78->SetBinContent(11,0.02344193);
   METopt78->SetBinError(6,0.002661013);
   METopt78->SetBinError(7,0.001974606);
   METopt78->SetBinError(8,0.001513623);
   METopt78->SetBinError(9,0.001054839);
   METopt78->SetBinError(10,0.0008730801);
   METopt78->SetBinError(11,0.00129652);
   METopt78->SetEntries(13132);

   ci = TColor::GetColor("#ffcc00");
   METopt78->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METopt78->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METopt78->SetMarkerColor(ci);
   METopt78->SetMarkerStyle(21);
   METopt78->GetXaxis()->SetTitle("METopt");
   METopt78->GetXaxis()->SetLabelFont(42);
   METopt78->GetXaxis()->SetLabelSize(0.035);
   METopt78->GetXaxis()->SetTitleSize(0.035);
   METopt78->GetXaxis()->SetTitleFont(42);
   METopt78->GetYaxis()->SetTitle("Events/pb");
   METopt78->GetYaxis()->SetLabelFont(42);
   METopt78->GetYaxis()->SetLabelSize(0.035);
   METopt78->GetYaxis()->SetTitleSize(0.035);
   METopt78->GetYaxis()->SetTitleFont(42);
   METopt78->GetZaxis()->SetLabelFont(42);
   METopt78->GetZaxis()->SetLabelSize(0.035);
   METopt78->GetZaxis()->SetTitleSize(0.035);
   METopt78->GetZaxis()->SetTitleFont(42);
   METopt->Add(METopt,"");
   
   TH1D *METopt79 = new TH1D("METopt79","MET/p_{T}^{lead jet}",10,0,2);
   METopt79->SetBinContent(6,0.01065838);
   METopt79->SetBinContent(7,0.006555445);
   METopt79->SetBinContent(8,0.004735345);
   METopt79->SetBinContent(9,0.003593926);
   METopt79->SetBinContent(10,0.002591329);
   METopt79->SetBinContent(11,0.004411429);
   METopt79->SetBinError(6,0.000405464);
   METopt79->SetBinError(7,0.0003179858);
   METopt79->SetBinError(8,0.0002702604);
   METopt79->SetBinError(9,0.0002354459);
   METopt79->SetBinError(10,0.0001999254);
   METopt79->SetBinError(11,0.0002608532);
   METopt79->SetEntries(2110);

   ci = TColor::GetColor("#ff0000");
   METopt79->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METopt79->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METopt79->SetMarkerColor(ci);
   METopt79->SetMarkerStyle(20);
   METopt79->GetXaxis()->SetTitle("METopt");
   METopt79->GetXaxis()->SetLabelFont(42);
   METopt79->GetXaxis()->SetLabelSize(0.035);
   METopt79->GetXaxis()->SetTitleSize(0.035);
   METopt79->GetXaxis()->SetTitleFont(42);
   METopt79->GetYaxis()->SetTitle("Events/pb");
   METopt79->GetYaxis()->SetLabelFont(42);
   METopt79->GetYaxis()->SetLabelSize(0.035);
   METopt79->GetYaxis()->SetTitleSize(0.035);
   METopt79->GetYaxis()->SetTitleFont(42);
   METopt79->GetZaxis()->SetLabelFont(42);
   METopt79->GetZaxis()->SetLabelSize(0.035);
   METopt79->GetZaxis()->SetTitleSize(0.035);
   METopt79->GetZaxis()->SetTitleFont(42);
   METopt->Add(METopt,"");
   
   TH1D *METopt80 = new TH1D("METopt80","MET/p_{T}^{lead jet}",10,0,2);
   METopt80->SetBinContent(6,5.031494e-05);
   METopt80->SetBinContent(7,8.385824e-05);
   METopt80->SetBinContent(8,5.031494e-05);
   METopt80->SetBinContent(9,1.677165e-05);
   METopt80->SetBinContent(10,5.031494e-05);
   METopt80->SetBinContent(11,3.35433e-05);
   METopt80->SetBinError(6,2.904935e-05);
   METopt80->SetBinError(7,3.750254e-05);
   METopt80->SetBinError(8,2.904935e-05);
   METopt80->SetBinError(9,1.677165e-05);
   METopt80->SetBinError(10,2.904935e-05);
   METopt80->SetBinError(11,2.371869e-05);
   METopt80->SetEntries(17);

   ci = TColor::GetColor("#0000ff");
   METopt80->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METopt80->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METopt80->SetMarkerColor(ci);
   METopt80->SetMarkerStyle(21);
   METopt80->GetXaxis()->SetTitle("METopt");
   METopt80->GetXaxis()->SetLabelFont(42);
   METopt80->GetXaxis()->SetLabelSize(0.035);
   METopt80->GetXaxis()->SetTitleSize(0.035);
   METopt80->GetXaxis()->SetTitleFont(42);
   METopt80->GetYaxis()->SetTitle("Events/pb");
   METopt80->GetYaxis()->SetLabelFont(42);
   METopt80->GetYaxis()->SetLabelSize(0.035);
   METopt80->GetYaxis()->SetTitleSize(0.035);
   METopt80->GetYaxis()->SetTitleFont(42);
   METopt80->GetZaxis()->SetLabelFont(42);
   METopt80->GetZaxis()->SetLabelSize(0.035);
   METopt80->GetZaxis()->SetTitleSize(0.035);
   METopt80->GetZaxis()->SetTitleFont(42);
   METopt->Add(METopt,"");
   METopt->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.398046,0.9342857,0.601954,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("METopt");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METopt","METopt_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METopt","METopt_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METopt","METopt_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METopt","METopt_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METopt","METopt_ttbar","lp");

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
   METopt->Modified();
   METopt->cd();
   METopt->SetSelected(METopt);
}
