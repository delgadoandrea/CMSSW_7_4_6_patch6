void METopt()
{
//=========Macro generated from canvas: METopt/METopt
//=========  (Mon Nov 23 12:45:00 2015) by ROOT version6.02/05
   TCanvas *METopt = new TCanvas("METopt", "METopt",140,162,700,700);
   METopt->Range(-0.375,-6.432596,3.375,0.05191559);
   METopt->SetFillColor(0);
   METopt->SetBorderMode(0);
   METopt->SetBorderSize(2);
   METopt->SetLogy();
   METopt->SetFrameBorderMode(0);
   METopt->SetFrameBorderMode(0);
   
   THStack *METopt = new THStack();
   METopt->SetName("METopt");
   METopt->SetTitle("METopt");
   
   TH1F *METopt_stack_8 = new TH1F("METopt_stack_8","METopt",15,0,3);
   METopt_stack_8->SetMinimum(1.643823e-06);
   METopt_stack_8->SetMaximum(0.2532004);
   METopt_stack_8->SetDirectory(0);
   METopt_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   METopt_stack_8->SetLineColor(ci);
   METopt_stack_8->GetXaxis()->SetTitle("METopt");
   METopt_stack_8->GetXaxis()->SetLabelFont(42);
   METopt_stack_8->GetXaxis()->SetLabelSize(0.035);
   METopt_stack_8->GetXaxis()->SetTitleSize(0.035);
   METopt_stack_8->GetXaxis()->SetTitleFont(42);
   METopt_stack_8->GetYaxis()->SetTitle("Events/pb");
   METopt_stack_8->GetYaxis()->SetLabelFont(42);
   METopt_stack_8->GetYaxis()->SetLabelSize(0.035);
   METopt_stack_8->GetYaxis()->SetTitleSize(0.035);
   METopt_stack_8->GetYaxis()->SetTitleFont(42);
   METopt_stack_8->GetZaxis()->SetLabelFont(42);
   METopt_stack_8->GetZaxis()->SetLabelSize(0.035);
   METopt_stack_8->GetZaxis()->SetTitleSize(0.035);
   METopt_stack_8->GetZaxis()->SetTitleFont(42);
   METopt->SetHistogram(METopt_stack_8);
   
   
   TH1D *METopt36 = new TH1D("METopt36","MET/p_{T}^{lead jet}",15,0,3);
   METopt36->SetBinContent(1,0.00068069);
   METopt36->SetBinContent(2,0.00952966);
   METopt36->SetBinContent(3,0.06912243);
   METopt36->SetBinContent(4,0.01104153);
   METopt36->SetBinContent(5,0.01663754);
   METopt36->SetBinContent(6,0.02495631);
   METopt36->SetBinError(1,0.00068069);
   METopt36->SetBinError(2,0.002546909);
   METopt36->SetBinError(3,0.02217717);
   METopt36->SetBinError(4,0.00842943);
   METopt36->SetBinError(5,0.01176452);
   METopt36->SetBinError(6,0.01440853);
   METopt36->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   METopt36->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METopt36->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METopt36->SetMarkerColor(ci);
   METopt36->SetMarkerStyle(22);
   METopt36->GetXaxis()->SetTitle("METopt");
   METopt36->GetXaxis()->SetLabelFont(42);
   METopt36->GetXaxis()->SetLabelSize(0.035);
   METopt36->GetXaxis()->SetTitleSize(0.035);
   METopt36->GetXaxis()->SetTitleFont(42);
   METopt36->GetYaxis()->SetTitle("Events/pb");
   METopt36->GetYaxis()->SetLabelFont(42);
   METopt36->GetYaxis()->SetLabelSize(0.035);
   METopt36->GetYaxis()->SetTitleSize(0.035);
   METopt36->GetYaxis()->SetTitleFont(42);
   METopt36->GetZaxis()->SetLabelFont(42);
   METopt36->GetZaxis()->SetLabelSize(0.035);
   METopt36->GetZaxis()->SetTitleSize(0.035);
   METopt36->GetZaxis()->SetTitleFont(42);
   METopt->Add(METopt,"");
   
   TH1D *METopt37 = new TH1D("METopt37","MET/p_{T}^{lead jet}",15,0,3);
   METopt37->SetBinContent(1,1.392893e-05);
   METopt37->SetBinContent(2,0.001351916);
   METopt37->SetBinContent(3,0.009267276);
   METopt37->SetBinContent(4,0.04333138);
   METopt37->SetBinContent(5,0.1226104);
   METopt37->SetBinContent(6,0.1345744);
   METopt37->SetBinContent(7,0.1072757);
   METopt37->SetBinContent(8,0.0786938);
   METopt37->SetBinContent(9,0.04683283);
   METopt37->SetBinContent(10,0.0271465);
   METopt37->SetBinContent(11,0.0117321);
   METopt37->SetBinContent(12,0.007680578);
   METopt37->SetBinContent(13,0.003504385);
   METopt37->SetBinContent(14,0.002544782);
   METopt37->SetBinContent(15,0.001871985);
   METopt37->SetBinContent(16,0.002029317);
   METopt37->SetBinError(1,1.392893e-05);
   METopt37->SetBinError(2,0.0001372687);
   METopt37->SetBinError(3,0.0003814526);
   METopt37->SetBinError(4,0.001364947);
   METopt37->SetBinError(5,0.003448717);
   METopt37->SetBinError(6,0.004099139);
   METopt37->SetBinError(7,0.004180275);
   METopt37->SetBinError(8,0.004584045);
   METopt37->SetBinError(9,0.003621192);
   METopt37->SetBinError(10,0.002726748);
   METopt37->SetBinError(11,0.001513075);
   METopt37->SetBinError(12,0.001337888);
   METopt37->SetBinError(13,0.001122201);
   METopt37->SetBinError(14,0.001068918);
   METopt37->SetBinError(15,0.001029262);
   METopt37->SetBinError(16,0.001037471);
   METopt37->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   METopt37->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METopt37->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METopt37->SetMarkerColor(ci);
   METopt37->SetMarkerStyle(20);
   METopt37->GetXaxis()->SetTitle("METopt");
   METopt37->GetXaxis()->SetLabelFont(42);
   METopt37->GetXaxis()->SetLabelSize(0.035);
   METopt37->GetXaxis()->SetTitleSize(0.035);
   METopt37->GetXaxis()->SetTitleFont(42);
   METopt37->GetYaxis()->SetTitle("Events/pb");
   METopt37->GetYaxis()->SetLabelFont(42);
   METopt37->GetYaxis()->SetLabelSize(0.035);
   METopt37->GetYaxis()->SetTitleSize(0.035);
   METopt37->GetYaxis()->SetTitleFont(42);
   METopt37->GetZaxis()->SetLabelFont(42);
   METopt37->GetZaxis()->SetLabelSize(0.035);
   METopt37->GetZaxis()->SetTitleSize(0.035);
   METopt37->GetZaxis()->SetTitleFont(42);
   METopt->Add(METopt,"");
   
   TH1D *METopt38 = new TH1D("METopt38","MET/p_{T}^{lead jet}",15,0,3);
   METopt38->SetBinContent(1,5.851509e-06);
   METopt38->SetBinContent(2,0.0002960863);
   METopt38->SetBinContent(3,0.002055587);
   METopt38->SetBinContent(4,0.009485694);
   METopt38->SetBinContent(5,0.02637833);
   METopt38->SetBinContent(6,0.03542185);
   METopt38->SetBinContent(7,0.02902985);
   METopt38->SetBinContent(8,0.01931192);
   METopt38->SetBinContent(9,0.01045294);
   METopt38->SetBinContent(10,0.006260894);
   METopt38->SetBinContent(11,0.004006631);
   METopt38->SetBinContent(12,0.001811275);
   METopt38->SetBinContent(13,0.001055017);
   METopt38->SetBinContent(14,0.0003970447);
   METopt38->SetBinContent(15,0.0002648587);
   METopt38->SetBinContent(16,0.0002425362);
   METopt38->SetBinError(1,2.616874e-06);
   METopt38->SetBinError(2,1.861479e-05);
   METopt38->SetBinError(3,5.431574e-05);
   METopt38->SetBinError(4,0.0002770452);
   METopt38->SetBinError(5,0.000680549);
   METopt38->SetBinError(6,0.0009013724);
   METopt38->SetBinError(7,0.0009115706);
   METopt38->SetBinError(8,0.0007784417);
   METopt38->SetBinError(9,0.0005631055);
   METopt38->SetBinError(10,0.000447395);
   METopt38->SetBinError(11,0.0003988073);
   METopt38->SetBinError(12,0.0002844883);
   METopt38->SetBinError(13,0.0002045993);
   METopt38->SetBinError(14,0.0001303943);
   METopt38->SetBinError(15,8.467851e-05);
   METopt38->SetBinError(16,0.0001139839);
   METopt38->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   METopt38->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METopt38->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METopt38->SetMarkerColor(ci);
   METopt38->SetMarkerStyle(21);
   METopt38->GetXaxis()->SetTitle("METopt");
   METopt38->GetXaxis()->SetLabelFont(42);
   METopt38->GetXaxis()->SetLabelSize(0.035);
   METopt38->GetXaxis()->SetTitleSize(0.035);
   METopt38->GetXaxis()->SetTitleFont(42);
   METopt38->GetYaxis()->SetTitle("Events/pb");
   METopt38->GetYaxis()->SetLabelFont(42);
   METopt38->GetYaxis()->SetLabelSize(0.035);
   METopt38->GetYaxis()->SetTitleSize(0.035);
   METopt38->GetYaxis()->SetTitleFont(42);
   METopt38->GetZaxis()->SetLabelFont(42);
   METopt38->GetZaxis()->SetLabelSize(0.035);
   METopt38->GetZaxis()->SetTitleSize(0.035);
   METopt38->GetZaxis()->SetTitleFont(42);
   METopt->Add(METopt,"");
   
   TH1D *METopt39 = new TH1D("METopt39","MET/p_{T}^{lead jet}",15,0,3);
   METopt39->SetBinContent(2,1.542458e-05);
   METopt39->SetBinContent(3,9.254746e-05);
   METopt39->SetBinContent(4,0.0009717483);
   METopt39->SetBinContent(5,0.003146613);
   METopt39->SetBinContent(6,0.003840719);
   METopt39->SetBinContent(7,0.002637602);
   METopt39->SetBinContent(8,0.001758402);
   METopt39->SetBinContent(9,0.001326514);
   METopt39->SetBinContent(10,0.0007866534);
   METopt39->SetBinContent(11,0.0004781619);
   METopt39->SetBinContent(12,0.0003084915);
   METopt39->SetBinContent(13,0.0002159441);
   METopt39->SetBinContent(14,0.0001233966);
   METopt39->SetBinContent(15,0.0001233966);
   METopt39->SetBinContent(16,0.000107972);
   METopt39->SetBinError(2,1.542458e-05);
   METopt39->SetBinError(3,3.778234e-05);
   METopt39->SetBinError(4,0.0001224288);
   METopt39->SetBinError(5,0.000220307);
   METopt39->SetBinError(6,0.0002433957);
   METopt39->SetBinError(7,0.0002017025);
   METopt39->SetBinError(8,0.0001646894);
   METopt39->SetBinError(9,0.0001430416);
   METopt39->SetBinError(10,0.0001101535);
   METopt39->SetBinError(11,8.58804e-05);
   METopt39->SetBinError(12,6.89808e-05);
   METopt39->SetBinError(13,5.771348e-05);
   METopt39->SetBinError(14,4.362729e-05);
   METopt39->SetBinError(15,4.362729e-05);
   METopt39->SetBinError(16,4.080959e-05);
   METopt39->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   METopt39->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METopt39->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METopt39->SetMarkerColor(ci);
   METopt39->SetMarkerStyle(20);
   METopt39->GetXaxis()->SetTitle("METopt");
   METopt39->GetXaxis()->SetLabelFont(42);
   METopt39->GetXaxis()->SetLabelSize(0.035);
   METopt39->GetXaxis()->SetTitleSize(0.035);
   METopt39->GetXaxis()->SetTitleFont(42);
   METopt39->GetYaxis()->SetTitle("Events/pb");
   METopt39->GetYaxis()->SetLabelFont(42);
   METopt39->GetYaxis()->SetLabelSize(0.035);
   METopt39->GetYaxis()->SetTitleSize(0.035);
   METopt39->GetYaxis()->SetTitleFont(42);
   METopt39->GetZaxis()->SetLabelFont(42);
   METopt39->GetZaxis()->SetLabelSize(0.035);
   METopt39->GetZaxis()->SetTitleSize(0.035);
   METopt39->GetZaxis()->SetTitleFont(42);
   METopt->Add(METopt,"");
   
   TH1D *METopt40 = new TH1D("METopt40","MET/p_{T}^{lead jet}",15,0,3);
   METopt40->SetBinContent(4,1.677165e-05);
   METopt40->SetBinError(4,1.677165e-05);
   METopt40->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   METopt40->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METopt40->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METopt40->SetMarkerColor(ci);
   METopt40->SetMarkerStyle(21);
   METopt40->GetXaxis()->SetTitle("METopt");
   METopt40->GetXaxis()->SetLabelFont(42);
   METopt40->GetXaxis()->SetLabelSize(0.035);
   METopt40->GetXaxis()->SetTitleSize(0.035);
   METopt40->GetXaxis()->SetTitleFont(42);
   METopt40->GetYaxis()->SetTitle("Events/pb");
   METopt40->GetYaxis()->SetLabelFont(42);
   METopt40->GetYaxis()->SetLabelSize(0.035);
   METopt40->GetYaxis()->SetTitleSize(0.035);
   METopt40->GetYaxis()->SetTitleFont(42);
   METopt40->GetZaxis()->SetLabelFont(42);
   METopt40->GetZaxis()->SetLabelSize(0.035);
   METopt40->GetZaxis()->SetTitleSize(0.035);
   METopt40->GetZaxis()->SetTitleFont(42);
   METopt->Add(METopt,"");
   METopt->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.398046,0.9342857,0.601954,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("METopt");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METopt","METopt_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METopt","METopt_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METopt","METopt_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METopt","METopt_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METopt","METopt_ttbar","lp");

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
   METopt->Modified();
   METopt->cd();
   METopt->SetSelected(METopt);
}
