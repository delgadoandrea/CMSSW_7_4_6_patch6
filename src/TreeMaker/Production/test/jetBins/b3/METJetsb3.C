void METJetsb3()
{
//=========Macro generated from canvas: b3/METJetsb3/b3/METJetsb3
//=========  (Tue Nov 24 14:23:54 2015) by ROOT version6.02/05
   TCanvas *b3/METJetsb3 = new TCanvas("b3/METJetsb3", "b3/METJetsb3",20,42,700,700);
   b3/METJetsb3->Range(-1.875,-5.87466,16.875,-0.2969325);
   b3/METJetsb3->SetFillColor(0);
   b3/METJetsb3->SetBorderMode(0);
   b3/METJetsb3->SetBorderSize(2);
   b3/METJetsb3->SetLogy();
   b3/METJetsb3->SetFrameBorderMode(0);
   b3/METJetsb3->SetFrameBorderMode(0);
   
   THStack *b3/METJetsb3 = new THStack();
   b3/METJetsb3->SetName("b3/METJetsb3");
   b3/METJetsb3->SetTitle("b3/METJetsb3");
   
   TH1F *b3/METJetsb3_stack_2 = new TH1F("b3/METJetsb3_stack_2","b3/METJetsb3",15,0,15);
   b3/METJetsb3_stack_2->SetMinimum(4.820734e-06);
   b3/METJetsb3_stack_2->SetMaximum(0.1397317);
   b3/METJetsb3_stack_2->SetDirectory(0);
   b3/METJetsb3_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b3/METJetsb3_stack_2->SetLineColor(ci);
   b3/METJetsb3_stack_2->GetXaxis()->SetTitle("b3/METJetsb3");
   b3/METJetsb3_stack_2->GetXaxis()->SetLabelFont(42);
   b3/METJetsb3_stack_2->GetXaxis()->SetLabelSize(0.035);
   b3/METJetsb3_stack_2->GetXaxis()->SetTitleSize(0.035);
   b3/METJetsb3_stack_2->GetXaxis()->SetTitleFont(42);
   b3/METJetsb3_stack_2->GetYaxis()->SetTitle("Events/pb");
   b3/METJetsb3_stack_2->GetYaxis()->SetLabelFont(42);
   b3/METJetsb3_stack_2->GetYaxis()->SetLabelSize(0.035);
   b3/METJetsb3_stack_2->GetYaxis()->SetTitleSize(0.035);
   b3/METJetsb3_stack_2->GetYaxis()->SetTitleFont(42);
   b3/METJetsb3_stack_2->GetZaxis()->SetLabelFont(42);
   b3/METJetsb3_stack_2->GetZaxis()->SetLabelSize(0.035);
   b3/METJetsb3_stack_2->GetZaxis()->SetTitleSize(0.035);
   b3/METJetsb3_stack_2->GetZaxis()->SetTitleFont(42);
   b3/METJetsb3->SetHistogram(b3/METJetsb3_stack_2);
   
   
   TH1D *METJetsb36 = new TH1D("METJetsb36"," Number of jets in MET hemisphere",15,0,15);
   METJetsb36->SetBinContent(4,0.01580636);
   METJetsb36->SetBinContent(5,0.01716774);
   METJetsb36->SetBinContent(6,0.03857011);
   METJetsb36->SetBinContent(7,0.02397464);
   METJetsb36->SetBinContent(8,0.05573785);
   METJetsb36->SetBinContent(9,0.0198905);
   METJetsb36->SetBinContent(10,0.01852912);
   METJetsb36->SetBinContent(11,0.01648705);
   METJetsb36->SetBinContent(12,0.0068069);
   METJetsb36->SetBinContent(13,0.00272276);
   METJetsb36->SetBinContent(14,0.00136138);
   METJetsb36->SetBinError(4,0.008619667);
   METJetsb36->SetBinError(5,0.008673255);
   METJetsb36->SetBinError(6,0.01472659);
   METJetsb36->SetBinError(7,0.008936371);
   METJetsb36->SetBinError(8,0.01709087);
   METJetsb36->SetBinError(9,0.008779448);
   METJetsb36->SetBinError(10,0.008726513);
   METJetsb36->SetBinError(11,0.008646503);
   METJetsb36->SetBinError(12,0.002152531);
   METJetsb36->SetBinError(13,0.00136138);
   METJetsb36->SetBinError(14,0.000962641);
   METJetsb36->SetEntries(173);

   ci = TColor::GetColor("#00cc00");
   METJetsb36->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METJetsb36->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METJetsb36->SetMarkerColor(ci);
   METJetsb36->SetMarkerStyle(22);
   METJetsb36->GetXaxis()->SetTitle("METJetsb3");
   METJetsb36->GetXaxis()->SetLabelFont(42);
   METJetsb36->GetXaxis()->SetLabelSize(0.035);
   METJetsb36->GetXaxis()->SetTitleSize(0.035);
   METJetsb36->GetXaxis()->SetTitleFont(42);
   METJetsb36->GetYaxis()->SetTitle("Events/pb");
   METJetsb36->GetYaxis()->SetLabelFont(42);
   METJetsb36->GetYaxis()->SetLabelSize(0.035);
   METJetsb36->GetYaxis()->SetTitleSize(0.035);
   METJetsb36->GetYaxis()->SetTitleFont(42);
   METJetsb36->GetZaxis()->SetLabelFont(42);
   METJetsb36->GetZaxis()->SetLabelSize(0.035);
   METJetsb36->GetZaxis()->SetTitleSize(0.035);
   METJetsb36->GetZaxis()->SetTitleFont(42);
   b3/METJetsb3->Add(METJetsb3,"");
   
   TH1D *METJetsb37 = new TH1D("METJetsb37"," Number of jets in MET hemisphere",15,0,15);
   METJetsb37->SetBinContent(2,0.002338485);
   METJetsb37->SetBinContent(3,0.01213548);
   METJetsb37->SetBinContent(4,0.03911485);
   METJetsb37->SetBinContent(5,0.05935342);
   METJetsb37->SetBinContent(6,0.07976154);
   METJetsb37->SetBinContent(7,0.07921214);
   METJetsb37->SetBinContent(8,0.07074378);
   METJetsb37->SetBinContent(9,0.05650522);
   METJetsb37->SetBinContent(10,0.03861221);
   METJetsb37->SetBinContent(11,0.02423331);
   METJetsb37->SetBinContent(12,0.01568092);
   METJetsb37->SetBinContent(13,0.007865999);
   METJetsb37->SetBinContent(14,0.004044566);
   METJetsb37->SetBinContent(15,0.002485602);
   METJetsb37->SetBinContent(16,0.001332737);
   METJetsb37->SetBinError(2,0.0004741848);
   METJetsb37->SetBinError(3,0.001070286);
   METJetsb37->SetBinError(4,0.001860397);
   METJetsb37->SetBinError(5,0.002122127);
   METJetsb37->SetBinError(6,0.00260765);
   METJetsb37->SetBinError(7,0.002484655);
   METJetsb37->SetBinError(8,0.00213964);
   METJetsb37->SetBinError(9,0.002290398);
   METJetsb37->SetBinError(10,0.001484044);
   METJetsb37->SetBinError(11,0.001122589);
   METJetsb37->SetBinError(12,0.0009340995);
   METJetsb37->SetBinError(13,0.0005900923);
   METJetsb37->SetBinError(14,0.000436201);
   METJetsb37->SetBinError(15,0.0003518751);
   METJetsb37->SetBinError(16,0.0001839227);
   METJetsb37->SetEntries(19755);

   ci = TColor::GetColor("#00ffff");
   METJetsb37->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METJetsb37->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METJetsb37->SetMarkerColor(ci);
   METJetsb37->SetMarkerStyle(20);
   METJetsb37->GetXaxis()->SetTitle("METJetsb3");
   METJetsb37->GetXaxis()->SetLabelFont(42);
   METJetsb37->GetXaxis()->SetLabelSize(0.035);
   METJetsb37->GetXaxis()->SetTitleSize(0.035);
   METJetsb37->GetXaxis()->SetTitleFont(42);
   METJetsb37->GetYaxis()->SetTitle("Events/pb");
   METJetsb37->GetYaxis()->SetLabelFont(42);
   METJetsb37->GetYaxis()->SetLabelSize(0.035);
   METJetsb37->GetYaxis()->SetTitleSize(0.035);
   METJetsb37->GetYaxis()->SetTitleFont(42);
   METJetsb37->GetZaxis()->SetLabelFont(42);
   METJetsb37->GetZaxis()->SetLabelSize(0.035);
   METJetsb37->GetZaxis()->SetTitleSize(0.035);
   METJetsb37->GetZaxis()->SetTitleFont(42);
   b3/METJetsb3->Add(METJetsb3,"");
   
   TH1D *METJetsb38 = new TH1D("METJetsb38"," Number of jets in MET hemisphere",15,0,15);
   METJetsb38->SetBinContent(2,0.0009177575);
   METJetsb38->SetBinContent(3,0.00576745);
   METJetsb38->SetBinContent(4,0.01292017);
   METJetsb38->SetBinContent(5,0.01880496);
   METJetsb38->SetBinContent(6,0.02087393);
   METJetsb38->SetBinContent(7,0.02034564);
   METJetsb38->SetBinContent(8,0.015766);
   METJetsb38->SetBinContent(9,0.01107381);
   METJetsb38->SetBinContent(10,0.008173232);
   METJetsb38->SetBinContent(11,0.005028661);
   METJetsb38->SetBinContent(12,0.002473002);
   METJetsb38->SetBinContent(13,0.001381076);
   METJetsb38->SetBinContent(14,0.0007763309);
   METJetsb38->SetBinContent(15,0.0003814013);
   METJetsb38->SetBinContent(16,0.0002253684);
   METJetsb38->SetBinError(2,0.000129842);
   METJetsb38->SetBinError(3,0.0003288236);
   METJetsb38->SetBinError(4,0.000503543);
   METJetsb38->SetBinError(5,0.0005596204);
   METJetsb38->SetBinError(6,0.0005627736);
   METJetsb38->SetBinError(7,0.000546037);
   METJetsb38->SetBinError(8,0.0004419707);
   METJetsb38->SetBinError(9,0.0003442228);
   METJetsb38->SetBinError(10,0.0003222388);
   METJetsb38->SetBinError(11,0.0002385337);
   METJetsb38->SetBinError(12,0.0001445456);
   METJetsb38->SetBinError(13,0.0001153007);
   METJetsb38->SetBinError(14,9.079403e-05);
   METJetsb38->SetBinError(15,5.475103e-05);
   METJetsb38->SetBinError(16,2.085404e-05);
   METJetsb38->SetEntries(37083);

   ci = TColor::GetColor("#ffcc00");
   METJetsb38->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METJetsb38->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METJetsb38->SetMarkerColor(ci);
   METJetsb38->SetMarkerStyle(21);
   METJetsb38->GetXaxis()->SetTitle("METJetsb3");
   METJetsb38->GetXaxis()->SetLabelFont(42);
   METJetsb38->GetXaxis()->SetLabelSize(0.035);
   METJetsb38->GetXaxis()->SetTitleSize(0.035);
   METJetsb38->GetXaxis()->SetTitleFont(42);
   METJetsb38->GetYaxis()->SetTitle("Events/pb");
   METJetsb38->GetYaxis()->SetLabelFont(42);
   METJetsb38->GetYaxis()->SetLabelSize(0.035);
   METJetsb38->GetYaxis()->SetTitleSize(0.035);
   METJetsb38->GetYaxis()->SetTitleFont(42);
   METJetsb38->GetZaxis()->SetLabelFont(42);
   METJetsb38->GetZaxis()->SetLabelSize(0.035);
   METJetsb38->GetZaxis()->SetTitleSize(0.035);
   METJetsb38->GetZaxis()->SetTitleFont(42);
   b3/METJetsb3->Add(METJetsb3,"");
   
   TH1D *METJetsb39 = new TH1D("METJetsb39"," Number of jets in MET hemisphere",15,0,15);
   METJetsb39->SetBinContent(2,1.542458e-05);
   METJetsb39->SetBinContent(3,0.0002467932);
   METJetsb39->SetBinContent(4,0.0007866534);
   METJetsb39->SetBinContent(5,0.001635005);
   METJetsb39->SetBinContent(6,0.002868971);
   METJetsb39->SetBinContent(7,0.003717323);
   METJetsb39->SetBinContent(8,0.003485954);
   METJetsb39->SetBinContent(9,0.003007792);
   METJetsb39->SetBinContent(10,0.00289982);
   METJetsb39->SetBinContent(11,0.002051469);
   METJetsb39->SetBinContent(12,0.001496184);
   METJetsb39->SetBinContent(13,0.0008329271);
   METJetsb39->SetBinContent(14,0.0007095305);
   METJetsb39->SetBinContent(15,0.0002930669);
   METJetsb39->SetBinContent(16,0.0003701898);
   METJetsb39->SetBinError(2,1.542458e-05);
   METJetsb39->SetBinError(3,6.16983e-05);
   METJetsb39->SetBinError(4,0.0001101535);
   METJetsb39->SetBinError(5,0.0001588057);
   METJetsb39->SetBinError(6,0.0002103632);
   METJetsb39->SetBinError(7,0.0002394538);
   METJetsb39->SetBinError(8,0.0002318822);
   METJetsb39->SetBinError(9,0.0002153925);
   METJetsb39->SetBinError(10,0.0002114911);
   METJetsb39->SetBinError(11,0.0001778849);
   METJetsb39->SetBinError(12,0.0001519145);
   METJetsb39->SetBinError(13,0.000113347);
   METJetsb39->SetBinError(14,0.0001046146);
   METJetsb39->SetBinError(15,6.723417e-05);
   METJetsb39->SetBinError(16,7.556468e-05);
   METJetsb39->SetEntries(1583);

   ci = TColor::GetColor("#ff0000");
   METJetsb39->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METJetsb39->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METJetsb39->SetMarkerColor(ci);
   METJetsb39->SetMarkerStyle(20);
   METJetsb39->GetXaxis()->SetTitle("METJetsb3");
   METJetsb39->GetXaxis()->SetLabelFont(42);
   METJetsb39->GetXaxis()->SetLabelSize(0.035);
   METJetsb39->GetXaxis()->SetTitleSize(0.035);
   METJetsb39->GetXaxis()->SetTitleFont(42);
   METJetsb39->GetYaxis()->SetTitle("Events/pb");
   METJetsb39->GetYaxis()->SetLabelFont(42);
   METJetsb39->GetYaxis()->SetLabelSize(0.035);
   METJetsb39->GetYaxis()->SetTitleSize(0.035);
   METJetsb39->GetYaxis()->SetTitleFont(42);
   METJetsb39->GetZaxis()->SetLabelFont(42);
   METJetsb39->GetZaxis()->SetLabelSize(0.035);
   METJetsb39->GetZaxis()->SetTitleSize(0.035);
   METJetsb39->GetZaxis()->SetTitleFont(42);
   b3/METJetsb3->Add(METJetsb3,"");
   
   TH1D *METJetsb310 = new TH1D("METJetsb310"," Number of jets in MET hemisphere",15,0,15);
   METJetsb310->SetBinContent(5,1.677165e-05);
   METJetsb310->SetBinContent(6,8.385824e-05);
   METJetsb310->SetBinContent(7,0.0002348031);
   METJetsb310->SetBinContent(8,0.0001341732);
   METJetsb310->SetBinContent(9,0.0002683464);
   METJetsb310->SetBinContent(10,0.0004025195);
   METJetsb310->SetBinContent(11,0.0003018897);
   METJetsb310->SetBinContent(12,0.0002012598);
   METJetsb310->SetBinContent(13,0.0002683464);
   METJetsb310->SetBinContent(14,0.0001174015);
   METJetsb310->SetBinContent(15,8.385824e-05);
   METJetsb310->SetBinContent(16,0.0001006299);
   METJetsb310->SetBinError(5,1.677165e-05);
   METJetsb310->SetBinError(6,3.750254e-05);
   METJetsb310->SetBinError(7,6.275376e-05);
   METJetsb310->SetBinError(8,4.743738e-05);
   METJetsb310->SetBinError(9,6.708659e-05);
   METJetsb310->SetBinError(10,8.216396e-05);
   METJetsb310->SetBinError(11,7.115607e-05);
   METJetsb310->SetBinError(12,5.809869e-05);
   METJetsb310->SetBinError(13,6.708659e-05);
   METJetsb310->SetBinError(14,4.437361e-05);
   METJetsb310->SetBinError(15,3.750254e-05);
   METJetsb310->SetBinError(16,4.108198e-05);
   METJetsb310->SetEntries(132);

   ci = TColor::GetColor("#0000ff");
   METJetsb310->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METJetsb310->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METJetsb310->SetMarkerColor(ci);
   METJetsb310->SetMarkerStyle(21);
   METJetsb310->GetXaxis()->SetTitle("METJetsb3");
   METJetsb310->GetXaxis()->SetLabelFont(42);
   METJetsb310->GetXaxis()->SetLabelSize(0.035);
   METJetsb310->GetXaxis()->SetTitleSize(0.035);
   METJetsb310->GetXaxis()->SetTitleFont(42);
   METJetsb310->GetYaxis()->SetTitle("Events/pb");
   METJetsb310->GetYaxis()->SetLabelFont(42);
   METJetsb310->GetYaxis()->SetLabelSize(0.035);
   METJetsb310->GetYaxis()->SetTitleSize(0.035);
   METJetsb310->GetYaxis()->SetTitleFont(42);
   METJetsb310->GetZaxis()->SetLabelFont(42);
   METJetsb310->GetZaxis()->SetLabelSize(0.035);
   METJetsb310->GetZaxis()->SetTitleSize(0.035);
   METJetsb310->GetZaxis()->SetTitleFont(42);
   b3/METJetsb3->Add(METJetsb3,"");
   b3/METJetsb3->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3218966,0.94,0.6781034,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b3/METJetsb3");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METJetsb3","b3/METJetsb3_QCD_b3/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METJetsb3","b3/METJetsb3_WJetsToLNu_b3/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METJetsb3","b3/METJetsb3_ZJetsToNuNu_b3/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METJetsb3","b3/METJetsb3_signal_b3/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METJetsb3","b3/METJetsb3_ttbar_b3/","lp");

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
   b3/METJetsb3->Modified();
   b3/METJetsb3->cd();
   b3/METJetsb3->SetSelected(b3/METJetsb3);
}
