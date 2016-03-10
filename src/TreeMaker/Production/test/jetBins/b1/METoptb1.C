void METoptb1()
{
//=========Macro generated from canvas: b1/METoptb1/b1/METoptb1
//=========  (Tue Nov 24 14:28:21 2015) by ROOT version6.02/05
   TCanvas *b1/METoptb1 = new TCanvas("b1/METoptb1", "b1/METoptb1",0,22,700,700);
   b1/METoptb1->Range(-0.375,-6.019488,3.375,0.3851344);
   b1/METoptb1->SetFillColor(0);
   b1/METoptb1->SetBorderMode(0);
   b1/METoptb1->SetBorderSize(2);
   b1/METoptb1->SetLogy();
   b1/METoptb1->SetFrameBorderMode(0);
   b1/METoptb1->SetFrameBorderMode(0);
   
   THStack *b1/METoptb1 = new THStack();
   b1/METoptb1->SetName("b1/METoptb1");
   b1/METoptb1->SetTitle("b1/METoptb1");
   
   TH1F *b1/METoptb1_stack_1 = new TH1F("b1/METoptb1_stack_1","b1/METoptb1",15,0,3);
   b1/METoptb1_stack_1->SetMinimum(4.178057e-06);
   b1/METoptb1_stack_1->SetMaximum(0.5554848);
   b1/METoptb1_stack_1->SetDirectory(0);
   b1/METoptb1_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1/METoptb1_stack_1->SetLineColor(ci);
   b1/METoptb1_stack_1->GetXaxis()->SetTitle("b1/METoptb1");
   b1/METoptb1_stack_1->GetXaxis()->SetLabelFont(42);
   b1/METoptb1_stack_1->GetXaxis()->SetLabelSize(0.035);
   b1/METoptb1_stack_1->GetXaxis()->SetTitleSize(0.035);
   b1/METoptb1_stack_1->GetXaxis()->SetTitleFont(42);
   b1/METoptb1_stack_1->GetYaxis()->SetTitle("Events/pb");
   b1/METoptb1_stack_1->GetYaxis()->SetLabelFont(42);
   b1/METoptb1_stack_1->GetYaxis()->SetLabelSize(0.035);
   b1/METoptb1_stack_1->GetYaxis()->SetTitleSize(0.035);
   b1/METoptb1_stack_1->GetYaxis()->SetTitleFont(42);
   b1/METoptb1_stack_1->GetZaxis()->SetLabelFont(42);
   b1/METoptb1_stack_1->GetZaxis()->SetLabelSize(0.035);
   b1/METoptb1_stack_1->GetZaxis()->SetTitleSize(0.035);
   b1/METoptb1_stack_1->GetZaxis()->SetTitleFont(42);
   b1/METoptb1->SetHistogram(b1/METoptb1_stack_1);
   
   
   TH1D *METoptb11 = new TH1D("METoptb11","MET/p_{T}^{lead jet}",15,0,3);
   METoptb11->SetBinContent(4,0.00831877);
   METoptb11->SetBinContent(6,0.00831877);
   METoptb11->SetBinError(4,0.00831877);
   METoptb11->SetBinError(6,0.00831877);
   METoptb11->SetEntries(2);

   ci = TColor::GetColor("#00cc00");
   METoptb11->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METoptb11->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METoptb11->SetMarkerColor(ci);
   METoptb11->SetMarkerStyle(22);
   METoptb11->GetXaxis()->SetTitle("METoptb1");
   METoptb11->GetXaxis()->SetLabelFont(42);
   METoptb11->GetXaxis()->SetLabelSize(0.035);
   METoptb11->GetXaxis()->SetTitleSize(0.035);
   METoptb11->GetXaxis()->SetTitleFont(42);
   METoptb11->GetYaxis()->SetTitle("Events/pb");
   METoptb11->GetYaxis()->SetLabelFont(42);
   METoptb11->GetYaxis()->SetLabelSize(0.035);
   METoptb11->GetYaxis()->SetTitleSize(0.035);
   METoptb11->GetYaxis()->SetTitleFont(42);
   METoptb11->GetZaxis()->SetLabelFont(42);
   METoptb11->GetZaxis()->SetLabelSize(0.035);
   METoptb11->GetZaxis()->SetTitleSize(0.035);
   METoptb11->GetZaxis()->SetTitleFont(42);
   b1/METoptb1->Add(METoptb1,"");
   
   TH1D *METoptb12 = new TH1D("METoptb12","MET/p_{T}^{lead jet}",15,0,3);
   METoptb12->SetBinContent(3,0.0005979839);
   METoptb12->SetBinContent(4,0.009463439);
   METoptb12->SetBinContent(5,0.1735299);
   METoptb12->SetBinContent(6,0.2970475);
   METoptb12->SetBinContent(7,0.1010679);
   METoptb12->SetBinContent(8,0.0282671);
   METoptb12->SetBinContent(9,0.01741373);
   METoptb12->SetBinContent(10,0.00733517);
   METoptb12->SetBinContent(11,0.006803405);
   METoptb12->SetBinContent(12,0.001286636);
   METoptb12->SetBinContent(13,0.001514662);
   METoptb12->SetBinContent(14,0.001614657);
   METoptb12->SetBinContent(15,1.473949e-05);
   METoptb12->SetBinContent(16,0.0005588729);
   METoptb12->SetBinError(3,9.230618e-05);
   METoptb12->SetBinError(4,0.0008074678);
   METoptb12->SetBinError(5,0.004742746);
   METoptb12->SetBinError(6,0.00817298);
   METoptb12->SetBinError(7,0.00624437);
   METoptb12->SetBinError(8,0.003302222);
   METoptb12->SetBinError(9,0.002959757);
   METoptb12->SetBinError(10,0.001838302);
   METoptb12->SetBinError(11,0.001824161);
   METoptb12->SetBinError(12,0.0004068701);
   METoptb12->SetBinError(13,0.001005052);
   METoptb12->SetBinError(14,0.001013051);
   METoptb12->SetBinError(15,1.473949e-05);
   METoptb12->SetBinError(16,0.0002585905);
   METoptb12->SetEntries(7038);

   ci = TColor::GetColor("#00ffff");
   METoptb12->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METoptb12->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METoptb12->SetMarkerColor(ci);
   METoptb12->SetMarkerStyle(20);
   METoptb12->GetXaxis()->SetTitle("METoptb1");
   METoptb12->GetXaxis()->SetLabelFont(42);
   METoptb12->GetXaxis()->SetLabelSize(0.035);
   METoptb12->GetXaxis()->SetTitleSize(0.035);
   METoptb12->GetXaxis()->SetTitleFont(42);
   METoptb12->GetYaxis()->SetTitle("Events/pb");
   METoptb12->GetYaxis()->SetLabelFont(42);
   METoptb12->GetYaxis()->SetLabelSize(0.035);
   METoptb12->GetYaxis()->SetTitleSize(0.035);
   METoptb12->GetYaxis()->SetTitleFont(42);
   METoptb12->GetZaxis()->SetLabelFont(42);
   METoptb12->GetZaxis()->SetLabelSize(0.035);
   METoptb12->GetZaxis()->SetTitleSize(0.035);
   METoptb12->GetZaxis()->SetTitleFont(42);
   b1/METoptb1->Add(METoptb1,"");
   
   TH1D *METoptb13 = new TH1D("METoptb13","MET/p_{T}^{lead jet}",15,0,3);
   METoptb13->SetBinContent(3,0.0001381272);
   METoptb13->SetBinContent(4,0.001684868);
   METoptb13->SetBinContent(5,0.03979096);
   METoptb13->SetBinContent(6,0.0814113);
   METoptb13->SetBinContent(7,0.02347692);
   METoptb13->SetBinContent(8,0.007564713);
   METoptb13->SetBinContent(9,0.003744978);
   METoptb13->SetBinContent(10,0.001842647);
   METoptb13->SetBinContent(11,0.001370888);
   METoptb13->SetBinContent(12,0.0008194819);
   METoptb13->SetBinContent(13,0.0002425362);
   METoptb13->SetBinContent(14,0.0001407686);
   METoptb13->SetBinContent(15,5.630742e-05);
   METoptb13->SetBinContent(16,0.000334906);
   METoptb13->SetBinError(3,1.668347e-05);
   METoptb13->SetBinError(4,0.000153288);
   METoptb13->SetBinError(5,0.0010011);
   METoptb13->SetBinError(6,0.001655242);
   METoptb13->SetBinError(7,0.001009929);
   METoptb13->SetBinError(8,0.0005623021);
   METoptb13->SetBinError(9,0.000437522);
   METoptb13->SetBinError(10,0.0002517068);
   METoptb13->SetBinError(11,0.0002866502);
   METoptb13->SetBinError(12,0.0001883731);
   METoptb13->SetBinError(13,0.0001139839);
   METoptb13->SetBinError(14,6.295361e-05);
   METoptb13->SetBinError(15,3.981536e-05);
   METoptb13->SetBinError(16,9.382382e-05);
   METoptb13->SetEntries(10014);

   ci = TColor::GetColor("#ffcc00");
   METoptb13->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METoptb13->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METoptb13->SetMarkerColor(ci);
   METoptb13->SetMarkerStyle(21);
   METoptb13->GetXaxis()->SetTitle("METoptb1");
   METoptb13->GetXaxis()->SetLabelFont(42);
   METoptb13->GetXaxis()->SetLabelSize(0.035);
   METoptb13->GetXaxis()->SetTitleSize(0.035);
   METoptb13->GetXaxis()->SetTitleFont(42);
   METoptb13->GetYaxis()->SetTitle("Events/pb");
   METoptb13->GetYaxis()->SetLabelFont(42);
   METoptb13->GetYaxis()->SetLabelSize(0.035);
   METoptb13->GetYaxis()->SetTitleSize(0.035);
   METoptb13->GetYaxis()->SetTitleFont(42);
   METoptb13->GetZaxis()->SetLabelFont(42);
   METoptb13->GetZaxis()->SetLabelSize(0.035);
   METoptb13->GetZaxis()->SetTitleSize(0.035);
   METoptb13->GetZaxis()->SetTitleFont(42);
   b1/METoptb1->Add(METoptb1,"");
   
   TH1D *METoptb14 = new TH1D("METoptb14","MET/p_{T}^{lead jet}",15,0,3);
   METoptb14->SetBinContent(3,1.542458e-05);
   METoptb14->SetBinContent(4,0.0003084915);
   METoptb14->SetBinContent(5,0.003871569);
   METoptb14->SetBinContent(6,0.004072088);
   METoptb14->SetBinContent(7,0.001465335);
   METoptb14->SetBinContent(8,0.0006941059);
   METoptb14->SetBinContent(9,0.0003239161);
   METoptb14->SetBinContent(10,0.0002467932);
   METoptb14->SetBinContent(11,9.254746e-05);
   METoptb14->SetBinContent(12,9.254746e-05);
   METoptb14->SetBinContent(13,4.627373e-05);
   METoptb14->SetBinContent(14,1.542458e-05);
   METoptb14->SetBinContent(15,1.542458e-05);
   METoptb14->SetBinContent(16,3.084915e-05);
   METoptb14->SetBinError(3,1.542458e-05);
   METoptb14->SetBinError(4,6.89808e-05);
   METoptb14->SetBinError(5,0.0002443712);
   METoptb14->SetBinError(6,0.0002506197);
   METoptb14->SetBinError(7,0.0001503402);
   METoptb14->SetBinError(8,0.0001034712);
   METoptb14->SetBinError(9,7.068429e-05);
   METoptb14->SetBinError(10,6.16983e-05);
   METoptb14->SetBinError(11,3.778234e-05);
   METoptb14->SetBinError(12,3.778234e-05);
   METoptb14->SetBinError(13,2.671615e-05);
   METoptb14->SetBinError(14,1.542458e-05);
   METoptb14->SetBinError(15,1.542458e-05);
   METoptb14->SetBinError(16,2.181364e-05);
   METoptb14->SetEntries(732);

   ci = TColor::GetColor("#ff0000");
   METoptb14->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METoptb14->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METoptb14->SetMarkerColor(ci);
   METoptb14->SetMarkerStyle(20);
   METoptb14->GetXaxis()->SetTitle("METoptb1");
   METoptb14->GetXaxis()->SetLabelFont(42);
   METoptb14->GetXaxis()->SetLabelSize(0.035);
   METoptb14->GetXaxis()->SetTitleSize(0.035);
   METoptb14->GetXaxis()->SetTitleFont(42);
   METoptb14->GetYaxis()->SetTitle("Events/pb");
   METoptb14->GetYaxis()->SetLabelFont(42);
   METoptb14->GetYaxis()->SetLabelSize(0.035);
   METoptb14->GetYaxis()->SetTitleSize(0.035);
   METoptb14->GetYaxis()->SetTitleFont(42);
   METoptb14->GetZaxis()->SetLabelFont(42);
   METoptb14->GetZaxis()->SetLabelSize(0.035);
   METoptb14->GetZaxis()->SetTitleSize(0.035);
   METoptb14->GetZaxis()->SetTitleFont(42);
   b1/METoptb1->Add(METoptb1,"");
   
   TH1D *METoptb15 = new TH1D("METoptb15","MET/p_{T}^{lead jet}",15,0,3);
   METoptb15->SetBinContent(7,3.35433e-05);
   METoptb15->SetBinError(7,2.371869e-05);
   METoptb15->SetEntries(2);

   ci = TColor::GetColor("#0000ff");
   METoptb15->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METoptb15->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METoptb15->SetMarkerColor(ci);
   METoptb15->SetMarkerStyle(21);
   METoptb15->GetXaxis()->SetTitle("METoptb1");
   METoptb15->GetXaxis()->SetLabelFont(42);
   METoptb15->GetXaxis()->SetLabelSize(0.035);
   METoptb15->GetXaxis()->SetTitleSize(0.035);
   METoptb15->GetXaxis()->SetTitleFont(42);
   METoptb15->GetYaxis()->SetTitle("Events/pb");
   METoptb15->GetYaxis()->SetLabelFont(42);
   METoptb15->GetYaxis()->SetLabelSize(0.035);
   METoptb15->GetYaxis()->SetTitleSize(0.035);
   METoptb15->GetYaxis()->SetTitleFont(42);
   METoptb15->GetZaxis()->SetLabelFont(42);
   METoptb15->GetZaxis()->SetLabelSize(0.035);
   METoptb15->GetZaxis()->SetTitleSize(0.035);
   METoptb15->GetZaxis()->SetTitleFont(42);
   b1/METoptb1->Add(METoptb1,"");
   b1/METoptb1->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3362644,0.9342857,0.6637356,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b1/METoptb1");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METoptb1","b1/METoptb1_QCD_b1/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METoptb1","b1/METoptb1_WJetsToLNu_b1/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METoptb1","b1/METoptb1_ZJetsToNuNu_b1/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METoptb1","b1/METoptb1_signal_b1/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METoptb1","b1/METoptb1_ttbar_b1/","lp");

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
   b1/METoptb1->Modified();
   b1/METoptb1->cd();
   b1/METoptb1->SetSelected(b1/METoptb1);
}
