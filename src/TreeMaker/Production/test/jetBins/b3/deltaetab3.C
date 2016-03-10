void deltaetab3()
{
//=========Macro generated from canvas: b3/deltaetab3/b3/deltaetab3
//=========  (Tue Nov 24 14:23:57 2015) by ROOT version6.02/05
   TCanvas *b3/deltaetab3 = new TCanvas("b3/deltaetab3", "b3/deltaetab3",100,122,700,700);
   b3/deltaetab3->Range(0,0,1,1);
   b3/deltaetab3->SetFillColor(0);
   b3/deltaetab3->SetBorderMode(0);
   b3/deltaetab3->SetBorderSize(2);
   b3/deltaetab3->SetLogy();
   b3/deltaetab3->SetFrameBorderMode(0);
   b3/deltaetab3->SetFrameBorderMode(0);
   
   THStack *b3/deltaetab3 = new THStack();
   b3/deltaetab3->SetName("b3/deltaetab3");
   b3/deltaetab3->SetTitle("b3/deltaetab3");
   
   TH1F *b3/deltaetab3_stack_6 = new TH1F("b3/deltaetab3_stack_6","b3/deltaetab3",10,0,10);
   b3/deltaetab3_stack_6->SetMinimum(-0);
   b3/deltaetab3_stack_6->SetMaximum(-nan);
   b3/deltaetab3_stack_6->SetDirectory(0);
   b3/deltaetab3_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b3/deltaetab3_stack_6->SetLineColor(ci);
   b3/deltaetab3_stack_6->GetXaxis()->SetTitle("b3/deltaetab3");
   b3/deltaetab3_stack_6->GetXaxis()->SetLabelFont(42);
   b3/deltaetab3_stack_6->GetXaxis()->SetLabelSize(0.035);
   b3/deltaetab3_stack_6->GetXaxis()->SetTitleSize(0.035);
   b3/deltaetab3_stack_6->GetXaxis()->SetTitleFont(42);
   b3/deltaetab3_stack_6->GetYaxis()->SetTitle("Events/pb");
   b3/deltaetab3_stack_6->GetYaxis()->SetLabelFont(42);
   b3/deltaetab3_stack_6->GetYaxis()->SetLabelSize(0.035);
   b3/deltaetab3_stack_6->GetYaxis()->SetTitleSize(0.035);
   b3/deltaetab3_stack_6->GetYaxis()->SetTitleFont(42);
   b3/deltaetab3_stack_6->GetZaxis()->SetLabelFont(42);
   b3/deltaetab3_stack_6->GetZaxis()->SetLabelSize(0.035);
   b3/deltaetab3_stack_6->GetZaxis()->SetTitleSize(0.035);
   b3/deltaetab3_stack_6->GetZaxis()->SetTitleFont(42);
   b3/deltaetab3->SetHistogram(b3/deltaetab3_stack_6);
   
   
   TH1D *deltaetab326 = new TH1D("deltaetab326","#Delta_{#eta}",10,0,10);

   ci = TColor::GetColor("#00cc00");
   deltaetab326->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   deltaetab326->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   deltaetab326->SetMarkerColor(ci);
   deltaetab326->SetMarkerStyle(22);
   deltaetab326->GetXaxis()->SetTitle("deltaetab3");
   deltaetab326->GetXaxis()->SetLabelFont(42);
   deltaetab326->GetXaxis()->SetLabelSize(0.035);
   deltaetab326->GetXaxis()->SetTitleSize(0.035);
   deltaetab326->GetXaxis()->SetTitleFont(42);
   deltaetab326->GetYaxis()->SetTitle("Events/pb");
   deltaetab326->GetYaxis()->SetLabelFont(42);
   deltaetab326->GetYaxis()->SetLabelSize(0.035);
   deltaetab326->GetYaxis()->SetTitleSize(0.035);
   deltaetab326->GetYaxis()->SetTitleFont(42);
   deltaetab326->GetZaxis()->SetLabelFont(42);
   deltaetab326->GetZaxis()->SetLabelSize(0.035);
   deltaetab326->GetZaxis()->SetTitleSize(0.035);
   deltaetab326->GetZaxis()->SetTitleFont(42);
   b3/deltaetab3->Add(deltaetab3,"");
   
   TH1D *deltaetab327 = new TH1D("deltaetab327","#Delta_{#eta}",10,0,10);

   ci = TColor::GetColor("#00ffff");
   deltaetab327->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   deltaetab327->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   deltaetab327->SetMarkerColor(ci);
   deltaetab327->SetMarkerStyle(20);
   deltaetab327->GetXaxis()->SetTitle("deltaetab3");
   deltaetab327->GetXaxis()->SetLabelFont(42);
   deltaetab327->GetXaxis()->SetLabelSize(0.035);
   deltaetab327->GetXaxis()->SetTitleSize(0.035);
   deltaetab327->GetXaxis()->SetTitleFont(42);
   deltaetab327->GetYaxis()->SetTitle("Events/pb");
   deltaetab327->GetYaxis()->SetLabelFont(42);
   deltaetab327->GetYaxis()->SetLabelSize(0.035);
   deltaetab327->GetYaxis()->SetTitleSize(0.035);
   deltaetab327->GetYaxis()->SetTitleFont(42);
   deltaetab327->GetZaxis()->SetLabelFont(42);
   deltaetab327->GetZaxis()->SetLabelSize(0.035);
   deltaetab327->GetZaxis()->SetTitleSize(0.035);
   deltaetab327->GetZaxis()->SetTitleFont(42);
   b3/deltaetab3->Add(deltaetab3,"");
   
   TH1D *deltaetab328 = new TH1D("deltaetab328","#Delta_{#eta}",10,0,10);

   ci = TColor::GetColor("#ffcc00");
   deltaetab328->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   deltaetab328->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   deltaetab328->SetMarkerColor(ci);
   deltaetab328->SetMarkerStyle(21);
   deltaetab328->GetXaxis()->SetTitle("deltaetab3");
   deltaetab328->GetXaxis()->SetLabelFont(42);
   deltaetab328->GetXaxis()->SetLabelSize(0.035);
   deltaetab328->GetXaxis()->SetTitleSize(0.035);
   deltaetab328->GetXaxis()->SetTitleFont(42);
   deltaetab328->GetYaxis()->SetTitle("Events/pb");
   deltaetab328->GetYaxis()->SetLabelFont(42);
   deltaetab328->GetYaxis()->SetLabelSize(0.035);
   deltaetab328->GetYaxis()->SetTitleSize(0.035);
   deltaetab328->GetYaxis()->SetTitleFont(42);
   deltaetab328->GetZaxis()->SetLabelFont(42);
   deltaetab328->GetZaxis()->SetLabelSize(0.035);
   deltaetab328->GetZaxis()->SetTitleSize(0.035);
   deltaetab328->GetZaxis()->SetTitleFont(42);
   b3/deltaetab3->Add(deltaetab3,"");
   
   TH1D *deltaetab329 = new TH1D("deltaetab329","#Delta_{#eta}",10,0,10);

   ci = TColor::GetColor("#ff0000");
   deltaetab329->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   deltaetab329->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   deltaetab329->SetMarkerColor(ci);
   deltaetab329->SetMarkerStyle(20);
   deltaetab329->GetXaxis()->SetTitle("deltaetab3");
   deltaetab329->GetXaxis()->SetLabelFont(42);
   deltaetab329->GetXaxis()->SetLabelSize(0.035);
   deltaetab329->GetXaxis()->SetTitleSize(0.035);
   deltaetab329->GetXaxis()->SetTitleFont(42);
   deltaetab329->GetYaxis()->SetTitle("Events/pb");
   deltaetab329->GetYaxis()->SetLabelFont(42);
   deltaetab329->GetYaxis()->SetLabelSize(0.035);
   deltaetab329->GetYaxis()->SetTitleSize(0.035);
   deltaetab329->GetYaxis()->SetTitleFont(42);
   deltaetab329->GetZaxis()->SetLabelFont(42);
   deltaetab329->GetZaxis()->SetLabelSize(0.035);
   deltaetab329->GetZaxis()->SetTitleSize(0.035);
   deltaetab329->GetZaxis()->SetTitleFont(42);
   b3/deltaetab3->Add(deltaetab3,"");
   
   TH1D *deltaetab330 = new TH1D("deltaetab330","#Delta_{#eta}",10,0,10);

   ci = TColor::GetColor("#0000ff");
   deltaetab330->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   deltaetab330->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   deltaetab330->SetMarkerColor(ci);
   deltaetab330->SetMarkerStyle(21);
   deltaetab330->GetXaxis()->SetTitle("deltaetab3");
   deltaetab330->GetXaxis()->SetLabelFont(42);
   deltaetab330->GetXaxis()->SetLabelSize(0.035);
   deltaetab330->GetXaxis()->SetTitleSize(0.035);
   deltaetab330->GetXaxis()->SetTitleFont(42);
   deltaetab330->GetYaxis()->SetTitle("Events/pb");
   deltaetab330->GetYaxis()->SetLabelFont(42);
   deltaetab330->GetYaxis()->SetLabelSize(0.035);
   deltaetab330->GetYaxis()->SetTitleSize(0.035);
   deltaetab330->GetYaxis()->SetTitleFont(42);
   deltaetab330->GetZaxis()->SetLabelFont(42);
   deltaetab330->GetZaxis()->SetLabelSize(0.035);
   deltaetab330->GetZaxis()->SetTitleSize(0.035);
   deltaetab330->GetZaxis()->SetTitleFont(42);
   b3/deltaetab3->Add(deltaetab3,"");
   b3/deltaetab3->Draw("nostack");
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("deltaetab3","b3/deltaetab3_QCD_b3/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaetab3","b3/deltaetab3_WJetsToLNu_b3/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaetab3","b3/deltaetab3_ZJetsToNuNu_b3/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaetab3","b3/deltaetab3_signal_b3/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaetab3","b3/deltaetab3_ttbar_b3/","lp");

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
   b3/deltaetab3->Modified();
   b3/deltaetab3->cd();
   b3/deltaetab3->SetSelected(b3/deltaetab3);
}
