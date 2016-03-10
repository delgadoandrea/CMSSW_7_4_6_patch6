void phijet1phijet2()
{
//=========Macro generated from canvas: phijet1phijet2/phijet1phijet2
//=========  (Fri Nov 13 11:38:56 2015) by ROOT version6.02/05
   TCanvas *phijet1phijet2 = new TCanvas("phijet1phijet2", "phijet1phijet2",300,322,700,700);
   phijet1phijet2->Range(-0.3926991,-4.289404,3.534292,0.2146354);
   phijet1phijet2->SetFillColor(0);
   phijet1phijet2->SetBorderMode(0);
   phijet1phijet2->SetBorderSize(2);
   phijet1phijet2->SetLogy();
   phijet1phijet2->SetFrameBorderMode(0);
   phijet1phijet2->SetFrameBorderMode(0);
   
   THStack *phijet1phijet2 = new THStack();
   phijet1phijet2->SetName("phijet1phijet2");
   phijet1phijet2->SetTitle("phijet1phijet2");
   
   TH1F *phijet1phijet2_stack_16 = new TH1F("phijet1phijet2_stack_16","phijet1phijet2",10,0,3.141593);
   phijet1phijet2_stack_16->SetMinimum(0.0001448773);
   phijet1phijet2_stack_16->SetMaximum(0.581074);
   phijet1phijet2_stack_16->SetDirectory(0);
   phijet1phijet2_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   phijet1phijet2_stack_16->SetLineColor(ci);
   phijet1phijet2_stack_16->GetXaxis()->SetTitle("phijet1phijet2");
   phijet1phijet2_stack_16->GetXaxis()->SetLabelFont(42);
   phijet1phijet2_stack_16->GetXaxis()->SetLabelSize(0.035);
   phijet1phijet2_stack_16->GetXaxis()->SetTitleSize(0.035);
   phijet1phijet2_stack_16->GetXaxis()->SetTitleFont(42);
   phijet1phijet2_stack_16->GetYaxis()->SetTitle("Events/pb");
   phijet1phijet2_stack_16->GetYaxis()->SetLabelFont(42);
   phijet1phijet2_stack_16->GetYaxis()->SetLabelSize(0.035);
   phijet1phijet2_stack_16->GetYaxis()->SetTitleSize(0.035);
   phijet1phijet2_stack_16->GetYaxis()->SetTitleFont(42);
   phijet1phijet2_stack_16->GetZaxis()->SetLabelFont(42);
   phijet1phijet2_stack_16->GetZaxis()->SetLabelSize(0.035);
   phijet1phijet2_stack_16->GetZaxis()->SetTitleSize(0.035);
   phijet1phijet2_stack_16->GetZaxis()->SetTitleFont(42);
   phijet1phijet2->SetHistogram(phijet1phijet2_stack_16);
   
   
   TH1D *phijet1phijet276 = new TH1D("phijet1phijet276"," #Delta_{#phi}[jet_{1},jet_{2}]",10,0,3.141593);
   phijet1phijet276->SetBinContent(1,0.04159385);
   phijet1phijet276->SetBinContent(6,0.00272276);
   phijet1phijet276->SetBinContent(10,0.1661532);
   phijet1phijet276->SetBinError(1,0.01860134);
   phijet1phijet276->SetBinError(6,0.00136138);
   phijet1phijet276->SetBinError(10,0.03166466);
   phijet1phijet276->SetEntries(96);

   ci = TColor::GetColor("#00cc00");
   phijet1phijet276->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phijet1phijet276->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phijet1phijet276->SetMarkerColor(ci);
   phijet1phijet276->SetMarkerStyle(22);
   phijet1phijet276->GetXaxis()->SetTitle("phijet1phijet2");
   phijet1phijet276->GetXaxis()->SetLabelFont(42);
   phijet1phijet276->GetXaxis()->SetLabelSize(0.035);
   phijet1phijet276->GetXaxis()->SetTitleSize(0.035);
   phijet1phijet276->GetXaxis()->SetTitleFont(42);
   phijet1phijet276->GetYaxis()->SetTitle("Events/pb");
   phijet1phijet276->GetYaxis()->SetLabelFont(42);
   phijet1phijet276->GetYaxis()->SetLabelSize(0.035);
   phijet1phijet276->GetYaxis()->SetTitleSize(0.035);
   phijet1phijet276->GetYaxis()->SetTitleFont(42);
   phijet1phijet276->GetZaxis()->SetLabelFont(42);
   phijet1phijet276->GetZaxis()->SetLabelSize(0.035);
   phijet1phijet276->GetZaxis()->SetTitleSize(0.035);
   phijet1phijet276->GetZaxis()->SetTitleFont(42);
   phijet1phijet2->Add(phijet1phijet2,"");
   
   TH1D *phijet1phijet277 = new TH1D("phijet1phijet277"," #Delta_{#phi}[jet_{1},jet_{2}]",10,0,3.141593);
   phijet1phijet277->SetBinContent(1,0.2845727);
   phijet1phijet277->SetBinContent(2,0.3631247);
   phijet1phijet277->SetBinContent(3,0.2600642);
   phijet1phijet277->SetBinContent(4,0.2222367);
   phijet1phijet277->SetBinContent(5,0.2332488);
   phijet1phijet277->SetBinContent(6,0.2055855);
   phijet1phijet277->SetBinContent(7,0.219873);
   phijet1phijet277->SetBinContent(8,0.2131798);
   phijet1phijet277->SetBinContent(9,0.2214929);
   phijet1phijet277->SetBinContent(10,0.2220375);
   phijet1phijet277->SetBinError(1,0.006965696);
   phijet1phijet277->SetBinError(2,0.007624314);
   phijet1phijet277->SetBinError(3,0.005732605);
   phijet1phijet277->SetBinError(4,0.005390435);
   phijet1phijet277->SetBinError(5,0.005340585);
   phijet1phijet277->SetBinError(6,0.00429369);
   phijet1phijet277->SetBinError(7,0.004064138);
   phijet1phijet277->SetBinError(8,0.003624475);
   phijet1phijet277->SetBinError(9,0.003469532);
   phijet1phijet277->SetBinError(10,0.002987769);
   phijet1phijet277->SetEntries(80246);

   ci = TColor::GetColor("#00ffff");
   phijet1phijet277->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phijet1phijet277->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phijet1phijet277->SetMarkerColor(ci);
   phijet1phijet277->SetMarkerStyle(20);
   phijet1phijet277->GetXaxis()->SetTitle("phijet1phijet2");
   phijet1phijet277->GetXaxis()->SetLabelFont(42);
   phijet1phijet277->GetXaxis()->SetLabelSize(0.035);
   phijet1phijet277->GetXaxis()->SetTitleSize(0.035);
   phijet1phijet277->GetXaxis()->SetTitleFont(42);
   phijet1phijet277->GetYaxis()->SetTitle("Events/pb");
   phijet1phijet277->GetYaxis()->SetLabelFont(42);
   phijet1phijet277->GetYaxis()->SetLabelSize(0.035);
   phijet1phijet277->GetYaxis()->SetTitleSize(0.035);
   phijet1phijet277->GetYaxis()->SetTitleFont(42);
   phijet1phijet277->GetZaxis()->SetLabelFont(42);
   phijet1phijet277->GetZaxis()->SetLabelSize(0.035);
   phijet1phijet277->GetZaxis()->SetTitleSize(0.035);
   phijet1phijet277->GetZaxis()->SetTitleFont(42);
   phijet1phijet2->Add(phijet1phijet2,"");
   
   TH1D *phijet1phijet278 = new TH1D("phijet1phijet278"," #Delta_{#phi}[jet_{1},jet_{2}]",10,0,3.141593);
   phijet1phijet278->SetBinContent(1,0.01169122);
   phijet1phijet278->SetBinContent(2,0.01373452);
   phijet1phijet278->SetBinContent(3,0.009471895);
   phijet1phijet278->SetBinContent(4,0.009283341);
   phijet1phijet278->SetBinContent(5,0.007326895);
   phijet1phijet278->SetBinContent(6,0.007218019);
   phijet1phijet278->SetBinContent(7,0.007532211);
   phijet1phijet278->SetBinContent(8,0.007544684);
   phijet1phijet278->SetBinContent(9,0.007601231);
   phijet1phijet278->SetBinContent(10,0.008211399);
   phijet1phijet278->SetBinError(1,0.0005496143);
   phijet1phijet278->SetBinError(2,0.0005738914);
   phijet1phijet278->SetBinError(3,0.0004952658);
   phijet1phijet278->SetBinError(4,0.0004442704);
   phijet1phijet278->SetBinError(5,0.000347445);
   phijet1phijet278->SetBinError(6,0.0003460087);
   phijet1phijet278->SetBinError(7,0.0002991747);
   phijet1phijet278->SetBinError(8,0.0002616467);
   phijet1phijet278->SetBinError(9,0.000212726);
   phijet1phijet278->SetBinError(10,0.0002376117);
   phijet1phijet278->SetEntries(23264);

   ci = TColor::GetColor("#ffcc00");
   phijet1phijet278->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phijet1phijet278->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phijet1phijet278->SetMarkerColor(ci);
   phijet1phijet278->SetMarkerStyle(21);
   phijet1phijet278->GetXaxis()->SetTitle("phijet1phijet2");
   phijet1phijet278->GetXaxis()->SetLabelFont(42);
   phijet1phijet278->GetXaxis()->SetLabelSize(0.035);
   phijet1phijet278->GetXaxis()->SetTitleSize(0.035);
   phijet1phijet278->GetXaxis()->SetTitleFont(42);
   phijet1phijet278->GetYaxis()->SetTitle("Events/pb");
   phijet1phijet278->GetYaxis()->SetLabelFont(42);
   phijet1phijet278->GetYaxis()->SetLabelSize(0.035);
   phijet1phijet278->GetYaxis()->SetTitleSize(0.035);
   phijet1phijet278->GetYaxis()->SetTitleFont(42);
   phijet1phijet278->GetZaxis()->SetLabelFont(42);
   phijet1phijet278->GetZaxis()->SetLabelSize(0.035);
   phijet1phijet278->GetZaxis()->SetTitleSize(0.035);
   phijet1phijet278->GetZaxis()->SetTitleFont(42);
   phijet1phijet2->Add(phijet1phijet2,"");
   
   TH1D *phijet1phijet279 = new TH1D("phijet1phijet279"," #Delta_{#phi}[jet_{1},jet_{2}]",10,0,3.141593);
   phijet1phijet279->SetBinContent(1,0.01581019);
   phijet1phijet279->SetBinContent(2,0.01759944);
   phijet1phijet279->SetBinContent(3,0.01548627);
   phijet1phijet279->SetBinContent(4,0.009902578);
   phijet1phijet279->SetBinContent(5,0.01129079);
   phijet1phijet279->SetBinContent(6,0.00836012);
   phijet1phijet279->SetBinContent(7,0.008267573);
   phijet1phijet279->SetBinContent(8,0.006848512);
   phijet1phijet279->SetBinContent(9,0.006555445);
   phijet1phijet279->SetBinContent(10,0.005521998);
   phijet1phijet279->SetBinError(1,0.0004938274);
   phijet1phijet279->SetBinError(2,0.000521022);
   phijet1phijet279->SetBinError(3,0.0004887425);
   phijet1phijet279->SetBinError(4,0.0003908236);
   phijet1phijet279->SetBinError(5,0.0004173196);
   phijet1phijet279->SetBinError(6,0.0003590979);
   phijet1phijet279->SetBinError(7,0.0003571048);
   phijet1phijet279->SetBinError(8,0.000325016);
   phijet1phijet279->SetBinError(9,0.0003179858);
   phijet1phijet279->SetBinError(10,0.0002918467);
   phijet1phijet279->SetEntries(6849);

   ci = TColor::GetColor("#ff0000");
   phijet1phijet279->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phijet1phijet279->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phijet1phijet279->SetMarkerColor(ci);
   phijet1phijet279->SetMarkerStyle(20);
   phijet1phijet279->GetXaxis()->SetTitle("phijet1phijet2");
   phijet1phijet279->GetXaxis()->SetLabelFont(42);
   phijet1phijet279->GetXaxis()->SetLabelSize(0.035);
   phijet1phijet279->GetXaxis()->SetTitleSize(0.035);
   phijet1phijet279->GetXaxis()->SetTitleFont(42);
   phijet1phijet279->GetYaxis()->SetTitle("Events/pb");
   phijet1phijet279->GetYaxis()->SetLabelFont(42);
   phijet1phijet279->GetYaxis()->SetLabelSize(0.035);
   phijet1phijet279->GetYaxis()->SetTitleSize(0.035);
   phijet1phijet279->GetYaxis()->SetTitleFont(42);
   phijet1phijet279->GetZaxis()->SetLabelFont(42);
   phijet1phijet279->GetZaxis()->SetLabelSize(0.035);
   phijet1phijet279->GetZaxis()->SetTitleSize(0.035);
   phijet1phijet279->GetZaxis()->SetTitleFont(42);
   phijet1phijet2->Add(phijet1phijet2,"");
   
   TH1D *phijet1phijet280 = new TH1D("phijet1phijet280"," #Delta_{#phi}[jet_{1},jet_{2}]",10,0,3.141593);
   phijet1phijet280->SetBinContent(1,0.00122433);
   phijet1phijet280->SetBinContent(2,0.001392047);
   phijet1phijet280->SetBinContent(3,0.0009727556);
   phijet1phijet280->SetBinContent(4,0.0008385824);
   phijet1phijet280->SetBinContent(5,0.001274645);
   phijet1phijet280->SetBinContent(6,0.0011237);
   phijet1phijet280->SetBinContent(7,0.0004025195);
   phijet1phijet280->SetBinContent(8,0.002146771);
   phijet1phijet280->SetBinContent(9,0.001492677);
   phijet1phijet280->SetBinContent(10,0.002264172);
   phijet1phijet280->SetBinError(1,0.000143297);
   phijet1phijet280->SetBinError(2,0.000152797);
   phijet1phijet280->SetBinError(3,0.0001277291);
   phijet1phijet280->SetBinError(4,0.0001185935);
   phijet1phijet280->SetBinError(5,0.0001462118);
   phijet1phijet280->SetBinError(6,0.0001372819);
   phijet1phijet280->SetBinError(7,8.216396e-05);
   phijet1phijet280->SetBinError(8,0.0001897495);
   phijet1phijet280->SetBinError(9,0.0001582234);
   phijet1phijet280->SetBinError(10,0.0001948689);
   phijet1phijet280->SetEntries(783);

   ci = TColor::GetColor("#0000ff");
   phijet1phijet280->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phijet1phijet280->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phijet1phijet280->SetMarkerColor(ci);
   phijet1phijet280->SetMarkerStyle(21);
   phijet1phijet280->GetXaxis()->SetTitle("phijet1phijet2");
   phijet1phijet280->GetXaxis()->SetLabelFont(42);
   phijet1phijet280->GetXaxis()->SetLabelSize(0.035);
   phijet1phijet280->GetXaxis()->SetTitleSize(0.035);
   phijet1phijet280->GetXaxis()->SetTitleFont(42);
   phijet1phijet280->GetYaxis()->SetTitle("Events/pb");
   phijet1phijet280->GetYaxis()->SetLabelFont(42);
   phijet1phijet280->GetYaxis()->SetLabelSize(0.035);
   phijet1phijet280->GetYaxis()->SetTitleSize(0.035);
   phijet1phijet280->GetYaxis()->SetTitleFont(42);
   phijet1phijet280->GetZaxis()->SetLabelFont(42);
   phijet1phijet280->GetZaxis()->SetLabelSize(0.035);
   phijet1phijet280->GetZaxis()->SetTitleSize(0.035);
   phijet1phijet280->GetZaxis()->SetTitleFont(42);
   phijet1phijet2->Add(phijet1phijet2,"");
   phijet1phijet2->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3283621,0.9342857,0.6716379,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("phijet1phijet2");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phijet1phijet2","phijet1phijet2_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phijet1phijet2","phijet1phijet2_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phijet1phijet2","phijet1phijet2_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phijet1phijet2","phijet1phijet2_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phijet1phijet2","phijet1phijet2_ttbar","lp");

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
   phijet1phijet2->Modified();
   phijet1phijet2->cd();
   phijet1phijet2->SetSelected(phijet1phijet2);
}
