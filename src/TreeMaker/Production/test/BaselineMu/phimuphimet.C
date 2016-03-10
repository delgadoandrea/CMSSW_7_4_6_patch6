void phimuphimet()
{
//=========Macro generated from canvas: phimuphimet/phimuphimet
//=========  (Fri Nov 13 11:38:57 2015) by ROOT version6.02/05
   TCanvas *phimuphimet = new TCanvas("phimuphimet", "phimuphimet",340,362,700,700);
   phimuphimet->Range(-0.3926991,-3.745915,3.534292,3.369465);
   phimuphimet->SetFillColor(0);
   phimuphimet->SetBorderMode(0);
   phimuphimet->SetBorderSize(2);
   phimuphimet->SetLogy();
   phimuphimet->SetFrameBorderMode(0);
   phimuphimet->SetFrameBorderMode(0);
   
   THStack *phimuphimet = new THStack();
   phimuphimet->SetName("phimuphimet");
   phimuphimet->SetTitle("phimuphimet");
   
   TH1F *phimuphimet_stack_18 = new TH1F("phimuphimet_stack_18","phimuphimet",10,0,3.141593);
   phimuphimet_stack_18->SetMinimum(0.0009238963);
   phimuphimet_stack_18->SetMaximum(454.9117);
   phimuphimet_stack_18->SetDirectory(0);
   phimuphimet_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   phimuphimet_stack_18->SetLineColor(ci);
   phimuphimet_stack_18->GetXaxis()->SetTitle("phimuphimet");
   phimuphimet_stack_18->GetXaxis()->SetLabelFont(42);
   phimuphimet_stack_18->GetXaxis()->SetLabelSize(0.035);
   phimuphimet_stack_18->GetXaxis()->SetTitleSize(0.035);
   phimuphimet_stack_18->GetXaxis()->SetTitleFont(42);
   phimuphimet_stack_18->GetYaxis()->SetTitle("Events/pb");
   phimuphimet_stack_18->GetYaxis()->SetLabelFont(42);
   phimuphimet_stack_18->GetYaxis()->SetLabelSize(0.035);
   phimuphimet_stack_18->GetYaxis()->SetTitleSize(0.035);
   phimuphimet_stack_18->GetYaxis()->SetTitleFont(42);
   phimuphimet_stack_18->GetZaxis()->SetLabelFont(42);
   phimuphimet_stack_18->GetZaxis()->SetLabelSize(0.035);
   phimuphimet_stack_18->GetZaxis()->SetTitleSize(0.035);
   phimuphimet_stack_18->GetZaxis()->SetTitleFont(42);
   phimuphimet->SetHistogram(phimuphimet_stack_18);
   
   
   TH1D *phimuphimet86 = new TH1D("phimuphimet86"," #Delta_{#phi}[#mu,MET]",10,0,3.141593);
   phimuphimet86->SetBinContent(1,230.641);
   phimuphimet86->SetBinContent(2,216.3046);
   phimuphimet86->SetBinContent(3,223.2529);
   phimuphimet86->SetBinContent(4,205.0752);
   phimuphimet86->SetBinContent(5,177.4887);
   phimuphimet86->SetBinContent(6,185.6797);
   phimuphimet86->SetBinContent(7,165.8596);
   phimuphimet86->SetBinContent(8,166.2099);
   phimuphimet86->SetBinContent(9,159.2644);
   phimuphimet86->SetBinContent(10,174.5095);
   phimuphimet86->SetBinError(1,8.61142);
   phimuphimet86->SetBinError(2,8.327371);
   phimuphimet86->SetBinError(3,8.486581);
   phimuphimet86->SetBinError(4,8.129407);
   phimuphimet86->SetBinError(5,7.536633);
   phimuphimet86->SetBinError(6,7.726982);
   phimuphimet86->SetBinError(7,7.294678);
   phimuphimet86->SetBinError(8,7.302349);
   phimuphimet86->SetBinError(9,7.154931);
   phimuphimet86->SetBinError(10,7.4987);
   phimuphimet86->SetEntries(17572);

   ci = TColor::GetColor("#00cc00");
   phimuphimet86->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimuphimet86->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimuphimet86->SetMarkerColor(ci);
   phimuphimet86->SetMarkerStyle(22);
   phimuphimet86->GetXaxis()->SetTitle("phimuphimet");
   phimuphimet86->GetXaxis()->SetLabelFont(42);
   phimuphimet86->GetXaxis()->SetLabelSize(0.035);
   phimuphimet86->GetXaxis()->SetTitleSize(0.035);
   phimuphimet86->GetXaxis()->SetTitleFont(42);
   phimuphimet86->GetYaxis()->SetTitle("Events/pb");
   phimuphimet86->GetYaxis()->SetLabelFont(42);
   phimuphimet86->GetYaxis()->SetLabelSize(0.035);
   phimuphimet86->GetYaxis()->SetTitleSize(0.035);
   phimuphimet86->GetYaxis()->SetTitleFont(42);
   phimuphimet86->GetZaxis()->SetLabelFont(42);
   phimuphimet86->GetZaxis()->SetLabelSize(0.035);
   phimuphimet86->GetZaxis()->SetTitleSize(0.035);
   phimuphimet86->GetZaxis()->SetTitleFont(42);
   phimuphimet->Add(phimuphimet,"");
   
   TH1D *phimuphimet87 = new TH1D("phimuphimet87"," #Delta_{#phi}[#mu,MET]",10,0,3.141593);
   phimuphimet87->SetBinContent(1,6.11516);
   phimuphimet87->SetBinContent(2,5.535954);
   phimuphimet87->SetBinContent(3,5.331195);
   phimuphimet87->SetBinContent(4,5.298494);
   phimuphimet87->SetBinContent(5,5.612855);
   phimuphimet87->SetBinContent(6,5.975299);
   phimuphimet87->SetBinContent(7,6.323196);
   phimuphimet87->SetBinContent(8,6.999136);
   phimuphimet87->SetBinContent(9,7.03292);
   phimuphimet87->SetBinContent(10,7.011011);
   phimuphimet87->SetBinError(1,0.06763086);
   phimuphimet87->SetBinError(2,0.06433893);
   phimuphimet87->SetBinError(3,0.06348647);
   phimuphimet87->SetBinError(4,0.06307663);
   phimuphimet87->SetBinError(5,0.06520844);
   phimuphimet87->SetBinError(6,0.06748244);
   phimuphimet87->SetBinError(7,0.06973671);
   phimuphimet87->SetBinError(8,0.07416886);
   phimuphimet87->SetBinError(9,0.07436969);
   phimuphimet87->SetBinError(10,0.07420837);
   phimuphimet87->SetEntries(277262);

   ci = TColor::GetColor("#00ffff");
   phimuphimet87->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimuphimet87->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimuphimet87->SetMarkerColor(ci);
   phimuphimet87->SetMarkerStyle(20);
   phimuphimet87->GetXaxis()->SetTitle("phimuphimet");
   phimuphimet87->GetXaxis()->SetLabelFont(42);
   phimuphimet87->GetXaxis()->SetLabelSize(0.035);
   phimuphimet87->GetXaxis()->SetTitleSize(0.035);
   phimuphimet87->GetXaxis()->SetTitleFont(42);
   phimuphimet87->GetYaxis()->SetTitle("Events/pb");
   phimuphimet87->GetYaxis()->SetLabelFont(42);
   phimuphimet87->GetYaxis()->SetLabelSize(0.035);
   phimuphimet87->GetYaxis()->SetTitleSize(0.035);
   phimuphimet87->GetYaxis()->SetTitleFont(42);
   phimuphimet87->GetZaxis()->SetLabelFont(42);
   phimuphimet87->GetZaxis()->SetLabelSize(0.035);
   phimuphimet87->GetZaxis()->SetTitleSize(0.035);
   phimuphimet87->GetZaxis()->SetTitleFont(42);
   phimuphimet->Add(phimuphimet,"");
   
   TH1D *phimuphimet88 = new TH1D("phimuphimet88"," #Delta_{#phi}[#mu,MET]",10,0,3.141593);
   phimuphimet88->SetBinContent(1,0.1344125);
   phimuphimet88->SetBinContent(2,0.132705);
   phimuphimet88->SetBinContent(3,0.1303004);
   phimuphimet88->SetBinContent(4,0.1480002);
   phimuphimet88->SetBinContent(5,0.1484594);
   phimuphimet88->SetBinContent(6,0.1440116);
   phimuphimet88->SetBinContent(7,0.1488838);
   phimuphimet88->SetBinContent(8,0.1551468);
   phimuphimet88->SetBinContent(9,0.1613277);
   phimuphimet88->SetBinContent(10,0.1643883);
   phimuphimet88->SetBinError(1,0.003182629);
   phimuphimet88->SetBinError(2,0.003158543);
   phimuphimet88->SetBinError(3,0.003130767);
   phimuphimet88->SetBinError(4,0.003374797);
   phimuphimet88->SetBinError(5,0.003387715);
   phimuphimet88->SetBinError(6,0.003328977);
   phimuphimet88->SetBinError(7,0.003366558);
   phimuphimet88->SetBinError(8,0.003466203);
   phimuphimet88->SetBinError(9,0.003519969);
   phimuphimet88->SetBinError(10,0.003565516);
   phimuphimet88->SetEntries(46443);

   ci = TColor::GetColor("#ffcc00");
   phimuphimet88->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimuphimet88->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimuphimet88->SetMarkerColor(ci);
   phimuphimet88->SetMarkerStyle(21);
   phimuphimet88->GetXaxis()->SetTitle("phimuphimet");
   phimuphimet88->GetXaxis()->SetLabelFont(42);
   phimuphimet88->GetXaxis()->SetLabelSize(0.035);
   phimuphimet88->GetXaxis()->SetTitleSize(0.035);
   phimuphimet88->GetXaxis()->SetTitleFont(42);
   phimuphimet88->GetYaxis()->SetTitle("Events/pb");
   phimuphimet88->GetYaxis()->SetLabelFont(42);
   phimuphimet88->GetYaxis()->SetLabelSize(0.035);
   phimuphimet88->GetYaxis()->SetTitleSize(0.035);
   phimuphimet88->GetYaxis()->SetTitleFont(42);
   phimuphimet88->GetZaxis()->SetLabelFont(42);
   phimuphimet88->GetZaxis()->SetLabelSize(0.035);
   phimuphimet88->GetZaxis()->SetTitleSize(0.035);
   phimuphimet88->GetZaxis()->SetTitleFont(42);
   phimuphimet->Add(phimuphimet,"");
   
   TH1D *phimuphimet89 = new TH1D("phimuphimet89"," #Delta_{#phi}[#mu,MET]",10,0,3.141593);
   phimuphimet89->SetBinContent(1,0.02346078);
   phimuphimet89->SetBinContent(2,0.02244276);
   phimuphimet89->SetBinContent(3,0.02157898);
   phimuphimet89->SetBinContent(4,0.01833982);
   phimuphimet89->SetBinContent(5,0.01554797);
   phimuphimet89->SetBinContent(6,0.01431401);
   phimuphimet89->SetBinContent(7,0.01304919);
   phimuphimet89->SetBinContent(8,0.0118615);
   phimuphimet89->SetBinContent(9,0.01159928);
   phimuphimet89->SetBinContent(10,0.01039616);
   phimuphimet89->SetBinError(1,0.0006015585);
   phimuphimet89->SetBinError(2,0.0005883622);
   phimuphimet89->SetBinError(3,0.0005769286);
   phimuphimet89->SetBinError(4,0.0005318684);
   phimuphimet89->SetBinError(5,0.0004897151);
   phimuphimet89->SetBinError(6,0.0004698803);
   phimuphimet89->SetBinError(7,0.0004486404);
   phimuphimet89->SetBinError(8,0.0004277366);
   phimuphimet89->SetBinError(9,0.0004229823);
   phimuphimet89->SetBinError(10,0.0004004453);
   phimuphimet89->SetEntries(10541);

   ci = TColor::GetColor("#ff0000");
   phimuphimet89->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimuphimet89->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimuphimet89->SetMarkerColor(ci);
   phimuphimet89->SetMarkerStyle(20);
   phimuphimet89->GetXaxis()->SetTitle("phimuphimet");
   phimuphimet89->GetXaxis()->SetLabelFont(42);
   phimuphimet89->GetXaxis()->SetLabelSize(0.035);
   phimuphimet89->GetXaxis()->SetTitleSize(0.035);
   phimuphimet89->GetXaxis()->SetTitleFont(42);
   phimuphimet89->GetYaxis()->SetTitle("Events/pb");
   phimuphimet89->GetYaxis()->SetLabelFont(42);
   phimuphimet89->GetYaxis()->SetLabelSize(0.035);
   phimuphimet89->GetYaxis()->SetTitleSize(0.035);
   phimuphimet89->GetYaxis()->SetTitleFont(42);
   phimuphimet89->GetZaxis()->SetLabelFont(42);
   phimuphimet89->GetZaxis()->SetLabelSize(0.035);
   phimuphimet89->GetZaxis()->SetTitleSize(0.035);
   phimuphimet89->GetZaxis()->SetTitleFont(42);
   phimuphimet->Add(phimuphimet,"");
   
   TH1D *phimuphimet90 = new TH1D("phimuphimet90"," #Delta_{#phi}[#mu,MET]",10,0,3.141593);
   phimuphimet90->SetBinContent(1,0.005199211);
   phimuphimet90->SetBinContent(2,0.004561888);
   phimuphimet90->SetBinContent(3,0.004595431);
   phimuphimet90->SetBinContent(4,0.00447803);
   phimuphimet90->SetBinContent(5,0.004159369);
   phimuphimet90->SetBinContent(6,0.003891022);
   phimuphimet90->SetBinContent(7,0.004394172);
   phimuphimet90->SetBinContent(8,0.003907794);
   phimuphimet90->SetBinContent(9,0.00407551);
   phimuphimet90->SetBinContent(10,0.003522046);
   phimuphimet90->SetBinError(1,0.0002952953);
   phimuphimet90->SetBinError(2,0.0002766051);
   phimuphimet90->SetBinError(3,0.0002776202);
   phimuphimet90->SetBinError(4,0.000274051);
   phimuphimet90->SetBinError(5,0.0002641202);
   phimuphimet90->SetBinError(6,0.0002554581);
   phimuphimet90->SetBinError(7,0.0002714728);
   phimuphimet90->SetBinError(8,0.0002560081);
   phimuphimet90->SetBinError(9,0.0002614441);
   phimuphimet90->SetBinError(10,0.0002430443);
   phimuphimet90->SetEntries(2551);

   ci = TColor::GetColor("#0000ff");
   phimuphimet90->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimuphimet90->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimuphimet90->SetMarkerColor(ci);
   phimuphimet90->SetMarkerStyle(21);
   phimuphimet90->GetXaxis()->SetTitle("phimuphimet");
   phimuphimet90->GetXaxis()->SetLabelFont(42);
   phimuphimet90->GetXaxis()->SetLabelSize(0.035);
   phimuphimet90->GetXaxis()->SetTitleSize(0.035);
   phimuphimet90->GetXaxis()->SetTitleFont(42);
   phimuphimet90->GetYaxis()->SetTitle("Events/pb");
   phimuphimet90->GetYaxis()->SetLabelFont(42);
   phimuphimet90->GetYaxis()->SetLabelSize(0.035);
   phimuphimet90->GetYaxis()->SetTitleSize(0.035);
   phimuphimet90->GetYaxis()->SetTitleFont(42);
   phimuphimet90->GetZaxis()->SetLabelFont(42);
   phimuphimet90->GetZaxis()->SetLabelSize(0.035);
   phimuphimet90->GetZaxis()->SetTitleSize(0.035);
   phimuphimet90->GetZaxis()->SetTitleFont(42);
   phimuphimet->Add(phimuphimet,"");
   phimuphimet->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3326724,0.9342857,0.6673276,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("phimuphimet");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimuphimet","phimuphimet_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphimet","phimuphimet_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphimet","phimuphimet_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphimet","phimuphimet_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphimet","phimuphimet_ttbar","lp");

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
   phimuphimet->Modified();
   phimuphimet->cd();
   phimuphimet->SetSelected(phimuphimet);
}
