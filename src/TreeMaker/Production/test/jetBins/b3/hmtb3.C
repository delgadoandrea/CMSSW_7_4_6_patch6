void hmtb3()
{
//=========Macro generated from canvas: b3/hmtb3/b3/hmtb3
//=========  (Tue Nov 24 14:23:57 2015) by ROOT version6.02/05
   TCanvas *b3/hmtb3 = new TCanvas("b3/hmtb3", "b3/hmtb3",120,142,700,700);
   b3/hmtb3->Range(-25,-6.92934,225,0.2269509);
   b3/hmtb3->SetFillColor(0);
   b3/hmtb3->SetBorderMode(0);
   b3/hmtb3->SetBorderSize(2);
   b3/hmtb3->SetLogy();
   b3/hmtb3->SetFrameBorderMode(0);
   b3/hmtb3->SetFrameBorderMode(0);
   
   THStack *b3/hmtb3 = new THStack();
   b3/hmtb3->SetName("b3/hmtb3");
   b3/hmtb3->SetTitle("b3/hmtb3");
   
   TH1F *b3/hmtb3_stack_7 = new TH1F("b3/hmtb3_stack_7","b3/hmtb3",8,0,200);
   b3/hmtb3_stack_7->SetMinimum(6.113488e-07);
   b3/hmtb3_stack_7->SetMaximum(0.32458);
   b3/hmtb3_stack_7->SetDirectory(0);
   b3/hmtb3_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b3/hmtb3_stack_7->SetLineColor(ci);
   b3/hmtb3_stack_7->GetXaxis()->SetTitle("b3/hmtb3");
   b3/hmtb3_stack_7->GetXaxis()->SetLabelFont(42);
   b3/hmtb3_stack_7->GetXaxis()->SetLabelSize(0.035);
   b3/hmtb3_stack_7->GetXaxis()->SetTitleSize(0.035);
   b3/hmtb3_stack_7->GetXaxis()->SetTitleFont(42);
   b3/hmtb3_stack_7->GetYaxis()->SetTitle("Events/pb");
   b3/hmtb3_stack_7->GetYaxis()->SetLabelFont(42);
   b3/hmtb3_stack_7->GetYaxis()->SetLabelSize(0.035);
   b3/hmtb3_stack_7->GetYaxis()->SetTitleSize(0.035);
   b3/hmtb3_stack_7->GetYaxis()->SetTitleFont(42);
   b3/hmtb3_stack_7->GetZaxis()->SetLabelFont(42);
   b3/hmtb3_stack_7->GetZaxis()->SetLabelSize(0.035);
   b3/hmtb3_stack_7->GetZaxis()->SetTitleSize(0.035);
   b3/hmtb3_stack_7->GetZaxis()->SetTitleFont(42);
   b3/hmtb3->SetHistogram(b3/hmtb3_stack_7);
   
   
   TH1D *hmtb331 = new TH1D("hmtb331"," Transverse mass",8,0,200);
   hmtb331->SetBinContent(1,0.09877181);
   hmtb331->SetBinContent(2,0.1038376);
   hmtb331->SetBinContent(3,0.01376429);
   hmtb331->SetBinContent(4,0.00068069);
   hmtb331->SetBinError(1,0.01961964);
   hmtb331->SetBinError(2,0.02270368);
   hmtb331->SetBinError(3,0.008538656);
   hmtb331->SetBinError(4,0.00068069);
   hmtb331->SetEntries(173);

   ci = TColor::GetColor("#00cc00");
   hmtb331->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hmtb331->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   hmtb331->SetMarkerColor(ci);
   hmtb331->SetMarkerStyle(22);
   hmtb331->GetXaxis()->SetTitle("hmtb3");
   hmtb331->GetXaxis()->SetLabelFont(42);
   hmtb331->GetXaxis()->SetLabelSize(0.035);
   hmtb331->GetXaxis()->SetTitleSize(0.035);
   hmtb331->GetXaxis()->SetTitleFont(42);
   hmtb331->GetYaxis()->SetTitle("Events/pb");
   hmtb331->GetYaxis()->SetLabelFont(42);
   hmtb331->GetYaxis()->SetLabelSize(0.035);
   hmtb331->GetYaxis()->SetTitleSize(0.035);
   hmtb331->GetYaxis()->SetTitleFont(42);
   hmtb331->GetZaxis()->SetLabelFont(42);
   hmtb331->GetZaxis()->SetLabelSize(0.035);
   hmtb331->GetZaxis()->SetTitleSize(0.035);
   hmtb331->GetZaxis()->SetTitleFont(42);
   b3/hmtb3->Add(hmtb3,"");
   
   TH1D *hmtb332 = new TH1D("hmtb332"," Transverse mass",8,0,200);
   hmtb332->SetBinContent(1,0.1640708);
   hmtb332->SetBinContent(2,0.1302198);
   hmtb332->SetBinContent(3,0.1171381);
   hmtb332->SetBinContent(4,0.07878073);
   hmtb332->SetBinContent(5,0.002785527);
   hmtb332->SetBinContent(6,0.000397366);
   hmtb332->SetBinContent(7,2.785785e-05);
   hmtb332->SetBinError(1,0.003568892);
   hmtb332->SetBinError(2,0.002931957);
   hmtb332->SetBinError(3,0.003024354);
   hmtb332->SetBinError(4,0.002550509);
   hmtb332->SetBinError(5,0.0003969005);
   hmtb332->SetBinError(6,0.0001426772);
   hmtb332->SetBinError(7,1.969847e-05);
   hmtb332->SetEntries(19755);

   ci = TColor::GetColor("#00ffff");
   hmtb332->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   hmtb332->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   hmtb332->SetMarkerColor(ci);
   hmtb332->SetMarkerStyle(20);
   hmtb332->GetXaxis()->SetTitle("hmtb3");
   hmtb332->GetXaxis()->SetLabelFont(42);
   hmtb332->GetXaxis()->SetLabelSize(0.035);
   hmtb332->GetXaxis()->SetTitleSize(0.035);
   hmtb332->GetXaxis()->SetTitleFont(42);
   hmtb332->GetYaxis()->SetTitle("Events/pb");
   hmtb332->GetYaxis()->SetLabelFont(42);
   hmtb332->GetYaxis()->SetLabelSize(0.035);
   hmtb332->GetYaxis()->SetTitleSize(0.035);
   hmtb332->GetYaxis()->SetTitleFont(42);
   hmtb332->GetZaxis()->SetLabelFont(42);
   hmtb332->GetZaxis()->SetLabelSize(0.035);
   hmtb332->GetZaxis()->SetTitleSize(0.035);
   hmtb332->GetZaxis()->SetTitleFont(42);
   b3/hmtb3->Add(hmtb3,"");
   
   TH1D *hmtb333 = new TH1D("hmtb333"," Transverse mass",8,0,200);
   hmtb333->SetBinContent(1,0.06083429);
   hmtb333->SetBinContent(2,0.05394015);
   hmtb333->SetBinContent(3,0.006957226);
   hmtb333->SetBinContent(4,0.002288788);
   hmtb333->SetBinContent(5,0.0007186065);
   hmtb333->SetBinContent(6,0.0001347586);
   hmtb333->SetBinContent(7,3.027601e-05);
   hmtb333->SetBinContent(8,2.340604e-06);
   hmtb333->SetBinContent(9,2.340604e-06);
   hmtb333->SetBinError(1,0.0009843685);
   hmtb333->SetBinError(2,0.000861221);
   hmtb333->SetBinError(3,0.0002771644);
   hmtb333->SetBinError(4,0.0001738144);
   hmtb333->SetBinError(5,9.063607e-05);
   hmtb333->SetBinError(6,3.203591e-05);
   hmtb333->SetBinError(7,7.140758e-06);
   hmtb333->SetBinError(8,1.655057e-06);
   hmtb333->SetBinError(9,1.655057e-06);
   hmtb333->SetEntries(37083);

   ci = TColor::GetColor("#ffcc00");
   hmtb333->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hmtb333->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hmtb333->SetMarkerColor(ci);
   hmtb333->SetMarkerStyle(21);
   hmtb333->GetXaxis()->SetTitle("hmtb3");
   hmtb333->GetXaxis()->SetLabelFont(42);
   hmtb333->GetXaxis()->SetLabelSize(0.035);
   hmtb333->GetXaxis()->SetTitleSize(0.035);
   hmtb333->GetXaxis()->SetTitleFont(42);
   hmtb333->GetYaxis()->SetTitle("Events/pb");
   hmtb333->GetYaxis()->SetLabelFont(42);
   hmtb333->GetYaxis()->SetLabelSize(0.035);
   hmtb333->GetYaxis()->SetTitleSize(0.035);
   hmtb333->GetYaxis()->SetTitleFont(42);
   hmtb333->GetZaxis()->SetLabelFont(42);
   hmtb333->GetZaxis()->SetLabelSize(0.035);
   hmtb333->GetZaxis()->SetTitleSize(0.035);
   hmtb333->GetZaxis()->SetTitleFont(42);
   b3/hmtb3->Add(hmtb3,"");
   
   TH1D *hmtb334 = new TH1D("hmtb334"," Transverse mass",8,0,200);
   hmtb334->SetBinContent(1,0.009085075);
   hmtb334->SetBinContent(2,0.007866534);
   hmtb334->SetBinContent(3,0.004473127);
   hmtb334->SetBinContent(4,0.002036044);
   hmtb334->SetBinContent(5,0.0006632568);
   hmtb334->SetBinContent(6,0.0002313686);
   hmtb334->SetBinContent(7,6.16983e-05);
   hmtb334->SetBinError(1,0.000374344);
   hmtb334->SetBinError(2,0.000348336);
   hmtb334->SetBinError(3,0.0002626711);
   hmtb334->SetBinError(4,0.0001772149);
   hmtb334->SetBinError(5,0.0001011457);
   hmtb334->SetBinError(6,5.973913e-05);
   hmtb334->SetBinError(7,3.084915e-05);
   hmtb334->SetEntries(1583);

   ci = TColor::GetColor("#ff0000");
   hmtb334->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   hmtb334->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hmtb334->SetMarkerColor(ci);
   hmtb334->SetMarkerStyle(20);
   hmtb334->GetXaxis()->SetTitle("hmtb3");
   hmtb334->GetXaxis()->SetLabelFont(42);
   hmtb334->GetXaxis()->SetLabelSize(0.035);
   hmtb334->GetXaxis()->SetTitleSize(0.035);
   hmtb334->GetXaxis()->SetTitleFont(42);
   hmtb334->GetYaxis()->SetTitle("Events/pb");
   hmtb334->GetYaxis()->SetLabelFont(42);
   hmtb334->GetYaxis()->SetLabelSize(0.035);
   hmtb334->GetYaxis()->SetTitleSize(0.035);
   hmtb334->GetYaxis()->SetTitleFont(42);
   hmtb334->GetZaxis()->SetLabelFont(42);
   hmtb334->GetZaxis()->SetLabelSize(0.035);
   hmtb334->GetZaxis()->SetTitleSize(0.035);
   hmtb334->GetZaxis()->SetTitleFont(42);
   b3/hmtb3->Add(hmtb3,"");
   
   TH1D *hmtb335 = new TH1D("hmtb335"," Transverse mass",8,0,200);
   hmtb335->SetBinContent(1,0.0007882674);
   hmtb335->SetBinContent(2,0.000620551);
   hmtb335->SetBinContent(3,0.0004192912);
   hmtb335->SetBinContent(4,0.0003186613);
   hmtb335->SetBinContent(5,6.708659e-05);
   hmtb335->SetBinError(1,0.0001149806);
   hmtb335->SetBinError(2,0.0001020179);
   hmtb335->SetBinError(3,8.385824e-05);
   hmtb335->SetBinError(4,7.310592e-05);
   hmtb335->SetBinError(5,3.35433e-05);
   hmtb335->SetEntries(132);

   ci = TColor::GetColor("#0000ff");
   hmtb335->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   hmtb335->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hmtb335->SetMarkerColor(ci);
   hmtb335->SetMarkerStyle(21);
   hmtb335->GetXaxis()->SetTitle("hmtb3");
   hmtb335->GetXaxis()->SetLabelFont(42);
   hmtb335->GetXaxis()->SetLabelSize(0.035);
   hmtb335->GetXaxis()->SetTitleSize(0.035);
   hmtb335->GetXaxis()->SetTitleFont(42);
   hmtb335->GetYaxis()->SetTitle("Events/pb");
   hmtb335->GetYaxis()->SetLabelFont(42);
   hmtb335->GetYaxis()->SetLabelSize(0.035);
   hmtb335->GetYaxis()->SetTitleSize(0.035);
   hmtb335->GetYaxis()->SetTitleFont(42);
   hmtb335->GetZaxis()->SetLabelFont(42);
   hmtb335->GetZaxis()->SetLabelSize(0.035);
   hmtb335->GetZaxis()->SetTitleSize(0.035);
   hmtb335->GetZaxis()->SetTitleFont(42);
   b3/hmtb3->Add(hmtb3,"");
   b3/hmtb3->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3786494,0.94,0.6213506,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b3/hmtb3");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hmtb3","b3/hmtb3_QCD_b3/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hmtb3","b3/hmtb3_WJetsToLNu_b3/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hmtb3","b3/hmtb3_ZJetsToNuNu_b3/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hmtb3","b3/hmtb3_signal_b3/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hmtb3","b3/hmtb3_ttbar_b3/","lp");

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
   b3/hmtb3->Modified();
   b3/hmtb3->cd();
   b3/hmtb3->SetSelected(b3/hmtb3);
}
