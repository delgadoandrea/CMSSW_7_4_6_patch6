void jet1ptb1()
{
//=========Macro generated from canvas: b1/jet1ptb1/b1/jet1ptb1
//=========  (Tue Nov 24 14:28:23 2015) by ROOT version6.02/05
   TCanvas *b1/jet1ptb1 = new TCanvas("b1/jet1ptb1", "b1/jet1ptb1",60,82,700,700);
   b1/jet1ptb1->Range(-122.5,-6.603025,1402.5,0.379997);
   b1/jet1ptb1->SetFillColor(0);
   b1/jet1ptb1->SetBorderMode(0);
   b1/jet1ptb1->SetBorderSize(2);
   b1/jet1ptb1->SetLogy();
   b1/jet1ptb1->SetFrameBorderMode(0);
   b1/jet1ptb1->SetFrameBorderMode(0);
   
   THStack *b1/jet1ptb1 = new THStack();
   b1/jet1ptb1->SetName("b1/jet1ptb1");
   b1/jet1ptb1->SetTitle("b1/jet1ptb1");
   
   TH1F *b1/jet1ptb1_stack_4 = new TH1F("b1/jet1ptb1_stack_4","b1/jet1ptb1",25,30,1250);
   b1/jet1ptb1_stack_4->SetMinimum(1.245309e-06);
   b1/jet1ptb1_stack_4->SetMaximum(0.4805014);
   b1/jet1ptb1_stack_4->SetDirectory(0);
   b1/jet1ptb1_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1/jet1ptb1_stack_4->SetLineColor(ci);
   b1/jet1ptb1_stack_4->GetXaxis()->SetTitle("b1/jet1ptb1");
   b1/jet1ptb1_stack_4->GetXaxis()->SetLabelFont(42);
   b1/jet1ptb1_stack_4->GetXaxis()->SetLabelSize(0.035);
   b1/jet1ptb1_stack_4->GetXaxis()->SetTitleSize(0.035);
   b1/jet1ptb1_stack_4->GetXaxis()->SetTitleFont(42);
   b1/jet1ptb1_stack_4->GetYaxis()->SetTitle("Events/pb");
   b1/jet1ptb1_stack_4->GetYaxis()->SetLabelFont(42);
   b1/jet1ptb1_stack_4->GetYaxis()->SetLabelSize(0.035);
   b1/jet1ptb1_stack_4->GetYaxis()->SetTitleSize(0.035);
   b1/jet1ptb1_stack_4->GetYaxis()->SetTitleFont(42);
   b1/jet1ptb1_stack_4->GetZaxis()->SetLabelFont(42);
   b1/jet1ptb1_stack_4->GetZaxis()->SetLabelSize(0.035);
   b1/jet1ptb1_stack_4->GetZaxis()->SetTitleSize(0.035);
   b1/jet1ptb1_stack_4->GetZaxis()->SetTitleFont(42);
   b1/jet1ptb1->SetHistogram(b1/jet1ptb1_stack_4);
   
   
   TH1D *jet1ptb116 = new TH1D("jet1ptb116","p_{T}^{Leading jet}",25,30,1250);
   jet1ptb116->SetBinContent(4,0.00831877);
   jet1ptb116->SetBinContent(7,0.00831877);
   jet1ptb116->SetBinError(4,0.00831877);
   jet1ptb116->SetBinError(7,0.00831877);
   jet1ptb116->SetEntries(2);

   ci = TColor::GetColor("#00cc00");
   jet1ptb116->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   jet1ptb116->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   jet1ptb116->SetMarkerColor(ci);
   jet1ptb116->SetMarkerStyle(22);
   jet1ptb116->GetXaxis()->SetTitle("jet1ptb1");
   jet1ptb116->GetXaxis()->SetLabelFont(42);
   jet1ptb116->GetXaxis()->SetLabelSize(0.035);
   jet1ptb116->GetXaxis()->SetTitleSize(0.035);
   jet1ptb116->GetXaxis()->SetTitleFont(42);
   jet1ptb116->GetYaxis()->SetTitle("Events/pb");
   jet1ptb116->GetYaxis()->SetLabelFont(42);
   jet1ptb116->GetYaxis()->SetLabelSize(0.035);
   jet1ptb116->GetYaxis()->SetTitleSize(0.035);
   jet1ptb116->GetYaxis()->SetTitleFont(42);
   jet1ptb116->GetZaxis()->SetLabelFont(42);
   jet1ptb116->GetZaxis()->SetLabelSize(0.035);
   jet1ptb116->GetZaxis()->SetTitleSize(0.035);
   jet1ptb116->GetZaxis()->SetTitleFont(42);
   b1/jet1ptb1->Add(jet1ptb1,"");
   
   TH1D *jet1ptb117 = new TH1D("jet1ptb117","p_{T}^{Leading jet}",25,30,1250);
   jet1ptb117->SetBinContent(1,0.0006875365);
   jet1ptb117->SetBinContent(2,0.02456464);
   jet1ptb117->SetBinContent(3,0.09447587);
   jet1ptb117->SetBinContent(4,0.2459989);
   jet1ptb117->SetBinContent(5,0.1642024);
   jet1ptb117->SetBinContent(6,0.06434926);
   jet1ptb117->SetBinContent(7,0.02754233);
   jet1ptb117->SetBinContent(8,0.01217066);
   jet1ptb117->SetBinContent(9,0.005756867);
   jet1ptb117->SetBinContent(10,0.00270411);
   jet1ptb117->SetBinContent(11,0.001719956);
   jet1ptb117->SetBinContent(12,0.001117407);
   jet1ptb117->SetBinContent(13,0.0005292992);
   jet1ptb117->SetBinContent(14,0.0002785785);
   jet1ptb117->SetBinContent(15,0.0001392893);
   jet1ptb117->SetBinContent(16,0.0001253603);
   jet1ptb117->SetBinContent(17,8.357355e-05);
   jet1ptb117->SetBinContent(19,2.785785e-05);
   jet1ptb117->SetBinContent(22,2.785785e-05);
   jet1ptb117->SetBinContent(26,1.392893e-05);
   jet1ptb117->SetBinError(1,0.0002888311);
   jet1ptb117->SetBinError(2,0.00382316);
   jet1ptb117->SetBinError(3,0.00687739);
   jet1ptb117->SetBinError(4,0.008011692);
   jet1ptb117->SetBinError(5,0.004554403);
   jet1ptb117->SetBinError(6,0.00273602);
   jet1ptb117->SetBinError(7,0.001577082);
   jet1ptb117->SetBinError(8,0.0006977662);
   jet1ptb117->SetBinError(9,0.0003150779);
   jet1ptb117->SetBinError(10,0.0001988494);
   jet1ptb117->SetBinError(11,0.0001577247);
   jet1ptb117->SetBinError(12,0.0001257584);
   jet1ptb117->SetBinError(13,8.586366e-05);
   jet1ptb117->SetBinError(14,6.229205e-05);
   jet1ptb117->SetBinError(15,4.404713e-05);
   jet1ptb117->SetBinError(16,4.178678e-05);
   jet1ptb117->SetBinError(17,3.411876e-05);
   jet1ptb117->SetBinError(19,1.969847e-05);
   jet1ptb117->SetBinError(22,1.969847e-05);
   jet1ptb117->SetBinError(26,1.392893e-05);
   jet1ptb117->SetEntries(7038);

   ci = TColor::GetColor("#00ffff");
   jet1ptb117->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   jet1ptb117->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   jet1ptb117->SetMarkerColor(ci);
   jet1ptb117->SetMarkerStyle(20);
   jet1ptb117->GetXaxis()->SetTitle("jet1ptb1");
   jet1ptb117->GetXaxis()->SetLabelFont(42);
   jet1ptb117->GetXaxis()->SetLabelSize(0.035);
   jet1ptb117->GetXaxis()->SetTitleSize(0.035);
   jet1ptb117->GetXaxis()->SetTitleFont(42);
   jet1ptb117->GetYaxis()->SetTitle("Events/pb");
   jet1ptb117->GetYaxis()->SetLabelFont(42);
   jet1ptb117->GetYaxis()->SetLabelSize(0.035);
   jet1ptb117->GetYaxis()->SetTitleSize(0.035);
   jet1ptb117->GetYaxis()->SetTitleFont(42);
   jet1ptb117->GetZaxis()->SetLabelFont(42);
   jet1ptb117->GetZaxis()->SetLabelSize(0.035);
   jet1ptb117->GetZaxis()->SetTitleSize(0.035);
   jet1ptb117->GetZaxis()->SetTitleFont(42);
   b1/jet1ptb1->Add(jet1ptb1,"");
   
   TH1D *jet1ptb118 = new TH1D("jet1ptb118","p_{T}^{Leading jet}",25,30,1250);
   jet1ptb118->SetBinContent(1,0.0003142961);
   jet1ptb118->SetBinContent(2,0.005229854);
   jet1ptb118->SetBinContent(3,0.02271871);
   jet1ptb118->SetBinContent(4,0.05761497);
   jet1ptb118->SetBinContent(5,0.04212066);
   jet1ptb118->SetBinContent(6,0.01763756);
   jet1ptb118->SetBinContent(7,0.008117521);
   jet1ptb118->SetBinContent(8,0.003945654);
   jet1ptb118->SetBinContent(9,0.002030917);
   jet1ptb118->SetBinContent(10,0.001164443);
   jet1ptb118->SetBinContent(11,0.0006161033);
   jet1ptb118->SetBinContent(12,0.000402008);
   jet1ptb118->SetBinContent(13,0.0002035566);
   jet1ptb118->SetBinContent(14,0.0001672772);
   jet1ptb118->SetBinContent(15,0.0001193708);
   jet1ptb118->SetBinContent(16,6.90478e-05);
   jet1ptb118->SetBinContent(17,4.213086e-05);
   jet1ptb118->SetBinContent(18,2.925754e-05);
   jet1ptb118->SetBinContent(19,2.223573e-05);
   jet1ptb118->SetBinContent(20,1.521392e-05);
   jet1ptb118->SetBinContent(21,5.851509e-06);
   jet1ptb118->SetBinContent(22,7.021811e-06);
   jet1ptb118->SetBinContent(23,4.681207e-06);
   jet1ptb118->SetBinContent(24,7.021811e-06);
   jet1ptb118->SetBinContent(25,4.681207e-06);
   jet1ptb118->SetBinContent(26,9.362414e-06);
   jet1ptb118->SetBinError(1,9.344578e-05);
   jet1ptb118->SetBinError(2,0.000528745);
   jet1ptb118->SetBinError(3,0.001089992);
   jet1ptb118->SetBinError(4,0.001483476);
   jet1ptb118->SetBinError(5,0.001082505);
   jet1ptb118->SetBinError(6,0.0006699483);
   jet1ptb118->SetBinError(7,0.0003928954);
   jet1ptb118->SetBinError(8,0.0001885818);
   jet1ptb118->SetBinError(9,8.611049e-05);
   jet1ptb118->SetBinError(10,6.034938e-05);
   jet1ptb118->SetBinError(11,3.881654e-05);
   jet1ptb118->SetBinError(12,2.548317e-05);
   jet1ptb118->SetBinError(13,1.568444e-05);
   jet1ptb118->SetBinError(14,1.426689e-05);
   jet1ptb118->SetBinError(15,1.181947e-05);
   jet1ptb118->SetBinError(16,8.989258e-06);
   jet1ptb118->SetBinError(17,7.021811e-06);
   jet1ptb118->SetBinError(18,5.851509e-06);
   jet1ptb118->SetBinError(19,5.101227e-06);
   jet1ptb118->SetBinError(20,4.219583e-06);
   jet1ptb118->SetBinError(21,2.616874e-06);
   jet1ptb118->SetBinError(22,2.866642e-06);
   jet1ptb118->SetBinError(23,2.340604e-06);
   jet1ptb118->SetBinError(24,2.866642e-06);
   jet1ptb118->SetBinError(25,2.340604e-06);
   jet1ptb118->SetBinError(26,3.310113e-06);
   jet1ptb118->SetEntries(10014);

   ci = TColor::GetColor("#ffcc00");
   jet1ptb118->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   jet1ptb118->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   jet1ptb118->SetMarkerColor(ci);
   jet1ptb118->SetMarkerStyle(21);
   jet1ptb118->GetXaxis()->SetTitle("jet1ptb1");
   jet1ptb118->GetXaxis()->SetLabelFont(42);
   jet1ptb118->GetXaxis()->SetLabelSize(0.035);
   jet1ptb118->GetXaxis()->SetTitleSize(0.035);
   jet1ptb118->GetXaxis()->SetTitleFont(42);
   jet1ptb118->GetYaxis()->SetTitle("Events/pb");
   jet1ptb118->GetYaxis()->SetLabelFont(42);
   jet1ptb118->GetYaxis()->SetLabelSize(0.035);
   jet1ptb118->GetYaxis()->SetTitleSize(0.035);
   jet1ptb118->GetYaxis()->SetTitleFont(42);
   jet1ptb118->GetZaxis()->SetLabelFont(42);
   jet1ptb118->GetZaxis()->SetLabelSize(0.035);
   jet1ptb118->GetZaxis()->SetTitleSize(0.035);
   jet1ptb118->GetZaxis()->SetTitleFont(42);
   b1/jet1ptb1->Add(jet1ptb1,"");
   
   TH1D *jet1ptb119 = new TH1D("jet1ptb119","p_{T}^{Leading jet}",25,30,1250);
   jet1ptb119->SetBinContent(1,3.084915e-05);
   jet1ptb119->SetBinContent(2,0.0004318881);
   jet1ptb119->SetBinContent(3,0.001172268);
   jet1ptb119->SetBinContent(4,0.00256048);
   jet1ptb119->SetBinContent(5,0.002344536);
   jet1ptb119->SetBinContent(6,0.001881798);
   jet1ptb119->SetBinContent(7,0.001110569);
   jet1ptb119->SetBinContent(8,0.0006786813);
   jet1ptb119->SetBinContent(9,0.0003084915);
   jet1ptb119->SetBinContent(10,0.0002776424);
   jet1ptb119->SetBinContent(11,0.0002005195);
   jet1ptb119->SetBinContent(12,3.084915e-05);
   jet1ptb119->SetBinContent(13,9.254746e-05);
   jet1ptb119->SetBinContent(14,6.16983e-05);
   jet1ptb119->SetBinContent(15,4.627373e-05);
   jet1ptb119->SetBinContent(16,1.542458e-05);
   jet1ptb119->SetBinContent(19,1.542458e-05);
   jet1ptb119->SetBinContent(20,1.542458e-05);
   jet1ptb119->SetBinContent(23,1.542458e-05);
   jet1ptb119->SetBinError(1,2.181364e-05);
   jet1ptb119->SetBinError(2,8.161918e-05);
   jet1ptb119->SetBinError(3,0.0001344683);
   jet1ptb119->SetBinError(4,0.0001987318);
   jet1ptb119->SetBinError(5,0.0001901669);
   jet1ptb119->SetBinError(6,0.00017037);
   jet1ptb119->SetBinError(7,0.0001308819);
   jet1ptb119->SetBinError(8,0.0001023151);
   jet1ptb119->SetBinError(9,6.89808e-05);
   jet1ptb119->SetBinError(10,6.544093e-05);
   jet1ptb119->SetBinError(11,5.56141e-05);
   jet1ptb119->SetBinError(12,2.181364e-05);
   jet1ptb119->SetBinError(13,3.778234e-05);
   jet1ptb119->SetBinError(14,3.084915e-05);
   jet1ptb119->SetBinError(15,2.671615e-05);
   jet1ptb119->SetBinError(16,1.542458e-05);
   jet1ptb119->SetBinError(19,1.542458e-05);
   jet1ptb119->SetBinError(20,1.542458e-05);
   jet1ptb119->SetBinError(23,1.542458e-05);
   jet1ptb119->SetEntries(732);

   ci = TColor::GetColor("#ff0000");
   jet1ptb119->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   jet1ptb119->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   jet1ptb119->SetMarkerColor(ci);
   jet1ptb119->SetMarkerStyle(20);
   jet1ptb119->GetXaxis()->SetTitle("jet1ptb1");
   jet1ptb119->GetXaxis()->SetLabelFont(42);
   jet1ptb119->GetXaxis()->SetLabelSize(0.035);
   jet1ptb119->GetXaxis()->SetTitleSize(0.035);
   jet1ptb119->GetXaxis()->SetTitleFont(42);
   jet1ptb119->GetYaxis()->SetTitle("Events/pb");
   jet1ptb119->GetYaxis()->SetLabelFont(42);
   jet1ptb119->GetYaxis()->SetLabelSize(0.035);
   jet1ptb119->GetYaxis()->SetTitleSize(0.035);
   jet1ptb119->GetYaxis()->SetTitleFont(42);
   jet1ptb119->GetZaxis()->SetLabelFont(42);
   jet1ptb119->GetZaxis()->SetLabelSize(0.035);
   jet1ptb119->GetZaxis()->SetTitleSize(0.035);
   jet1ptb119->GetZaxis()->SetTitleFont(42);
   b1/jet1ptb1->Add(jet1ptb1,"");
   
   TH1D *jet1ptb120 = new TH1D("jet1ptb120","p_{T}^{Leading jet}",25,30,1250);
   jet1ptb120->SetBinContent(3,1.677165e-05);
   jet1ptb120->SetBinContent(4,1.677165e-05);
   jet1ptb120->SetBinError(3,1.677165e-05);
   jet1ptb120->SetBinError(4,1.677165e-05);
   jet1ptb120->SetEntries(2);

   ci = TColor::GetColor("#0000ff");
   jet1ptb120->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   jet1ptb120->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   jet1ptb120->SetMarkerColor(ci);
   jet1ptb120->SetMarkerStyle(21);
   jet1ptb120->GetXaxis()->SetTitle("jet1ptb1");
   jet1ptb120->GetXaxis()->SetLabelFont(42);
   jet1ptb120->GetXaxis()->SetLabelSize(0.035);
   jet1ptb120->GetXaxis()->SetTitleSize(0.035);
   jet1ptb120->GetXaxis()->SetTitleFont(42);
   jet1ptb120->GetYaxis()->SetTitle("Events/pb");
   jet1ptb120->GetYaxis()->SetLabelFont(42);
   jet1ptb120->GetYaxis()->SetLabelSize(0.035);
   jet1ptb120->GetYaxis()->SetTitleSize(0.035);
   jet1ptb120->GetYaxis()->SetTitleFont(42);
   jet1ptb120->GetZaxis()->SetLabelFont(42);
   jet1ptb120->GetZaxis()->SetLabelSize(0.035);
   jet1ptb120->GetZaxis()->SetTitleSize(0.035);
   jet1ptb120->GetZaxis()->SetTitleFont(42);
   b1/jet1ptb1->Add(jet1ptb1,"");
   b1/jet1ptb1->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.361408,0.9342857,0.638592,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b1/jet1ptb1");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("jet1ptb1","b1/jet1ptb1_QCD_b1/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("jet1ptb1","b1/jet1ptb1_WJetsToLNu_b1/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("jet1ptb1","b1/jet1ptb1_ZJetsToNuNu_b1/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("jet1ptb1","b1/jet1ptb1_signal_b1/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("jet1ptb1","b1/jet1ptb1_ttbar_b1/","lp");

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
   b1/jet1ptb1->Modified();
   b1/jet1ptb1->cd();
   b1/jet1ptb1->SetSelected(b1/jet1ptb1);
}
