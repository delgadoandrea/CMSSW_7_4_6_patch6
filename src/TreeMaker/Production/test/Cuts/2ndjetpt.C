void 2ndjetpt()
{
//=========Macro generated from canvas: 2ndjetpt/2ndjetpt
//=========  (Fri Nov  6 09:03:29 2015) by ROOT version6.02/05
   TCanvas *2ndjetpt = new TCanvas("2ndjetpt", "2ndjetpt",0,23,700,700);
   2ndjetpt->Range(-125,-6.878804,1125,0.3473799);
   2ndjetpt->SetFillColor(0);
   2ndjetpt->SetBorderMode(0);
   2ndjetpt->SetBorderSize(2);
   2ndjetpt->SetLogy();
   2ndjetpt->SetFrameBorderMode(0);
   2ndjetpt->SetFrameBorderMode(0);
   
   THStack *2ndjetpt = new THStack();
   2ndjetpt->SetName("2ndjetpt");
   2ndjetpt->SetTitle("2ndjetpt");
   
   TH1F *2ndjetpt_stack_9 = new TH1F("2ndjetpt_stack_9","2ndjetpt",40,0,1000);
   2ndjetpt_stack_9->SetMinimum(6.979338e-07);
   2ndjetpt_stack_9->SetMaximum(0.4214649);
   2ndjetpt_stack_9->SetDirectory(0);
   2ndjetpt_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   2ndjetpt_stack_9->SetLineColor(ci);
   2ndjetpt_stack_9->GetXaxis()->SetTitle("2ndjetpt");
   2ndjetpt_stack_9->GetXaxis()->SetLabelFont(42);
   2ndjetpt_stack_9->GetXaxis()->SetLabelSize(0.035);
   2ndjetpt_stack_9->GetXaxis()->SetTitleSize(0.035);
   2ndjetpt_stack_9->GetXaxis()->SetTitleFont(42);
   2ndjetpt_stack_9->GetYaxis()->SetTitle("Events/pb");
   2ndjetpt_stack_9->GetYaxis()->SetLabelFont(42);
   2ndjetpt_stack_9->GetYaxis()->SetLabelSize(0.035);
   2ndjetpt_stack_9->GetYaxis()->SetTitleSize(0.035);
   2ndjetpt_stack_9->GetYaxis()->SetTitleFont(42);
   2ndjetpt_stack_9->GetZaxis()->SetLabelFont(42);
   2ndjetpt_stack_9->GetZaxis()->SetLabelSize(0.035);
   2ndjetpt_stack_9->GetZaxis()->SetTitleSize(0.035);
   2ndjetpt_stack_9->GetZaxis()->SetTitleFont(42);
   2ndjetpt->SetHistogram(2ndjetpt_stack_9);
   
   
   TH1D *2ndjetpt41 = new TH1D("2ndjetpt41","p_{T}^{2nd jet}",40,0,1000);
   2ndjetpt41->SetBinContent(6,0.001250901);
   2ndjetpt41->SetBinContent(7,0.02882494);
   2ndjetpt41->SetBinError(6,0.001250901);
   2ndjetpt41->SetBinError(7,0.02638252);
   2ndjetpt41->SetEntries(4);

   ci = TColor::GetColor("#00cc00");
   2ndjetpt41->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   2ndjetpt41->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   2ndjetpt41->SetMarkerColor(ci);
   2ndjetpt41->SetMarkerStyle(22);
   2ndjetpt41->GetXaxis()->SetTitle("2ndjetpt");
   2ndjetpt41->GetXaxis()->SetLabelFont(42);
   2ndjetpt41->GetXaxis()->SetLabelSize(0.035);
   2ndjetpt41->GetXaxis()->SetTitleSize(0.035);
   2ndjetpt41->GetXaxis()->SetTitleFont(42);
   2ndjetpt41->GetYaxis()->SetTitle("Events/pb");
   2ndjetpt41->GetYaxis()->SetLabelFont(42);
   2ndjetpt41->GetYaxis()->SetLabelSize(0.035);
   2ndjetpt41->GetYaxis()->SetTitleSize(0.035);
   2ndjetpt41->GetYaxis()->SetTitleFont(42);
   2ndjetpt41->GetZaxis()->SetLabelFont(42);
   2ndjetpt41->GetZaxis()->SetLabelSize(0.035);
   2ndjetpt41->GetZaxis()->SetTitleSize(0.035);
   2ndjetpt41->GetZaxis()->SetTitleFont(42);
   2ndjetpt->Add(2ndjetpt,"");
   
   TH1D *2ndjetpt42 = new TH1D("2ndjetpt42","p_{T}^{2nd jet}",40,0,1000);
   2ndjetpt42->SetBinContent(2,0.1988657);
   2ndjetpt42->SetBinContent(3,0.211962);
   2ndjetpt42->SetBinContent(4,0.135108);
   2ndjetpt42->SetBinContent(5,0.08222318);
   2ndjetpt42->SetBinContent(6,0.03702752);
   2ndjetpt42->SetBinContent(7,0.02189325);
   2ndjetpt42->SetBinContent(8,0.0103039);
   2ndjetpt42->SetBinContent(9,0.004837301);
   2ndjetpt42->SetBinContent(10,0.002648036);
   2ndjetpt42->SetBinContent(11,0.001409031);
   2ndjetpt42->SetBinContent(12,0.0006829593);
   2ndjetpt42->SetBinContent(13,0.0004461676);
   2ndjetpt42->SetBinContent(14,0.0003203653);
   2ndjetpt42->SetBinContent(15,0.0002367917);
   2ndjetpt42->SetBinContent(16,0.0001253603);
   2ndjetpt42->SetBinContent(17,6.964463e-05);
   2ndjetpt42->SetBinContent(18,2.785785e-05);
   2ndjetpt42->SetBinContent(19,2.785785e-05);
   2ndjetpt42->SetBinContent(20,4.178678e-05);
   2ndjetpt42->SetBinContent(21,1.392893e-05);
   2ndjetpt42->SetBinContent(23,1.392893e-05);
   2ndjetpt42->SetBinError(2,0.008936332);
   2ndjetpt42->SetBinError(3,0.008609052);
   2ndjetpt42->SetBinError(4,0.006100646);
   2ndjetpt42->SetBinError(5,0.004359008);
   2ndjetpt42->SetBinError(6,0.002241359);
   2ndjetpt42->SetBinError(7,0.001548234);
   2ndjetpt42->SetBinError(8,0.0006739762);
   2ndjetpt42->SetBinError(9,0.0003109025);
   2ndjetpt42->SetBinError(10,0.0002260942);
   2ndjetpt42->SetBinError(11,0.0001471726);
   2ndjetpt42->SetBinError(12,9.95971e-05);
   2ndjetpt42->SetBinError(13,8.137155e-05);
   2ndjetpt42->SetBinError(14,6.680078e-05);
   2ndjetpt42->SetBinError(15,5.743043e-05);
   2ndjetpt42->SetBinError(16,4.178678e-05);
   2ndjetpt42->SetBinError(17,3.114602e-05);
   2ndjetpt42->SetBinError(18,1.969847e-05);
   2ndjetpt42->SetBinError(19,1.969847e-05);
   2ndjetpt42->SetBinError(20,2.412561e-05);
   2ndjetpt42->SetBinError(21,1.392893e-05);
   2ndjetpt42->SetBinError(23,1.392893e-05);
   2ndjetpt42->SetEntries(7809);

   ci = TColor::GetColor("#00ffff");
   2ndjetpt42->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   2ndjetpt42->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   2ndjetpt42->SetMarkerColor(ci);
   2ndjetpt42->SetMarkerStyle(20);
   2ndjetpt42->GetXaxis()->SetTitle("2ndjetpt");
   2ndjetpt42->GetXaxis()->SetLabelFont(42);
   2ndjetpt42->GetXaxis()->SetLabelSize(0.035);
   2ndjetpt42->GetXaxis()->SetTitleSize(0.035);
   2ndjetpt42->GetXaxis()->SetTitleFont(42);
   2ndjetpt42->GetYaxis()->SetTitle("Events/pb");
   2ndjetpt42->GetYaxis()->SetLabelFont(42);
   2ndjetpt42->GetYaxis()->SetLabelSize(0.035);
   2ndjetpt42->GetYaxis()->SetTitleSize(0.035);
   2ndjetpt42->GetYaxis()->SetTitleFont(42);
   2ndjetpt42->GetZaxis()->SetLabelFont(42);
   2ndjetpt42->GetZaxis()->SetLabelSize(0.035);
   2ndjetpt42->GetZaxis()->SetTitleSize(0.035);
   2ndjetpt42->GetZaxis()->SetTitleFont(42);
   2ndjetpt->Add(2ndjetpt,"");
   
   TH1D *2ndjetpt43 = new TH1D("2ndjetpt43","p_{T}^{2nd jet}",40,0,1000);
   2ndjetpt43->SetBinContent(2,0.04969107);
   2ndjetpt43->SetBinContent(3,0.04670004);
   2ndjetpt43->SetBinContent(4,0.03373439);
   2ndjetpt43->SetBinContent(5,0.01957102);
   2ndjetpt43->SetBinContent(6,0.009482431);
   2ndjetpt43->SetBinContent(7,0.005152252);
   2ndjetpt43->SetBinContent(8,0.002618567);
   2ndjetpt43->SetBinContent(9,0.00138928);
   2ndjetpt43->SetBinContent(10,0.0007133486);
   2ndjetpt43->SetBinContent(11,0.000464438);
   2ndjetpt43->SetBinContent(12,0.0002573693);
   2ndjetpt43->SetBinContent(13,0.0001588099);
   2ndjetpt43->SetBinContent(14,6.998405e-05);
   2ndjetpt43->SetBinContent(15,4.845049e-05);
   2ndjetpt43->SetBinContent(16,2.422525e-05);
   2ndjetpt43->SetBinContent(17,3.230033e-05);
   2ndjetpt43->SetBinContent(18,1.884186e-05);
   2ndjetpt43->SetBinContent(19,1.076678e-05);
   2ndjetpt43->SetBinContent(20,2.422525e-05);
   2ndjetpt43->SetBinContent(21,8.075082e-06);
   2ndjetpt43->SetBinContent(25,2.691694e-06);
   2ndjetpt43->SetBinError(2,0.001770344);
   2ndjetpt43->SetBinError(3,0.001632486);
   2ndjetpt43->SetBinError(4,0.001265494);
   2ndjetpt43->SetBinError(5,0.0008214179);
   2ndjetpt43->SetBinError(6,0.0004669942);
   2ndjetpt43->SetBinError(7,0.0002558747);
   2ndjetpt43->SetBinError(8,0.0001289321);
   2ndjetpt43->SetBinError(9,7.925877e-05);
   2ndjetpt43->SetBinError(10,5.212046e-05);
   2ndjetpt43->SetBinError(11,3.906163e-05);
   2ndjetpt43->SetBinError(12,2.689593e-05);
   2ndjetpt43->SetBinError(13,2.067529e-05);
   2ndjetpt43->SetBinError(14,1.3725e-05);
   2ndjetpt43->SetBinError(15,1.141989e-05);
   2ndjetpt43->SetBinError(16,8.075082e-06);
   2ndjetpt43->SetBinError(17,9.324302e-06);
   2ndjetpt43->SetBinError(18,7.121553e-06);
   2ndjetpt43->SetBinError(19,5.383388e-06);
   2ndjetpt43->SetBinError(20,8.075082e-06);
   2ndjetpt43->SetBinError(21,4.662151e-06);
   2ndjetpt43->SetBinError(25,2.691694e-06);
   2ndjetpt43->SetEntries(10232);

   ci = TColor::GetColor("#ffcc00");
   2ndjetpt43->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   2ndjetpt43->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   2ndjetpt43->SetMarkerColor(ci);
   2ndjetpt43->SetMarkerStyle(21);
   2ndjetpt43->GetXaxis()->SetTitle("2ndjetpt");
   2ndjetpt43->GetXaxis()->SetLabelFont(42);
   2ndjetpt43->GetXaxis()->SetLabelSize(0.035);
   2ndjetpt43->GetXaxis()->SetTitleSize(0.035);
   2ndjetpt43->GetXaxis()->SetTitleFont(42);
   2ndjetpt43->GetYaxis()->SetTitle("Events/pb");
   2ndjetpt43->GetYaxis()->SetLabelFont(42);
   2ndjetpt43->GetYaxis()->SetLabelSize(0.035);
   2ndjetpt43->GetYaxis()->SetTitleSize(0.035);
   2ndjetpt43->GetYaxis()->SetTitleFont(42);
   2ndjetpt43->GetZaxis()->SetLabelFont(42);
   2ndjetpt43->GetZaxis()->SetLabelSize(0.035);
   2ndjetpt43->GetZaxis()->SetTitleSize(0.035);
   2ndjetpt43->GetZaxis()->SetTitleFont(42);
   2ndjetpt->Add(2ndjetpt,"");
   
   TH1D *2ndjetpt44 = new TH1D("2ndjetpt44","p_{T}^{2nd jet}",40,0,1000);
   2ndjetpt44->SetBinContent(2,0.004303457);
   2ndjetpt44->SetBinContent(3,0.005938462);
   2ndjetpt44->SetBinContent(4,0.005799641);
   2ndjetpt44->SetBinContent(5,0.00347053);
   2ndjetpt44->SetBinContent(6,0.002298262);
   2ndjetpt44->SetBinContent(7,0.00144991);
   2ndjetpt44->SetBinContent(8,0.001064296);
   2ndjetpt44->SetBinContent(9,0.0003547652);
   2ndjetpt44->SetBinContent(10,0.0002622178);
   2ndjetpt44->SetBinContent(11,0.0002930669);
   2ndjetpt44->SetBinContent(12,0.0001542458);
   2ndjetpt44->SetBinContent(13,4.627373e-05);
   2ndjetpt44->SetBinContent(14,6.16983e-05);
   2ndjetpt44->SetBinContent(15,3.084915e-05);
   2ndjetpt44->SetBinContent(16,3.084915e-05);
   2ndjetpt44->SetBinContent(17,3.084915e-05);
   2ndjetpt44->SetBinError(2,0.0002576412);
   2ndjetpt44->SetBinError(3,0.000302652);
   2ndjetpt44->SetBinError(4,0.0002990936);
   2ndjetpt44->SetBinError(5,0.0002313686);
   2ndjetpt44->SetBinError(6,0.0001882809);
   2ndjetpt44->SetBinError(7,0.0001495468);
   2ndjetpt44->SetBinError(8,0.0001281262);
   2ndjetpt44->SetBinError(9,7.397367e-05);
   2ndjetpt44->SetBinError(10,6.359716e-05);
   2ndjetpt44->SetBinError(11,6.723417e-05);
   2ndjetpt44->SetBinError(12,4.877679e-05);
   2ndjetpt44->SetBinError(13,2.671615e-05);
   2ndjetpt44->SetBinError(14,3.084915e-05);
   2ndjetpt44->SetBinError(15,2.181364e-05);
   2ndjetpt44->SetBinError(16,2.181364e-05);
   2ndjetpt44->SetBinError(17,2.181364e-05);
   2ndjetpt44->SetEntries(1659);

   ci = TColor::GetColor("#ff0000");
   2ndjetpt44->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   2ndjetpt44->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   2ndjetpt44->SetMarkerColor(ci);
   2ndjetpt44->SetMarkerStyle(20);
   2ndjetpt44->GetXaxis()->SetTitle("2ndjetpt");
   2ndjetpt44->GetXaxis()->SetLabelFont(42);
   2ndjetpt44->GetXaxis()->SetLabelSize(0.035);
   2ndjetpt44->GetXaxis()->SetTitleSize(0.035);
   2ndjetpt44->GetXaxis()->SetTitleFont(42);
   2ndjetpt44->GetYaxis()->SetTitle("Events/pb");
   2ndjetpt44->GetYaxis()->SetLabelFont(42);
   2ndjetpt44->GetYaxis()->SetLabelSize(0.035);
   2ndjetpt44->GetYaxis()->SetTitleSize(0.035);
   2ndjetpt44->GetYaxis()->SetTitleFont(42);
   2ndjetpt44->GetZaxis()->SetLabelFont(42);
   2ndjetpt44->GetZaxis()->SetLabelSize(0.035);
   2ndjetpt44->GetZaxis()->SetTitleSize(0.035);
   2ndjetpt44->GetZaxis()->SetTitleFont(42);
   2ndjetpt->Add(2ndjetpt,"");
   
   TH1D *2ndjetpt45 = new TH1D("2ndjetpt45","p_{T}^{2nd jet}",40,0,1000);
   2ndjetpt45->SetBinContent(2,3.35433e-05);
   2ndjetpt45->SetBinContent(3,3.35433e-05);
   2ndjetpt45->SetBinContent(4,6.708659e-05);
   2ndjetpt45->SetBinContent(5,5.031494e-05);
   2ndjetpt45->SetBinContent(6,6.708659e-05);
   2ndjetpt45->SetBinContent(10,1.677165e-05);
   2ndjetpt45->SetBinError(2,2.371869e-05);
   2ndjetpt45->SetBinError(3,2.371869e-05);
   2ndjetpt45->SetBinError(4,3.35433e-05);
   2ndjetpt45->SetBinError(5,2.904935e-05);
   2ndjetpt45->SetBinError(6,3.35433e-05);
   2ndjetpt45->SetBinError(10,1.677165e-05);
   2ndjetpt45->SetEntries(16);

   ci = TColor::GetColor("#0000ff");
   2ndjetpt45->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   2ndjetpt45->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   2ndjetpt45->SetMarkerColor(ci);
   2ndjetpt45->SetMarkerStyle(21);
   2ndjetpt45->GetXaxis()->SetTitle("2ndjetpt");
   2ndjetpt45->GetXaxis()->SetLabelFont(42);
   2ndjetpt45->GetXaxis()->SetLabelSize(0.035);
   2ndjetpt45->GetXaxis()->SetTitleSize(0.035);
   2ndjetpt45->GetXaxis()->SetTitleFont(42);
   2ndjetpt45->GetYaxis()->SetTitle("Events/pb");
   2ndjetpt45->GetYaxis()->SetLabelFont(42);
   2ndjetpt45->GetYaxis()->SetLabelSize(0.035);
   2ndjetpt45->GetYaxis()->SetTitleSize(0.035);
   2ndjetpt45->GetYaxis()->SetTitleFont(42);
   2ndjetpt45->GetZaxis()->SetLabelFont(42);
   2ndjetpt45->GetZaxis()->SetLabelSize(0.035);
   2ndjetpt45->GetZaxis()->SetTitleSize(0.035);
   2ndjetpt45->GetZaxis()->SetTitleFont(42);
   2ndjetpt->Add(2ndjetpt,"");
   2ndjetpt->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3922989,0.9342857,0.6077011,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("2ndjetpt");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("2ndjetpt","2ndjetpt_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("2ndjetpt","2ndjetpt_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("2ndjetpt","2ndjetpt_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("2ndjetpt","2ndjetpt_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("2ndjetpt","2ndjetpt_ttbar","lp");

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
   2ndjetpt->Modified();
   2ndjetpt->cd();
   2ndjetpt->SetSelected(2ndjetpt);
}
