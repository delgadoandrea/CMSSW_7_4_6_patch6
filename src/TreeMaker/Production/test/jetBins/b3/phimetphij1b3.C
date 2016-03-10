void phimetphij1b3()
{
//=========Macro generated from canvas: b3/phimetphij1b3/b3/phimetphij1b3
//=========  (Tue Nov 24 14:24:03 2015) by ROOT version6.02/05
   TCanvas *b3/phimetphij1b3 = new TCanvas("b3/phimetphij1b3", "b3/phimetphij1b3",300,322,700,700);
   b3/phimetphij1b3->Range(-3.926991,-5.925777,3.926991,-0.01316913);
   b3/phimetphij1b3->SetFillColor(0);
   b3/phimetphij1b3->SetBorderMode(0);
   b3/phimetphij1b3->SetBorderSize(2);
   b3/phimetphij1b3->SetLogy();
   b3/phimetphij1b3->SetFrameBorderMode(0);
   b3/phimetphij1b3->SetFrameBorderMode(0);
   
   THStack *b3/phimetphij1b3 = new THStack();
   b3/phimetphij1b3->SetName("b3/phimetphij1b3");
   b3/phimetphij1b3->SetTitle("b3/phimetphij1b3");
   
   TH1F *b3/phimetphij1b3_stack_16 = new TH1F("b3/phimetphij1b3_stack_16","b3/phimetphij1b3",20,-3.141593,3.141593);
   b3/phimetphij1b3_stack_16->SetMinimum(4.628961e-06);
   b3/phimetphij1b3_stack_16->SetMaximum(0.2486394);
   b3/phimetphij1b3_stack_16->SetDirectory(0);
   b3/phimetphij1b3_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b3/phimetphij1b3_stack_16->SetLineColor(ci);
   b3/phimetphij1b3_stack_16->GetXaxis()->SetTitle("b3/phimetphij1b3");
   b3/phimetphij1b3_stack_16->GetXaxis()->SetLabelFont(42);
   b3/phimetphij1b3_stack_16->GetXaxis()->SetLabelSize(0.035);
   b3/phimetphij1b3_stack_16->GetXaxis()->SetTitleSize(0.035);
   b3/phimetphij1b3_stack_16->GetXaxis()->SetTitleFont(42);
   b3/phimetphij1b3_stack_16->GetYaxis()->SetTitle("Events/pb");
   b3/phimetphij1b3_stack_16->GetYaxis()->SetLabelFont(42);
   b3/phimetphij1b3_stack_16->GetYaxis()->SetLabelSize(0.035);
   b3/phimetphij1b3_stack_16->GetYaxis()->SetTitleSize(0.035);
   b3/phimetphij1b3_stack_16->GetYaxis()->SetTitleFont(42);
   b3/phimetphij1b3_stack_16->GetZaxis()->SetLabelFont(42);
   b3/phimetphij1b3_stack_16->GetZaxis()->SetLabelSize(0.035);
   b3/phimetphij1b3_stack_16->GetZaxis()->SetTitleSize(0.035);
   b3/phimetphij1b3_stack_16->GetZaxis()->SetTitleFont(42);
   b3/phimetphij1b3->SetHistogram(b3/phimetphij1b3_stack_16);
   
   
   TH1D *phimetphij1b376 = new TH1D("phimetphij1b376"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   phimetphij1b376->SetBinContent(1,0.09619954);
   phimetphij1b376->SetBinContent(2,0.01376429);
   phimetphij1b376->SetBinContent(3,0.01867961);
   phimetphij1b376->SetBinContent(6,0.00068069);
   phimetphij1b376->SetBinContent(10,0.0068069);
   phimetphij1b376->SetBinContent(11,0.00612621);
   phimetphij1b376->SetBinContent(15,0.00068069);
   phimetphij1b376->SetBinContent(17,0.00068069);
   phimetphij1b376->SetBinContent(18,0.00068069);
   phimetphij1b376->SetBinContent(19,0.00816828);
   phimetphij1b376->SetBinContent(20,0.06458682);
   phimetphij1b376->SetBinError(1,0.02113572);
   phimetphij1b376->SetBinError(2,0.008538656);
   phimetphij1b376->SetBinError(3,0.01182345);
   phimetphij1b376->SetBinError(6,0.00068069);
   phimetphij1b376->SetBinError(10,0.002152531);
   phimetphij1b376->SetBinError(11,0.00204207);
   phimetphij1b376->SetBinError(15,0.00068069);
   phimetphij1b376->SetBinError(17,0.00068069);
   phimetphij1b376->SetBinError(18,0.00068069);
   phimetphij1b376->SetBinError(19,0.002357979);
   phimetphij1b376->SetBinError(20,0.01726619);
   phimetphij1b376->SetEntries(173);

   ci = TColor::GetColor("#00cc00");
   phimetphij1b376->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphij1b376->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphij1b376->SetMarkerColor(ci);
   phimetphij1b376->SetMarkerStyle(22);
   phimetphij1b376->GetXaxis()->SetTitle("phimetphij1b3");
   phimetphij1b376->GetXaxis()->SetLabelFont(42);
   phimetphij1b376->GetXaxis()->SetLabelSize(0.035);
   phimetphij1b376->GetXaxis()->SetTitleSize(0.035);
   phimetphij1b376->GetXaxis()->SetTitleFont(42);
   phimetphij1b376->GetYaxis()->SetTitle("Events/pb");
   phimetphij1b376->GetYaxis()->SetLabelFont(42);
   phimetphij1b376->GetYaxis()->SetLabelSize(0.035);
   phimetphij1b376->GetYaxis()->SetTitleSize(0.035);
   phimetphij1b376->GetYaxis()->SetTitleFont(42);
   phimetphij1b376->GetZaxis()->SetLabelFont(42);
   phimetphij1b376->GetZaxis()->SetLabelSize(0.035);
   phimetphij1b376->GetZaxis()->SetTitleSize(0.035);
   phimetphij1b376->GetZaxis()->SetTitleFont(42);
   b3/phimetphij1b3->Add(phimetphij1b3,"");
   
   TH1D *phimetphij1b377 = new TH1D("phimetphij1b377"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   phimetphij1b377->SetBinContent(1,0.1381646);
   phimetphij1b377->SetBinContent(2,0.06722513);
   phimetphij1b377->SetBinContent(3,0.02875346);
   phimetphij1b377->SetBinContent(4,0.01011606);
   phimetphij1b377->SetBinContent(5,0.003905993);
   phimetphij1b377->SetBinContent(6,0.001519636);
   phimetphij1b377->SetBinContent(7,0.0005430788);
   phimetphij1b377->SetBinContent(8,0.0003948733);
   phimetphij1b377->SetBinContent(9,0.0003932522);
   phimetphij1b377->SetBinContent(10,0.0005202336);
   phimetphij1b377->SetBinContent(11,0.0003530865);
   phimetphij1b377->SetBinContent(12,0.0002941286);
   phimetphij1b377->SetBinContent(13,0.0005136608);
   phimetphij1b377->SetBinContent(14,0.0004669496);
   phimetphij1b377->SetBinContent(15,0.001375484);
   phimetphij1b377->SetBinContent(16,0.003424992);
   phimetphij1b377->SetBinContent(17,0.01045355);
   phimetphij1b377->SetBinContent(18,0.02765657);
   phimetphij1b377->SetBinContent(19,0.06876433);
   phimetphij1b377->SetBinContent(20,0.1285811);
   phimetphij1b377->SetBinError(1,0.0035811);
   phimetphij1b377->SetBinError(2,0.002134692);
   phimetphij1b377->SetBinError(3,0.001301295);
   phimetphij1b377->SetBinError(4,0.0006168321);
   phimetphij1b377->SetBinError(5,0.0003595726);
   phimetphij1b377->SetBinError(6,0.0001905555);
   phimetphij1b377->SetBinError(7,8.813404e-05);
   phimetphij1b377->SetBinError(8,7.464479e-05);
   phimetphij1b377->SetBinError(9,7.433283e-05);
   phimetphij1b377->SetBinError(10,8.554519e-05);
   phimetphij1b377->SetBinError(11,7.063852e-05);
   phimetphij1b377->SetBinError(12,6.419338e-05);
   phimetphij1b377->SetBinError(13,0.0001484868);
   phimetphij1b377->SetBinError(14,8.131195e-05);
   phimetphij1b377->SetBinError(15,0.0001850184);
   phimetphij1b377->SetBinError(16,0.0003050513);
   phimetphij1b377->SetBinError(17,0.0007294925);
   phimetphij1b377->SetBinError(18,0.001213154);
   phimetphij1b377->SetBinError(19,0.002396642);
   phimetphij1b377->SetBinError(20,0.003098995);
   phimetphij1b377->SetEntries(19755);

   ci = TColor::GetColor("#00ffff");
   phimetphij1b377->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphij1b377->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphij1b377->SetMarkerColor(ci);
   phimetphij1b377->SetMarkerStyle(20);
   phimetphij1b377->GetXaxis()->SetTitle("phimetphij1b3");
   phimetphij1b377->GetXaxis()->SetLabelFont(42);
   phimetphij1b377->GetXaxis()->SetLabelSize(0.035);
   phimetphij1b377->GetXaxis()->SetTitleSize(0.035);
   phimetphij1b377->GetXaxis()->SetTitleFont(42);
   phimetphij1b377->GetYaxis()->SetTitle("Events/pb");
   phimetphij1b377->GetYaxis()->SetLabelFont(42);
   phimetphij1b377->GetYaxis()->SetLabelSize(0.035);
   phimetphij1b377->GetYaxis()->SetTitleSize(0.035);
   phimetphij1b377->GetYaxis()->SetTitleFont(42);
   phimetphij1b377->GetZaxis()->SetLabelFont(42);
   phimetphij1b377->GetZaxis()->SetLabelSize(0.035);
   phimetphij1b377->GetZaxis()->SetTitleSize(0.035);
   phimetphij1b377->GetZaxis()->SetTitleFont(42);
   b3/phimetphij1b3->Add(phimetphij1b3,"");
   
   TH1D *phimetphij1b378 = new TH1D("phimetphij1b378"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   phimetphij1b378->SetBinContent(1,0.03356499);
   phimetphij1b378->SetBinContent(2,0.01831171);
   phimetphij1b378->SetBinContent(3,0.006763688);
   phimetphij1b378->SetBinContent(4,0.002573474);
   phimetphij1b378->SetBinContent(5,0.0009831375);
   phimetphij1b378->SetBinContent(6,0.000341554);
   phimetphij1b378->SetBinContent(7,0.0001632255);
   phimetphij1b378->SetBinContent(8,0.000109477);
   phimetphij1b378->SetBinContent(9,9.792577e-05);
   phimetphij1b378->SetBinContent(10,0.0001145283);
   phimetphij1b378->SetBinContent(11,0.0001083826);
   phimetphij1b378->SetBinContent(12,9.199834e-05);
   phimetphij1b378->SetBinContent(13,9.917198e-05);
   phimetphij1b378->SetBinContent(14,0.0001942257);
   phimetphij1b378->SetBinContent(15,0.0003436763);
   phimetphij1b378->SetBinContent(16,0.0008568884);
   phimetphij1b378->SetBinContent(17,0.002663518);
   phimetphij1b378->SetBinContent(18,0.006902314);
   phimetphij1b378->SetBinContent(19,0.01712716);
   phimetphij1b378->SetBinContent(20,0.03349773);
   phimetphij1b378->SetBinError(1,0.000723912);
   phimetphij1b378->SetBinError(2,0.0005299753);
   phimetphij1b378->SetBinError(3,0.0002864801);
   phimetphij1b378->SetBinError(4,0.0001484425);
   phimetphij1b378->SetBinError(5,0.0001239578);
   phimetphij1b378->SetBinError(6,3.773455e-05);
   phimetphij1b378->SetBinError(7,3.194869e-05);
   phimetphij1b378->SetBinError(8,1.351204e-05);
   phimetphij1b378->SetBinError(9,1.238945e-05);
   phimetphij1b378->SetBinError(10,3.028289e-05);
   phimetphij1b378->SetBinError(11,1.317252e-05);
   phimetphij1b378->SetBinError(12,1.24234e-05);
   phimetphij1b378->SetBinError(13,1.213169e-05);
   phimetphij1b378->SetBinError(14,1.875552e-05);
   phimetphij1b378->SetBinError(15,2.612002e-05);
   phimetphij1b378->SetBinError(16,6.902908e-05);
   phimetphij1b378->SetBinError(17,0.00015841);
   phimetphij1b378->SetBinError(18,0.0002842864);
   phimetphij1b378->SetBinError(19,0.0005047853);
   phimetphij1b378->SetBinError(20,0.0007293324);
   phimetphij1b378->SetEntries(37083);

   ci = TColor::GetColor("#ffcc00");
   phimetphij1b378->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphij1b378->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphij1b378->SetMarkerColor(ci);
   phimetphij1b378->SetMarkerStyle(21);
   phimetphij1b378->GetXaxis()->SetTitle("phimetphij1b3");
   phimetphij1b378->GetXaxis()->SetLabelFont(42);
   phimetphij1b378->GetXaxis()->SetLabelSize(0.035);
   phimetphij1b378->GetXaxis()->SetTitleSize(0.035);
   phimetphij1b378->GetXaxis()->SetTitleFont(42);
   phimetphij1b378->GetYaxis()->SetTitle("Events/pb");
   phimetphij1b378->GetYaxis()->SetLabelFont(42);
   phimetphij1b378->GetYaxis()->SetLabelSize(0.035);
   phimetphij1b378->GetYaxis()->SetTitleSize(0.035);
   phimetphij1b378->GetYaxis()->SetTitleFont(42);
   phimetphij1b378->GetZaxis()->SetLabelFont(42);
   phimetphij1b378->GetZaxis()->SetLabelSize(0.035);
   phimetphij1b378->GetZaxis()->SetTitleSize(0.035);
   phimetphij1b378->GetZaxis()->SetTitleFont(42);
   b3/phimetphij1b3->Add(phimetphij1b3,"");
   
   TH1D *phimetphij1b379 = new TH1D("phimetphij1b379"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   phimetphij1b379->SetBinContent(1,0.007342098);
   phimetphij1b379->SetBinContent(2,0.00310034);
   phimetphij1b379->SetBinContent(3,0.001203117);
   phimetphij1b379->SetBinContent(4,0.0003701898);
   phimetphij1b379->SetBinContent(5,9.254746e-05);
   phimetphij1b379->SetBinContent(6,6.16983e-05);
   phimetphij1b379->SetBinContent(10,1.542458e-05);
   phimetphij1b379->SetBinContent(11,1.542458e-05);
   phimetphij1b379->SetBinContent(13,1.542458e-05);
   phimetphij1b379->SetBinContent(14,1.542458e-05);
   phimetphij1b379->SetBinContent(15,9.254746e-05);
   phimetphij1b379->SetBinContent(16,0.0001542458);
   phimetphij1b379->SetBinContent(17,0.000401039);
   phimetphij1b379->SetBinContent(18,0.001033447);
   phimetphij1b379->SetBinContent(19,0.003069491);
   phimetphij1b379->SetBinContent(20,0.007434646);
   phimetphij1b379->SetBinError(1,0.0003365245);
   phimetphij1b379->SetBinError(2,0.0002186811);
   phimetphij1b379->SetBinError(3,0.0001362262);
   phimetphij1b379->SetBinError(4,7.556468e-05);
   phimetphij1b379->SetBinError(5,3.778234e-05);
   phimetphij1b379->SetBinError(6,3.084915e-05);
   phimetphij1b379->SetBinError(10,1.542458e-05);
   phimetphij1b379->SetBinError(11,1.542458e-05);
   phimetphij1b379->SetBinError(13,1.542458e-05);
   phimetphij1b379->SetBinError(14,1.542458e-05);
   phimetphij1b379->SetBinError(15,3.778234e-05);
   phimetphij1b379->SetBinError(16,4.877679e-05);
   phimetphij1b379->SetBinError(17,7.865021e-05);
   phimetphij1b379->SetBinError(18,0.0001262556);
   phimetphij1b379->SetBinError(19,0.0002175904);
   phimetphij1b379->SetBinError(20,0.0003386388);
   phimetphij1b379->SetEntries(1583);

   ci = TColor::GetColor("#ff0000");
   phimetphij1b379->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphij1b379->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphij1b379->SetMarkerColor(ci);
   phimetphij1b379->SetMarkerStyle(20);
   phimetphij1b379->GetXaxis()->SetTitle("phimetphij1b3");
   phimetphij1b379->GetXaxis()->SetLabelFont(42);
   phimetphij1b379->GetXaxis()->SetLabelSize(0.035);
   phimetphij1b379->GetXaxis()->SetTitleSize(0.035);
   phimetphij1b379->GetXaxis()->SetTitleFont(42);
   phimetphij1b379->GetYaxis()->SetTitle("Events/pb");
   phimetphij1b379->GetYaxis()->SetLabelFont(42);
   phimetphij1b379->GetYaxis()->SetLabelSize(0.035);
   phimetphij1b379->GetYaxis()->SetTitleSize(0.035);
   phimetphij1b379->GetYaxis()->SetTitleFont(42);
   phimetphij1b379->GetZaxis()->SetLabelFont(42);
   phimetphij1b379->GetZaxis()->SetLabelSize(0.035);
   phimetphij1b379->GetZaxis()->SetTitleSize(0.035);
   phimetphij1b379->GetZaxis()->SetTitleFont(42);
   b3/phimetphij1b3->Add(phimetphij1b3,"");
   
   TH1D *phimetphij1b380 = new TH1D("phimetphij1b380"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   phimetphij1b380->SetBinContent(1,0.000570236);
   phimetphij1b380->SetBinContent(2,0.0002515747);
   phimetphij1b380->SetBinContent(3,0.0001509448);
   phimetphij1b380->SetBinContent(4,0.0001174015);
   phimetphij1b380->SetBinContent(5,3.35433e-05);
   phimetphij1b380->SetBinContent(8,1.677165e-05);
   phimetphij1b380->SetBinContent(9,1.677165e-05);
   phimetphij1b380->SetBinContent(10,1.677165e-05);
   phimetphij1b380->SetBinContent(11,1.677165e-05);
   phimetphij1b380->SetBinContent(13,3.35433e-05);
   phimetphij1b380->SetBinContent(14,1.677165e-05);
   phimetphij1b380->SetBinContent(15,3.35433e-05);
   phimetphij1b380->SetBinContent(16,1.677165e-05);
   phimetphij1b380->SetBinContent(17,5.031494e-05);
   phimetphij1b380->SetBinContent(18,0.0001174015);
   phimetphij1b380->SetBinContent(19,0.0002515747);
   phimetphij1b380->SetBinContent(20,0.0005031494);
   phimetphij1b380->SetBinError(1,9.779467e-05);
   phimetphij1b380->SetBinError(2,6.495631e-05);
   phimetphij1b380->SetBinError(3,5.031494e-05);
   phimetphij1b380->SetBinError(4,4.437361e-05);
   phimetphij1b380->SetBinError(5,2.371869e-05);
   phimetphij1b380->SetBinError(8,1.677165e-05);
   phimetphij1b380->SetBinError(9,1.677165e-05);
   phimetphij1b380->SetBinError(10,1.677165e-05);
   phimetphij1b380->SetBinError(11,1.677165e-05);
   phimetphij1b380->SetBinError(13,2.371869e-05);
   phimetphij1b380->SetBinError(14,1.677165e-05);
   phimetphij1b380->SetBinError(15,2.371869e-05);
   phimetphij1b380->SetBinError(16,1.677165e-05);
   phimetphij1b380->SetBinError(17,2.904935e-05);
   phimetphij1b380->SetBinError(18,4.437361e-05);
   phimetphij1b380->SetBinError(19,6.495631e-05);
   phimetphij1b380->SetBinError(20,9.18621e-05);
   phimetphij1b380->SetEntries(132);

   ci = TColor::GetColor("#0000ff");
   phimetphij1b380->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphij1b380->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphij1b380->SetMarkerColor(ci);
   phimetphij1b380->SetMarkerStyle(21);
   phimetphij1b380->GetXaxis()->SetTitle("phimetphij1b3");
   phimetphij1b380->GetXaxis()->SetLabelFont(42);
   phimetphij1b380->GetXaxis()->SetLabelSize(0.035);
   phimetphij1b380->GetXaxis()->SetTitleSize(0.035);
   phimetphij1b380->GetXaxis()->SetTitleFont(42);
   phimetphij1b380->GetYaxis()->SetTitle("Events/pb");
   phimetphij1b380->GetYaxis()->SetLabelFont(42);
   phimetphij1b380->GetYaxis()->SetLabelSize(0.035);
   phimetphij1b380->GetYaxis()->SetTitleSize(0.035);
   phimetphij1b380->GetYaxis()->SetTitleFont(42);
   phimetphij1b380->GetZaxis()->SetLabelFont(42);
   phimetphij1b380->GetZaxis()->SetLabelSize(0.035);
   phimetphij1b380->GetZaxis()->SetTitleSize(0.035);
   phimetphij1b380->GetZaxis()->SetTitleFont(42);
   b3/phimetphij1b3->Add(phimetphij1b3,"");
   b3/phimetphij1b3->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.2838218,0.9342857,0.7161782,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b3/phimetphij1b3");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimetphij1b3","b3/phimetphij1b3_QCD_b3/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphij1b3","b3/phimetphij1b3_WJetsToLNu_b3/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphij1b3","b3/phimetphij1b3_ZJetsToNuNu_b3/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphij1b3","b3/phimetphij1b3_signal_b3/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphij1b3","b3/phimetphij1b3_ttbar_b3/","lp");

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
   b3/phimetphij1b3->Modified();
   b3/phimetphij1b3->cd();
   b3/phimetphij1b3->SetSelected(b3/phimetphij1b3);
}
