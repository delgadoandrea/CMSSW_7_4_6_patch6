void mu2pt()
{
//=========Macro generated from canvas: mu2pt/mu2pt
//=========  (Mon Nov 23 11:05:08 2015) by ROOT version6.02/05
   TCanvas *mu2pt = new TCanvas("mu2pt", "mu2pt",280,302,700,700);
   mu2pt->Range(-0.375,-6.386182,3.375,2.978982);
   mu2pt->SetFillColor(0);
   mu2pt->SetBorderMode(0);
   mu2pt->SetBorderSize(2);
   mu2pt->SetLogy();
   mu2pt->SetFrameBorderMode(0);
   mu2pt->SetFrameBorderMode(0);
   
   THStack *mu2pt = new THStack();
   mu2pt->SetName("mu2pt");
   mu2pt->SetTitle("mu2pt");
   
   TH1F *mu2pt_stack_16 = new TH1F("mu2pt_stack_16","mu2pt",3,0,3);
   mu2pt_stack_16->SetMinimum(3.55087e-06);
   mu2pt_stack_16->SetMaximum(110.2721);
   mu2pt_stack_16->SetDirectory(0);
   mu2pt_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   mu2pt_stack_16->SetLineColor(ci);
   mu2pt_stack_16->GetXaxis()->SetTitle("mu2pt");
   mu2pt_stack_16->GetXaxis()->SetLabelFont(42);
   mu2pt_stack_16->GetXaxis()->SetLabelSize(0.035);
   mu2pt_stack_16->GetXaxis()->SetTitleSize(0.035);
   mu2pt_stack_16->GetXaxis()->SetTitleFont(42);
   mu2pt_stack_16->GetYaxis()->SetTitle("Events/pb");
   mu2pt_stack_16->GetYaxis()->SetLabelFont(42);
   mu2pt_stack_16->GetYaxis()->SetLabelSize(0.035);
   mu2pt_stack_16->GetYaxis()->SetTitleSize(0.035);
   mu2pt_stack_16->GetYaxis()->SetTitleFont(42);
   mu2pt_stack_16->GetZaxis()->SetLabelFont(42);
   mu2pt_stack_16->GetZaxis()->SetLabelSize(0.035);
   mu2pt_stack_16->GetZaxis()->SetTitleSize(0.035);
   mu2pt_stack_16->GetZaxis()->SetTitleFont(42);
   mu2pt->SetHistogram(mu2pt_stack_16);
   
   
   TH1D *mu2pt76 = new TH1D("mu2pt76","p_{T, #mu2}",3,0,3);
   mu2pt76->SetBinContent(1,47.93669);
   mu2pt76->SetBinContent(2,39.20006);
   mu2pt76->SetBinContent(3,4.392458);
   mu2pt76->SetBinError(1,3.959288);
   mu2pt76->SetBinError(2,3.588209);
   mu2pt76->SetBinError(3,1.20629);
   mu2pt76->SetEntries(545);

   ci = TColor::GetColor("#00cc00");
   mu2pt76->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   mu2pt76->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   mu2pt76->SetMarkerColor(ci);
   mu2pt76->SetMarkerStyle(22);
   mu2pt76->GetXaxis()->SetTitle("mu2pt");
   mu2pt76->GetXaxis()->SetLabelFont(42);
   mu2pt76->GetXaxis()->SetLabelSize(0.035);
   mu2pt76->GetXaxis()->SetTitleSize(0.035);
   mu2pt76->GetXaxis()->SetTitleFont(42);
   mu2pt76->GetYaxis()->SetTitle("Events/pb");
   mu2pt76->GetYaxis()->SetLabelFont(42);
   mu2pt76->GetYaxis()->SetLabelSize(0.035);
   mu2pt76->GetYaxis()->SetTitleSize(0.035);
   mu2pt76->GetYaxis()->SetTitleFont(42);
   mu2pt76->GetZaxis()->SetLabelFont(42);
   mu2pt76->GetZaxis()->SetLabelSize(0.035);
   mu2pt76->GetZaxis()->SetTitleSize(0.035);
   mu2pt76->GetZaxis()->SetTitleFont(42);
   mu2pt->Add(mu2pt,"");
   
   TH1D *mu2pt77 = new TH1D("mu2pt77","p_{T, #mu2}",3,0,3);
   mu2pt77->SetBinContent(1,0.2715243);
   mu2pt77->SetBinContent(2,0.4144113);
   mu2pt77->SetBinContent(3,0.02883091);
   mu2pt77->SetBinError(1,0.01436051);
   mu2pt77->SetBinError(2,0.017913);
   mu2pt77->SetBinError(3,0.004381019);
   mu2pt77->SetEntries(2754);

   ci = TColor::GetColor("#00ffff");
   mu2pt77->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   mu2pt77->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   mu2pt77->SetMarkerColor(ci);
   mu2pt77->SetMarkerStyle(20);
   mu2pt77->GetXaxis()->SetTitle("mu2pt");
   mu2pt77->GetXaxis()->SetLabelFont(42);
   mu2pt77->GetXaxis()->SetLabelSize(0.035);
   mu2pt77->GetXaxis()->SetTitleSize(0.035);
   mu2pt77->GetXaxis()->SetTitleFont(42);
   mu2pt77->GetYaxis()->SetTitle("Events/pb");
   mu2pt77->GetYaxis()->SetLabelFont(42);
   mu2pt77->GetYaxis()->SetLabelSize(0.035);
   mu2pt77->GetYaxis()->SetTitleSize(0.035);
   mu2pt77->GetYaxis()->SetTitleFont(42);
   mu2pt77->GetZaxis()->SetLabelFont(42);
   mu2pt77->GetZaxis()->SetLabelSize(0.035);
   mu2pt77->GetZaxis()->SetTitleSize(0.035);
   mu2pt77->GetZaxis()->SetTitleFont(42);
   mu2pt->Add(mu2pt,"");
   
   TH1D *mu2pt78 = new TH1D("mu2pt78","p_{T, #mu2}",3,0,3);
   mu2pt78->SetBinContent(1,0.04848782);
   mu2pt78->SetBinContent(2,0.04672612);
   mu2pt78->SetBinContent(3,0.002125149);
   mu2pt78->SetBinError(1,0.001929653);
   mu2pt78->SetBinError(2,0.001902442);
   mu2pt78->SetBinError(3,0.0004000883);
   mu2pt78->SetEntries(2489);

   ci = TColor::GetColor("#ffcc00");
   mu2pt78->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   mu2pt78->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   mu2pt78->SetMarkerColor(ci);
   mu2pt78->SetMarkerStyle(21);
   mu2pt78->GetXaxis()->SetTitle("mu2pt");
   mu2pt78->GetXaxis()->SetLabelFont(42);
   mu2pt78->GetXaxis()->SetLabelSize(0.035);
   mu2pt78->GetXaxis()->SetTitleSize(0.035);
   mu2pt78->GetXaxis()->SetTitleFont(42);
   mu2pt78->GetYaxis()->SetTitle("Events/pb");
   mu2pt78->GetYaxis()->SetLabelFont(42);
   mu2pt78->GetYaxis()->SetLabelSize(0.035);
   mu2pt78->GetYaxis()->SetTitleSize(0.035);
   mu2pt78->GetYaxis()->SetTitleFont(42);
   mu2pt78->GetZaxis()->SetLabelFont(42);
   mu2pt78->GetZaxis()->SetLabelSize(0.035);
   mu2pt78->GetZaxis()->SetTitleSize(0.035);
   mu2pt78->GetZaxis()->SetTitleFont(42);
   mu2pt->Add(mu2pt,"");
   
   TH1D *mu2pt79 = new TH1D("mu2pt79","p_{T, #mu2}",3,0,3);
   mu2pt79->SetBinContent(1,0.0005398602);
   mu2pt79->SetBinContent(2,0.001048871);
   mu2pt79->SetBinContent(3,0.0002622178);
   mu2pt79->SetBinError(1,9.125302e-05);
   mu2pt79->SetBinError(2,0.0001271943);
   mu2pt79->SetBinError(3,6.359716e-05);
   mu2pt79->SetEntries(120);

   ci = TColor::GetColor("#ff0000");
   mu2pt79->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   mu2pt79->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   mu2pt79->SetMarkerColor(ci);
   mu2pt79->SetMarkerStyle(20);
   mu2pt79->GetXaxis()->SetTitle("mu2pt");
   mu2pt79->GetXaxis()->SetLabelFont(42);
   mu2pt79->GetXaxis()->SetLabelSize(0.035);
   mu2pt79->GetXaxis()->SetTitleSize(0.035);
   mu2pt79->GetXaxis()->SetTitleFont(42);
   mu2pt79->GetYaxis()->SetTitle("Events/pb");
   mu2pt79->GetYaxis()->SetLabelFont(42);
   mu2pt79->GetYaxis()->SetLabelSize(0.035);
   mu2pt79->GetYaxis()->SetTitleSize(0.035);
   mu2pt79->GetYaxis()->SetTitleFont(42);
   mu2pt79->GetZaxis()->SetLabelFont(42);
   mu2pt79->GetZaxis()->SetLabelSize(0.035);
   mu2pt79->GetZaxis()->SetTitleSize(0.035);
   mu2pt79->GetZaxis()->SetTitleFont(42);
   mu2pt->Add(mu2pt,"");
   
   TH1D *mu2pt80 = new TH1D("mu2pt80","p_{T, #mu2}",3,0,3);
   mu2pt80->SetBinContent(1,1.677165e-05);
   mu2pt80->SetBinError(1,1.677165e-05);
   mu2pt80->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   mu2pt80->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   mu2pt80->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   mu2pt80->SetMarkerColor(ci);
   mu2pt80->SetMarkerStyle(21);
   mu2pt80->GetXaxis()->SetTitle("mu2pt");
   mu2pt80->GetXaxis()->SetLabelFont(42);
   mu2pt80->GetXaxis()->SetLabelSize(0.035);
   mu2pt80->GetXaxis()->SetTitleSize(0.035);
   mu2pt80->GetXaxis()->SetTitleFont(42);
   mu2pt80->GetYaxis()->SetTitle("Events/pb");
   mu2pt80->GetYaxis()->SetLabelFont(42);
   mu2pt80->GetYaxis()->SetLabelSize(0.035);
   mu2pt80->GetYaxis()->SetTitleSize(0.035);
   mu2pt80->GetYaxis()->SetTitleFont(42);
   mu2pt80->GetZaxis()->SetLabelFont(42);
   mu2pt80->GetZaxis()->SetLabelSize(0.035);
   mu2pt80->GetZaxis()->SetTitleSize(0.035);
   mu2pt80->GetZaxis()->SetTitleFont(42);
   mu2pt->Add(mu2pt,"");
   mu2pt->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.414569,0.9342857,0.585431,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("mu2pt");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("mu2pt","mu2pt_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mu2pt","mu2pt_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mu2pt","mu2pt_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mu2pt","mu2pt_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mu2pt","mu2pt_ttbar","lp");

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
   mu2pt->Modified();
   mu2pt->cd();
   mu2pt->SetSelected(mu2pt);
}
