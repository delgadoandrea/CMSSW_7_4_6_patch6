void VBFInvMass()
{
//=========Macro generated from canvas: VBFInvMass/VBFInvMass
//=========  (Mon Nov 23 12:45:05 2015) by ROOT version6.02/05
   TCanvas *VBFInvMass = new TCanvas("VBFInvMass", "VBFInvMass",180,202,700,700);
   VBFInvMass->Range(-250,-7.109612,2250,-0.7724003);
   VBFInvMass->SetFillColor(0);
   VBFInvMass->SetBorderMode(0);
   VBFInvMass->SetBorderSize(2);
   VBFInvMass->SetLogy();
   VBFInvMass->SetFrameBorderMode(0);
   VBFInvMass->SetFrameBorderMode(0);
   
   THStack *VBFInvMass = new THStack();
   VBFInvMass->SetName("VBFInvMass");
   VBFInvMass->SetTitle("VBFInvMass");
   
   TH1F *VBFInvMass_stack_10 = new TH1F("VBFInvMass_stack_10","VBFInvMass",40,0,2000);
   VBFInvMass_stack_10->SetMinimum(3.342794e-07);
   VBFInvMass_stack_10->SetMaximum(0.03925351);
   VBFInvMass_stack_10->SetDirectory(0);
   VBFInvMass_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VBFInvMass_stack_10->SetLineColor(ci);
   VBFInvMass_stack_10->GetXaxis()->SetTitle("VBFInvMass");
   VBFInvMass_stack_10->GetXaxis()->SetLabelFont(42);
   VBFInvMass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VBFInvMass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VBFInvMass_stack_10->GetXaxis()->SetTitleFont(42);
   VBFInvMass_stack_10->GetYaxis()->SetTitle("Events/pb");
   VBFInvMass_stack_10->GetYaxis()->SetLabelFont(42);
   VBFInvMass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VBFInvMass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VBFInvMass_stack_10->GetYaxis()->SetTitleFont(42);
   VBFInvMass_stack_10->GetZaxis()->SetLabelFont(42);
   VBFInvMass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VBFInvMass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VBFInvMass_stack_10->GetZaxis()->SetTitleFont(42);
   VBFInvMass->SetHistogram(VBFInvMass_stack_10);
   
   
   TH1D *VBFInvMass46 = new TH1D("VBFInvMass46","m_{jj} + VBF cuts",40,0,2000);
   VBFInvMass46->SetBinContent(0,0.06980312);
   VBFInvMass46->SetBinContent(6,0.00068069);
   VBFInvMass46->SetBinContent(10,0.00136138);
   VBFInvMass46->SetBinContent(13,0.00899946);
   VBFInvMass46->SetBinContent(14,0.00899946);
   VBFInvMass46->SetBinContent(15,0.00899946);
   VBFInvMass46->SetBinContent(16,0.00899946);
   VBFInvMass46->SetBinContent(19,0.00136138);
   VBFInvMass46->SetBinContent(20,0.00899946);
   VBFInvMass46->SetBinContent(21,0.00068069);
   VBFInvMass46->SetBinContent(22,0.00068069);
   VBFInvMass46->SetBinContent(24,0.00068069);
   VBFInvMass46->SetBinContent(28,0.00136138);
   VBFInvMass46->SetBinContent(32,0.00831877);
   VBFInvMass46->SetBinContent(35,0.00068069);
   VBFInvMass46->SetBinContent(41,0.00136138);
   VBFInvMass46->SetBinError(0,0.02218762);
   VBFInvMass46->SetBinError(6,0.00068069);
   VBFInvMass46->SetBinError(10,0.000962641);
   VBFInvMass46->SetBinError(13,0.008346573);
   VBFInvMass46->SetBinError(14,0.008346573);
   VBFInvMass46->SetBinError(15,0.008346573);
   VBFInvMass46->SetBinError(16,0.008346573);
   VBFInvMass46->SetBinError(19,0.000962641);
   VBFInvMass46->SetBinError(20,0.008346573);
   VBFInvMass46->SetBinError(21,0.00068069);
   VBFInvMass46->SetBinError(22,0.00068069);
   VBFInvMass46->SetBinError(24,0.00068069);
   VBFInvMass46->SetBinError(28,0.000962641);
   VBFInvMass46->SetBinError(32,0.00831877);
   VBFInvMass46->SetBinError(35,0.00068069);
   VBFInvMass46->SetBinError(41,0.000962641);
   VBFInvMass46->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   VBFInvMass46->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   VBFInvMass46->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   VBFInvMass46->SetMarkerColor(ci);
   VBFInvMass46->SetMarkerStyle(22);
   VBFInvMass46->GetXaxis()->SetTitle("VBFInvMass");
   VBFInvMass46->GetXaxis()->SetLabelFont(42);
   VBFInvMass46->GetXaxis()->SetLabelSize(0.035);
   VBFInvMass46->GetXaxis()->SetTitleSize(0.035);
   VBFInvMass46->GetXaxis()->SetTitleFont(42);
   VBFInvMass46->GetYaxis()->SetTitle("Events/pb");
   VBFInvMass46->GetYaxis()->SetLabelFont(42);
   VBFInvMass46->GetYaxis()->SetLabelSize(0.035);
   VBFInvMass46->GetYaxis()->SetTitleSize(0.035);
   VBFInvMass46->GetYaxis()->SetTitleFont(42);
   VBFInvMass46->GetZaxis()->SetLabelFont(42);
   VBFInvMass46->GetZaxis()->SetLabelSize(0.035);
   VBFInvMass46->GetZaxis()->SetTitleSize(0.035);
   VBFInvMass46->GetZaxis()->SetTitleFont(42);
   VBFInvMass->Add(VBFInvMass,"");
   
   TH1D *VBFInvMass47 = new TH1D("VBFInvMass47","m_{jj} + VBF cuts",40,0,2000);
   VBFInvMass47->SetBinContent(0,0.3335975);
   VBFInvMass47->SetBinContent(3,1.392893e-05);
   VBFInvMass47->SetBinContent(4,0.006988418);
   VBFInvMass47->SetBinContent(5,0.01722895);
   VBFInvMass47->SetBinContent(6,0.01682694);
   VBFInvMass47->SetBinContent(7,0.01769348);
   VBFInvMass47->SetBinContent(8,0.01917947);
   VBFInvMass47->SetBinContent(9,0.01979292);
   VBFInvMass47->SetBinContent(10,0.02100922);
   VBFInvMass47->SetBinContent(11,0.02110008);
   VBFInvMass47->SetBinContent(12,0.01822434);
   VBFInvMass47->SetBinContent(13,0.0158645);
   VBFInvMass47->SetBinContent(14,0.01268595);
   VBFInvMass47->SetBinContent(15,0.01115463);
   VBFInvMass47->SetBinContent(16,0.0119862);
   VBFInvMass47->SetBinContent(17,0.010233);
   VBFInvMass47->SetBinContent(18,0.006778541);
   VBFInvMass47->SetBinContent(19,0.006700042);
   VBFInvMass47->SetBinContent(20,0.004744661);
   VBFInvMass47->SetBinContent(21,0.00380199);
   VBFInvMass47->SetBinContent(22,0.002749509);
   VBFInvMass47->SetBinContent(23,0.002408608);
   VBFInvMass47->SetBinContent(24,0.002419356);
   VBFInvMass47->SetBinContent(25,0.001772795);
   VBFInvMass47->SetBinContent(26,0.002921941);
   VBFInvMass47->SetBinContent(27,0.001927007);
   VBFInvMass47->SetBinContent(28,0.001414784);
   VBFInvMass47->SetBinContent(29,0.001193692);
   VBFInvMass47->SetBinContent(30,0.0009953837);
   VBFInvMass47->SetBinContent(31,0.001026423);
   VBFInvMass47->SetBinContent(32,0.0006029694);
   VBFInvMass47->SetBinContent(33,0.000477548);
   VBFInvMass47->SetBinContent(34,0.0004308978);
   VBFInvMass47->SetBinContent(35,0.0002931687);
   VBFInvMass47->SetBinContent(36,0.0006169593);
   VBFInvMass47->SetBinContent(37,0.000544822);
   VBFInvMass47->SetBinContent(38,0.0005169641);
   VBFInvMass47->SetBinContent(39,0.0004006693);
   VBFInvMass47->SetBinContent(40,0.0005022856);
   VBFInvMass47->SetBinContent(41,0.001640767);
   VBFInvMass47->SetBinError(0,0.007274557);
   VBFInvMass47->SetBinError(3,1.392893e-05);
   VBFInvMass47->SetBinError(4,0.0009142387);
   VBFInvMass47->SetBinError(5,0.002461216);
   VBFInvMass47->SetBinError(6,0.001374587);
   VBFInvMass47->SetBinError(7,0.001897153);
   VBFInvMass47->SetBinError(8,0.001706379);
   VBFInvMass47->SetBinError(9,0.001965914);
   VBFInvMass47->SetBinError(10,0.001769008);
   VBFInvMass47->SetBinError(11,0.001974469);
   VBFInvMass47->SetBinError(12,0.001654225);
   VBFInvMass47->SetBinError(13,0.001802649);
   VBFInvMass47->SetBinError(14,0.001407237);
   VBFInvMass47->SetBinError(15,0.001028587);
   VBFInvMass47->SetBinError(16,0.001429501);
   VBFInvMass47->SetBinError(17,0.001642481);
   VBFInvMass47->SetBinError(18,0.0008011399);
   VBFInvMass47->SetBinError(19,0.0008095151);
   VBFInvMass47->SetBinError(20,0.0006377158);
   VBFInvMass47->SetBinError(21,0.001077389);
   VBFInvMass47->SetBinError(22,0.0004649437);
   VBFInvMass47->SetBinError(23,0.0004264972);
   VBFInvMass47->SetBinError(24,0.000443527);
   VBFInvMass47->SetBinError(25,0.0003374191);
   VBFInvMass47->SetBinError(26,0.001043749);
   VBFInvMass47->SetBinError(27,0.0004001934);
   VBFInvMass47->SetBinError(28,0.0003066059);
   VBFInvMass47->SetBinError(29,0.0003012447);
   VBFInvMass47->SetBinError(30,0.0002705993);
   VBFInvMass47->SetBinError(31,0.000242878);
   VBFInvMass47->SetBinError(32,0.0001951675);
   VBFInvMass47->SetBinError(33,0.0001470679);
   VBFInvMass47->SetBinError(34,0.0001445942);
   VBFInvMass47->SetBinError(35,6.556354e-05);
   VBFInvMass47->SetBinError(36,0.0002302164);
   VBFInvMass47->SetBinError(37,0.0001929885);
   VBFInvMass47->SetBinError(38,0.0001919806);
   VBFInvMass47->SetBinError(39,0.0001875233);
   VBFInvMass47->SetBinError(40,0.0002266154);
   VBFInvMass47->SetBinError(41,0.0002603342);
   VBFInvMass47->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   VBFInvMass47->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   VBFInvMass47->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   VBFInvMass47->SetMarkerColor(ci);
   VBFInvMass47->SetMarkerStyle(20);
   VBFInvMass47->GetXaxis()->SetTitle("VBFInvMass");
   VBFInvMass47->GetXaxis()->SetLabelFont(42);
   VBFInvMass47->GetXaxis()->SetLabelSize(0.035);
   VBFInvMass47->GetXaxis()->SetTitleSize(0.035);
   VBFInvMass47->GetXaxis()->SetTitleFont(42);
   VBFInvMass47->GetYaxis()->SetTitle("Events/pb");
   VBFInvMass47->GetYaxis()->SetLabelFont(42);
   VBFInvMass47->GetYaxis()->SetLabelSize(0.035);
   VBFInvMass47->GetYaxis()->SetTitleSize(0.035);
   VBFInvMass47->GetYaxis()->SetTitleFont(42);
   VBFInvMass47->GetZaxis()->SetLabelFont(42);
   VBFInvMass47->GetZaxis()->SetLabelSize(0.035);
   VBFInvMass47->GetZaxis()->SetTitleSize(0.035);
   VBFInvMass47->GetZaxis()->SetTitleFont(42);
   VBFInvMass->Add(VBFInvMass,"");
   
   TH1D *VBFInvMass48 = new TH1D("VBFInvMass48","m_{jj} + VBF cuts",40,0,2000);
   VBFInvMass48->SetBinContent(0,0.08618339);
   VBFInvMass48->SetBinContent(3,1.170302e-06);
   VBFInvMass48->SetBinContent(4,0.001420589);
   VBFInvMass48->SetBinContent(5,0.003023201);
   VBFInvMass48->SetBinContent(6,0.003924753);
   VBFInvMass48->SetBinContent(7,0.003939141);
   VBFInvMass48->SetBinContent(8,0.004702295);
   VBFInvMass48->SetBinContent(9,0.004303097);
   VBFInvMass48->SetBinContent(10,0.005093204);
   VBFInvMass48->SetBinContent(11,0.004269674);
   VBFInvMass48->SetBinContent(12,0.004147843);
   VBFInvMass48->SetBinContent(13,0.004320104);
   VBFInvMass48->SetBinContent(14,0.003493245);
   VBFInvMass48->SetBinContent(15,0.002871052);
   VBFInvMass48->SetBinContent(16,0.002314731);
   VBFInvMass48->SetBinContent(17,0.001637917);
   VBFInvMass48->SetBinContent(18,0.001329969);
   VBFInvMass48->SetBinContent(19,0.001354988);
   VBFInvMass48->SetBinContent(20,0.0008452776);
   VBFInvMass48->SetBinContent(21,0.0009623459);
   VBFInvMass48->SetBinContent(22,0.0008568194);
   VBFInvMass48->SetBinContent(23,0.0007993926);
   VBFInvMass48->SetBinContent(24,0.0005406796);
   VBFInvMass48->SetBinContent(25,0.000531469);
   VBFInvMass48->SetBinContent(26,0.000379899);
   VBFInvMass48->SetBinContent(27,0.0003542283);
   VBFInvMass48->SetBinContent(28,0.0004446928);
   VBFInvMass48->SetBinContent(29,0.0004124355);
   VBFInvMass48->SetBinContent(30,0.0002323269);
   VBFInvMass48->SetBinContent(31,0.000248433);
   VBFInvMass48->SetBinContent(32,0.0001818206);
   VBFInvMass48->SetBinContent(33,0.00018827);
   VBFInvMass48->SetBinContent(34,7.961208e-05);
   VBFInvMass48->SetBinContent(35,0.0002421406);
   VBFInvMass48->SetBinContent(36,5.99447e-05);
   VBFInvMass48->SetBinContent(37,9.964959e-05);
   VBFInvMass48->SetBinContent(38,0.0001164799);
   VBFInvMass48->SetBinContent(39,8.942054e-05);
   VBFInvMass48->SetBinContent(40,6.858286e-05);
   VBFInvMass48->SetBinContent(41,0.000412079);
   VBFInvMass48->SetBinError(0,0.001483899);
   VBFInvMass48->SetBinError(3,1.170302e-06);
   VBFInvMass48->SetBinError(4,0.0002014869);
   VBFInvMass48->SetBinError(5,0.0002768209);
   VBFInvMass48->SetBinError(6,0.000299653);
   VBFInvMass48->SetBinError(7,0.0003267479);
   VBFInvMass48->SetBinError(8,0.0003421536);
   VBFInvMass48->SetBinError(9,0.0003365352);
   VBFInvMass48->SetBinError(10,0.0003809532);
   VBFInvMass48->SetBinError(11,0.0003454126);
   VBFInvMass48->SetBinError(12,0.0003090797);
   VBFInvMass48->SetBinError(13,0.0003269758);
   VBFInvMass48->SetBinError(14,0.0002791814);
   VBFInvMass48->SetBinError(15,0.0002585501);
   VBFInvMass48->SetBinError(16,0.0002273269);
   VBFInvMass48->SetBinError(17,0.000165698);
   VBFInvMass48->SetBinError(18,0.0001492409);
   VBFInvMass48->SetBinError(19,0.0001783494);
   VBFInvMass48->SetBinError(20,0.0001142518);
   VBFInvMass48->SetBinError(21,0.0001274855);
   VBFInvMass48->SetBinError(22,0.0001176861);
   VBFInvMass48->SetBinError(23,0.0001228184);
   VBFInvMass48->SetBinError(24,9.304539e-05);
   VBFInvMass48->SetBinError(25,9.290375e-05);
   VBFInvMass48->SetBinError(26,7.300288e-05);
   VBFInvMass48->SetBinError(27,7.274338e-05);
   VBFInvMass48->SetBinError(28,8.752691e-05);
   VBFInvMass48->SetBinError(29,0.0001190648);
   VBFInvMass48->SetBinError(30,4.585222e-05);
   VBFInvMass48->SetBinError(31,5.968961e-05);
   VBFInvMass48->SetBinError(32,4.407027e-05);
   VBFInvMass48->SetBinError(33,5.152636e-05);
   VBFInvMass48->SetBinError(34,1.448647e-05);
   VBFInvMass48->SetBinError(35,0.0001041769);
   VBFInvMass48->SetBinError(36,1.278685e-05);
   VBFInvMass48->SetBinError(37,3.138808e-05);
   VBFInvMass48->SetBinError(38,4.154149e-05);
   VBFInvMass48->SetBinError(39,3.069404e-05);
   VBFInvMass48->SetBinError(40,2.990652e-05);
   VBFInvMass48->SetBinError(41,6.240504e-05);
   VBFInvMass48->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   VBFInvMass48->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   VBFInvMass48->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   VBFInvMass48->SetMarkerColor(ci);
   VBFInvMass48->SetMarkerStyle(21);
   VBFInvMass48->GetXaxis()->SetTitle("VBFInvMass");
   VBFInvMass48->GetXaxis()->SetLabelFont(42);
   VBFInvMass48->GetXaxis()->SetLabelSize(0.035);
   VBFInvMass48->GetXaxis()->SetTitleSize(0.035);
   VBFInvMass48->GetXaxis()->SetTitleFont(42);
   VBFInvMass48->GetYaxis()->SetTitle("Events/pb");
   VBFInvMass48->GetYaxis()->SetLabelFont(42);
   VBFInvMass48->GetYaxis()->SetLabelSize(0.035);
   VBFInvMass48->GetYaxis()->SetTitleSize(0.035);
   VBFInvMass48->GetYaxis()->SetTitleFont(42);
   VBFInvMass48->GetZaxis()->SetLabelFont(42);
   VBFInvMass48->GetZaxis()->SetLabelSize(0.035);
   VBFInvMass48->GetZaxis()->SetTitleSize(0.035);
   VBFInvMass48->GetZaxis()->SetTitleFont(42);
   VBFInvMass->Add(VBFInvMass,"");
   
   TH1D *VBFInvMass49 = new TH1D("VBFInvMass49","m_{jj} + VBF cuts",40,0,2000);
   VBFInvMass49->SetBinContent(0,0.005599121);
   VBFInvMass49->SetBinContent(4,6.16983e-05);
   VBFInvMass49->SetBinContent(5,0.0004164636);
   VBFInvMass49->SetBinContent(6,0.000401039);
   VBFInvMass49->SetBinContent(7,0.0003239161);
   VBFInvMass49->SetBinContent(8,0.0003856144);
   VBFInvMass49->SetBinContent(9,0.0003856144);
   VBFInvMass49->SetBinContent(10,0.0006941059);
   VBFInvMass49->SetBinContent(11,0.0006324076);
   VBFInvMass49->SetBinContent(12,0.0004627373);
   VBFInvMass49->SetBinContent(13,0.0005707093);
   VBFInvMass49->SetBinContent(14,0.0004935864);
   VBFInvMass49->SetBinContent(15,0.0005707093);
   VBFInvMass49->SetBinContent(16,0.0004935864);
   VBFInvMass49->SetBinContent(17,0.0003701898);
   VBFInvMass49->SetBinContent(18,0.0004164636);
   VBFInvMass49->SetBinContent(19,0.0003856144);
   VBFInvMass49->SetBinContent(20,0.0003393407);
   VBFInvMass49->SetBinContent(21,0.0002313686);
   VBFInvMass49->SetBinContent(22,0.0002005195);
   VBFInvMass49->SetBinContent(23,9.254746e-05);
   VBFInvMass49->SetBinContent(24,0.0001388212);
   VBFInvMass49->SetBinContent(25,0.0002313686);
   VBFInvMass49->SetBinContent(26,0.0002159441);
   VBFInvMass49->SetBinContent(27,0.0002467932);
   VBFInvMass49->SetBinContent(28,0.0001850949);
   VBFInvMass49->SetBinContent(29,7.712288e-05);
   VBFInvMass49->SetBinContent(30,7.712288e-05);
   VBFInvMass49->SetBinContent(31,0.0001233966);
   VBFInvMass49->SetBinContent(32,9.254746e-05);
   VBFInvMass49->SetBinContent(33,0.0001388212);
   VBFInvMass49->SetBinContent(34,3.084915e-05);
   VBFInvMass49->SetBinContent(35,0.0001233966);
   VBFInvMass49->SetBinContent(36,3.084915e-05);
   VBFInvMass49->SetBinContent(37,7.712288e-05);
   VBFInvMass49->SetBinContent(38,6.16983e-05);
   VBFInvMass49->SetBinContent(39,6.16983e-05);
   VBFInvMass49->SetBinContent(40,4.627373e-05);
   VBFInvMass49->SetBinContent(41,0.0004473127);
   VBFInvMass49->SetBinError(0,0.0002938776);
   VBFInvMass49->SetBinError(4,3.084915e-05);
   VBFInvMass49->SetBinError(5,8.014845e-05);
   VBFInvMass49->SetBinError(6,7.865021e-05);
   VBFInvMass49->SetBinError(7,7.068429e-05);
   VBFInvMass49->SetBinError(8,7.712288e-05);
   VBFInvMass49->SetBinError(9,7.712288e-05);
   VBFInvMass49->SetBinError(10,0.0001034712);
   VBFInvMass49->SetBinError(11,9.876548e-05);
   VBFInvMass49->SetBinError(12,8.448388e-05);
   VBFInvMass49->SetBinError(13,9.382403e-05);
   VBFInvMass49->SetBinError(14,8.725458e-05);
   VBFInvMass49->SetBinError(15,9.382403e-05);
   VBFInvMass49->SetBinError(16,8.725458e-05);
   VBFInvMass49->SetBinError(17,7.556468e-05);
   VBFInvMass49->SetBinError(18,8.014845e-05);
   VBFInvMass49->SetBinError(19,7.712288e-05);
   VBFInvMass49->SetBinError(20,7.234767e-05);
   VBFInvMass49->SetBinError(21,5.973913e-05);
   VBFInvMass49->SetBinError(22,5.56141e-05);
   VBFInvMass49->SetBinError(23,3.778234e-05);
   VBFInvMass49->SetBinError(24,4.627373e-05);
   VBFInvMass49->SetBinError(25,5.973913e-05);
   VBFInvMass49->SetBinError(26,5.771348e-05);
   VBFInvMass49->SetBinError(27,6.16983e-05);
   VBFInvMass49->SetBinError(28,5.34323e-05);
   VBFInvMass49->SetBinError(29,3.44904e-05);
   VBFInvMass49->SetBinError(30,3.44904e-05);
   VBFInvMass49->SetBinError(31,4.362729e-05);
   VBFInvMass49->SetBinError(32,3.778234e-05);
   VBFInvMass49->SetBinError(33,4.627373e-05);
   VBFInvMass49->SetBinError(34,2.181364e-05);
   VBFInvMass49->SetBinError(35,4.362729e-05);
   VBFInvMass49->SetBinError(36,2.181364e-05);
   VBFInvMass49->SetBinError(37,3.44904e-05);
   VBFInvMass49->SetBinError(38,3.084915e-05);
   VBFInvMass49->SetBinError(39,3.084915e-05);
   VBFInvMass49->SetBinError(40,2.671615e-05);
   VBFInvMass49->SetBinError(41,8.306388e-05);
   VBFInvMass49->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   VBFInvMass49->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   VBFInvMass49->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   VBFInvMass49->SetMarkerColor(ci);
   VBFInvMass49->SetMarkerStyle(20);
   VBFInvMass49->GetXaxis()->SetTitle("VBFInvMass");
   VBFInvMass49->GetXaxis()->SetLabelFont(42);
   VBFInvMass49->GetXaxis()->SetLabelSize(0.035);
   VBFInvMass49->GetXaxis()->SetTitleSize(0.035);
   VBFInvMass49->GetXaxis()->SetTitleFont(42);
   VBFInvMass49->GetYaxis()->SetTitle("Events/pb");
   VBFInvMass49->GetYaxis()->SetLabelFont(42);
   VBFInvMass49->GetYaxis()->SetLabelSize(0.035);
   VBFInvMass49->GetYaxis()->SetTitleSize(0.035);
   VBFInvMass49->GetYaxis()->SetTitleFont(42);
   VBFInvMass49->GetZaxis()->SetLabelFont(42);
   VBFInvMass49->GetZaxis()->SetLabelSize(0.035);
   VBFInvMass49->GetZaxis()->SetTitleSize(0.035);
   VBFInvMass49->GetZaxis()->SetTitleFont(42);
   VBFInvMass->Add(VBFInvMass,"");
   
   TH1D *VBFInvMass50 = new TH1D("VBFInvMass50","m_{jj} + VBF cuts",40,0,2000);
   VBFInvMass50->SetBinContent(13,1.677165e-05);
   VBFInvMass50->SetBinError(13,1.677165e-05);
   VBFInvMass50->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   VBFInvMass50->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   VBFInvMass50->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   VBFInvMass50->SetMarkerColor(ci);
   VBFInvMass50->SetMarkerStyle(21);
   VBFInvMass50->GetXaxis()->SetTitle("VBFInvMass");
   VBFInvMass50->GetXaxis()->SetLabelFont(42);
   VBFInvMass50->GetXaxis()->SetLabelSize(0.035);
   VBFInvMass50->GetXaxis()->SetTitleSize(0.035);
   VBFInvMass50->GetXaxis()->SetTitleFont(42);
   VBFInvMass50->GetYaxis()->SetTitle("Events/pb");
   VBFInvMass50->GetYaxis()->SetLabelFont(42);
   VBFInvMass50->GetYaxis()->SetLabelSize(0.035);
   VBFInvMass50->GetYaxis()->SetTitleSize(0.035);
   VBFInvMass50->GetYaxis()->SetTitleFont(42);
   VBFInvMass50->GetZaxis()->SetLabelFont(42);
   VBFInvMass50->GetZaxis()->SetLabelSize(0.035);
   VBFInvMass50->GetZaxis()->SetTitleSize(0.035);
   VBFInvMass50->GetZaxis()->SetTitleFont(42);
   VBFInvMass->Add(VBFInvMass,"");
   VBFInvMass->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3412931,0.94,0.6587069,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("VBFInvMass");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VBFInvMass","VBFInvMass_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VBFInvMass","VBFInvMass_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VBFInvMass","VBFInvMass_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VBFInvMass","VBFInvMass_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VBFInvMass","VBFInvMass_ttbar","lp");

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
   VBFInvMass->Modified();
   VBFInvMass->cd();
   VBFInvMass->SetSelected(VBFInvMass);
}
