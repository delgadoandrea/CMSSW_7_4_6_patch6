void Nomu()
{
//=========Macro generated from canvas: Nomu/Nomu
//=========  (Sun Nov  8 21:54:20 2015) by ROOT version6.02/05
   TCanvas *Nomu = new TCanvas("Nomu", "Nomu",60,83,700,700);
   Nomu->Range(-0.625,-5.891237,5.625,2.54447);
   Nomu->SetFillColor(0);
   Nomu->SetBorderMode(0);
   Nomu->SetBorderSize(2);
   Nomu->SetLogy();
   Nomu->SetFrameBorderMode(0);
   Nomu->SetFrameBorderMode(0);
   
   THStack *Nomu = new THStack();
   Nomu->SetName("Nomu");
   Nomu->SetTitle("Nomu");
   
   TH1F *Nomu_stack_5 = new TH1F("Nomu_stack_5","Nomu",5,0,5);
   Nomu_stack_5->SetMinimum(8.960535e-06);
   Nomu_stack_5->SetMaximum(50.2226);
   Nomu_stack_5->SetDirectory(0);
   Nomu_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Nomu_stack_5->SetLineColor(ci);
   Nomu_stack_5->GetXaxis()->SetTitle("Nomu");
   Nomu_stack_5->GetXaxis()->SetLabelFont(42);
   Nomu_stack_5->GetXaxis()->SetLabelSize(0.035);
   Nomu_stack_5->GetXaxis()->SetTitleSize(0.035);
   Nomu_stack_5->GetXaxis()->SetTitleFont(42);
   Nomu_stack_5->GetYaxis()->SetTitle("Events/pb");
   Nomu_stack_5->GetYaxis()->SetLabelFont(42);
   Nomu_stack_5->GetYaxis()->SetLabelSize(0.035);
   Nomu_stack_5->GetYaxis()->SetTitleSize(0.035);
   Nomu_stack_5->GetYaxis()->SetTitleFont(42);
   Nomu_stack_5->GetZaxis()->SetLabelFont(42);
   Nomu_stack_5->GetZaxis()->SetLabelSize(0.035);
   Nomu_stack_5->GetZaxis()->SetTitleSize(0.035);
   Nomu_stack_5->GetZaxis()->SetTitleFont(42);
   Nomu->SetHistogram(Nomu_stack_5);
   
   
   TH1D *Nomu21 = new TH1D("Nomu21","No. of #mu",5,0,5);
   Nomu21->SetBinContent(1,18.60502);
   Nomu21->SetBinContent(2,0.3995796);
   Nomu21->SetBinContent(3,0.02882494);
   Nomu21->SetBinError(1,2.32652);
   Nomu21->SetBinError(2,0.08425933);
   Nomu21->SetBinError(3,0.02638252);
   Nomu21->SetEntries(5064);

   ci = TColor::GetColor("#00cc00");
   Nomu21->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   Nomu21->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   Nomu21->SetMarkerColor(ci);
   Nomu21->SetMarkerStyle(22);
   Nomu21->GetXaxis()->SetTitle("Nomu");
   Nomu21->GetXaxis()->SetLabelFont(42);
   Nomu21->GetXaxis()->SetLabelSize(0.035);
   Nomu21->GetXaxis()->SetTitleSize(0.035);
   Nomu21->GetXaxis()->SetTitleFont(42);
   Nomu21->GetYaxis()->SetTitle("Events/pb");
   Nomu21->GetYaxis()->SetLabelFont(42);
   Nomu21->GetYaxis()->SetLabelSize(0.035);
   Nomu21->GetYaxis()->SetTitleSize(0.035);
   Nomu21->GetYaxis()->SetTitleFont(42);
   Nomu21->GetZaxis()->SetLabelFont(42);
   Nomu21->GetZaxis()->SetLabelSize(0.035);
   Nomu21->GetZaxis()->SetTitleSize(0.035);
   Nomu21->GetZaxis()->SetTitleFont(42);
   Nomu->Add(Nomu,"");
   
   TH1D *Nomu22 = new TH1D("Nomu22","No. of #mu",5,0,5);
   Nomu22->SetBinContent(1,23.20601);
   Nomu22->SetBinContent(2,7.508719);
   Nomu22->SetBinContent(3,0.1705395);
   Nomu22->SetBinContent(4,0.003263799);
   Nomu22->SetBinContent(5,4.222875e-05);
   Nomu22->SetBinError(1,0.07946153);
   Nomu22->SetBinError(2,0.04226072);
   Nomu22->SetBinError(3,0.006209384);
   Nomu22->SetBinError(4,0.0008498366);
   Nomu22->SetBinError(5,3.154196e-05);
   Nomu22->SetEntries(557953);

   ci = TColor::GetColor("#00ffff");
   Nomu22->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   Nomu22->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   Nomu22->SetMarkerColor(ci);
   Nomu22->SetMarkerStyle(20);
   Nomu22->GetXaxis()->SetTitle("Nomu");
   Nomu22->GetXaxis()->SetLabelFont(42);
   Nomu22->GetXaxis()->SetLabelSize(0.035);
   Nomu22->GetXaxis()->SetTitleSize(0.035);
   Nomu22->GetXaxis()->SetTitleFont(42);
   Nomu22->GetYaxis()->SetTitle("Events/pb");
   Nomu22->GetYaxis()->SetLabelFont(42);
   Nomu22->GetYaxis()->SetLabelSize(0.035);
   Nomu22->GetYaxis()->SetTitleSize(0.035);
   Nomu22->GetYaxis()->SetTitleFont(42);
   Nomu22->GetZaxis()->SetLabelFont(42);
   Nomu22->GetZaxis()->SetLabelSize(0.035);
   Nomu22->GetZaxis()->SetTitleSize(0.035);
   Nomu22->GetZaxis()->SetTitleFont(42);
   Nomu->Add(Nomu,"");
   
   TH1D *Nomu23 = new TH1D("Nomu23","No. of #mu",5,0,5);
   Nomu23->SetBinContent(1,19.47998);
   Nomu23->SetBinContent(2,0.4269483);
   Nomu23->SetBinContent(3,0.007981195);
   Nomu23->SetBinContent(4,3.893369e-05);
   Nomu23->SetBinError(1,0.03144538);
   Nomu23->SetBinError(2,0.004628651);
   Nomu23->SetBinError(3,0.0005639127);
   Nomu23->SetBinError(4,1.507729e-05);
   Nomu23->SetEntries(1388358);

   ci = TColor::GetColor("#ffcc00");
   Nomu23->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   Nomu23->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   Nomu23->SetMarkerColor(ci);
   Nomu23->SetMarkerStyle(21);
   Nomu23->GetXaxis()->SetTitle("Nomu");
   Nomu23->GetXaxis()->SetLabelFont(42);
   Nomu23->GetXaxis()->SetLabelSize(0.035);
   Nomu23->GetXaxis()->SetTitleSize(0.035);
   Nomu23->GetXaxis()->SetTitleFont(42);
   Nomu23->GetYaxis()->SetTitle("Events/pb");
   Nomu23->GetYaxis()->SetLabelFont(42);
   Nomu23->GetYaxis()->SetLabelSize(0.035);
   Nomu23->GetYaxis()->SetTitleSize(0.035);
   Nomu23->GetYaxis()->SetTitleFont(42);
   Nomu23->GetZaxis()->SetLabelFont(42);
   Nomu23->GetZaxis()->SetLabelSize(0.035);
   Nomu23->GetZaxis()->SetTitleSize(0.035);
   Nomu23->GetZaxis()->SetTitleFont(42);
   Nomu->Add(Nomu,"");
   
   TH1D *Nomu24 = new TH1D("Nomu24","No. of #mu",5,0,5);
   Nomu24->SetBinContent(1,0.5059724);
   Nomu24->SetBinContent(2,0.05737942);
   Nomu24->SetBinContent(3,0.002946094);
   Nomu24->SetBinContent(4,0.0001388212);
   Nomu24->SetBinError(1,0.002793637);
   Nomu24->SetBinError(2,0.0009407727);
   Nomu24->SetBinError(3,0.0002131719);
   Nomu24->SetBinError(4,4.627373e-05);
   Nomu24->SetEntries(36723);

   ci = TColor::GetColor("#ff0000");
   Nomu24->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   Nomu24->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   Nomu24->SetMarkerColor(ci);
   Nomu24->SetMarkerStyle(20);
   Nomu24->GetXaxis()->SetTitle("Nomu");
   Nomu24->GetXaxis()->SetLabelFont(42);
   Nomu24->GetXaxis()->SetLabelSize(0.035);
   Nomu24->GetXaxis()->SetTitleSize(0.035);
   Nomu24->GetXaxis()->SetTitleFont(42);
   Nomu24->GetYaxis()->SetTitle("Events/pb");
   Nomu24->GetYaxis()->SetLabelFont(42);
   Nomu24->GetYaxis()->SetLabelSize(0.035);
   Nomu24->GetYaxis()->SetTitleSize(0.035);
   Nomu24->GetYaxis()->SetTitleFont(42);
   Nomu24->GetZaxis()->SetLabelFont(42);
   Nomu24->GetZaxis()->SetLabelSize(0.035);
   Nomu24->GetZaxis()->SetTitleSize(0.035);
   Nomu24->GetZaxis()->SetTitleFont(42);
   Nomu->Add(Nomu,"");
   
   TH1D *Nomu25 = new TH1D("Nomu25","No. of #mu",5,0,5);
   Nomu25->SetBinContent(1,0.02403377);
   Nomu25->SetBinContent(2,0.01452425);
   Nomu25->SetBinContent(3,0.002012598);
   Nomu25->SetBinContent(4,0.0003522046);
   Nomu25->SetBinError(1,0.0006348905);
   Nomu25->SetBinError(2,0.000493554);
   Nomu25->SetBinError(3,0.0001837242);
   Nomu25->SetBinError(4,7.685734e-05);
   Nomu25->SetEntries(2440);

   ci = TColor::GetColor("#0000ff");
   Nomu25->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   Nomu25->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   Nomu25->SetMarkerColor(ci);
   Nomu25->SetMarkerStyle(21);
   Nomu25->GetXaxis()->SetTitle("Nomu");
   Nomu25->GetXaxis()->SetLabelFont(42);
   Nomu25->GetXaxis()->SetLabelSize(0.035);
   Nomu25->GetXaxis()->SetTitleSize(0.035);
   Nomu25->GetXaxis()->SetTitleFont(42);
   Nomu25->GetYaxis()->SetTitle("Events/pb");
   Nomu25->GetYaxis()->SetLabelFont(42);
   Nomu25->GetYaxis()->SetLabelSize(0.035);
   Nomu25->GetYaxis()->SetTitleSize(0.035);
   Nomu25->GetYaxis()->SetTitleFont(42);
   Nomu25->GetZaxis()->SetLabelFont(42);
   Nomu25->GetZaxis()->SetLabelSize(0.035);
   Nomu25->GetZaxis()->SetTitleSize(0.035);
   Nomu25->GetZaxis()->SetTitleFont(42);
   Nomu->Add(Nomu,"");
   Nomu->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.4203161,0.94,0.5796839,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Nomu");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Nomu","Nomu_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Nomu","Nomu_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Nomu","Nomu_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Nomu","Nomu_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Nomu","Nomu_ttbar","lp");

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
   Nomu->Modified();
   Nomu->cd();
   Nomu->SetSelected(Nomu);
}
