void phimuphileadj()
{
//=========Macro generated from canvas: phimuphileadj/phimuphileadj
//=========  (Fri Nov 13 11:38:57 2015) by ROOT version6.02/05
   TCanvas *phimuphileadj = new TCanvas("phimuphileadj", "phimuphileadj",320,342,700,700);
   phimuphileadj->Range(-0.3926991,-3.784782,3.534292,3.42208);
   phimuphileadj->SetFillColor(0);
   phimuphileadj->SetBorderMode(0);
   phimuphileadj->SetBorderSize(2);
   phimuphileadj->SetLogy();
   phimuphileadj->SetFrameBorderMode(0);
   phimuphileadj->SetFrameBorderMode(0);
   
   THStack *phimuphileadj = new THStack();
   phimuphileadj->SetName("phimuphileadj");
   phimuphileadj->SetTitle("phimuphileadj");
   
   TH1F *phimuphileadj_stack_17 = new TH1F("phimuphileadj_stack_17","phimuphileadj",10,0,3.141593);
   phimuphileadj_stack_17->SetMinimum(0.0008627887);
   phimuphileadj_stack_17->SetMaximum(502.798);
   phimuphileadj_stack_17->SetDirectory(0);
   phimuphileadj_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   phimuphileadj_stack_17->SetLineColor(ci);
   phimuphileadj_stack_17->GetXaxis()->SetTitle("phimuphileadj");
   phimuphileadj_stack_17->GetXaxis()->SetLabelFont(42);
   phimuphileadj_stack_17->GetXaxis()->SetLabelSize(0.035);
   phimuphileadj_stack_17->GetXaxis()->SetTitleSize(0.035);
   phimuphileadj_stack_17->GetXaxis()->SetTitleFont(42);
   phimuphileadj_stack_17->GetYaxis()->SetTitle("Events/pb");
   phimuphileadj_stack_17->GetYaxis()->SetLabelFont(42);
   phimuphileadj_stack_17->GetYaxis()->SetLabelSize(0.035);
   phimuphileadj_stack_17->GetYaxis()->SetTitleSize(0.035);
   phimuphileadj_stack_17->GetYaxis()->SetTitleFont(42);
   phimuphileadj_stack_17->GetZaxis()->SetLabelFont(42);
   phimuphileadj_stack_17->GetZaxis()->SetLabelSize(0.035);
   phimuphileadj_stack_17->GetZaxis()->SetTitleSize(0.035);
   phimuphileadj_stack_17->GetZaxis()->SetTitleFont(42);
   phimuphileadj->SetHistogram(phimuphileadj_stack_17);
   
   
   TH1D *phimuphileadj81 = new TH1D("phimuphileadj81"," #Delta_{#phi}[#mu,jet_{1}]",10,0,3.141593);
   phimuphileadj81->SetBinContent(1,164.3086);
   phimuphileadj81->SetBinContent(2,158.9707);
   phimuphileadj81->SetBinContent(3,152.6519);
   phimuphileadj81->SetBinContent(4,155.4826);
   phimuphileadj81->SetBinContent(5,174.6439);
   phimuphileadj81->SetBinContent(6,162.912);
   phimuphileadj81->SetBinContent(7,196.4007);
   phimuphileadj81->SetBinContent(8,233.483);
   phimuphileadj81->SetBinContent(9,252.2103);
   phimuphileadj81->SetBinContent(10,253.2217);
   phimuphileadj81->SetBinError(1,7.263807);
   phimuphileadj81->SetBinError(2,7.139482);
   phimuphileadj81->SetBinError(3,6.989024);
   phimuphileadj81->SetBinError(4,7.06061);
   phimuphileadj81->SetBinError(5,7.498774);
   phimuphileadj81->SetBinError(6,7.210214);
   phimuphileadj81->SetBinError(7,7.948456);
   phimuphileadj81->SetBinError(8,8.669647);
   phimuphileadj81->SetBinError(9,9.023818);
   phimuphileadj81->SetBinError(10,9.03635);
   phimuphileadj81->SetEntries(17572);

   ci = TColor::GetColor("#00cc00");
   phimuphileadj81->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimuphileadj81->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimuphileadj81->SetMarkerColor(ci);
   phimuphileadj81->SetMarkerStyle(22);
   phimuphileadj81->GetXaxis()->SetTitle("phimuphileadj");
   phimuphileadj81->GetXaxis()->SetLabelFont(42);
   phimuphileadj81->GetXaxis()->SetLabelSize(0.035);
   phimuphileadj81->GetXaxis()->SetTitleSize(0.035);
   phimuphileadj81->GetXaxis()->SetTitleFont(42);
   phimuphileadj81->GetYaxis()->SetTitle("Events/pb");
   phimuphileadj81->GetYaxis()->SetLabelFont(42);
   phimuphileadj81->GetYaxis()->SetLabelSize(0.035);
   phimuphileadj81->GetYaxis()->SetTitleSize(0.035);
   phimuphileadj81->GetYaxis()->SetTitleFont(42);
   phimuphileadj81->GetZaxis()->SetLabelFont(42);
   phimuphileadj81->GetZaxis()->SetLabelSize(0.035);
   phimuphileadj81->GetZaxis()->SetTitleSize(0.035);
   phimuphileadj81->GetZaxis()->SetTitleFont(42);
   phimuphileadj->Add(phimuphileadj,"");
   
   TH1D *phimuphileadj82 = new TH1D("phimuphileadj82"," #Delta_{#phi}[#mu,jet_{1}]",10,0,3.141593);
   phimuphileadj82->SetBinContent(1,5.319914);
   phimuphileadj82->SetBinContent(2,5.853705);
   phimuphileadj82->SetBinContent(3,6.019083);
   phimuphileadj82->SetBinContent(4,6.225302);
   phimuphileadj82->SetBinContent(5,6.19784);
   phimuphileadj82->SetBinContent(6,6.103911);
   phimuphileadj82->SetBinContent(7,6.165883);
   phimuphileadj82->SetBinContent(8,6.326974);
   phimuphileadj82->SetBinContent(9,6.405323);
   phimuphileadj82->SetBinContent(10,6.617285);
   phimuphileadj82->SetBinError(1,0.06468258);
   phimuphileadj82->SetBinError(2,0.06770466);
   phimuphileadj82->SetBinError(3,0.06834855);
   phimuphileadj82->SetBinError(4,0.06932268);
   phimuphileadj82->SetBinError(5,0.06866042);
   phimuphileadj82->SetBinError(6,0.06767851);
   phimuphileadj82->SetBinError(7,0.06827349);
   phimuphileadj82->SetBinError(8,0.06943524);
   phimuphileadj82->SetBinError(9,0.06968458);
   phimuphileadj82->SetBinError(10,0.0710816);
   phimuphileadj82->SetEntries(277262);

   ci = TColor::GetColor("#00ffff");
   phimuphileadj82->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimuphileadj82->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimuphileadj82->SetMarkerColor(ci);
   phimuphileadj82->SetMarkerStyle(20);
   phimuphileadj82->GetXaxis()->SetTitle("phimuphileadj");
   phimuphileadj82->GetXaxis()->SetLabelFont(42);
   phimuphileadj82->GetXaxis()->SetLabelSize(0.035);
   phimuphileadj82->GetXaxis()->SetTitleSize(0.035);
   phimuphileadj82->GetXaxis()->SetTitleFont(42);
   phimuphileadj82->GetYaxis()->SetTitle("Events/pb");
   phimuphileadj82->GetYaxis()->SetLabelFont(42);
   phimuphileadj82->GetYaxis()->SetLabelSize(0.035);
   phimuphileadj82->GetYaxis()->SetTitleSize(0.035);
   phimuphileadj82->GetYaxis()->SetTitleFont(42);
   phimuphileadj82->GetZaxis()->SetLabelFont(42);
   phimuphileadj82->GetZaxis()->SetLabelSize(0.035);
   phimuphileadj82->GetZaxis()->SetTitleSize(0.035);
   phimuphileadj82->GetZaxis()->SetTitleFont(42);
   phimuphileadj->Add(phimuphileadj,"");
   
   TH1D *phimuphileadj83 = new TH1D("phimuphileadj83"," #Delta_{#phi}[#mu,jet_{1}]",10,0,3.141593);
   phimuphileadj83->SetBinContent(1,0.1541125);
   phimuphileadj83->SetBinContent(2,0.1331917);
   phimuphileadj83->SetBinContent(3,0.1352328);
   phimuphileadj83->SetBinContent(4,0.1304887);
   phimuphileadj83->SetBinContent(5,0.1343696);
   phimuphileadj83->SetBinContent(6,0.1394865);
   phimuphileadj83->SetBinContent(7,0.1477775);
   phimuphileadj83->SetBinContent(8,0.1587236);
   phimuphileadj83->SetBinContent(9,0.1622725);
   phimuphileadj83->SetBinContent(10,0.1719804);
   phimuphileadj83->SetBinError(1,0.003480518);
   phimuphileadj83->SetBinError(2,0.003167268);
   phimuphileadj83->SetBinError(3,0.003207302);
   phimuphileadj83->SetBinError(4,0.003155552);
   phimuphileadj83->SetBinError(5,0.003214368);
   phimuphileadj83->SetBinError(6,0.003264449);
   phimuphileadj83->SetBinError(7,0.003381659);
   phimuphileadj83->SetBinError(8,0.003482947);
   phimuphileadj83->SetBinError(9,0.003492376);
   phimuphileadj83->SetBinError(10,0.00362831);
   phimuphileadj83->SetEntries(46443);

   ci = TColor::GetColor("#ffcc00");
   phimuphileadj83->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimuphileadj83->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimuphileadj83->SetMarkerColor(ci);
   phimuphileadj83->SetMarkerStyle(21);
   phimuphileadj83->GetXaxis()->SetTitle("phimuphileadj");
   phimuphileadj83->GetXaxis()->SetLabelFont(42);
   phimuphileadj83->GetXaxis()->SetLabelSize(0.035);
   phimuphileadj83->GetXaxis()->SetTitleSize(0.035);
   phimuphileadj83->GetXaxis()->SetTitleFont(42);
   phimuphileadj83->GetYaxis()->SetTitle("Events/pb");
   phimuphileadj83->GetYaxis()->SetLabelFont(42);
   phimuphileadj83->GetYaxis()->SetLabelSize(0.035);
   phimuphileadj83->GetYaxis()->SetTitleSize(0.035);
   phimuphileadj83->GetYaxis()->SetTitleFont(42);
   phimuphileadj83->GetZaxis()->SetLabelFont(42);
   phimuphileadj83->GetZaxis()->SetLabelSize(0.035);
   phimuphileadj83->GetZaxis()->SetTitleSize(0.035);
   phimuphileadj83->GetZaxis()->SetTitleFont(42);
   phimuphileadj->Add(phimuphileadj,"");
   
   TH1D *phimuphileadj84 = new TH1D("phimuphileadj84"," #Delta_{#phi}[#mu,jet_{1}]",10,0,3.141593);
   phimuphileadj84->SetBinContent(1,0.009594086);
   phimuphileadj84->SetBinContent(2,0.01139876);
   phimuphileadj84->SetBinContent(3,0.01298749);
   phimuphileadj84->SetBinContent(4,0.01272528);
   phimuphileadj84->SetBinContent(5,0.0146842);
   phimuphileadj84->SetBinContent(6,0.01607241);
   phimuphileadj84->SetBinContent(7,0.01844779);
   phimuphileadj84->SetBinContent(8,0.02017535);
   phimuphileadj84->SetBinContent(9,0.02227309);
   phimuphileadj84->SetBinContent(10,0.02423201);
   phimuphileadj84->SetBinError(1,0.0003846878);
   phimuphileadj84->SetBinError(2,0.0004193102);
   phimuphileadj84->SetBinError(3,0.0004475786);
   phimuphileadj84->SetBinError(4,0.0004430372);
   phimuphileadj84->SetBinError(5,0.0004759175);
   phimuphileadj84->SetBinError(6,0.0004979057);
   phimuphileadj84->SetBinError(7,0.0005334317);
   phimuphileadj84->SetBinError(8,0.0005578496);
   phimuphileadj84->SetBinError(9,0.0005861339);
   phimuphileadj84->SetBinError(10,0.0006113661);
   phimuphileadj84->SetEntries(10541);

   ci = TColor::GetColor("#ff0000");
   phimuphileadj84->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimuphileadj84->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimuphileadj84->SetMarkerColor(ci);
   phimuphileadj84->SetMarkerStyle(20);
   phimuphileadj84->GetXaxis()->SetTitle("phimuphileadj");
   phimuphileadj84->GetXaxis()->SetLabelFont(42);
   phimuphileadj84->GetXaxis()->SetLabelSize(0.035);
   phimuphileadj84->GetXaxis()->SetTitleSize(0.035);
   phimuphileadj84->GetXaxis()->SetTitleFont(42);
   phimuphileadj84->GetYaxis()->SetTitle("Events/pb");
   phimuphileadj84->GetYaxis()->SetLabelFont(42);
   phimuphileadj84->GetYaxis()->SetLabelSize(0.035);
   phimuphileadj84->GetYaxis()->SetTitleSize(0.035);
   phimuphileadj84->GetYaxis()->SetTitleFont(42);
   phimuphileadj84->GetZaxis()->SetLabelFont(42);
   phimuphileadj84->GetZaxis()->SetLabelSize(0.035);
   phimuphileadj84->GetZaxis()->SetTitleSize(0.035);
   phimuphileadj84->GetZaxis()->SetTitleFont(42);
   phimuphileadj->Add(phimuphileadj,"");
   
   TH1D *phimuphileadj85 = new TH1D("phimuphileadj85"," #Delta_{#phi}[#mu,jet_{1}]",10,0,3.141593);
   phimuphileadj85->SetBinContent(1,0.003320786);
   phimuphileadj85->SetBinContent(2,0.003907794);
   phimuphileadj85->SetBinContent(3,0.003790392);
   phimuphileadj85->SetBinContent(4,0.004058739);
   phimuphileadj85->SetBinContent(5,0.004612203);
   phimuphileadj85->SetBinContent(6,0.005031494);
   phimuphileadj85->SetBinContent(7,0.00457866);
   phimuphileadj85->SetBinContent(8,0.004863778);
   phimuphileadj85->SetBinContent(9,0.004461258);
   phimuphileadj85->SetBinContent(10,0.004159369);
   phimuphileadj85->SetBinError(1,0.000235998);
   phimuphileadj85->SetBinError(2,0.0002560081);
   phimuphileadj85->SetBinError(3,0.0002521331);
   phimuphileadj85->SetBinError(4,0.0002609056);
   phimuphileadj85->SetBinError(5,0.0002781263);
   phimuphileadj85->SetBinError(6,0.0002904935);
   phimuphileadj85->SetBinError(7,0.0002771131);
   phimuphileadj85->SetBinError(8,0.0002856109);
   phimuphileadj85->SetBinError(9,0.0002735373);
   phimuphileadj85->SetBinError(10,0.0002641202);
   phimuphileadj85->SetEntries(2551);

   ci = TColor::GetColor("#0000ff");
   phimuphileadj85->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimuphileadj85->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimuphileadj85->SetMarkerColor(ci);
   phimuphileadj85->SetMarkerStyle(21);
   phimuphileadj85->GetXaxis()->SetTitle("phimuphileadj");
   phimuphileadj85->GetXaxis()->SetLabelFont(42);
   phimuphileadj85->GetXaxis()->SetLabelSize(0.035);
   phimuphileadj85->GetXaxis()->SetTitleSize(0.035);
   phimuphileadj85->GetXaxis()->SetTitleFont(42);
   phimuphileadj85->GetYaxis()->SetTitle("Events/pb");
   phimuphileadj85->GetYaxis()->SetLabelFont(42);
   phimuphileadj85->GetYaxis()->SetLabelSize(0.035);
   phimuphileadj85->GetYaxis()->SetTitleSize(0.035);
   phimuphileadj85->GetYaxis()->SetTitleFont(42);
   phimuphileadj85->GetZaxis()->SetLabelFont(42);
   phimuphileadj85->GetZaxis()->SetLabelSize(0.035);
   phimuphileadj85->GetZaxis()->SetTitleSize(0.035);
   phimuphileadj85->GetZaxis()->SetTitleFont(42);
   phimuphileadj->Add(phimuphileadj,"");
   phimuphileadj->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3211782,0.9342857,0.6788218,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("phimuphileadj");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimuphileadj","phimuphileadj_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphileadj","phimuphileadj_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphileadj","phimuphileadj_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphileadj","phimuphileadj_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphileadj","phimuphileadj_ttbar","lp");

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
   phimuphileadj->Modified();
   phimuphileadj->cd();
   phimuphileadj->SetSelected(phimuphileadj);
}
