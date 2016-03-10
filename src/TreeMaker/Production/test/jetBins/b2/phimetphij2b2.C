void phimetphij2b2()
{
//=========Macro generated from canvas: b2/phimetphij2b2/b2/phimetphij2b2
//=========  (Tue Nov 24 14:26:26 2015) by ROOT version6.02/05
   TCanvas *b2/phimetphij2b2 = new TCanvas("b2/phimetphij2b2", "b2/phimetphij2b2",60,82,700,700);
   b2/phimetphij2b2->Range(-3.926991,-5.818777,3.926991,-0.3678004);
   b2/phimetphij2b2->SetFillColor(0);
   b2/phimetphij2b2->SetBorderMode(0);
   b2/phimetphij2b2->SetBorderSize(2);
   b2/phimetphij2b2->SetLogy();
   b2/phimetphij2b2->SetFrameBorderMode(0);
   b2/phimetphij2b2->SetFrameBorderMode(0);
   
   THStack *b2/phimetphij2b2 = new THStack();
   b2/phimetphij2b2->SetName("b2/phimetphij2b2");
   b2/phimetphij2b2->SetTitle("b2/phimetphij2b2");
   
   TH1F *b2/phimetphij2b2_stack_4 = new TH1F("b2/phimetphij2b2_stack_4","b2/phimetphij2b2",20,-3.141593,3.141593);
   b2/phimetphij2b2_stack_4->SetMinimum(5.325017e-06);
   b2/phimetphij2b2_stack_4->SetMaximum(0.1222087);
   b2/phimetphij2b2_stack_4->SetDirectory(0);
   b2/phimetphij2b2_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b2/phimetphij2b2_stack_4->SetLineColor(ci);
   b2/phimetphij2b2_stack_4->GetXaxis()->SetTitle("b2/phimetphij2b2");
   b2/phimetphij2b2_stack_4->GetXaxis()->SetLabelFont(42);
   b2/phimetphij2b2_stack_4->GetXaxis()->SetLabelSize(0.035);
   b2/phimetphij2b2_stack_4->GetXaxis()->SetTitleSize(0.035);
   b2/phimetphij2b2_stack_4->GetXaxis()->SetTitleFont(42);
   b2/phimetphij2b2_stack_4->GetYaxis()->SetTitle("Events/pb");
   b2/phimetphij2b2_stack_4->GetYaxis()->SetLabelFont(42);
   b2/phimetphij2b2_stack_4->GetYaxis()->SetLabelSize(0.035);
   b2/phimetphij2b2_stack_4->GetYaxis()->SetTitleSize(0.035);
   b2/phimetphij2b2_stack_4->GetYaxis()->SetTitleFont(42);
   b2/phimetphij2b2_stack_4->GetZaxis()->SetLabelFont(42);
   b2/phimetphij2b2_stack_4->GetZaxis()->SetLabelSize(0.035);
   b2/phimetphij2b2_stack_4->GetZaxis()->SetTitleSize(0.035);
   b2/phimetphij2b2_stack_4->GetZaxis()->SetTitleFont(42);
   b2/phimetphij2b2->SetHistogram(b2/phimetphij2b2_stack_4);
   
   
   TH1D *phimetphij2b216 = new TH1D("phimetphij2b216"," #Delta_{#phi}[MET,jet_{2}]",20,-3.141593,3.141593);
   phimetphij2b216->SetBinContent(10,0.07048381);
   phimetphij2b216->SetBinContent(11,0.05316558);
   phimetphij2b216->SetBinContent(19,0.00831877);
   phimetphij2b216->SetBinError(10,0.02219806);
   phimetphij2b216->SetBinError(11,0.01881187);
   phimetphij2b216->SetBinError(19,0.00831877);
   phimetphij2b216->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   phimetphij2b216->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphij2b216->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphij2b216->SetMarkerColor(ci);
   phimetphij2b216->SetMarkerStyle(22);
   phimetphij2b216->GetXaxis()->SetTitle("phimetphij2b2");
   phimetphij2b216->GetXaxis()->SetLabelFont(42);
   phimetphij2b216->GetXaxis()->SetLabelSize(0.035);
   phimetphij2b216->GetXaxis()->SetTitleSize(0.035);
   phimetphij2b216->GetXaxis()->SetTitleFont(42);
   phimetphij2b216->GetYaxis()->SetTitle("Events/pb");
   phimetphij2b216->GetYaxis()->SetLabelFont(42);
   phimetphij2b216->GetYaxis()->SetLabelSize(0.035);
   phimetphij2b216->GetYaxis()->SetTitleSize(0.035);
   phimetphij2b216->GetYaxis()->SetTitleFont(42);
   phimetphij2b216->GetZaxis()->SetLabelFont(42);
   phimetphij2b216->GetZaxis()->SetLabelSize(0.035);
   phimetphij2b216->GetZaxis()->SetTitleSize(0.035);
   phimetphij2b216->GetZaxis()->SetTitleFont(42);
   b2/phimetphij2b2->Add(phimetphij2b2,"");
   
   TH1D *phimetphij2b217 = new TH1D("phimetphij2b217"," #Delta_{#phi}[MET,jet_{2}]",20,-3.141593,3.141593);
   phimetphij2b217->SetBinContent(1,0.05916832);
   phimetphij2b217->SetBinContent(2,0.05463243);
   phimetphij2b217->SetBinContent(3,0.03859698);
   phimetphij2b217->SetBinContent(4,0.02761271);
   phimetphij2b217->SetBinContent(5,0.02585126);
   phimetphij2b217->SetBinContent(6,0.02122452);
   phimetphij2b217->SetBinContent(7,0.01775844);
   phimetphij2b217->SetBinContent(8,0.01796438);
   phimetphij2b217->SetBinContent(9,0.0184068);
   phimetphij2b217->SetBinContent(10,0.02194795);
   phimetphij2b217->SetBinContent(11,0.01986702);
   phimetphij2b217->SetBinContent(12,0.01878822);
   phimetphij2b217->SetBinContent(13,0.01597859);
   phimetphij2b217->SetBinContent(14,0.01696482);
   phimetphij2b217->SetBinContent(15,0.02130092);
   phimetphij2b217->SetBinContent(16,0.02372527);
   phimetphij2b217->SetBinContent(17,0.02448852);
   phimetphij2b217->SetBinContent(18,0.04010968);
   phimetphij2b217->SetBinContent(19,0.05433553);
   phimetphij2b217->SetBinContent(20,0.06173888);
   phimetphij2b217->SetBinError(1,0.003699284);
   phimetphij2b217->SetBinError(2,0.003118516);
   phimetphij2b217->SetBinError(3,0.002619007);
   phimetphij2b217->SetBinError(4,0.001922369);
   phimetphij2b217->SetBinError(5,0.001605798);
   phimetphij2b217->SetBinError(6,0.001376483);
   phimetphij2b217->SetBinError(7,0.001789855);
   phimetphij2b217->SetBinError(8,0.001528349);
   phimetphij2b217->SetBinError(9,0.001213186);
   phimetphij2b217->SetBinError(10,0.001314691);
   phimetphij2b217->SetBinError(11,0.00119745);
   phimetphij2b217->SetBinError(12,0.001197195);
   phimetphij2b217->SetBinError(13,0.001135589);
   phimetphij2b217->SetBinError(14,0.001210502);
   phimetphij2b217->SetBinError(15,0.001903225);
   phimetphij2b217->SetBinError(16,0.001755217);
   phimetphij2b217->SetBinError(17,0.001567238);
   phimetphij2b217->SetBinError(18,0.003085857);
   phimetphij2b217->SetBinError(19,0.00348453);
   phimetphij2b217->SetBinError(20,0.003841127);
   phimetphij2b217->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   phimetphij2b217->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphij2b217->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphij2b217->SetMarkerColor(ci);
   phimetphij2b217->SetMarkerStyle(20);
   phimetphij2b217->GetXaxis()->SetTitle("phimetphij2b2");
   phimetphij2b217->GetXaxis()->SetLabelFont(42);
   phimetphij2b217->GetXaxis()->SetLabelSize(0.035);
   phimetphij2b217->GetXaxis()->SetTitleSize(0.035);
   phimetphij2b217->GetXaxis()->SetTitleFont(42);
   phimetphij2b217->GetYaxis()->SetTitle("Events/pb");
   phimetphij2b217->GetYaxis()->SetLabelFont(42);
   phimetphij2b217->GetYaxis()->SetLabelSize(0.035);
   phimetphij2b217->GetYaxis()->SetTitleSize(0.035);
   phimetphij2b217->GetYaxis()->SetTitleFont(42);
   phimetphij2b217->GetZaxis()->SetLabelFont(42);
   phimetphij2b217->GetZaxis()->SetLabelSize(0.035);
   phimetphij2b217->GetZaxis()->SetTitleSize(0.035);
   phimetphij2b217->GetZaxis()->SetTitleFont(42);
   b2/phimetphij2b2->Add(phimetphij2b2,"");
   
   TH1D *phimetphij2b218 = new TH1D("phimetphij2b218"," #Delta_{#phi}[MET,jet_{2}]",20,-3.141593,3.141593);
   phimetphij2b218->SetBinContent(1,0.01465795);
   phimetphij2b218->SetBinContent(2,0.01420823);
   phimetphij2b218->SetBinContent(3,0.009713113);
   phimetphij2b218->SetBinContent(4,0.00819122);
   phimetphij2b218->SetBinContent(5,0.005725228);
   phimetphij2b218->SetBinContent(6,0.004730666);
   phimetphij2b218->SetBinContent(7,0.00381621);
   phimetphij2b218->SetBinContent(8,0.003907686);
   phimetphij2b218->SetBinContent(9,0.004355261);
   phimetphij2b218->SetBinContent(10,0.004215631);
   phimetphij2b218->SetBinContent(11,0.004022095);
   phimetphij2b218->SetBinContent(12,0.00376181);
   phimetphij2b218->SetBinContent(13,0.003334845);
   phimetphij2b218->SetBinContent(14,0.003951612);
   phimetphij2b218->SetBinContent(15,0.004605674);
   phimetphij2b218->SetBinContent(16,0.005839037);
   phimetphij2b218->SetBinContent(17,0.00718103);
   phimetphij2b218->SetBinContent(18,0.009933697);
   phimetphij2b218->SetBinContent(19,0.01464868);
   phimetphij2b218->SetBinContent(20,0.0156767);
   phimetphij2b218->SetBinError(1,0.0006896083);
   phimetphij2b218->SetBinError(2,0.0006427214);
   phimetphij2b218->SetBinError(3,0.000521751);
   phimetphij2b218->SetBinError(4,0.0004432858);
   phimetphij2b218->SetBinError(5,0.0003347197);
   phimetphij2b218->SetBinError(6,0.000293608);
   phimetphij2b218->SetBinError(7,0.0002436405);
   phimetphij2b218->SetBinError(8,0.0002424901);
   phimetphij2b218->SetBinError(9,0.0002643539);
   phimetphij2b218->SetBinError(10,0.0002481236);
   phimetphij2b218->SetBinError(11,0.0002655605);
   phimetphij2b218->SetBinError(12,0.0002383605);
   phimetphij2b218->SetBinError(13,0.0002140209);
   phimetphij2b218->SetBinError(14,0.0002616493);
   phimetphij2b218->SetBinError(15,0.0002869202);
   phimetphij2b218->SetBinError(16,0.0003488444);
   phimetphij2b218->SetBinError(17,0.0004009194);
   phimetphij2b218->SetBinError(18,0.0005072733);
   phimetphij2b218->SetBinError(19,0.0006853955);
   phimetphij2b218->SetBinError(20,0.0007001341);
   phimetphij2b218->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   phimetphij2b218->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphij2b218->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphij2b218->SetMarkerColor(ci);
   phimetphij2b218->SetMarkerStyle(21);
   phimetphij2b218->GetXaxis()->SetTitle("phimetphij2b2");
   phimetphij2b218->GetXaxis()->SetLabelFont(42);
   phimetphij2b218->GetXaxis()->SetLabelSize(0.035);
   phimetphij2b218->GetXaxis()->SetTitleSize(0.035);
   phimetphij2b218->GetXaxis()->SetTitleFont(42);
   phimetphij2b218->GetYaxis()->SetTitle("Events/pb");
   phimetphij2b218->GetYaxis()->SetLabelFont(42);
   phimetphij2b218->GetYaxis()->SetLabelSize(0.035);
   phimetphij2b218->GetYaxis()->SetTitleSize(0.035);
   phimetphij2b218->GetYaxis()->SetTitleFont(42);
   phimetphij2b218->GetZaxis()->SetLabelFont(42);
   phimetphij2b218->GetZaxis()->SetLabelSize(0.035);
   phimetphij2b218->GetZaxis()->SetTitleSize(0.035);
   phimetphij2b218->GetZaxis()->SetTitleFont(42);
   b2/phimetphij2b2->Add(phimetphij2b2,"");
   
   TH1D *phimetphij2b219 = new TH1D("phimetphij2b219"," #Delta_{#phi}[MET,jet_{2}]",20,-3.141593,3.141593);
   phimetphij2b219->SetBinContent(1,0.00165043);
   phimetphij2b219->SetBinContent(2,0.001604156);
   phimetphij2b219->SetBinContent(3,0.0009254746);
   phimetphij2b219->SetBinContent(4,0.0008329271);
   phimetphij2b219->SetBinContent(5,0.0004627373);
   phimetphij2b219->SetBinContent(6,0.0004627373);
   phimetphij2b219->SetBinContent(7,0.0005707093);
   phimetphij2b219->SetBinContent(8,0.0003547652);
   phimetphij2b219->SetBinContent(9,0.0003701898);
   phimetphij2b219->SetBinContent(10,0.0004781619);
   phimetphij2b219->SetBinContent(11,0.0002930669);
   phimetphij2b219->SetBinContent(12,0.000401039);
   phimetphij2b219->SetBinContent(13,0.0003701898);
   phimetphij2b219->SetBinContent(14,0.0003239161);
   phimetphij2b219->SetBinContent(15,0.0005398602);
   phimetphij2b219->SetBinContent(16,0.000616983);
   phimetphij2b219->SetBinContent(17,0.0008175025);
   phimetphij2b219->SetBinContent(18,0.001018022);
   phimetphij2b219->SetBinContent(19,0.0018201);
   phimetphij2b219->SetBinContent(20,0.002020619);
   phimetphij2b219->SetBinError(1,0.0001595531);
   phimetphij2b219->SetBinError(2,0.0001573004);
   phimetphij2b219->SetBinError(3,0.0001194783);
   phimetphij2b219->SetBinError(4,0.000113347);
   phimetphij2b219->SetBinError(5,8.448388e-05);
   phimetphij2b219->SetBinError(6,8.448388e-05);
   phimetphij2b219->SetBinError(7,9.382403e-05);
   phimetphij2b219->SetBinError(8,7.397367e-05);
   phimetphij2b219->SetBinError(9,7.556468e-05);
   phimetphij2b219->SetBinError(10,8.58804e-05);
   phimetphij2b219->SetBinError(11,6.723417e-05);
   phimetphij2b219->SetBinError(12,7.865021e-05);
   phimetphij2b219->SetBinError(13,7.556468e-05);
   phimetphij2b219->SetBinError(14,7.068429e-05);
   phimetphij2b219->SetBinError(15,9.125302e-05);
   phimetphij2b219->SetBinError(16,9.755358e-05);
   phimetphij2b219->SetBinError(17,0.0001122926);
   phimetphij2b219->SetBinError(18,0.0001253098);
   phimetphij2b219->SetBinError(19,0.0001675538);
   phimetphij2b219->SetBinError(20,0.0001765423);
   phimetphij2b219->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   phimetphij2b219->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphij2b219->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphij2b219->SetMarkerColor(ci);
   phimetphij2b219->SetMarkerStyle(20);
   phimetphij2b219->GetXaxis()->SetTitle("phimetphij2b2");
   phimetphij2b219->GetXaxis()->SetLabelFont(42);
   phimetphij2b219->GetXaxis()->SetLabelSize(0.035);
   phimetphij2b219->GetXaxis()->SetTitleSize(0.035);
   phimetphij2b219->GetXaxis()->SetTitleFont(42);
   phimetphij2b219->GetYaxis()->SetTitle("Events/pb");
   phimetphij2b219->GetYaxis()->SetLabelFont(42);
   phimetphij2b219->GetYaxis()->SetLabelSize(0.035);
   phimetphij2b219->GetYaxis()->SetTitleSize(0.035);
   phimetphij2b219->GetYaxis()->SetTitleFont(42);
   phimetphij2b219->GetZaxis()->SetLabelFont(42);
   phimetphij2b219->GetZaxis()->SetLabelSize(0.035);
   phimetphij2b219->GetZaxis()->SetTitleSize(0.035);
   phimetphij2b219->GetZaxis()->SetTitleFont(42);
   b2/phimetphij2b2->Add(phimetphij2b2,"");
   
   TH1D *phimetphij2b220 = new TH1D("phimetphij2b220"," #Delta_{#phi}[MET,jet_{2}]",20,-3.141593,3.141593);
   phimetphij2b220->SetBinContent(10,1.677165e-05);
   phimetphij2b220->SetBinError(10,1.677165e-05);
   phimetphij2b220->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   phimetphij2b220->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphij2b220->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphij2b220->SetMarkerColor(ci);
   phimetphij2b220->SetMarkerStyle(21);
   phimetphij2b220->GetXaxis()->SetTitle("phimetphij2b2");
   phimetphij2b220->GetXaxis()->SetLabelFont(42);
   phimetphij2b220->GetXaxis()->SetLabelSize(0.035);
   phimetphij2b220->GetXaxis()->SetTitleSize(0.035);
   phimetphij2b220->GetXaxis()->SetTitleFont(42);
   phimetphij2b220->GetYaxis()->SetTitle("Events/pb");
   phimetphij2b220->GetYaxis()->SetLabelFont(42);
   phimetphij2b220->GetYaxis()->SetLabelSize(0.035);
   phimetphij2b220->GetYaxis()->SetTitleSize(0.035);
   phimetphij2b220->GetYaxis()->SetTitleFont(42);
   phimetphij2b220->GetZaxis()->SetLabelFont(42);
   phimetphij2b220->GetZaxis()->SetLabelSize(0.035);
   phimetphij2b220->GetZaxis()->SetTitleSize(0.035);
   phimetphij2b220->GetZaxis()->SetTitleFont(42);
   b2/phimetphij2b2->Add(phimetphij2b2,"");
   b2/phimetphij2b2->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.2838218,0.9342857,0.7161782,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b2/phimetphij2b2");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimetphij2b2","b2/phimetphij2b2_QCD_b2/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphij2b2","b2/phimetphij2b2_WJetsToLNu_b2/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphij2b2","b2/phimetphij2b2_ZJetsToNuNu_b2/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphij2b2","b2/phimetphij2b2_signal_b2/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphij2b2","b2/phimetphij2b2_ttbar_b2/","lp");

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
   b2/phimetphij2b2->Modified();
   b2/phimetphij2b2->cd();
   b2/phimetphij2b2->SetSelected(b2/phimetphij2b2);
}
