void phij1phij2b2()
{
//=========Macro generated from canvas: b2/phij1phij2b2/b2/phij1phij2b2
//=========  (Tue Nov 24 14:26:27 2015) by ROOT version6.02/05
   TCanvas *b2/phij1phij2b2 = new TCanvas("b2/phij1phij2b2", "b2/phij1phij2b2",100,122,700,700);
   b2/phij1phij2b2->Range(-3.926991,-5.830905,3.926991,-0.3012521);
   b2/phij1phij2b2->SetFillColor(0);
   b2/phij1phij2b2->SetBorderMode(0);
   b2/phij1phij2b2->SetBorderSize(2);
   b2/phij1phij2b2->SetLogy();
   b2/phij1phij2b2->SetFrameBorderMode(0);
   b2/phij1phij2b2->SetFrameBorderMode(0);
   
   THStack *b2/phij1phij2b2 = new THStack();
   b2/phij1phij2b2->SetName("b2/phij1phij2b2");
   b2/phij1phij2b2->SetTitle("b2/phij1phij2b2");
   
   TH1F *b2/phij1phij2b2_stack_6 = new TH1F("b2/phij1phij2b2_stack_6","b2/phij1phij2b2",20,-3.141593,3.141593);
   b2/phij1phij2b2_stack_6->SetMinimum(5.273034e-06);
   b2/phij1phij2b2_stack_6->SetMaximum(0.1398887);
   b2/phij1phij2b2_stack_6->SetDirectory(0);
   b2/phij1phij2b2_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b2/phij1phij2b2_stack_6->SetLineColor(ci);
   b2/phij1phij2b2_stack_6->GetXaxis()->SetTitle("b2/phij1phij2b2");
   b2/phij1phij2b2_stack_6->GetXaxis()->SetLabelFont(42);
   b2/phij1phij2b2_stack_6->GetXaxis()->SetLabelSize(0.035);
   b2/phij1phij2b2_stack_6->GetXaxis()->SetTitleSize(0.035);
   b2/phij1phij2b2_stack_6->GetXaxis()->SetTitleFont(42);
   b2/phij1phij2b2_stack_6->GetYaxis()->SetTitle("Events/pb");
   b2/phij1phij2b2_stack_6->GetYaxis()->SetLabelFont(42);
   b2/phij1phij2b2_stack_6->GetYaxis()->SetLabelSize(0.035);
   b2/phij1phij2b2_stack_6->GetYaxis()->SetTitleSize(0.035);
   b2/phij1phij2b2_stack_6->GetYaxis()->SetTitleFont(42);
   b2/phij1phij2b2_stack_6->GetZaxis()->SetLabelFont(42);
   b2/phij1phij2b2_stack_6->GetZaxis()->SetLabelSize(0.035);
   b2/phij1phij2b2_stack_6->GetZaxis()->SetTitleSize(0.035);
   b2/phij1phij2b2_stack_6->GetZaxis()->SetTitleFont(42);
   b2/phij1phij2b2->SetHistogram(b2/phij1phij2b2_stack_6);
   
   
   TH1D *phij1phij2b226 = new TH1D("phij1phij2b226"," #Delta_{#phi}[jet_{1},jet_{2}]",20,-3.141593,3.141593);
   phij1phij2b226->SetBinContent(1,0.04348543);
   phij1phij2b226->SetBinContent(9,0.00831877);
   phij1phij2b226->SetBinContent(20,0.08016396);
   phij1phij2b226->SetBinError(1,0.01684511);
   phij1phij2b226->SetBinError(9,0.00831877);
   phij1phij2b226->SetBinError(20,0.02372514);
   phij1phij2b226->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   phij1phij2b226->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phij1phij2b226->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phij1phij2b226->SetMarkerColor(ci);
   phij1phij2b226->SetMarkerStyle(22);
   phij1phij2b226->GetXaxis()->SetTitle("phij1phij2b2");
   phij1phij2b226->GetXaxis()->SetLabelFont(42);
   phij1phij2b226->GetXaxis()->SetLabelSize(0.035);
   phij1phij2b226->GetXaxis()->SetTitleSize(0.035);
   phij1phij2b226->GetXaxis()->SetTitleFont(42);
   phij1phij2b226->GetYaxis()->SetTitle("Events/pb");
   phij1phij2b226->GetYaxis()->SetLabelFont(42);
   phij1phij2b226->GetYaxis()->SetLabelSize(0.035);
   phij1phij2b226->GetYaxis()->SetTitleSize(0.035);
   phij1phij2b226->GetYaxis()->SetTitleFont(42);
   phij1phij2b226->GetZaxis()->SetLabelFont(42);
   phij1phij2b226->GetZaxis()->SetLabelSize(0.035);
   phij1phij2b226->GetZaxis()->SetTitleSize(0.035);
   phij1phij2b226->GetZaxis()->SetTitleFont(42);
   b2/phij1phij2b2->Add(phij1phij2b2,"");
   
   TH1D *phij1phij2b227 = new TH1D("phij1phij2b227"," #Delta_{#phi}[jet_{1},jet_{2}]",20,-3.141593,3.141593);
   phij1phij2b227->SetBinContent(1,0.02641452);
   phij1phij2b227->SetBinContent(2,0.02383433);
   phij1phij2b227->SetBinContent(3,0.02017827);
   phij1phij2b227->SetBinContent(4,0.02375138);
   phij1phij2b227->SetBinContent(5,0.02454583);
   phij1phij2b227->SetBinContent(6,0.02503243);
   phij1phij2b227->SetBinContent(7,0.02800337);
   phij1phij2b227->SetBinContent(8,0.03387312);
   phij1phij2b227->SetBinContent(9,0.0498424);
   phij1phij2b227->SetBinContent(10,0.04064194);
   phij1phij2b227->SetBinContent(11,0.04266594);
   phij1phij2b227->SetBinContent(12,0.04645834);
   phij1phij2b227->SetBinContent(13,0.03526938);
   phij1phij2b227->SetBinContent(14,0.02828415);
   phij1phij2b227->SetBinContent(15,0.02581933);
   phij1phij2b227->SetBinContent(16,0.02232791);
   phij1phij2b227->SetBinContent(17,0.02541077);
   phij1phij2b227->SetBinContent(18,0.02338089);
   phij1phij2b227->SetBinContent(19,0.02575906);
   phij1phij2b227->SetBinContent(20,0.02896789);
   phij1phij2b227->SetBinError(1,0.001349829);
   phij1phij2b227->SetBinError(2,0.001347092);
   phij1phij2b227->SetBinError(3,0.001223747);
   phij1phij2b227->SetBinError(4,0.001721636);
   phij1phij2b227->SetBinError(5,0.00204545);
   phij1phij2b227->SetBinError(6,0.001885492);
   phij1phij2b227->SetBinError(7,0.002382703);
   phij1phij2b227->SetBinError(8,0.002698022);
   phij1phij2b227->SetBinError(9,0.00353646);
   phij1phij2b227->SetBinError(10,0.003127249);
   phij1phij2b227->SetBinError(11,0.003422269);
   phij1phij2b227->SetBinError(12,0.002823467);
   phij1phij2b227->SetBinError(13,0.002575745);
   phij1phij2b227->SetBinError(14,0.002021591);
   phij1phij2b227->SetBinError(15,0.001923218);
   phij1phij2b227->SetBinError(16,0.001509358);
   phij1phij2b227->SetBinError(17,0.001543331);
   phij1phij2b227->SetBinError(18,0.001864507);
   phij1phij2b227->SetBinError(19,0.001704098);
   phij1phij2b227->SetBinError(20,0.001467369);
   phij1phij2b227->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   phij1phij2b227->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phij1phij2b227->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phij1phij2b227->SetMarkerColor(ci);
   phij1phij2b227->SetMarkerStyle(20);
   phij1phij2b227->GetXaxis()->SetTitle("phij1phij2b2");
   phij1phij2b227->GetXaxis()->SetLabelFont(42);
   phij1phij2b227->GetXaxis()->SetLabelSize(0.035);
   phij1phij2b227->GetXaxis()->SetTitleSize(0.035);
   phij1phij2b227->GetXaxis()->SetTitleFont(42);
   phij1phij2b227->GetYaxis()->SetTitle("Events/pb");
   phij1phij2b227->GetYaxis()->SetLabelFont(42);
   phij1phij2b227->GetYaxis()->SetLabelSize(0.035);
   phij1phij2b227->GetYaxis()->SetTitleSize(0.035);
   phij1phij2b227->GetYaxis()->SetTitleFont(42);
   phij1phij2b227->GetZaxis()->SetLabelFont(42);
   phij1phij2b227->GetZaxis()->SetLabelSize(0.035);
   phij1phij2b227->GetZaxis()->SetTitleSize(0.035);
   phij1phij2b227->GetZaxis()->SetTitleFont(42);
   b2/phij1phij2b2->Add(phij1phij2b2,"");
   
   TH1D *phij1phij2b228 = new TH1D("phij1phij2b228"," #Delta_{#phi}[jet_{1},jet_{2}]",20,-3.141593,3.141593);
   phij1phij2b228->SetBinContent(1,0.005446647);
   phij1phij2b228->SetBinContent(2,0.004980246);
   phij1phij2b228->SetBinContent(3,0.00469228);
   phij1phij2b228->SetBinContent(4,0.005690209);
   phij1phij2b228->SetBinContent(5,0.005807848);
   phij1phij2b228->SetBinContent(6,0.006340951);
   phij1phij2b228->SetBinContent(7,0.008058976);
   phij1phij2b228->SetBinContent(8,0.00904283);
   phij1phij2b228->SetBinContent(9,0.01260672);
   phij1phij2b228->SetBinContent(10,0.01021878);
   phij1phij2b228->SetBinContent(11,0.009863239);
   phij1phij2b228->SetBinContent(12,0.01206355);
   phij1phij2b228->SetBinContent(13,0.009683176);
   phij1phij2b228->SetBinContent(14,0.00740724);
   phij1phij2b228->SetBinContent(15,0.006736927);
   phij1phij2b228->SetBinContent(16,0.00615049);
   phij1phij2b228->SetBinContent(17,0.005030668);
   phij1phij2b228->SetBinContent(18,0.005464707);
   phij1phij2b228->SetBinContent(19,0.005873167);
   phij1phij2b228->SetBinContent(20,0.005317708);
   phij1phij2b228->SetBinError(1,0.000282247);
   phij1phij2b228->SetBinError(2,0.0002646438);
   phij1phij2b228->SetBinError(3,0.0002631481);
   phij1phij2b228->SetBinError(4,0.0003185106);
   phij1phij2b228->SetBinError(5,0.000360119);
   phij1phij2b228->SetBinError(6,0.0003802933);
   phij1phij2b228->SetBinError(7,0.0004673082);
   phij1phij2b228->SetBinError(8,0.0005318282);
   phij1phij2b228->SetBinError(9,0.0006266124);
   phij1phij2b228->SetBinError(10,0.0005750613);
   phij1phij2b228->SetBinError(11,0.000550249);
   phij1phij2b228->SetBinError(12,0.0006059658);
   phij1phij2b228->SetBinError(13,0.0005505817);
   phij1phij2b228->SetBinError(14,0.0004488934);
   phij1phij2b228->SetBinError(15,0.0004037662);
   phij1phij2b228->SetBinError(16,0.0003722155);
   phij1phij2b228->SetBinError(17,0.0002957612);
   phij1phij2b228->SetBinError(18,0.0002913492);
   phij1phij2b228->SetBinError(19,0.0002945723);
   phij1phij2b228->SetBinError(20,0.0002725583);
   phij1phij2b228->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   phij1phij2b228->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phij1phij2b228->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phij1phij2b228->SetMarkerColor(ci);
   phij1phij2b228->SetMarkerStyle(21);
   phij1phij2b228->GetXaxis()->SetTitle("phij1phij2b2");
   phij1phij2b228->GetXaxis()->SetLabelFont(42);
   phij1phij2b228->GetXaxis()->SetLabelSize(0.035);
   phij1phij2b228->GetXaxis()->SetTitleSize(0.035);
   phij1phij2b228->GetXaxis()->SetTitleFont(42);
   phij1phij2b228->GetYaxis()->SetTitle("Events/pb");
   phij1phij2b228->GetYaxis()->SetLabelFont(42);
   phij1phij2b228->GetYaxis()->SetLabelSize(0.035);
   phij1phij2b228->GetYaxis()->SetTitleSize(0.035);
   phij1phij2b228->GetYaxis()->SetTitleFont(42);
   phij1phij2b228->GetZaxis()->SetLabelFont(42);
   phij1phij2b228->GetZaxis()->SetLabelSize(0.035);
   phij1phij2b228->GetZaxis()->SetTitleSize(0.035);
   phij1phij2b228->GetZaxis()->SetTitleFont(42);
   b2/phij1phij2b2->Add(phij1phij2b2,"");
   
   TH1D *phij1phij2b229 = new TH1D("phij1phij2b229"," #Delta_{#phi}[jet_{1},jet_{2}]",20,-3.141593,3.141593);
   phij1phij2b229->SetBinContent(1,0.000401039);
   phij1phij2b229->SetBinContent(2,0.0004318881);
   phij1phij2b229->SetBinContent(3,0.0005552847);
   phij1phij2b229->SetBinContent(4,0.000616983);
   phij1phij2b229->SetBinContent(5,0.0006941059);
   phij1phij2b229->SetBinContent(6,0.0007558042);
   phij1phij2b229->SetBinContent(7,0.0006941059);
   phij1phij2b229->SetBinContent(8,0.001156843);
   phij1phij2b229->SetBinContent(9,0.001588731);
   phij1phij2b229->SetBinContent(10,0.001264815);
   phij1phij2b229->SetBinContent(11,0.00128024);
   phij1phij2b229->SetBinContent(12,0.001203117);
   phij1phij2b229->SetBinContent(13,0.001064296);
   phij1phij2b229->SetBinContent(14,0.0007095305);
   phij1phij2b229->SetBinContent(15,0.0007866534);
   phij1phij2b229->SetBinContent(16,0.0006324076);
   phij1phij2b229->SetBinContent(17,0.0005398602);
   phij1phij2b229->SetBinContent(18,0.0005552847);
   phij1phij2b229->SetBinContent(19,0.0005707093);
   phij1phij2b229->SetBinContent(20,0.0004318881);
   phij1phij2b229->SetBinError(1,7.865021e-05);
   phij1phij2b229->SetBinError(2,8.161918e-05);
   phij1phij2b229->SetBinError(3,9.254746e-05);
   phij1phij2b229->SetBinError(4,9.755358e-05);
   phij1phij2b229->SetBinError(5,0.0001034712);
   phij1phij2b229->SetBinError(6,0.000107972);
   phij1phij2b229->SetBinError(7,0.0001034712);
   phij1phij2b229->SetBinError(8,0.0001335807);
   phij1phij2b229->SetBinError(9,0.0001565423);
   phij1phij2b229->SetBinError(10,0.0001396755);
   phij1phij2b229->SetBinError(11,0.0001405246);
   phij1phij2b229->SetBinError(12,0.0001362262);
   phij1phij2b229->SetBinError(13,0.0001281262);
   phij1phij2b229->SetBinError(14,0.0001046146);
   phij1phij2b229->SetBinError(15,0.0001101535);
   phij1phij2b229->SetBinError(16,9.876548e-05);
   phij1phij2b229->SetBinError(17,9.125302e-05);
   phij1phij2b229->SetBinError(18,9.254746e-05);
   phij1phij2b229->SetBinError(19,9.382403e-05);
   phij1phij2b229->SetBinError(20,8.161918e-05);
   phij1phij2b229->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   phij1phij2b229->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phij1phij2b229->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phij1phij2b229->SetMarkerColor(ci);
   phij1phij2b229->SetMarkerStyle(20);
   phij1phij2b229->GetXaxis()->SetTitle("phij1phij2b2");
   phij1phij2b229->GetXaxis()->SetLabelFont(42);
   phij1phij2b229->GetXaxis()->SetLabelSize(0.035);
   phij1phij2b229->GetXaxis()->SetTitleSize(0.035);
   phij1phij2b229->GetXaxis()->SetTitleFont(42);
   phij1phij2b229->GetYaxis()->SetTitle("Events/pb");
   phij1phij2b229->GetYaxis()->SetLabelFont(42);
   phij1phij2b229->GetYaxis()->SetLabelSize(0.035);
   phij1phij2b229->GetYaxis()->SetTitleSize(0.035);
   phij1phij2b229->GetYaxis()->SetTitleFont(42);
   phij1phij2b229->GetZaxis()->SetLabelFont(42);
   phij1phij2b229->GetZaxis()->SetLabelSize(0.035);
   phij1phij2b229->GetZaxis()->SetTitleSize(0.035);
   phij1phij2b229->GetZaxis()->SetTitleFont(42);
   b2/phij1phij2b2->Add(phij1phij2b2,"");
   
   TH1D *phij1phij2b230 = new TH1D("phij1phij2b230"," #Delta_{#phi}[jet_{1},jet_{2}]",20,-3.141593,3.141593);
   phij1phij2b230->SetBinContent(20,1.677165e-05);
   phij1phij2b230->SetBinError(20,1.677165e-05);
   phij1phij2b230->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   phij1phij2b230->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phij1phij2b230->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phij1phij2b230->SetMarkerColor(ci);
   phij1phij2b230->SetMarkerStyle(21);
   phij1phij2b230->GetXaxis()->SetTitle("phij1phij2b2");
   phij1phij2b230->GetXaxis()->SetLabelFont(42);
   phij1phij2b230->GetXaxis()->SetLabelSize(0.035);
   phij1phij2b230->GetXaxis()->SetTitleSize(0.035);
   phij1phij2b230->GetXaxis()->SetTitleFont(42);
   phij1phij2b230->GetYaxis()->SetTitle("Events/pb");
   phij1phij2b230->GetYaxis()->SetLabelFont(42);
   phij1phij2b230->GetYaxis()->SetLabelSize(0.035);
   phij1phij2b230->GetYaxis()->SetTitleSize(0.035);
   phij1phij2b230->GetYaxis()->SetTitleFont(42);
   phij1phij2b230->GetZaxis()->SetLabelFont(42);
   phij1phij2b230->GetZaxis()->SetLabelSize(0.035);
   phij1phij2b230->GetZaxis()->SetTitleSize(0.035);
   phij1phij2b230->GetZaxis()->SetTitleFont(42);
   b2/phij1phij2b2->Add(phij1phij2b2,"");
   b2/phij1phij2b2->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3075287,0.9342857,0.6924713,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b2/phij1phij2b2");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phij1phij2b2","b2/phij1phij2b2_QCD_b2/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phij1phij2b2","b2/phij1phij2b2_WJetsToLNu_b2/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phij1phij2b2","b2/phij1phij2b2_ZJetsToNuNu_b2/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phij1phij2b2","b2/phij1phij2b2_signal_b2/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phij1phij2b2","b2/phij1phij2b2_ttbar_b2/","lp");

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
   b2/phij1phij2b2->Modified();
   b2/phij1phij2b2->cd();
   b2/phij1phij2b2->SetSelected(b2/phij1phij2b2);
}
