void leadjetpt()
{
//=========Macro generated from canvas: leadjetpt/leadjetpt
//=========  (Fri Nov 13 11:38:55 2015) by ROOT version6.02/05
   TCanvas *leadjetpt = new TCanvas("leadjetpt", "leadjetpt",220,242,700,700);
   leadjetpt->Range(-122.5,-6.795011,1402.5,0.6494432);
   leadjetpt->SetFillColor(0);
   leadjetpt->SetBorderMode(0);
   leadjetpt->SetBorderSize(2);
   leadjetpt->SetLogy();
   leadjetpt->SetFrameBorderMode(0);
   leadjetpt->SetFrameBorderMode(0);
   
   THStack *leadjetpt = new THStack();
   leadjetpt->SetName("leadjetpt");
   leadjetpt->SetTitle("leadjetpt");
   
   TH1F *leadjetpt_stack_12 = new TH1F("leadjetpt_stack_12","leadjetpt",25,30,1250);
   leadjetpt_stack_12->SetMinimum(8.900905e-07);
   leadjetpt_stack_12->SetMaximum(0.8035218);
   leadjetpt_stack_12->SetDirectory(0);
   leadjetpt_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   leadjetpt_stack_12->SetLineColor(ci);
   leadjetpt_stack_12->GetXaxis()->SetTitle("leadjetpt");
   leadjetpt_stack_12->GetXaxis()->SetLabelFont(42);
   leadjetpt_stack_12->GetXaxis()->SetLabelSize(0.035);
   leadjetpt_stack_12->GetXaxis()->SetTitleSize(0.035);
   leadjetpt_stack_12->GetXaxis()->SetTitleFont(42);
   leadjetpt_stack_12->GetYaxis()->SetTitle("Events/pb");
   leadjetpt_stack_12->GetYaxis()->SetLabelFont(42);
   leadjetpt_stack_12->GetYaxis()->SetLabelSize(0.035);
   leadjetpt_stack_12->GetYaxis()->SetTitleSize(0.035);
   leadjetpt_stack_12->GetYaxis()->SetTitleFont(42);
   leadjetpt_stack_12->GetZaxis()->SetLabelFont(42);
   leadjetpt_stack_12->GetZaxis()->SetLabelSize(0.035);
   leadjetpt_stack_12->GetZaxis()->SetTitleSize(0.035);
   leadjetpt_stack_12->GetZaxis()->SetTitleFont(42);
   leadjetpt->SetHistogram(leadjetpt_stack_12);
   
   
   TH1D *leadjetpt56 = new TH1D("leadjetpt56","p_{T}^{Leading jet}",25,30,1250);
   leadjetpt56->SetBinContent(4,0.01663754);
   leadjetpt56->SetBinContent(5,0.00831877);
   leadjetpt56->SetBinContent(7,0.00831877);
   leadjetpt56->SetBinContent(8,0.01663754);
   leadjetpt56->SetBinContent(9,0.00136138);
   leadjetpt56->SetBinContent(10,0.00068069);
   leadjetpt56->SetBinContent(11,0.00272276);
   leadjetpt56->SetBinContent(12,0.00272276);
   leadjetpt56->SetBinContent(13,0.00136138);
   leadjetpt56->SetBinContent(15,0.00068069);
   leadjetpt56->SetBinContent(16,0.00204207);
   leadjetpt56->SetBinContent(17,0.00068069);
   leadjetpt56->SetBinContent(20,0.00068069);
   leadjetpt56->SetBinContent(26,0.00068069);
   leadjetpt56->SetBinError(4,0.01176452);
   leadjetpt56->SetBinError(5,0.00831877);
   leadjetpt56->SetBinError(7,0.00831877);
   leadjetpt56->SetBinError(8,0.01176452);
   leadjetpt56->SetBinError(9,0.000962641);
   leadjetpt56->SetBinError(10,0.00068069);
   leadjetpt56->SetBinError(11,0.00136138);
   leadjetpt56->SetBinError(12,0.00136138);
   leadjetpt56->SetBinError(13,0.000962641);
   leadjetpt56->SetBinError(15,0.00068069);
   leadjetpt56->SetBinError(16,0.00117899);
   leadjetpt56->SetBinError(17,0.00068069);
   leadjetpt56->SetBinError(20,0.00068069);
   leadjetpt56->SetBinError(26,0.00068069);
   leadjetpt56->SetEntries(26);

   ci = TColor::GetColor("#00cc00");
   leadjetpt56->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   leadjetpt56->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   leadjetpt56->SetMarkerColor(ci);
   leadjetpt56->SetMarkerStyle(22);
   leadjetpt56->GetXaxis()->SetTitle("leadjetpt");
   leadjetpt56->GetXaxis()->SetLabelFont(42);
   leadjetpt56->GetXaxis()->SetLabelSize(0.035);
   leadjetpt56->GetXaxis()->SetTitleSize(0.035);
   leadjetpt56->GetXaxis()->SetTitleFont(42);
   leadjetpt56->GetYaxis()->SetTitle("Events/pb");
   leadjetpt56->GetYaxis()->SetLabelFont(42);
   leadjetpt56->GetYaxis()->SetLabelSize(0.035);
   leadjetpt56->GetYaxis()->SetTitleSize(0.035);
   leadjetpt56->GetYaxis()->SetTitleFont(42);
   leadjetpt56->GetZaxis()->SetLabelFont(42);
   leadjetpt56->GetZaxis()->SetLabelSize(0.035);
   leadjetpt56->GetZaxis()->SetTitleSize(0.035);
   leadjetpt56->GetZaxis()->SetTitleFont(42);
   leadjetpt->Add(leadjetpt,"");
   
   TH1D *leadjetpt57 = new TH1D("leadjetpt57","p_{T}^{Leading jet}",25,30,1250);
   leadjetpt57->SetBinContent(1,0.01086267);
   leadjetpt57->SetBinContent(2,0.1234475);
   leadjetpt57->SetBinContent(3,0.2747967);
   leadjetpt57->SetBinContent(4,0.3977837);
   leadjetpt57->SetBinContent(5,0.2740768);
   leadjetpt57->SetBinContent(6,0.1353766);
   leadjetpt57->SetBinContent(7,0.07080571);
   leadjetpt57->SetBinContent(8,0.03776462);
   leadjetpt57->SetBinContent(9,0.02188823);
   leadjetpt57->SetBinContent(10,0.01291651);
   leadjetpt57->SetBinContent(11,0.007882876);
   leadjetpt57->SetBinContent(12,0.004906075);
   leadjetpt57->SetBinContent(13,0.002994719);
   leadjetpt57->SetBinContent(14,0.002006576);
   leadjetpt57->SetBinContent(15,0.001782902);
   leadjetpt57->SetBinContent(16,0.001128243);
   leadjetpt57->SetBinContent(17,0.0007243041);
   leadjetpt57->SetBinContent(18,0.0005014413);
   leadjetpt57->SetBinContent(19,0.0003482231);
   leadjetpt57->SetBinContent(20,0.000195005);
   leadjetpt57->SetBinContent(21,0.0002507207);
   leadjetpt57->SetBinContent(22,0.0002507207);
   leadjetpt57->SetBinContent(23,8.357355e-05);
   leadjetpt57->SetBinContent(24,8.357355e-05);
   leadjetpt57->SetBinContent(25,5.57157e-05);
   leadjetpt57->SetBinContent(26,0.0002228628);
   leadjetpt57->SetBinError(1,0.002160641);
   leadjetpt57->SetBinError(2,0.005994993);
   leadjetpt57->SetBinError(3,0.008540751);
   leadjetpt57->SetBinError(4,0.008750797);
   leadjetpt57->SetBinError(5,0.005388868);
   leadjetpt57->SetBinError(6,0.003217987);
   leadjetpt57->SetBinError(7,0.001793492);
   leadjetpt57->SetBinError(8,0.0008912157);
   leadjetpt57->SetBinError(9,0.0005720804);
   leadjetpt57->SetBinError(10,0.0004276121);
   leadjetpt57->SetBinError(11,0.0003331946);
   leadjetpt57->SetBinError(12,0.0002618917);
   leadjetpt57->SetBinError(13,0.0002042381);
   leadjetpt57->SetBinError(14,0.0001672166);
   leadjetpt57->SetBinError(15,0.0001575878);
   leadjetpt57->SetBinError(16,0.0001253603);
   leadjetpt57->SetBinError(17,0.0001004429);
   leadjetpt57->SetBinError(18,8.357355e-05);
   leadjetpt57->SetBinError(19,6.964463e-05);
   leadjetpt57->SetBinError(20,5.211727e-05);
   leadjetpt57->SetBinError(21,5.909542e-05);
   leadjetpt57->SetBinError(22,5.909542e-05);
   leadjetpt57->SetBinError(23,3.411876e-05);
   leadjetpt57->SetBinError(24,3.411876e-05);
   leadjetpt57->SetBinError(25,2.785785e-05);
   leadjetpt57->SetBinError(26,5.57157e-05);
   leadjetpt57->SetEntries(30221);

   ci = TColor::GetColor("#00ffff");
   leadjetpt57->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   leadjetpt57->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   leadjetpt57->SetMarkerColor(ci);
   leadjetpt57->SetMarkerStyle(20);
   leadjetpt57->GetXaxis()->SetTitle("leadjetpt");
   leadjetpt57->GetXaxis()->SetLabelFont(42);
   leadjetpt57->GetXaxis()->SetLabelSize(0.035);
   leadjetpt57->GetXaxis()->SetTitleSize(0.035);
   leadjetpt57->GetXaxis()->SetTitleFont(42);
   leadjetpt57->GetYaxis()->SetTitle("Events/pb");
   leadjetpt57->GetYaxis()->SetLabelFont(42);
   leadjetpt57->GetYaxis()->SetLabelSize(0.035);
   leadjetpt57->GetYaxis()->SetTitleSize(0.035);
   leadjetpt57->GetYaxis()->SetTitleFont(42);
   leadjetpt57->GetZaxis()->SetLabelFont(42);
   leadjetpt57->GetZaxis()->SetLabelSize(0.035);
   leadjetpt57->GetZaxis()->SetTitleSize(0.035);
   leadjetpt57->GetZaxis()->SetTitleFont(42);
   leadjetpt->Add(leadjetpt,"");
   
   TH1D *leadjetpt58 = new TH1D("leadjetpt58","p_{T}^{Leading jet}",25,30,1250);
   leadjetpt58->SetBinContent(1,0.0004504594);
   leadjetpt58->SetBinContent(2,0.004411817);
   leadjetpt58->SetBinContent(3,0.008544834);
   leadjetpt58->SetBinContent(4,0.01204635);
   leadjetpt58->SetBinContent(5,0.007683069);
   leadjetpt58->SetBinContent(6,0.004471091);
   leadjetpt58->SetBinContent(7,0.002553423);
   leadjetpt58->SetBinContent(8,0.001356351);
   leadjetpt58->SetBinContent(9,0.0008744363);
   leadjetpt58->SetBinContent(10,0.000582829);
   leadjetpt58->SetBinContent(11,0.0002897034);
   leadjetpt58->SetBinContent(12,0.0002255646);
   leadjetpt58->SetBinContent(13,0.0001322441);
   leadjetpt58->SetBinContent(14,0.000124052);
   leadjetpt58->SetBinContent(15,6.90478e-05);
   leadjetpt58->SetBinContent(16,4.213086e-05);
   leadjetpt58->SetBinContent(17,3.744966e-05);
   leadjetpt58->SetBinContent(18,3.627935e-05);
   leadjetpt58->SetBinContent(19,1.287332e-05);
   leadjetpt58->SetBinContent(20,1.872483e-05);
   leadjetpt58->SetBinContent(21,4.681207e-06);
   leadjetpt58->SetBinContent(22,5.851509e-06);
   leadjetpt58->SetBinContent(23,7.021811e-06);
   leadjetpt58->SetBinContent(24,3.510905e-06);
   leadjetpt58->SetBinContent(25,3.510905e-06);
   leadjetpt58->SetBinContent(26,1.521392e-05);
   leadjetpt58->SetBinError(1,0.0001126148);
   leadjetpt58->SetBinError(2,0.000421281);
   leadjetpt58->SetBinError(3,0.0005525083);
   leadjetpt58->SetBinError(4,0.0005855443);
   leadjetpt58->SetBinError(5,0.0003989393);
   leadjetpt58->SetBinError(6,0.0002563892);
   leadjetpt58->SetBinError(7,0.0001384001);
   leadjetpt58->SetBinError(8,7.299914e-05);
   leadjetpt58->SetBinError(9,4.289718e-05);
   leadjetpt58->SetBinError(10,3.224791e-05);
   leadjetpt58->SetBinError(11,1.98367e-05);
   leadjetpt58->SetBinError(12,1.717834e-05);
   leadjetpt58->SetBinError(13,1.244048e-05);
   leadjetpt58->SetBinError(14,1.204899e-05);
   leadjetpt58->SetBinError(15,8.989258e-06);
   leadjetpt58->SetBinError(16,7.021811e-06);
   leadjetpt58->SetBinError(17,6.620226e-06);
   leadjetpt58->SetBinError(18,6.515964e-06);
   leadjetpt58->SetBinError(19,3.881452e-06);
   leadjetpt58->SetBinError(20,4.681207e-06);
   leadjetpt58->SetBinError(21,2.340604e-06);
   leadjetpt58->SetBinError(22,2.616874e-06);
   leadjetpt58->SetBinError(23,2.866642e-06);
   leadjetpt58->SetBinError(24,2.027022e-06);
   leadjetpt58->SetBinError(25,2.027022e-06);
   leadjetpt58->SetBinError(26,4.219583e-06);
   leadjetpt58->SetEntries(7352);

   ci = TColor::GetColor("#ffcc00");
   leadjetpt58->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   leadjetpt58->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   leadjetpt58->SetMarkerColor(ci);
   leadjetpt58->SetMarkerStyle(21);
   leadjetpt58->GetXaxis()->SetTitle("leadjetpt");
   leadjetpt58->GetXaxis()->SetLabelFont(42);
   leadjetpt58->GetXaxis()->SetLabelSize(0.035);
   leadjetpt58->GetXaxis()->SetTitleSize(0.035);
   leadjetpt58->GetXaxis()->SetTitleFont(42);
   leadjetpt58->GetYaxis()->SetTitle("Events/pb");
   leadjetpt58->GetYaxis()->SetLabelFont(42);
   leadjetpt58->GetYaxis()->SetLabelSize(0.035);
   leadjetpt58->GetYaxis()->SetTitleSize(0.035);
   leadjetpt58->GetYaxis()->SetTitleFont(42);
   leadjetpt58->GetZaxis()->SetLabelFont(42);
   leadjetpt58->GetZaxis()->SetLabelSize(0.035);
   leadjetpt58->GetZaxis()->SetTitleSize(0.035);
   leadjetpt58->GetZaxis()->SetTitleFont(42);
   leadjetpt->Add(leadjetpt,"");
   
   TH1D *leadjetpt59 = new TH1D("leadjetpt59","p_{T}^{Leading jet}",25,30,1250);
   leadjetpt59->SetBinContent(1,0.0003393407);
   leadjetpt59->SetBinContent(2,0.003239161);
   leadjetpt59->SetBinContent(3,0.00583049);
   leadjetpt59->SetBinContent(4,0.007573467);
   leadjetpt59->SetBinContent(5,0.00620068);
   leadjetpt59->SetBinContent(6,0.004781619);
   leadjetpt59->SetBinContent(7,0.003254586);
   leadjetpt59->SetBinContent(8,0.002313686);
   leadjetpt59->SetBinContent(9,0.001465335);
   leadjetpt59->SetBinContent(10,0.001048871);
   leadjetpt59->SetBinContent(11,0.0007249551);
   leadjetpt59->SetBinContent(12,0.0003393407);
   leadjetpt59->SetBinContent(13,0.0004627373);
   leadjetpt59->SetBinContent(14,0.0003701898);
   leadjetpt59->SetBinContent(15,0.0002313686);
   leadjetpt59->SetBinContent(16,0.0001850949);
   leadjetpt59->SetBinContent(17,0.0001696703);
   leadjetpt59->SetBinContent(18,6.16983e-05);
   leadjetpt59->SetBinContent(19,6.16983e-05);
   leadjetpt59->SetBinContent(20,6.16983e-05);
   leadjetpt59->SetBinContent(22,6.16983e-05);
   leadjetpt59->SetBinContent(23,1.542458e-05);
   leadjetpt59->SetBinContent(24,1.542458e-05);
   leadjetpt59->SetBinContent(26,3.084915e-05);
   leadjetpt59->SetBinError(1,7.234767e-05);
   leadjetpt59->SetBinError(2,0.0002235233);
   leadjetpt59->SetBinError(3,0.000299888);
   leadjetpt59->SetBinError(4,0.0003417858);
   leadjetpt59->SetBinError(5,0.0003092618);
   leadjetpt59->SetBinError(6,0.0002715777);
   leadjetpt59->SetBinError(7,0.0002240549);
   leadjetpt59->SetBinError(8,0.0001889117);
   leadjetpt59->SetBinError(9,0.0001503402);
   leadjetpt59->SetBinError(10,0.0001271943);
   leadjetpt59->SetBinError(11,0.0001057456);
   leadjetpt59->SetBinError(12,7.234767e-05);
   leadjetpt59->SetBinError(13,8.448388e-05);
   leadjetpt59->SetBinError(14,7.556468e-05);
   leadjetpt59->SetBinError(15,5.973913e-05);
   leadjetpt59->SetBinError(16,5.34323e-05);
   leadjetpt59->SetBinError(17,5.115753e-05);
   leadjetpt59->SetBinError(18,3.084915e-05);
   leadjetpt59->SetBinError(19,3.084915e-05);
   leadjetpt59->SetBinError(20,3.084915e-05);
   leadjetpt59->SetBinError(22,3.084915e-05);
   leadjetpt59->SetBinError(23,1.542458e-05);
   leadjetpt59->SetBinError(24,1.542458e-05);
   leadjetpt59->SetBinError(26,2.181364e-05);
   leadjetpt59->SetEntries(2518);

   ci = TColor::GetColor("#ff0000");
   leadjetpt59->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   leadjetpt59->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   leadjetpt59->SetMarkerColor(ci);
   leadjetpt59->SetMarkerStyle(20);
   leadjetpt59->GetXaxis()->SetTitle("leadjetpt");
   leadjetpt59->GetXaxis()->SetLabelFont(42);
   leadjetpt59->GetXaxis()->SetLabelSize(0.035);
   leadjetpt59->GetXaxis()->SetTitleSize(0.035);
   leadjetpt59->GetXaxis()->SetTitleFont(42);
   leadjetpt59->GetYaxis()->SetTitle("Events/pb");
   leadjetpt59->GetYaxis()->SetLabelFont(42);
   leadjetpt59->GetYaxis()->SetLabelSize(0.035);
   leadjetpt59->GetYaxis()->SetTitleSize(0.035);
   leadjetpt59->GetYaxis()->SetTitleFont(42);
   leadjetpt59->GetZaxis()->SetLabelFont(42);
   leadjetpt59->GetZaxis()->SetLabelSize(0.035);
   leadjetpt59->GetZaxis()->SetTitleSize(0.035);
   leadjetpt59->GetZaxis()->SetTitleFont(42);
   leadjetpt->Add(leadjetpt,"");
   
   TH1D *leadjetpt60 = new TH1D("leadjetpt60","p_{T}^{Leading jet}",25,30,1250);
   leadjetpt60->SetBinContent(1,3.35433e-05);
   leadjetpt60->SetBinContent(2,0.0002683464);
   leadjetpt60->SetBinContent(3,0.0004696061);
   leadjetpt60->SetBinContent(4,0.0003857479);
   leadjetpt60->SetBinContent(5,0.0002012598);
   leadjetpt60->SetBinContent(6,0.0001844881);
   leadjetpt60->SetBinContent(7,0.0002180314);
   leadjetpt60->SetBinContent(8,0.0001509448);
   leadjetpt60->SetBinContent(9,1.677165e-05);
   leadjetpt60->SetBinContent(10,3.35433e-05);
   leadjetpt60->SetBinContent(11,8.385824e-05);
   leadjetpt60->SetBinContent(12,3.35433e-05);
   leadjetpt60->SetBinContent(14,3.35433e-05);
   leadjetpt60->SetBinContent(16,1.677165e-05);
   leadjetpt60->SetBinContent(18,1.677165e-05);
   leadjetpt60->SetBinError(1,2.371869e-05);
   leadjetpt60->SetBinError(2,6.708659e-05);
   leadjetpt60->SetBinError(3,8.874722e-05);
   leadjetpt60->SetBinError(4,8.0434e-05);
   leadjetpt60->SetBinError(5,5.809869e-05);
   leadjetpt60->SetBinError(6,5.562526e-05);
   leadjetpt60->SetBinError(7,6.047104e-05);
   leadjetpt60->SetBinError(8,5.031494e-05);
   leadjetpt60->SetBinError(9,1.677165e-05);
   leadjetpt60->SetBinError(10,2.371869e-05);
   leadjetpt60->SetBinError(11,3.750254e-05);
   leadjetpt60->SetBinError(12,2.371869e-05);
   leadjetpt60->SetBinError(14,2.371869e-05);
   leadjetpt60->SetBinError(16,1.677165e-05);
   leadjetpt60->SetBinError(18,1.677165e-05);
   leadjetpt60->SetEntries(128);

   ci = TColor::GetColor("#0000ff");
   leadjetpt60->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   leadjetpt60->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   leadjetpt60->SetMarkerColor(ci);
   leadjetpt60->SetMarkerStyle(21);
   leadjetpt60->GetXaxis()->SetTitle("leadjetpt");
   leadjetpt60->GetXaxis()->SetLabelFont(42);
   leadjetpt60->GetXaxis()->SetLabelSize(0.035);
   leadjetpt60->GetXaxis()->SetTitleSize(0.035);
   leadjetpt60->GetXaxis()->SetTitleFont(42);
   leadjetpt60->GetYaxis()->SetTitle("Events/pb");
   leadjetpt60->GetYaxis()->SetLabelFont(42);
   leadjetpt60->GetYaxis()->SetLabelSize(0.035);
   leadjetpt60->GetYaxis()->SetTitleSize(0.035);
   leadjetpt60->GetYaxis()->SetTitleFont(42);
   leadjetpt60->GetZaxis()->SetLabelFont(42);
   leadjetpt60->GetZaxis()->SetLabelSize(0.035);
   leadjetpt60->GetZaxis()->SetTitleSize(0.035);
   leadjetpt60->GetZaxis()->SetTitleFont(42);
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
