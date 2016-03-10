void hmtb1()
{
//=========Macro generated from canvas: b1/hmtb1/b1/hmtb1
//=========  (Tue Nov 24 14:28:22 2015) by ROOT version6.02/05
   TCanvas *b1/hmtb1 = new TCanvas("b1/hmtb1", "b1/hmtb1",40,62,700,700);
   b1/hmtb1->Range(-25,-6.942824,225,0.3062382);
   b1/hmtb1->SetFillColor(0);
   b1/hmtb1->SetBorderMode(0);
   b1/hmtb1->SetBorderSize(2);
   b1/hmtb1->SetLogy();
   b1/hmtb1->SetFrameBorderMode(0);
   b1/hmtb1->SetFrameBorderMode(0);
   
   THStack *b1/hmtb1 = new THStack();
   b1/hmtb1->SetName("b1/hmtb1");
   b1/hmtb1->SetTitle("b1/hmtb1");
   
   TH1F *b1/hmtb1_stack_3 = new TH1F("b1/hmtb1_stack_3","b1/hmtb1",8,0,200);
   b1/hmtb1_stack_3->SetMinimum(6.054558e-07);
   b1/hmtb1_stack_3->SetMaximum(0.3813572);
   b1/hmtb1_stack_3->SetDirectory(0);
   b1/hmtb1_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1/hmtb1_stack_3->SetLineColor(ci);
   b1/hmtb1_stack_3->GetXaxis()->SetTitle("b1/hmtb1");
   b1/hmtb1_stack_3->GetXaxis()->SetLabelFont(42);
   b1/hmtb1_stack_3->GetXaxis()->SetLabelSize(0.035);
   b1/hmtb1_stack_3->GetXaxis()->SetTitleSize(0.035);
   b1/hmtb1_stack_3->GetXaxis()->SetTitleFont(42);
   b1/hmtb1_stack_3->GetYaxis()->SetTitle("Events/pb");
   b1/hmtb1_stack_3->GetYaxis()->SetLabelFont(42);
   b1/hmtb1_stack_3->GetYaxis()->SetLabelSize(0.035);
   b1/hmtb1_stack_3->GetYaxis()->SetTitleSize(0.035);
   b1/hmtb1_stack_3->GetYaxis()->SetTitleFont(42);
   b1/hmtb1_stack_3->GetZaxis()->SetLabelFont(42);
   b1/hmtb1_stack_3->GetZaxis()->SetLabelSize(0.035);
   b1/hmtb1_stack_3->GetZaxis()->SetTitleSize(0.035);
   b1/hmtb1_stack_3->GetZaxis()->SetTitleFont(42);
   b1/hmtb1->SetHistogram(b1/hmtb1_stack_3);
   
   
   TH1D *hmtb111 = new TH1D("hmtb111"," Transverse mass",8,0,200);
   hmtb111->SetBinContent(1,0.01663754);
   hmtb111->SetBinError(1,0.01176452);
   hmtb111->SetEntries(2);

   ci = TColor::GetColor("#00cc00");
   hmtb111->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hmtb111->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   hmtb111->SetMarkerColor(ci);
   hmtb111->SetMarkerStyle(22);
   hmtb111->GetXaxis()->SetTitle("hmtb1");
   hmtb111->GetXaxis()->SetLabelFont(42);
   hmtb111->GetXaxis()->SetLabelSize(0.035);
   hmtb111->GetXaxis()->SetTitleSize(0.035);
   hmtb111->GetXaxis()->SetTitleFont(42);
   hmtb111->GetYaxis()->SetTitle("Events/pb");
   hmtb111->GetYaxis()->SetLabelFont(42);
   hmtb111->GetYaxis()->SetLabelSize(0.035);
   hmtb111->GetYaxis()->SetTitleSize(0.035);
   hmtb111->GetYaxis()->SetTitleFont(42);
   hmtb111->GetZaxis()->SetLabelFont(42);
   hmtb111->GetZaxis()->SetLabelSize(0.035);
   hmtb111->GetZaxis()->SetTitleSize(0.035);
   hmtb111->GetZaxis()->SetTitleFont(42);
   b1/hmtb1->Add(hmtb1,"");
   
   TH1D *hmtb112 = new TH1D("hmtb112"," Transverse mass",8,0,200);
   hmtb112->SetBinContent(1,0.1914725);
   hmtb112->SetBinContent(2,0.1431763);
   hmtb112->SetBinContent(3,0.1738152);
   hmtb112->SetBinContent(4,0.1348591);
   hmtb112->SetBinContent(5,0.003021402);
   hmtb112->SetBinContent(6,0.000171261);
   hmtb112->SetBinError(1,0.006593859);
   hmtb112->SetBinError(2,0.005638474);
   hmtb112->SetBinError(3,0.006323178);
   hmtb112->SetBinError(4,0.00647662);
   hmtb112->SetBinError(5,0.0006058021);
   hmtb112->SetBinError(6,0.0001309947);
   hmtb112->SetEntries(7038);

   ci = TColor::GetColor("#00ffff");
   hmtb112->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   hmtb112->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   hmtb112->SetMarkerColor(ci);
   hmtb112->SetMarkerStyle(20);
   hmtb112->GetXaxis()->SetTitle("hmtb1");
   hmtb112->GetXaxis()->SetLabelFont(42);
   hmtb112->GetXaxis()->SetLabelSize(0.035);
   hmtb112->GetXaxis()->SetTitleSize(0.035);
   hmtb112->GetXaxis()->SetTitleFont(42);
   hmtb112->GetYaxis()->SetTitle("Events/pb");
   hmtb112->GetYaxis()->SetLabelFont(42);
   hmtb112->GetYaxis()->SetLabelSize(0.035);
   hmtb112->GetYaxis()->SetTitleSize(0.035);
   hmtb112->GetYaxis()->SetTitleFont(42);
   hmtb112->GetZaxis()->SetLabelFont(42);
   hmtb112->GetZaxis()->SetLabelSize(0.035);
   hmtb112->GetZaxis()->SetTitleSize(0.035);
   hmtb112->GetZaxis()->SetTitleFont(42);
   b1/hmtb1->Add(hmtb1,"");
   
   TH1D *hmtb113 = new TH1D("hmtb113"," Transverse mass",8,0,200);
   hmtb113->SetBinContent(1,0.08290847);
   hmtb113->SetBinContent(2,0.0709121);
   hmtb113->SetBinContent(3,0.006331994);
   hmtb113->SetBinContent(4,0.002043632);
   hmtb113->SetBinContent(5,0.0003490001);
   hmtb113->SetBinContent(6,6.718481e-05);
   hmtb113->SetBinContent(7,3.510905e-06);
   hmtb113->SetBinContent(8,2.340604e-06);
   hmtb113->SetBinContent(9,1.170302e-06);
   hmtb113->SetBinError(1,0.001683092);
   hmtb113->SetBinError(2,0.001551259);
   hmtb113->SetBinError(3,0.0004225309);
   hmtb113->SetBinError(4,0.0002750653);
   hmtb113->SetBinError(5,8.603003e-05);
   hmtb113->SetBinError(6,3.026717e-05);
   hmtb113->SetBinError(7,2.027022e-06);
   hmtb113->SetBinError(8,1.655057e-06);
   hmtb113->SetBinError(9,1.170302e-06);
   hmtb113->SetEntries(10014);

   ci = TColor::GetColor("#ffcc00");
   hmtb113->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hmtb113->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hmtb113->SetMarkerColor(ci);
   hmtb113->SetMarkerStyle(21);
   hmtb113->GetXaxis()->SetTitle("hmtb1");
   hmtb113->GetXaxis()->SetLabelFont(42);
   hmtb113->GetXaxis()->SetLabelSize(0.035);
   hmtb113->GetXaxis()->SetTitleSize(0.035);
   hmtb113->GetXaxis()->SetTitleFont(42);
   hmtb113->GetYaxis()->SetTitle("Events/pb");
   hmtb113->GetYaxis()->SetLabelFont(42);
   hmtb113->GetYaxis()->SetLabelSize(0.035);
   hmtb113->GetYaxis()->SetTitleSize(0.035);
   hmtb113->GetYaxis()->SetTitleFont(42);
   hmtb113->GetZaxis()->SetLabelFont(42);
   hmtb113->GetZaxis()->SetLabelSize(0.035);
   hmtb113->GetZaxis()->SetTitleSize(0.035);
   hmtb113->GetZaxis()->SetTitleFont(42);
   b1/hmtb1->Add(hmtb1,"");
   
   TH1D *hmtb114 = new TH1D("hmtb114"," Transverse mass",8,0,200);
   hmtb114->SetBinContent(1,0.004272608);
   hmtb114->SetBinContent(2,0.003979541);
   hmtb114->SetBinContent(3,0.002097742);
   hmtb114->SetBinContent(4,0.0008175025);
   hmtb114->SetBinContent(5,0.0001233966);
   hmtb114->SetBinError(1,0.0002567161);
   hmtb114->SetBinError(2,0.0002477554);
   hmtb114->SetBinError(3,0.0001798799);
   hmtb114->SetBinError(4,0.0001122926);
   hmtb114->SetBinError(5,4.362729e-05);
   hmtb114->SetEntries(732);

   ci = TColor::GetColor("#ff0000");
   hmtb114->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   hmtb114->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hmtb114->SetMarkerColor(ci);
   hmtb114->SetMarkerStyle(20);
   hmtb114->GetXaxis()->SetTitle("hmtb1");
   hmtb114->GetXaxis()->SetLabelFont(42);
   hmtb114->GetXaxis()->SetLabelSize(0.035);
   hmtb114->GetXaxis()->SetTitleSize(0.035);
   hmtb114->GetXaxis()->SetTitleFont(42);
   hmtb114->GetYaxis()->SetTitle("Events/pb");
   hmtb114->GetYaxis()->SetLabelFont(42);
   hmtb114->GetYaxis()->SetLabelSize(0.035);
   hmtb114->GetYaxis()->SetTitleSize(0.035);
   hmtb114->GetYaxis()->SetTitleFont(42);
   hmtb114->GetZaxis()->SetLabelFont(42);
   hmtb114->GetZaxis()->SetLabelSize(0.035);
   hmtb114->GetZaxis()->SetTitleSize(0.035);
   hmtb114->GetZaxis()->SetTitleFont(42);
   b1/hmtb1->Add(hmtb1,"");
   
   TH1D *hmtb115 = new TH1D("hmtb115"," Transverse mass",8,0,200);
   hmtb115->SetBinContent(3,1.677165e-05);
   hmtb115->SetBinContent(5,1.677165e-05);
   hmtb115->SetBinError(3,1.677165e-05);
   hmtb115->SetBinError(5,1.677165e-05);
   hmtb115->SetEntries(2);

   ci = TColor::GetColor("#0000ff");
   hmtb115->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   hmtb115->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hmtb115->SetMarkerColor(ci);
   hmtb115->SetMarkerStyle(21);
   hmtb115->GetXaxis()->SetTitle("hmtb1");
   hmtb115->GetXaxis()->SetLabelFont(42);
   hmtb115->GetXaxis()->SetLabelSize(0.035);
   hmtb115->GetXaxis()->SetTitleSize(0.035);
   hmtb115->GetXaxis()->SetTitleFont(42);
   hmtb115->GetYaxis()->SetTitle("Events/pb");
   hmtb115->GetYaxis()->SetLabelFont(42);
   hmtb115->GetYaxis()->SetLabelSize(0.035);
   hmtb115->GetYaxis()->SetTitleSize(0.035);
   hmtb115->GetYaxis()->SetTitleFont(42);
   hmtb115->GetZaxis()->SetLabelFont(42);
   hmtb115->GetZaxis()->SetLabelSize(0.035);
   hmtb115->GetZaxis()->SetTitleSize(0.035);
   hmtb115->GetZaxis()->SetTitleFont(42);
   b1/hmtb1->Add(hmtb1,"");
   b1/hmtb1->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3822414,0.94,0.6177586,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b1/hmtb1");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hmtb1","b1/hmtb1_QCD_b1/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hmtb1","b1/hmtb1_WJetsToLNu_b1/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hmtb1","b1/hmtb1_ZJetsToNuNu_b1/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hmtb1","b1/hmtb1_signal_b1/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hmtb1","b1/hmtb1_ttbar_b1/","lp");

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
   b1/hmtb1->Modified();
   b1/hmtb1->cd();
   b1/hmtb1->SetSelected(b1/hmtb1);
}
