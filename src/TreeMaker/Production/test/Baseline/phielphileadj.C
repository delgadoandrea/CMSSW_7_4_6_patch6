void phielphileadj()
{
//=========Macro generated from canvas: phielphileadj/phielphileadj
//=========  (Sun Nov  8 21:56:11 2015) by ROOT version6.02/05
   TCanvas *phielphileadj = new TCanvas("phielphileadj", "phielphileadj",0,23,700,700);
   phielphileadj->Range(-0.3926991,-4.787882,3.534292,1.179054);
   phielphileadj->SetFillColor(0);
   phielphileadj->SetBorderMode(0);
   phielphileadj->SetBorderSize(2);
   phielphileadj->SetLogy();
   phielphileadj->SetFrameBorderMode(0);
   phielphileadj->SetFrameBorderMode(0);
   
   THStack *phielphileadj = new THStack();
   phielphileadj->SetName("phielphileadj");
   phielphileadj->SetTitle("phielphileadj");
   
   TH1F *phielphileadj_stack_22 = new TH1F("phielphileadj_stack_22","phielphileadj",10,0,3.141593);
   phielphileadj_stack_22->SetMinimum(6.4389e-05);
   phielphileadj_stack_22->SetMaximum(3.822615);
   phielphileadj_stack_22->SetDirectory(0);
   phielphileadj_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   phielphileadj_stack_22->SetLineColor(ci);
   phielphileadj_stack_22->GetXaxis()->SetTitle("phielphileadj");
   phielphileadj_stack_22->GetXaxis()->SetLabelFont(42);
   phielphileadj_stack_22->GetXaxis()->SetLabelSize(0.035);
   phielphileadj_stack_22->GetXaxis()->SetTitleSize(0.035);
   phielphileadj_stack_22->GetXaxis()->SetTitleFont(42);
   phielphileadj_stack_22->GetYaxis()->SetTitle("Events/pb");
   phielphileadj_stack_22->GetYaxis()->SetLabelFont(42);
   phielphileadj_stack_22->GetYaxis()->SetLabelSize(0.035);
   phielphileadj_stack_22->GetYaxis()->SetTitleSize(0.035);
   phielphileadj_stack_22->GetYaxis()->SetTitleFont(42);
   phielphileadj_stack_22->GetZaxis()->SetLabelFont(42);
   phielphileadj_stack_22->GetZaxis()->SetLabelSize(0.035);
   phielphileadj_stack_22->GetZaxis()->SetTitleSize(0.035);
   phielphileadj_stack_22->GetZaxis()->SetTitleFont(42);
   phielphileadj->SetHistogram(phielphileadj_stack_22);
   
   
   TH1D *phielphileadj106 = new TH1D("phielphileadj106"," #Delta_{#phi}[e_{-},jet_{1}]",10,0,3.141593);
   phielphileadj106->SetBinContent(1,0.04383576);
   phielphileadj106->SetBinContent(2,0.001250901);
   phielphileadj106->SetBinContent(6,0.001250901);
   phielphileadj106->SetBinContent(8,0.001250901);
   phielphileadj106->SetBinContent(9,0.002501802);
   phielphileadj106->SetBinContent(10,0.01000721);
   phielphileadj106->SetBinError(1,0.02673601);
   phielphileadj106->SetBinError(2,0.001250901);
   phielphileadj106->SetBinError(6,0.001250901);
   phielphileadj106->SetBinError(8,0.001250901);
   phielphileadj106->SetBinError(9,0.001769041);
   phielphileadj106->SetBinError(10,0.003538083);
   phielphileadj106->SetEntries(28);

   ci = TColor::GetColor("#00cc00");
   phielphileadj106->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phielphileadj106->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phielphileadj106->SetMarkerColor(ci);
   phielphileadj106->SetMarkerStyle(22);
   phielphileadj106->GetXaxis()->SetTitle("phielphileadj");
   phielphileadj106->GetXaxis()->SetLabelFont(42);
   phielphileadj106->GetXaxis()->SetLabelSize(0.035);
   phielphileadj106->GetXaxis()->SetTitleSize(0.035);
   phielphileadj106->GetXaxis()->SetTitleFont(42);
   phielphileadj106->GetYaxis()->SetTitle("Events/pb");
   phielphileadj106->GetYaxis()->SetLabelFont(42);
   phielphileadj106->GetYaxis()->SetLabelSize(0.035);
   phielphileadj106->GetYaxis()->SetTitleSize(0.035);
   phielphileadj106->GetYaxis()->SetTitleFont(42);
   phielphileadj106->GetZaxis()->SetLabelFont(42);
   phielphileadj106->GetZaxis()->SetLabelSize(0.035);
   phielphileadj106->GetZaxis()->SetTitleSize(0.035);
   phielphileadj106->GetZaxis()->SetTitleFont(42);
   phielphileadj->Add(phielphileadj,"");
   
   TH1D *phielphileadj107 = new TH1D("phielphileadj107"," #Delta_{#phi}[e_{-},jet_{1}]",10,0,3.141593);
   phielphileadj107->SetBinContent(1,0.2179961);
   phielphileadj107->SetBinContent(2,0.01962548);
   phielphileadj107->SetBinContent(3,0.02590187);
   phielphileadj107->SetBinContent(4,0.04624029);
   phielphileadj107->SetBinContent(5,0.09403783);
   phielphileadj107->SetBinContent(6,0.1831221);
   phielphileadj107->SetBinContent(7,0.3913257);
   phielphileadj107->SetBinContent(8,0.7765426);
   phielphileadj107->SetBinContent(9,1.404146);
   phielphileadj107->SetBinContent(10,2.115042);
   phielphileadj107->SetBinError(1,0.008912504);
   phielphileadj107->SetBinError(2,0.002766324);
   phielphileadj107->SetBinError(3,0.0025562);
   phielphileadj107->SetBinError(4,0.003795699);
   phielphileadj107->SetBinError(5,0.00538164);
   phielphileadj107->SetBinError(6,0.007316189);
   phielphileadj107->SetBinError(7,0.01018447);
   phielphileadj107->SetBinError(8,0.01359639);
   phielphileadj107->SetBinError(9,0.01731972);
   phielphileadj107->SetBinError(10,0.01901507);
   phielphileadj107->SetEntries(120946);

   ci = TColor::GetColor("#00ffff");
   phielphileadj107->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phielphileadj107->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phielphileadj107->SetMarkerColor(ci);
   phielphileadj107->SetMarkerStyle(20);
   phielphileadj107->GetXaxis()->SetTitle("phielphileadj");
   phielphileadj107->GetXaxis()->SetLabelFont(42);
   phielphileadj107->GetXaxis()->SetLabelSize(0.035);
   phielphileadj107->GetXaxis()->SetTitleSize(0.035);
   phielphileadj107->GetXaxis()->SetTitleFont(42);
   phielphileadj107->GetYaxis()->SetTitle("Events/pb");
   phielphileadj107->GetYaxis()->SetLabelFont(42);
   phielphileadj107->GetYaxis()->SetLabelSize(0.035);
   phielphileadj107->GetYaxis()->SetTitleSize(0.035);
   phielphileadj107->GetYaxis()->SetTitleFont(42);
   phielphileadj107->GetZaxis()->SetLabelFont(42);
   phielphileadj107->GetZaxis()->SetLabelSize(0.035);
   phielphileadj107->GetZaxis()->SetTitleSize(0.035);
   phielphileadj107->GetZaxis()->SetTitleFont(42);
   phielphileadj->Add(phielphileadj,"");
   
   TH1D *phielphileadj108 = new TH1D("phielphileadj108"," #Delta_{#phi}[e_{-},jet_{1}]",10,0,3.141593);
   phielphileadj108->SetBinContent(1,0.05941227);
   phielphileadj108->SetBinContent(2,0.00156904);
   phielphileadj108->SetBinContent(3,0.002351593);
   phielphileadj108->SetBinContent(4,0.001584431);
   phielphileadj108->SetBinContent(5,0.001808185);
   phielphileadj108->SetBinContent(6,0.001742163);
   phielphileadj108->SetBinContent(7,0.001625272);
   phielphileadj108->SetBinContent(8,0.001809533);
   phielphileadj108->SetBinContent(9,0.002412292);
   phielphileadj108->SetBinContent(10,0.002300997);
   phielphileadj108->SetBinError(1,0.001774682);
   phielphileadj108->SetBinError(2,0.0002329711);
   phielphileadj108->SetBinError(3,0.0003550724);
   phielphileadj108->SetBinError(4,0.0002277697);
   phielphileadj108->SetBinError(5,0.0002417215);
   phielphileadj108->SetBinError(6,0.0002105135);
   phielphileadj108->SetBinError(7,0.0001661239);
   phielphileadj108->SetBinError(8,0.0001667856);
   phielphileadj108->SetBinError(9,0.0002762658);
   phielphileadj108->SetBinError(10,0.0001771848);
   phielphileadj108->SetEntries(6831);

   ci = TColor::GetColor("#ffcc00");
   phielphileadj108->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phielphileadj108->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phielphileadj108->SetMarkerColor(ci);
   phielphileadj108->SetMarkerStyle(21);
   phielphileadj108->GetXaxis()->SetTitle("phielphileadj");
   phielphileadj108->GetXaxis()->SetLabelFont(42);
   phielphileadj108->GetXaxis()->SetLabelSize(0.035);
   phielphileadj108->GetXaxis()->SetTitleSize(0.035);
   phielphileadj108->GetXaxis()->SetTitleFont(42);
   phielphileadj108->GetYaxis()->SetTitle("Events/pb");
   phielphileadj108->GetYaxis()->SetLabelFont(42);
   phielphileadj108->GetYaxis()->SetLabelSize(0.035);
   phielphileadj108->GetYaxis()->SetTitleSize(0.035);
   phielphileadj108->GetYaxis()->SetTitleFont(42);
   phielphileadj108->GetZaxis()->SetLabelFont(42);
   phielphileadj108->GetZaxis()->SetLabelSize(0.035);
   phielphileadj108->GetZaxis()->SetTitleSize(0.035);
   phielphileadj108->GetZaxis()->SetTitleFont(42);
   phielphileadj->Add(phielphileadj,"");
   
   TH1D *phielphileadj109 = new TH1D("phielphileadj109"," #Delta_{#phi}[e_{-},jet_{1}]",10,0,3.141593);
   phielphileadj109->SetBinContent(1,0.001388212);
   phielphileadj109->SetBinContent(2,0.0002313686);
   phielphileadj109->SetBinContent(3,0.0002159441);
   phielphileadj109->SetBinContent(4,0.0002313686);
   phielphileadj109->SetBinContent(5,0.0005707093);
   phielphileadj109->SetBinContent(6,0.0008946254);
   phielphileadj109->SetBinContent(7,0.0008946254);
   phielphileadj109->SetBinContent(8,0.001588731);
   phielphileadj109->SetBinContent(9,0.001789251);
   phielphileadj109->SetBinContent(10,0.002113167);
   phielphileadj109->SetBinError(1,0.0001463304);
   phielphileadj109->SetBinError(2,5.973913e-05);
   phielphileadj109->SetBinError(3,5.771348e-05);
   phielphileadj109->SetBinError(4,5.973913e-05);
   phielphileadj109->SetBinError(5,9.382403e-05);
   phielphileadj109->SetBinError(6,0.0001174701);
   phielphileadj109->SetBinError(7,0.0001174701);
   phielphileadj109->SetBinError(8,0.0001565423);
   phielphileadj109->SetBinError(9,0.0001661278);
   phielphileadj109->SetBinError(10,0.00018054);
   phielphileadj109->SetEntries(643);

   ci = TColor::GetColor("#ff0000");
   phielphileadj109->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phielphileadj109->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phielphileadj109->SetMarkerColor(ci);
   phielphileadj109->SetMarkerStyle(20);
   phielphileadj109->GetXaxis()->SetTitle("phielphileadj");
   phielphileadj109->GetXaxis()->SetLabelFont(42);
   phielphileadj109->GetXaxis()->SetLabelSize(0.035);
   phielphileadj109->GetXaxis()->SetTitleSize(0.035);
   phielphileadj109->GetXaxis()->SetTitleFont(42);
   phielphileadj109->GetYaxis()->SetTitle("Events/pb");
   phielphileadj109->GetYaxis()->SetLabelFont(42);
   phielphileadj109->GetYaxis()->SetLabelSize(0.035);
   phielphileadj109->GetYaxis()->SetTitleSize(0.035);
   phielphileadj109->GetYaxis()->SetTitleFont(42);
   phielphileadj109->GetZaxis()->SetLabelFont(42);
   phielphileadj109->GetZaxis()->SetLabelSize(0.035);
   phielphileadj109->GetZaxis()->SetTitleSize(0.035);
   phielphileadj109->GetZaxis()->SetTitleFont(42);
   phielphileadj->Add(phielphileadj,"");
   
   TH1D *phielphileadj110 = new TH1D("phielphileadj110"," #Delta_{#phi}[e_{-},jet_{1}]",10,0,3.141593);
   phielphileadj110->SetBinContent(1,0.001593307);
   phielphileadj110->SetBinContent(2,0.0005199211);
   phielphileadj110->SetBinContent(3,0.000335433);
   phielphileadj110->SetBinContent(4,0.0004696061);
   phielphileadj110->SetBinContent(5,0.0004696061);
   phielphileadj110->SetBinContent(6,0.0006540943);
   phielphileadj110->SetBinContent(7,0.0008888973);
   phielphileadj110->SetBinContent(8,0.001962283);
   phielphileadj110->SetBinContent(9,0.002331259);
   phielphileadj110->SetBinContent(10,0.003119526);
   phielphileadj110->SetBinError(1,0.0001634698);
   phielphileadj110->SetBinError(2,9.338058e-05);
   phielphileadj110->SetBinError(3,7.500509e-05);
   phielphileadj110->SetBinError(4,8.874722e-05);
   phielphileadj110->SetBinError(5,8.874722e-05);
   phielphileadj110->SetBinError(6,0.0001047389);
   phielphileadj110->SetBinError(7,0.0001220994);
   phielphileadj110->SetBinError(8,0.0001814131);
   phielphileadj110->SetBinError(9,0.0001977348);
   phielphileadj110->SetBinError(10,0.0002287348);
   phielphileadj110->SetEntries(736);

   ci = TColor::GetColor("#0000ff");
   phielphileadj110->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phielphileadj110->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phielphileadj110->SetMarkerColor(ci);
   phielphileadj110->SetMarkerStyle(21);
   phielphileadj110->GetXaxis()->SetTitle("phielphileadj");
   phielphileadj110->GetXaxis()->SetLabelFont(42);
   phielphileadj110->GetXaxis()->SetLabelSize(0.035);
   phielphileadj110->GetXaxis()->SetTitleSize(0.035);
   phielphileadj110->GetXaxis()->SetTitleFont(42);
   phielphileadj110->GetYaxis()->SetTitle("Events/pb");
   phielphileadj110->GetYaxis()->SetLabelFont(42);
   phielphileadj110->GetYaxis()->SetLabelSize(0.035);
   phielphileadj110->GetYaxis()->SetTitleSize(0.035);
   phielphileadj110->GetYaxis()->SetTitleFont(42);
   phielphileadj110->GetZaxis()->SetLabelFont(42);
   phielphileadj110->GetZaxis()->SetLabelSize(0.035);
   phielphileadj110->GetZaxis()->SetTitleSize(0.035);
   phielphileadj110->GetZaxis()->SetTitleFont(42);
   phielphileadj->Add(phielphileadj,"");
   phielphileadj->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3377011,0.9342857,0.6622989,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("phielphileadj");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phielphileadj","phielphileadj_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phielphileadj","phielphileadj_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phielphileadj","phielphileadj_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phielphileadj","phielphileadj_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phielphileadj","phielphileadj_ttbar","lp");

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
   phielphileadj->Modified();
   phielphileadj->cd();
   phielphileadj->SetSelected(phielphileadj);
}
