void phijet1phijet2()
{
//=========Macro generated from canvas: phijet1phijet2/phijet1phijet2
//=========  (Mon Nov 23 12:45:19 2015) by ROOT version6.02/05
   TCanvas *phijet1phijet2 = new TCanvas("phijet1phijet2", "phijet1phijet2",340,362,700,700);
   phijet1phijet2->Range(-3.926991,-5.169701,3.926991,-0.02138078);
   phijet1phijet2->SetFillColor(0);
   phijet1phijet2->SetBorderMode(0);
   phijet1phijet2->SetBorderSize(2);
   phijet1phijet2->SetLogy();
   phijet1phijet2->SetFrameBorderMode(0);
   phijet1phijet2->SetFrameBorderMode(0);
   
   THStack *phijet1phijet2 = new THStack();
   phijet1phijet2->SetName("phijet1phijet2");
   phijet1phijet2->SetTitle("phijet1phijet2");
   
   TH1F *phijet1phijet2_stack_18 = new TH1F("phijet1phijet2_stack_18","phijet1phijet2",20,-3.141593,3.141593);
   phijet1phijet2_stack_18->SetMinimum(2.213764e-05);
   phijet1phijet2_stack_18->SetMaximum(0.2909291);
   phijet1phijet2_stack_18->SetDirectory(0);
   phijet1phijet2_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   phijet1phijet2_stack_18->SetLineColor(ci);
   phijet1phijet2_stack_18->GetXaxis()->SetTitle("phijet1phijet2");
   phijet1phijet2_stack_18->GetXaxis()->SetLabelFont(42);
   phijet1phijet2_stack_18->GetXaxis()->SetLabelSize(0.035);
   phijet1phijet2_stack_18->GetXaxis()->SetTitleSize(0.035);
   phijet1phijet2_stack_18->GetXaxis()->SetTitleFont(42);
   phijet1phijet2_stack_18->GetYaxis()->SetTitle("Events/pb");
   phijet1phijet2_stack_18->GetYaxis()->SetLabelFont(42);
   phijet1phijet2_stack_18->GetYaxis()->SetLabelSize(0.035);
   phijet1phijet2_stack_18->GetYaxis()->SetTitleSize(0.035);
   phijet1phijet2_stack_18->GetYaxis()->SetTitleFont(42);
   phijet1phijet2_stack_18->GetZaxis()->SetLabelFont(42);
   phijet1phijet2_stack_18->GetZaxis()->SetLabelSize(0.035);
   phijet1phijet2_stack_18->GetZaxis()->SetTitleSize(0.035);
   phijet1phijet2_stack_18->GetZaxis()->SetTitleFont(42);
   phijet1phijet2->SetHistogram(phijet1phijet2_stack_18);
   
   
   TH1D *phijet1phijet286 = new TH1D("phijet1phijet286"," #Delta_{#phi}[jet_{1},jet_{2}]",20,-3.141593,3.141593);
   phijet1phijet286->SetBinContent(1,0.1132886);
   phijet1phijet286->SetBinContent(9,0.01663754);
   phijet1phijet286->SetBinContent(20,0.1720501);
   phijet1phijet286->SetBinError(1,0.02785764);
   phijet1phijet286->SetBinError(9,0.01176452);
   phijet1phijet286->SetBinError(20,0.03460178);
   phijet1phijet286->SetEntries(107);

   ci = TColor::GetColor("#00cc00");
   phijet1phijet286->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phijet1phijet286->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phijet1phijet286->SetMarkerColor(ci);
   phijet1phijet286->SetMarkerStyle(22);
   phijet1phijet286->GetXaxis()->SetTitle("phijet1phijet2");
   phijet1phijet286->GetXaxis()->SetLabelFont(42);
   phijet1phijet286->GetXaxis()->SetLabelSize(0.035);
   phijet1phijet286->GetXaxis()->SetTitleSize(0.035);
   phijet1phijet286->GetXaxis()->SetTitleFont(42);
   phijet1phijet286->GetYaxis()->SetTitle("Events/pb");
   phijet1phijet286->GetYaxis()->SetLabelFont(42);
   phijet1phijet286->GetYaxis()->SetLabelSize(0.035);
   phijet1phijet286->GetYaxis()->SetTitleSize(0.035);
   phijet1phijet286->GetYaxis()->SetTitleFont(42);
   phijet1phijet286->GetZaxis()->SetLabelFont(42);
   phijet1phijet286->GetZaxis()->SetLabelSize(0.035);
   phijet1phijet286->GetZaxis()->SetTitleSize(0.035);
   phijet1phijet286->GetZaxis()->SetTitleFont(42);
   phijet1phijet2->Add(phijet1phijet2,"");
   
   TH1D *phijet1phijet287 = new TH1D("phijet1phijet287"," #Delta_{#phi}[jet_{1},jet_{2}]",20,-3.141593,3.141593);
   phijet1phijet287->SetBinContent(1,0.05815544);
   phijet1phijet287->SetBinContent(2,0.05269268);
   phijet1phijet287->SetBinContent(3,0.04541598);
   phijet1phijet287->SetBinContent(4,0.05259246);
   phijet1phijet287->SetBinContent(5,0.05645715);
   phijet1phijet287->SetBinContent(6,0.05659112);
   phijet1phijet287->SetBinContent(7,0.06244568);
   phijet1phijet287->SetBinContent(8,0.07472507);
   phijet1phijet287->SetBinContent(9,0.1100008);
   phijet1phijet287->SetBinContent(10,0.09091842);
   phijet1phijet287->SetBinContent(11,0.09274931);
   phijet1phijet287->SetBinContent(12,0.1024924);
   phijet1phijet287->SetBinContent(13,0.07706035);
   phijet1phijet287->SetBinContent(14,0.06177775);
   phijet1phijet287->SetBinContent(15,0.05831163);
   phijet1phijet287->SetBinContent(16,0.05023751);
   phijet1phijet287->SetBinContent(17,0.05758238);
   phijet1phijet287->SetBinContent(18,0.05322682);
   phijet1phijet287->SetBinContent(19,0.05741231);
   phijet1phijet287->SetBinContent(20,0.06358341);
   phijet1phijet287->SetBinError(1,0.001981616);
   phijet1phijet287->SetBinError(2,0.001976837);
   phijet1phijet287->SetBinError(3,0.001817558);
   phijet1phijet287->SetBinError(4,0.002503308);
   phijet1phijet287->SetBinError(5,0.003271213);
   phijet1phijet287->SetBinError(6,0.002786245);
   phijet1phijet287->SetBinError(7,0.003584356);
   phijet1phijet287->SetBinError(8,0.003912331);
   phijet1phijet287->SetBinError(9,0.005196448);
   phijet1phijet287->SetBinError(10,0.004721495);
   phijet1phijet287->SetBinError(11,0.004924563);
   phijet1phijet287->SetBinError(12,0.004217931);
   phijet1phijet287->SetBinError(13,0.003737102);
   phijet1phijet287->SetBinError(14,0.002947896);
   phijet1phijet287->SetBinError(15,0.002842907);
   phijet1phijet287->SetBinError(16,0.002237124);
   phijet1phijet287->SetBinError(17,0.002312319);
   phijet1phijet287->SetBinError(18,0.002873169);
   phijet1phijet287->SetBinError(19,0.002481481);
   phijet1phijet287->SetBinError(20,0.002146687);
   phijet1phijet287->SetEntries(28309);

   ci = TColor::GetColor("#00ffff");
   phijet1phijet287->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phijet1phijet287->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phijet1phijet287->SetMarkerColor(ci);
   phijet1phijet287->SetMarkerStyle(20);
   phijet1phijet287->GetXaxis()->SetTitle("phijet1phijet2");
   phijet1phijet287->GetXaxis()->SetLabelFont(42);
   phijet1phijet287->GetXaxis()->SetLabelSize(0.035);
   phijet1phijet287->GetXaxis()->SetTitleSize(0.035);
   phijet1phijet287->GetXaxis()->SetTitleFont(42);
   phijet1phijet287->GetYaxis()->SetTitle("Events/pb");
   phijet1phijet287->GetYaxis()->SetLabelFont(42);
   phijet1phijet287->GetYaxis()->SetLabelSize(0.035);
   phijet1phijet287->GetYaxis()->SetTitleSize(0.035);
   phijet1phijet287->GetYaxis()->SetTitleFont(42);
   phijet1phijet287->GetZaxis()->SetLabelFont(42);
   phijet1phijet287->GetZaxis()->SetLabelSize(0.035);
   phijet1phijet287->GetZaxis()->SetTitleSize(0.035);
   phijet1phijet287->GetZaxis()->SetTitleFont(42);
   phijet1phijet2->Add(phijet1phijet2,"");
   
   TH1D *phijet1phijet288 = new TH1D("phijet1phijet288"," #Delta_{#phi}[jet_{1},jet_{2}]",20,-3.141593,3.141593);
   phijet1phijet288->SetBinContent(1,0.01200646);
   phijet1phijet288->SetBinContent(2,0.01096387);
   phijet1phijet288->SetBinContent(3,0.01053939);
   phijet1phijet288->SetBinContent(4,0.01266773);
   phijet1phijet288->SetBinContent(5,0.01273968);
   phijet1phijet288->SetBinContent(6,0.01395705);
   phijet1phijet288->SetBinContent(7,0.01762122);
   phijet1phijet288->SetBinContent(8,0.01979097);
   phijet1phijet288->SetBinContent(9,0.02742745);
   phijet1phijet288->SetBinContent(10,0.02275594);
   phijet1phijet288->SetBinContent(11,0.02144228);
   phijet1phijet288->SetBinContent(12,0.02646369);
   phijet1phijet288->SetBinContent(13,0.0209905);
   phijet1phijet288->SetBinContent(14,0.01665063);
   phijet1phijet288->SetBinContent(15,0.01528679);
   phijet1phijet288->SetBinContent(16,0.0136844);
   phijet1phijet288->SetBinContent(17,0.0112775);
   phijet1phijet288->SetBinContent(18,0.01208884);
   phijet1phijet288->SetBinContent(19,0.01282492);
   phijet1phijet288->SetBinContent(20,0.01169577);
   phijet1phijet288->SetBinError(1,0.0004187018);
   phijet1phijet288->SetBinError(2,0.0003862395);
   phijet1phijet288->SetBinError(3,0.0003876448);
   phijet1phijet288->SetBinError(4,0.0004692215);
   phijet1phijet288->SetBinError(5,0.0005248928);
   phijet1phijet288->SetBinError(6,0.0005581719);
   phijet1phijet288->SetBinError(7,0.0006896011);
   phijet1phijet288->SetBinError(8,0.0007852447);
   phijet1phijet288->SetBinError(9,0.0009171111);
   phijet1phijet288->SetBinError(10,0.0008623533);
   phijet1phijet288->SetBinError(11,0.0008025253);
   phijet1phijet288->SetBinError(12,0.0008878304);
   phijet1phijet288->SetBinError(13,0.0008027886);
   phijet1phijet288->SetBinError(14,0.000666885);
   phijet1phijet288->SetBinError(15,0.0006034405);
   phijet1phijet288->SetBinError(16,0.0005547272);
   phijet1phijet288->SetBinError(17,0.0004374312);
   phijet1phijet288->SetBinError(18,0.0004269941);
   phijet1phijet288->SetBinError(19,0.0004259308);
   phijet1phijet288->SetBinError(20,0.0003962606);
   phijet1phijet288->SetEntries(44158);

   ci = TColor::GetColor("#ffcc00");
   phijet1phijet288->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phijet1phijet288->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phijet1phijet288->SetMarkerColor(ci);
   phijet1phijet288->SetMarkerStyle(21);
   phijet1phijet288->GetXaxis()->SetTitle("phijet1phijet2");
   phijet1phijet288->GetXaxis()->SetLabelFont(42);
   phijet1phijet288->GetXaxis()->SetLabelSize(0.035);
   phijet1phijet288->GetXaxis()->SetTitleSize(0.035);
   phijet1phijet288->GetXaxis()->SetTitleFont(42);
   phijet1phijet288->GetYaxis()->SetTitle("Events/pb");
   phijet1phijet288->GetYaxis()->SetLabelFont(42);
   phijet1phijet288->GetYaxis()->SetLabelSize(0.035);
   phijet1phijet288->GetYaxis()->SetTitleSize(0.035);
   phijet1phijet288->GetYaxis()->SetTitleFont(42);
   phijet1phijet288->GetZaxis()->SetLabelFont(42);
   phijet1phijet288->GetZaxis()->SetLabelSize(0.035);
   phijet1phijet288->GetZaxis()->SetTitleSize(0.035);
   phijet1phijet288->GetZaxis()->SetTitleFont(42);
   phijet1phijet2->Add(phijet1phijet2,"");
   
   TH1D *phijet1phijet289 = new TH1D("phijet1phijet289"," #Delta_{#phi}[jet_{1},jet_{2}]",20,-3.141593,3.141593);
   phijet1phijet289->SetBinContent(1,0.001002597);
   phijet1phijet289->SetBinContent(2,0.001033447);
   phijet1phijet289->SetBinContent(3,0.001434486);
   phijet1phijet289->SetBinContent(4,0.001465335);
   phijet1phijet289->SetBinContent(5,0.001773826);
   phijet1phijet289->SetBinContent(6,0.001804675);
   phijet1phijet289->SetBinContent(7,0.001773826);
   phijet1phijet289->SetBinContent(8,0.002776424);
   phijet1phijet289->SetBinContent(9,0.003840719);
   phijet1phijet289->SetBinContent(10,0.003115764);
   phijet1phijet289->SetBinContent(11,0.00310034);
   phijet1phijet289->SetBinContent(12,0.002760999);
   phijet1phijet289->SetBinContent(13,0.002699301);
   phijet1phijet289->SetBinContent(14,0.001712128);
   phijet1phijet289->SetBinContent(15,0.001928072);
   phijet1phijet289->SetBinContent(16,0.001465335);
   phijet1phijet289->SetBinContent(17,0.00128024);
   phijet1phijet289->SetBinContent(18,0.001372787);
   phijet1phijet289->SetBinContent(19,0.001403636);
   phijet1phijet289->SetBinContent(20,0.0009717483);
   phijet1phijet289->SetBinError(1,0.0001243569);
   phijet1phijet289->SetBinError(2,0.0001262556);
   phijet1phijet289->SetBinError(3,0.0001487492);
   phijet1phijet289->SetBinError(4,0.0001503402);
   phijet1phijet289->SetBinError(5,0.0001654101);
   phijet1phijet289->SetBinError(6,0.0001668423);
   phijet1phijet289->SetBinError(7,0.0001654101);
   phijet1phijet289->SetBinError(8,0.0002069424);
   phijet1phijet289->SetBinError(9,0.0002433957);
   phijet1phijet289->SetBinError(10,0.0002192244);
   phijet1phijet289->SetBinError(11,0.0002186811);
   phijet1phijet289->SetBinError(12,0.0002063668);
   phijet1phijet289->SetBinError(13,0.000204048);
   phijet1phijet289->SetBinError(14,0.000162508);
   phijet1phijet289->SetBinError(15,0.000172452);
   phijet1phijet289->SetBinError(16,0.0001503402);
   phijet1phijet289->SetBinError(17,0.0001405246);
   phijet1phijet289->SetBinError(18,0.0001455152);
   phijet1phijet289->SetBinError(19,0.0001471411);
   phijet1phijet289->SetBinError(20,0.0001224288);
   phijet1phijet289->SetEntries(2510);

   ci = TColor::GetColor("#ff0000");
   phijet1phijet289->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phijet1phijet289->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phijet1phijet289->SetMarkerColor(ci);
   phijet1phijet289->SetMarkerStyle(20);
   phijet1phijet289->GetXaxis()->SetTitle("phijet1phijet2");
   phijet1phijet289->GetXaxis()->SetLabelFont(42);
   phijet1phijet289->GetXaxis()->SetLabelSize(0.035);
   phijet1phijet289->GetXaxis()->SetTitleSize(0.035);
   phijet1phijet289->GetXaxis()->SetTitleFont(42);
   phijet1phijet289->GetYaxis()->SetTitle("Events/pb");
   phijet1phijet289->GetYaxis()->SetLabelFont(42);
   phijet1phijet289->GetYaxis()->SetLabelSize(0.035);
   phijet1phijet289->GetYaxis()->SetTitleSize(0.035);
   phijet1phijet289->GetYaxis()->SetTitleFont(42);
   phijet1phijet289->GetZaxis()->SetLabelFont(42);
   phijet1phijet289->GetZaxis()->SetLabelSize(0.035);
   phijet1phijet289->GetZaxis()->SetTitleSize(0.035);
   phijet1phijet289->GetZaxis()->SetTitleFont(42);
   phijet1phijet2->Add(phijet1phijet2,"");
   
   TH1D *phijet1phijet290 = new TH1D("phijet1phijet290"," #Delta_{#phi}[jet_{1},jet_{2}]",20,-3.141593,3.141593);
   phijet1phijet290->SetBinContent(20,6.708659e-05);
   phijet1phijet290->SetBinError(20,3.35433e-05);
   phijet1phijet290->SetEntries(4);

   ci = TColor::GetColor("#0000ff");
   phijet1phijet290->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phijet1phijet290->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phijet1phijet290->SetMarkerColor(ci);
   phijet1phijet290->SetMarkerStyle(21);
   phijet1phijet290->GetXaxis()->SetTitle("phijet1phijet2");
   phijet1phijet290->GetXaxis()->SetLabelFont(42);
   phijet1phijet290->GetXaxis()->SetLabelSize(0.035);
   phijet1phijet290->GetXaxis()->SetTitleSize(0.035);
   phijet1phijet290->GetXaxis()->SetTitleFont(42);
   phijet1phijet290->GetYaxis()->SetTitle("Events/pb");
   phijet1phijet290->GetYaxis()->SetLabelFont(42);
   phijet1phijet290->GetYaxis()->SetLabelSize(0.035);
   phijet1phijet290->GetYaxis()->SetTitleSize(0.035);
   phijet1phijet290->GetYaxis()->SetTitleFont(42);
   phijet1phijet290->GetZaxis()->SetLabelFont(42);
   phijet1phijet290->GetZaxis()->SetLabelSize(0.035);
   phijet1phijet290->GetZaxis()->SetTitleSize(0.035);
   phijet1phijet290->GetZaxis()->SetTitleFont(42);
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
