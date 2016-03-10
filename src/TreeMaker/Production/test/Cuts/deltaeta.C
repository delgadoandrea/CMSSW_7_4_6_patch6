void deltaeta()
{
//=========Macro generated from canvas: deltaeta/deltaeta
//=========  (Fri Nov  6 09:03:59 2015) by ROOT version6.02/05
   TCanvas *deltaeta = new TCanvas("deltaeta", "deltaeta",0,23,700,700);
   deltaeta->Range(-12.5,-5.879239,12.5,-0.03362911);
   deltaeta->SetFillColor(0);
   deltaeta->SetBorderMode(0);
   deltaeta->SetBorderSize(2);
   deltaeta->SetLogy();
   deltaeta->SetFrameBorderMode(0);
   deltaeta->SetFrameBorderMode(0);
   
   THStack *deltaeta = new THStack();
   deltaeta->SetName("deltaeta");
   deltaeta->SetTitle("deltaeta");
   
   TH1F *deltaeta_stack_14 = new TH1F("deltaeta_stack_14","deltaeta",20,-10,10);
   deltaeta_stack_14->SetMinimum(5.073663e-06);
   deltaeta_stack_14->SetMaximum(0.240885);
   deltaeta_stack_14->SetDirectory(0);
   deltaeta_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   deltaeta_stack_14->SetLineColor(ci);
   deltaeta_stack_14->GetXaxis()->SetTitle("deltaeta");
   deltaeta_stack_14->GetXaxis()->SetLabelFont(42);
   deltaeta_stack_14->GetXaxis()->SetLabelSize(0.035);
   deltaeta_stack_14->GetXaxis()->SetTitleSize(0.035);
   deltaeta_stack_14->GetXaxis()->SetTitleFont(42);
   deltaeta_stack_14->GetYaxis()->SetTitle("Events/pb");
   deltaeta_stack_14->GetYaxis()->SetLabelFont(42);
   deltaeta_stack_14->GetYaxis()->SetLabelSize(0.035);
   deltaeta_stack_14->GetYaxis()->SetTitleSize(0.035);
   deltaeta_stack_14->GetYaxis()->SetTitleFont(42);
   deltaeta_stack_14->GetZaxis()->SetLabelFont(42);
   deltaeta_stack_14->GetZaxis()->SetLabelSize(0.035);
   deltaeta_stack_14->GetZaxis()->SetTitleSize(0.035);
   deltaeta_stack_14->GetZaxis()->SetTitleFont(42);
   deltaeta->SetHistogram(deltaeta_stack_14);
   
   
   TH1D *deltaeta66 = new TH1D("deltaeta66","#Delta_{#eta}",20,-10,10);
   deltaeta66->SetBinContent(4,0.02632314);
   deltaeta66->SetBinContent(10,0.001250901);
   deltaeta66->SetBinContent(11,0.001250901);
   deltaeta66->SetBinContent(15,0.001250901);
   deltaeta66->SetBinError(4,0.02632314);
   deltaeta66->SetBinError(10,0.001250901);
   deltaeta66->SetBinError(11,0.001250901);
   deltaeta66->SetBinError(15,0.001250901);
   deltaeta66->SetEntries(4);

   ci = TColor::GetColor("#00cc00");
   deltaeta66->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   deltaeta66->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   deltaeta66->SetMarkerColor(ci);
   deltaeta66->SetMarkerStyle(22);
   deltaeta66->GetXaxis()->SetTitle("deltaeta");
   deltaeta66->GetXaxis()->SetLabelFont(42);
   deltaeta66->GetXaxis()->SetLabelSize(0.035);
   deltaeta66->GetXaxis()->SetTitleSize(0.035);
   deltaeta66->GetXaxis()->SetTitleFont(42);
   deltaeta66->GetYaxis()->SetTitle("Events/pb");
   deltaeta66->GetYaxis()->SetLabelFont(42);
   deltaeta66->GetYaxis()->SetLabelSize(0.035);
   deltaeta66->GetYaxis()->SetTitleSize(0.035);
   deltaeta66->GetYaxis()->SetTitleFont(42);
   deltaeta66->GetZaxis()->SetLabelFont(42);
   deltaeta66->GetZaxis()->SetLabelSize(0.035);
   deltaeta66->GetZaxis()->SetTitleSize(0.035);
   deltaeta66->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   
   TH1D *deltaeta67 = new TH1D("deltaeta67","#Delta_{#eta}",20,-10,10);
   deltaeta67->SetBinContent(1,0.001021057);
   deltaeta67->SetBinContent(2,0.003466444);
   deltaeta67->SetBinContent(3,0.01103667);
   deltaeta67->SetBinContent(4,0.03668588);
   deltaeta67->SetBinContent(5,0.06837511);
   deltaeta67->SetBinContent(6,0.1257396);
   deltaeta67->SetBinContent(7,0.1345707);
   deltaeta67->SetBinContent(8,0.09815766);
   deltaeta67->SetBinContent(9,0.06062509);
   deltaeta67->SetBinContent(10,0.03542051);
   deltaeta67->SetBinContent(11,0.041854);
   deltaeta67->SetBinContent(12,0.05919907);
   deltaeta67->SetBinContent(13,0.09763685);
   deltaeta67->SetBinContent(14,0.1324875);
   deltaeta67->SetBinContent(15,0.1174506);
   deltaeta67->SetBinContent(16,0.07444973);
   deltaeta67->SetBinContent(17,0.0279194);
   deltaeta67->SetBinContent(18,0.01527305);
   deltaeta67->SetBinContent(19,0.003809105);
   deltaeta67->SetBinContent(20,0.0004384684);
   deltaeta67->SetBinError(1,0.0009514721);
   deltaeta67->SetBinError(2,0.0010243);
   deltaeta67->SetBinError(3,0.001929607);
   deltaeta67->SetBinError(4,0.003798957);
   deltaeta67->SetBinError(5,0.004821912);
   deltaeta67->SetBinError(6,0.006852018);
   deltaeta67->SetBinError(7,0.007194158);
   deltaeta67->SetBinError(8,0.005724918);
   deltaeta67->SetBinError(9,0.004621672);
   deltaeta67->SetBinError(10,0.003381983);
   deltaeta67->SetBinError(11,0.004009636);
   deltaeta67->SetBinError(12,0.004643538);
   deltaeta67->SetBinError(13,0.006027443);
   deltaeta67->SetBinError(14,0.006819987);
   deltaeta67->SetBinError(15,0.006383416);
   deltaeta67->SetBinError(16,0.005497534);
   deltaeta67->SetBinError(17,0.00314049);
   deltaeta67->SetBinError(18,0.002404103);
   deltaeta67->SetBinError(19,0.001313242);
   deltaeta67->SetBinError(20,0.0003434413);
   deltaeta67->SetEntries(9534);

   ci = TColor::GetColor("#00ffff");
   deltaeta67->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   deltaeta67->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   deltaeta67->SetMarkerColor(ci);
   deltaeta67->SetMarkerStyle(20);
   deltaeta67->GetXaxis()->SetTitle("deltaeta");
   deltaeta67->GetXaxis()->SetLabelFont(42);
   deltaeta67->GetXaxis()->SetLabelSize(0.035);
   deltaeta67->GetXaxis()->SetTitleSize(0.035);
   deltaeta67->GetXaxis()->SetTitleFont(42);
   deltaeta67->GetYaxis()->SetTitle("Events/pb");
   deltaeta67->GetYaxis()->SetLabelFont(42);
   deltaeta67->GetYaxis()->SetLabelSize(0.035);
   deltaeta67->GetYaxis()->SetTitleSize(0.035);
   deltaeta67->GetYaxis()->SetTitleFont(42);
   deltaeta67->GetZaxis()->SetLabelFont(42);
   deltaeta67->GetZaxis()->SetLabelSize(0.035);
   deltaeta67->GetZaxis()->SetTitleSize(0.035);
   deltaeta67->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   
   TH1D *deltaeta68 = new TH1D("deltaeta68","#Delta_{#eta}",20,-10,10);
   deltaeta68->SetBinContent(1,0.0001216615);
   deltaeta68->SetBinContent(2,0.0007323097);
   deltaeta68->SetBinContent(3,0.004878846);
   deltaeta68->SetBinContent(4,0.006906607);
   deltaeta68->SetBinContent(5,0.01598372);
   deltaeta68->SetBinContent(6,0.0277918);
   deltaeta68->SetBinContent(7,0.03165864);
   deltaeta68->SetBinContent(8,0.0266335);
   deltaeta68->SetBinContent(9,0.01599359);
   deltaeta68->SetBinContent(10,0.009968759);
   deltaeta68->SetBinContent(11,0.01216557);
   deltaeta68->SetBinContent(12,0.01560581);
   deltaeta68->SetBinContent(13,0.02554035);
   deltaeta68->SetBinContent(14,0.03170477);
   deltaeta68->SetBinContent(15,0.02890039);
   deltaeta68->SetBinContent(16,0.01768357);
   deltaeta68->SetBinContent(17,0.008105515);
   deltaeta68->SetBinContent(18,0.003436136);
   deltaeta68->SetBinContent(19,0.0003288571);
   deltaeta68->SetBinContent(20,0.0002466397);
   deltaeta68->SetBinError(1,7.765547e-05);
   deltaeta68->SetBinError(2,0.0001834631);
   deltaeta68->SetBinError(3,0.0006183516);
   deltaeta68->SetBinError(4,0.0006131791);
   deltaeta68->SetBinError(5,0.0009395469);
   deltaeta68->SetBinError(6,0.001285467);
   deltaeta68->SetBinError(7,0.001338331);
   deltaeta68->SetBinError(8,0.001217041);
   deltaeta68->SetBinError(9,0.0009292492);
   deltaeta68->SetBinError(10,0.0007070449);
   deltaeta68->SetBinError(11,0.000920637);
   deltaeta68->SetBinError(12,0.00101982);
   deltaeta68->SetBinError(13,0.001188051);
   deltaeta68->SetBinError(14,0.00140537);
   deltaeta68->SetBinError(15,0.001355674);
   deltaeta68->SetBinError(16,0.00101632);
   deltaeta68->SetBinError(17,0.0007257626);
   deltaeta68->SetBinError(18,0.0004021296);
   deltaeta68->SetBinError(19,0.000112374);
   deltaeta68->SetBinError(20,0.0001101405);
   deltaeta68->SetEntries(13132);

   ci = TColor::GetColor("#ffcc00");
   deltaeta68->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   deltaeta68->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   deltaeta68->SetMarkerColor(ci);
   deltaeta68->SetMarkerStyle(21);
   deltaeta68->GetXaxis()->SetTitle("deltaeta");
   deltaeta68->GetXaxis()->SetLabelFont(42);
   deltaeta68->GetXaxis()->SetLabelSize(0.035);
   deltaeta68->GetXaxis()->SetTitleSize(0.035);
   deltaeta68->GetXaxis()->SetTitleFont(42);
   deltaeta68->GetYaxis()->SetTitle("Events/pb");
   deltaeta68->GetYaxis()->SetLabelFont(42);
   deltaeta68->GetYaxis()->SetLabelSize(0.035);
   deltaeta68->GetYaxis()->SetTitleSize(0.035);
   deltaeta68->GetYaxis()->SetTitleFont(42);
   deltaeta68->GetZaxis()->SetLabelFont(42);
   deltaeta68->GetZaxis()->SetLabelSize(0.035);
   deltaeta68->GetZaxis()->SetTitleSize(0.035);
   deltaeta68->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   
   TH1D *deltaeta69 = new TH1D("deltaeta69","#Delta_{#eta}",20,-10,10);
   deltaeta69->SetBinContent(1,7.712288e-05);
   deltaeta69->SetBinContent(2,0.0004164636);
   deltaeta69->SetBinContent(3,0.001203117);
   deltaeta69->SetBinContent(4,0.001758402);
   deltaeta69->SetBinContent(5,0.002992368);
   deltaeta69->SetBinContent(6,0.003609351);
   deltaeta69->SetBinContent(7,0.002976943);
   deltaeta69->SetBinContent(8,0.002005195);
   deltaeta69->SetBinContent(9,0.0009717483);
   deltaeta69->SetBinContent(10,0.0003856144);
   deltaeta69->SetBinContent(11,0.0005398602);
   deltaeta69->SetBinContent(12,0.0008020779);
   deltaeta69->SetBinContent(13,0.001943497);
   deltaeta69->SetBinContent(14,0.003146613);
   deltaeta69->SetBinContent(15,0.003779021);
   deltaeta69->SetBinContent(16,0.002807273);
   deltaeta69->SetBinContent(17,0.001897223);
   deltaeta69->SetBinContent(18,0.0007558042);
   deltaeta69->SetBinContent(19,0.0004164636);
   deltaeta69->SetBinContent(20,6.16983e-05);
   deltaeta69->SetBinError(1,3.44904e-05);
   deltaeta69->SetBinError(2,8.014845e-05);
   deltaeta69->SetBinError(3,0.0001362262);
   deltaeta69->SetBinError(4,0.0001646894);
   deltaeta69->SetBinError(5,0.0002148395);
   deltaeta69->SetBinError(6,0.0002359506);
   deltaeta69->SetBinError(7,0.0002142851);
   deltaeta69->SetBinError(8,0.0001758672);
   deltaeta69->SetBinError(9,0.0001224288);
   deltaeta69->SetBinError(10,7.712288e-05);
   deltaeta69->SetBinError(11,9.125302e-05);
   deltaeta69->SetBinError(12,0.0001112282);
   deltaeta69->SetBinError(13,0.0001731404);
   deltaeta69->SetBinError(14,0.000220307);
   deltaeta69->SetBinError(15,0.0002414328);
   deltaeta69->SetBinError(16,0.0002080889);
   deltaeta69->SetBinError(17,0.0001710668);
   deltaeta69->SetBinError(18,0.000107972);
   deltaeta69->SetBinError(19,8.014845e-05);
   deltaeta69->SetBinError(20,3.084915e-05);
   deltaeta69->SetEntries(2110);

   ci = TColor::GetColor("#ff0000");
   deltaeta69->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   deltaeta69->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   deltaeta69->SetMarkerColor(ci);
   deltaeta69->SetMarkerStyle(20);
   deltaeta69->GetXaxis()->SetTitle("deltaeta");
   deltaeta69->GetXaxis()->SetLabelFont(42);
   deltaeta69->GetXaxis()->SetLabelSize(0.035);
   deltaeta69->GetXaxis()->SetTitleSize(0.035);
   deltaeta69->GetXaxis()->SetTitleFont(42);
   deltaeta69->GetYaxis()->SetTitle("Events/pb");
   deltaeta69->GetYaxis()->SetLabelFont(42);
   deltaeta69->GetYaxis()->SetLabelSize(0.035);
   deltaeta69->GetYaxis()->SetTitleSize(0.035);
   deltaeta69->GetYaxis()->SetTitleFont(42);
   deltaeta69->GetZaxis()->SetLabelFont(42);
   deltaeta69->GetZaxis()->SetLabelSize(0.035);
   deltaeta69->GetZaxis()->SetTitleSize(0.035);
   deltaeta69->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   
   TH1D *deltaeta70 = new TH1D("deltaeta70","#Delta_{#eta}",20,-10,10);
   deltaeta70->SetBinContent(5,3.35433e-05);
   deltaeta70->SetBinContent(6,3.35433e-05);
   deltaeta70->SetBinContent(7,1.677165e-05);
   deltaeta70->SetBinContent(8,3.35433e-05);
   deltaeta70->SetBinContent(10,3.35433e-05);
   deltaeta70->SetBinContent(11,1.677165e-05);
   deltaeta70->SetBinContent(13,1.677165e-05);
   deltaeta70->SetBinContent(14,1.677165e-05);
   deltaeta70->SetBinContent(15,1.677165e-05);
   deltaeta70->SetBinContent(16,6.708659e-05);
   deltaeta70->SetBinError(5,2.371869e-05);
   deltaeta70->SetBinError(6,2.371869e-05);
   deltaeta70->SetBinError(7,1.677165e-05);
   deltaeta70->SetBinError(8,2.371869e-05);
   deltaeta70->SetBinError(10,2.371869e-05);
   deltaeta70->SetBinError(11,1.677165e-05);
   deltaeta70->SetBinError(13,1.677165e-05);
   deltaeta70->SetBinError(14,1.677165e-05);
   deltaeta70->SetBinError(15,1.677165e-05);
   deltaeta70->SetBinError(16,3.35433e-05);
   deltaeta70->SetEntries(17);

   ci = TColor::GetColor("#0000ff");
   deltaeta70->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   deltaeta70->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   deltaeta70->SetMarkerColor(ci);
   deltaeta70->SetMarkerStyle(21);
   deltaeta70->GetXaxis()->SetTitle("deltaeta");
   deltaeta70->GetXaxis()->SetLabelFont(42);
   deltaeta70->GetXaxis()->SetLabelSize(0.035);
   deltaeta70->GetXaxis()->SetTitleSize(0.035);
   deltaeta70->GetXaxis()->SetTitleFont(42);
   deltaeta70->GetYaxis()->SetTitle("Events/pb");
   deltaeta70->GetYaxis()->SetLabelFont(42);
   deltaeta70->GetYaxis()->SetLabelSize(0.035);
   deltaeta70->GetYaxis()->SetTitleSize(0.035);
   deltaeta70->GetYaxis()->SetTitleFont(42);
   deltaeta70->GetZaxis()->SetLabelFont(42);
   deltaeta70->GetZaxis()->SetLabelSize(0.035);
   deltaeta70->GetZaxis()->SetTitleSize(0.035);
   deltaeta70->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   deltaeta->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3951724,0.94,0.6048276,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("deltaeta");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("deltaeta","deltaeta_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaeta","deltaeta_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaeta","deltaeta_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaeta","deltaeta_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaeta","deltaeta_ttbar","lp");

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
   deltaeta->Modified();
   deltaeta->cd();
   deltaeta->SetSelected(deltaeta);
}
