void leadjetpt()
{
//=========Macro generated from canvas: leadjetpt/leadjetpt
//=========  (Fri Nov  6 09:03:23 2015) by ROOT version6.02/05
   TCanvas *leadjetpt = new TCanvas("leadjetpt", "leadjetpt",0,23,700,700);
   leadjetpt->Range(-156.25,-6.937151,1406.25,0.6931206);
   leadjetpt->SetFillColor(0);
   leadjetpt->SetBorderMode(0);
   leadjetpt->SetBorderSize(2);
   leadjetpt->SetLogy();
   leadjetpt->SetFrameBorderMode(0);
   leadjetpt->SetFrameBorderMode(0);
   
   THStack *leadjetpt = new THStack();
   leadjetpt->SetName("leadjetpt");
   leadjetpt->SetTitle("leadjetpt");
   
   TH1F *leadjetpt_stack_8 = new TH1F("leadjetpt_stack_8","leadjetpt",25,0,1250);
   leadjetpt_stack_8->SetMinimum(6.696942e-07);
   leadjetpt_stack_8->SetMaximum(0.8513212);
   leadjetpt_stack_8->SetDirectory(0);
   leadjetpt_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   leadjetpt_stack_8->SetLineColor(ci);
   leadjetpt_stack_8->GetXaxis()->SetTitle("leadjetpt");
   leadjetpt_stack_8->GetXaxis()->SetLabelFont(42);
   leadjetpt_stack_8->GetXaxis()->SetLabelSize(0.035);
   leadjetpt_stack_8->GetXaxis()->SetTitleSize(0.035);
   leadjetpt_stack_8->GetXaxis()->SetTitleFont(42);
   leadjetpt_stack_8->GetYaxis()->SetTitle("Events/pb");
   leadjetpt_stack_8->GetYaxis()->SetLabelFont(42);
   leadjetpt_stack_8->GetYaxis()->SetLabelSize(0.035);
   leadjetpt_stack_8->GetYaxis()->SetTitleSize(0.035);
   leadjetpt_stack_8->GetYaxis()->SetTitleFont(42);
   leadjetpt_stack_8->GetZaxis()->SetLabelFont(42);
   leadjetpt_stack_8->GetZaxis()->SetLabelSize(0.035);
   leadjetpt_stack_8->GetZaxis()->SetTitleSize(0.035);
   leadjetpt_stack_8->GetZaxis()->SetTitleFont(42);
   leadjetpt->SetHistogram(leadjetpt_stack_8);
   
   
   TH1D *leadjetpt36 = new TH1D("leadjetpt36","p_{T}^{Leading jet}",25,0,1250);
   leadjetpt36->SetBinContent(5,0.02632314);
   leadjetpt36->SetBinContent(6,0.001250901);
   leadjetpt36->SetBinContent(7,0.002501802);
   leadjetpt36->SetBinError(5,0.02632314);
   leadjetpt36->SetBinError(6,0.001250901);
   leadjetpt36->SetBinError(7,0.001769041);
   leadjetpt36->SetEntries(4);

   ci = TColor::GetColor("#00cc00");
   leadjetpt36->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   leadjetpt36->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   leadjetpt36->SetMarkerColor(ci);
   leadjetpt36->SetMarkerStyle(22);
   leadjetpt36->GetXaxis()->SetTitle("leadjetpt");
   leadjetpt36->GetXaxis()->SetLabelFont(42);
   leadjetpt36->GetXaxis()->SetLabelSize(0.035);
   leadjetpt36->GetXaxis()->SetTitleSize(0.035);
   leadjetpt36->GetXaxis()->SetTitleFont(42);
   leadjetpt36->GetYaxis()->SetTitle("Events/pb");
   leadjetpt36->GetYaxis()->SetLabelFont(42);
   leadjetpt36->GetYaxis()->SetLabelSize(0.035);
   leadjetpt36->GetYaxis()->SetTitleSize(0.035);
   leadjetpt36->GetYaxis()->SetTitleFont(42);
   leadjetpt36->GetZaxis()->SetLabelFont(42);
   leadjetpt36->GetZaxis()->SetLabelSize(0.035);
   leadjetpt36->GetZaxis()->SetTitleSize(0.035);
   leadjetpt36->GetZaxis()->SetTitleFont(42);
   leadjetpt->Add(leadjetpt,"");
   
   TH1D *leadjetpt37 = new TH1D("leadjetpt37","p_{T}^{Leading jet}",25,0,1250);
   leadjetpt37->SetBinContent(1,2.829983e-05);
   leadjetpt37->SetBinContent(2,0.04196917);
   leadjetpt37->SetBinContent(3,0.2282655);
   leadjetpt37->SetBinContent(4,0.4158986);
   leadjetpt37->SetBinContent(5,0.2820859);
   leadjetpt37->SetBinContent(6,0.102164);
   leadjetpt37->SetBinContent(7,0.03707463);
   leadjetpt37->SetBinContent(8,0.01972642);
   leadjetpt37->SetBinContent(9,0.008226907);
   leadjetpt37->SetBinContent(10,0.004138418);
   leadjetpt37->SetBinContent(11,0.002663291);
   leadjetpt37->SetBinContent(12,0.001285881);
   leadjetpt37->SetBinContent(13,0.0007660909);
   leadjetpt37->SetBinContent(14,0.0004457256);
   leadjetpt37->SetBinContent(15,0.0002646496);
   leadjetpt37->SetBinContent(16,0.0001392893);
   leadjetpt37->SetBinContent(17,0.000195005);
   leadjetpt37->SetBinContent(18,2.785785e-05);
   leadjetpt37->SetBinContent(19,8.357355e-05);
   leadjetpt37->SetBinContent(20,1.392893e-05);
   leadjetpt37->SetBinContent(21,4.178678e-05);
   leadjetpt37->SetBinContent(22,4.178678e-05);
   leadjetpt37->SetBinContent(23,1.392893e-05);
   leadjetpt37->SetBinContent(24,1.392893e-05);
   leadjetpt37->SetBinContent(25,1.392893e-05);
   leadjetpt37->SetBinContent(26,2.785785e-05);
   leadjetpt37->SetBinError(1,2.829983e-05);
   leadjetpt37->SetBinError(2,0.004472068);
   leadjetpt37->SetBinError(3,0.009962139);
   leadjetpt37->SetBinError(4,0.01335391);
   leadjetpt37->SetBinError(5,0.009142652);
   leadjetpt37->SetBinError(6,0.005077354);
   leadjetpt37->SetBinError(7,0.002589925);
   leadjetpt37->SetBinError(8,0.001556858);
   leadjetpt37->SetBinError(9,0.0005525714);
   leadjetpt37->SetBinError(10,0.0003122494);
   leadjetpt37->SetBinError(11,0.0002292404);
   leadjetpt37->SetBinError(12,0.0001482494);
   leadjetpt37->SetBinError(13,0.0001032997);
   leadjetpt37->SetBinError(14,7.87939e-05);
   leadjetpt37->SetBinError(15,6.071478e-05);
   leadjetpt37->SetBinError(16,4.404713e-05);
   leadjetpt37->SetBinError(17,5.211727e-05);
   leadjetpt37->SetBinError(18,1.969847e-05);
   leadjetpt37->SetBinError(19,3.411876e-05);
   leadjetpt37->SetBinError(20,1.392893e-05);
   leadjetpt37->SetBinError(21,2.412561e-05);
   leadjetpt37->SetBinError(22,2.412561e-05);
   leadjetpt37->SetBinError(23,1.392893e-05);
   leadjetpt37->SetBinError(24,1.392893e-05);
   leadjetpt37->SetBinError(25,1.392893e-05);
   leadjetpt37->SetBinError(26,1.969847e-05);
   leadjetpt37->SetEntries(9534);

   ci = TColor::GetColor("#00ffff");
   leadjetpt37->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   leadjetpt37->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   leadjetpt37->SetMarkerColor(ci);
   leadjetpt37->SetMarkerStyle(20);
   leadjetpt37->GetXaxis()->SetTitle("leadjetpt");
   leadjetpt37->GetXaxis()->SetLabelFont(42);
   leadjetpt37->GetXaxis()->SetLabelSize(0.035);
   leadjetpt37->GetXaxis()->SetTitleSize(0.035);
   leadjetpt37->GetXaxis()->SetTitleFont(42);
   leadjetpt37->GetYaxis()->SetTitle("Events/pb");
   leadjetpt37->GetYaxis()->SetLabelFont(42);
   leadjetpt37->GetYaxis()->SetLabelSize(0.035);
   leadjetpt37->GetYaxis()->SetTitleSize(0.035);
   leadjetpt37->GetYaxis()->SetTitleFont(42);
   leadjetpt37->GetZaxis()->SetLabelFont(42);
   leadjetpt37->GetZaxis()->SetLabelSize(0.035);
   leadjetpt37->GetZaxis()->SetTitleSize(0.035);
   leadjetpt37->GetZaxis()->SetTitleFont(42);
   leadjetpt->Add(leadjetpt,"");
   
   TH1D *leadjetpt38 = new TH1D("leadjetpt38","p_{T}^{Leading jet}",25,0,1250);
   leadjetpt38->SetBinContent(1,0.0001119281);
   leadjetpt38->SetBinContent(2,0.0100106);
   leadjetpt38->SetBinContent(3,0.05072438);
   leadjetpt38->SetBinContent(4,0.0967421);
   leadjetpt38->SetBinContent(5,0.07183545);
   leadjetpt38->SetBinContent(6,0.02855188);
   leadjetpt38->SetBinContent(7,0.01247012);
   leadjetpt38->SetBinContent(8,0.005989669);
   leadjetpt38->SetBinContent(9,0.003327809);
   leadjetpt38->SetBinContent(10,0.001798758);
   leadjetpt38->SetBinContent(11,0.001115111);
   leadjetpt38->SetBinContent(12,0.0006244979);
   leadjetpt38->SetBinContent(13,0.0003714538);
   leadjetpt38->SetBinContent(14,0.0002314857);
   leadjetpt38->SetBinContent(15,0.0001695767);
   leadjetpt38->SetBinContent(16,9.15176e-05);
   leadjetpt38->SetBinContent(17,6.729235e-05);
   leadjetpt38->SetBinContent(18,3.768372e-05);
   leadjetpt38->SetBinContent(19,2.960863e-05);
   leadjetpt38->SetBinContent(20,2.960863e-05);
   leadjetpt38->SetBinContent(21,1.615016e-05);
   leadjetpt38->SetBinContent(22,2.691694e-06);
   leadjetpt38->SetBinContent(24,2.153355e-05);
   leadjetpt38->SetBinContent(25,5.383388e-06);
   leadjetpt38->SetBinContent(26,1.076678e-05);
   leadjetpt38->SetBinError(1,7.728868e-05);
   leadjetpt38->SetBinError(2,0.000939031);
   leadjetpt38->SetBinError(3,0.00189038);
   leadjetpt38->SetBinError(4,0.002640564);
   leadjetpt38->SetBinError(5,0.001924521);
   leadjetpt38->SetBinError(6,0.001077949);
   leadjetpt38->SetBinError(7,0.0006159041);
   leadjetpt38->SetBinError(8,0.0003130279);
   leadjetpt38->SetBinError(9,0.0001746492);
   leadjetpt38->SetBinError(10,9.761335e-05);
   leadjetpt38->SetBinError(11,7.109053e-05);
   leadjetpt38->SetBinError(12,4.559792e-05);
   leadjetpt38->SetBinError(13,3.162025e-05);
   leadjetpt38->SetBinError(14,2.496174e-05);
   leadjetpt38->SetBinError(15,2.136466e-05);
   leadjetpt38->SetBinError(16,1.569514e-05);
   leadjetpt38->SetBinError(17,1.345847e-05);
   leadjetpt38->SetBinError(18,1.00714e-05);
   leadjetpt38->SetBinError(19,8.927339e-06);
   leadjetpt38->SetBinError(20,8.927339e-06);
   leadjetpt38->SetBinError(21,6.593277e-06);
   leadjetpt38->SetBinError(22,2.691694e-06);
   leadjetpt38->SetBinError(24,7.61326e-06);
   leadjetpt38->SetBinError(25,3.80663e-06);
   leadjetpt38->SetBinError(26,5.383388e-06);
   leadjetpt38->SetEntries(13132);

   ci = TColor::GetColor("#ffcc00");
   leadjetpt38->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   leadjetpt38->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   leadjetpt38->SetMarkerColor(ci);
   leadjetpt38->SetMarkerStyle(21);
   leadjetpt38->GetXaxis()->SetTitle("leadjetpt");
   leadjetpt38->GetXaxis()->SetLabelFont(42);
   leadjetpt38->GetXaxis()->SetLabelSize(0.035);
   leadjetpt38->GetXaxis()->SetTitleSize(0.035);
   leadjetpt38->GetXaxis()->SetTitleFont(42);
   leadjetpt38->GetYaxis()->SetTitle("Events/pb");
   leadjetpt38->GetYaxis()->SetLabelFont(42);
   leadjetpt38->GetYaxis()->SetLabelSize(0.035);
   leadjetpt38->GetYaxis()->SetTitleSize(0.035);
   leadjetpt38->GetYaxis()->SetTitleFont(42);
   leadjetpt38->GetZaxis()->SetLabelFont(42);
   leadjetpt38->GetZaxis()->SetLabelSize(0.035);
   leadjetpt38->GetZaxis()->SetTitleSize(0.035);
   leadjetpt38->GetZaxis()->SetTitleFont(42);
   leadjetpt->Add(leadjetpt,"");
   
   TH1D *leadjetpt39 = new TH1D("leadjetpt39","p_{T}^{Leading jet}",25,0,1250);
   leadjetpt39->SetBinContent(1,1.542458e-05);
   leadjetpt39->SetBinContent(2,0.001434486);
   leadjetpt39->SetBinContent(3,0.005784216);
   leadjetpt39->SetBinContent(4,0.008514366);
   leadjetpt39->SetBinContent(5,0.006647992);
   leadjetpt39->SetBinContent(6,0.004102937);
   leadjetpt39->SetBinContent(7,0.002390809);
   leadjetpt39->SetBinContent(8,0.001203117);
   leadjetpt39->SetBinContent(9,0.0008637763);
   leadjetpt39->SetBinContent(10,0.0006015585);
   leadjetpt39->SetBinContent(11,0.0004164636);
   leadjetpt39->SetBinContent(12,0.0001388212);
   leadjetpt39->SetBinContent(13,0.000107972);
   leadjetpt39->SetBinContent(14,0.0001233966);
   leadjetpt39->SetBinContent(15,7.712288e-05);
   leadjetpt39->SetBinContent(16,4.627373e-05);
   leadjetpt39->SetBinContent(18,3.084915e-05);
   leadjetpt39->SetBinContent(19,1.542458e-05);
   leadjetpt39->SetBinContent(21,1.542458e-05);
   leadjetpt39->SetBinContent(24,1.542458e-05);
   leadjetpt39->SetBinError(1,1.542458e-05);
   leadjetpt39->SetBinError(2,0.0001487492);
   leadjetpt39->SetBinError(3,0.0002986956);
   leadjetpt39->SetBinError(4,0.0003623955);
   leadjetpt39->SetBinError(5,0.0003202225);
   leadjetpt39->SetBinError(6,0.0002515672);
   leadjetpt39->SetBinError(7,0.0001920344);
   leadjetpt39->SetBinError(8,0.0001362262);
   leadjetpt39->SetBinError(9,0.000115427);
   leadjetpt39->SetBinError(10,9.632645e-05);
   leadjetpt39->SetBinError(11,8.014845e-05);
   leadjetpt39->SetBinError(12,4.627373e-05);
   leadjetpt39->SetBinError(13,4.080959e-05);
   leadjetpt39->SetBinError(14,4.362729e-05);
   leadjetpt39->SetBinError(15,3.44904e-05);
   leadjetpt39->SetBinError(16,2.671615e-05);
   leadjetpt39->SetBinError(18,2.181364e-05);
   leadjetpt39->SetBinError(19,1.542458e-05);
   leadjetpt39->SetBinError(21,1.542458e-05);
   leadjetpt39->SetBinError(24,1.542458e-05);
   leadjetpt39->SetEntries(2110);

   ci = TColor::GetColor("#ff0000");
   leadjetpt39->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   leadjetpt39->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   leadjetpt39->SetMarkerColor(ci);
   leadjetpt39->SetMarkerStyle(20);
   leadjetpt39->GetXaxis()->SetTitle("leadjetpt");
   leadjetpt39->GetXaxis()->SetLabelFont(42);
   leadjetpt39->GetXaxis()->SetLabelSize(0.035);
   leadjetpt39->GetXaxis()->SetTitleSize(0.035);
   leadjetpt39->GetXaxis()->SetTitleFont(42);
   leadjetpt39->GetYaxis()->SetTitle("Events/pb");
   leadjetpt39->GetYaxis()->SetLabelFont(42);
   leadjetpt39->GetYaxis()->SetLabelSize(0.035);
   leadjetpt39->GetYaxis()->SetTitleSize(0.035);
   leadjetpt39->GetYaxis()->SetTitleFont(42);
   leadjetpt39->GetZaxis()->SetLabelFont(42);
   leadjetpt39->GetZaxis()->SetLabelSize(0.035);
   leadjetpt39->GetZaxis()->SetTitleSize(0.035);
   leadjetpt39->GetZaxis()->SetTitleFont(42);
   leadjetpt->Add(leadjetpt,"");
   
   TH1D *leadjetpt40 = new TH1D("leadjetpt40","p_{T}^{Leading jet}",25,0,1250);
   leadjetpt40->SetBinContent(3,0.0001006299);
   leadjetpt40->SetBinContent(4,0.0001174015);
   leadjetpt40->SetBinContent(5,5.031494e-05);
   leadjetpt40->SetBinContent(6,1.677165e-05);
   leadjetpt40->SetBinError(3,4.108198e-05);
   leadjetpt40->SetBinError(4,4.437361e-05);
   leadjetpt40->SetBinError(5,2.904935e-05);
   leadjetpt40->SetBinError(6,1.677165e-05);
   leadjetpt40->SetEntries(17);

   ci = TColor::GetColor("#0000ff");
   leadjetpt40->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   leadjetpt40->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   leadjetpt40->SetMarkerColor(ci);
   leadjetpt40->SetMarkerStyle(21);
   leadjetpt40->GetXaxis()->SetTitle("leadjetpt");
   leadjetpt40->GetXaxis()->SetLabelFont(42);
   leadjetpt40->GetXaxis()->SetLabelSize(0.035);
   leadjetpt40->GetXaxis()->SetTitleSize(0.035);
   leadjetpt40->GetXaxis()->SetTitleFont(42);
   leadjetpt40->GetYaxis()->SetTitle("Events/pb");
   leadjetpt40->GetYaxis()->SetLabelFont(42);
   leadjetpt40->GetYaxis()->SetLabelSize(0.035);
   leadjetpt40->GetYaxis()->SetTitleSize(0.035);
   leadjetpt40->GetYaxis()->SetTitleFont(42);
   leadjetpt40->GetZaxis()->SetLabelFont(42);
   leadjetpt40->GetZaxis()->SetLabelSize(0.035);
   leadjetpt40->GetZaxis()->SetTitleSize(0.035);
   leadjetpt40->GetZaxis()->SetTitleFont(42);
   leadjetpt->Add(leadjetpt,"");
   leadjetpt->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3872701,0.9342857,0.6127299,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("leadjetpt");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("leadjetpt","leadjetpt_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("leadjetpt","leadjetpt_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("leadjetpt","leadjetpt_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("leadjetpt","leadjetpt_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("leadjetpt","leadjetpt_ttbar","lp");

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
   leadjetpt->Modified();
   leadjetpt->cd();
   leadjetpt->SetSelected(leadjetpt);
}
