void phimuphij1b2()
{
//=========Macro generated from canvas: b2/phimuphij1b2/b2/phimuphij1b2
//=========  (Tue Nov 24 14:26:24 2015) by ROOT version6.02/05
   TCanvas *b2/phimuphij1b2 = new TCanvas("b2/phimuphij1b2", "b2/phimuphij1b2",0,22,700,700);
   b2/phimuphij1b2->Range(-3.926991,-5.768034,3.926991,-0.6435428);
   b2/phimuphij1b2->SetFillColor(0);
   b2/phimuphij1b2->SetBorderMode(0);
   b2/phimuphij1b2->SetBorderSize(2);
   b2/phimuphij1b2->SetLogy();
   b2/phimuphij1b2->SetFrameBorderMode(0);
   b2/phimuphij1b2->SetFrameBorderMode(0);
   
   THStack *b2/phimuphij1b2 = new THStack();
   b2/phimuphij1b2->SetName("b2/phimuphij1b2");
   b2/phimuphij1b2->SetTitle("b2/phimuphij1b2");
   
   TH1F *b2/phimuphij1b2_stack_1 = new TH1F("b2/phimuphij1b2_stack_1","b2/phimuphij1b2",20,-3.141593,3.141593);
   b2/phimuphij1b2_stack_1->SetMinimum(5.551561e-06);
   b2/phimuphij1b2_stack_1->SetMaximum(0.06982454);
   b2/phimuphij1b2_stack_1->SetDirectory(0);
   b2/phimuphij1b2_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b2/phimuphij1b2_stack_1->SetLineColor(ci);
   b2/phimuphij1b2_stack_1->GetXaxis()->SetTitle("b2/phimuphij1b2");
   b2/phimuphij1b2_stack_1->GetXaxis()->SetLabelFont(42);
   b2/phimuphij1b2_stack_1->GetXaxis()->SetLabelSize(0.035);
   b2/phimuphij1b2_stack_1->GetXaxis()->SetTitleSize(0.035);
   b2/phimuphij1b2_stack_1->GetXaxis()->SetTitleFont(42);
   b2/phimuphij1b2_stack_1->GetYaxis()->SetTitle("Events/pb");
   b2/phimuphij1b2_stack_1->GetYaxis()->SetLabelFont(42);
   b2/phimuphij1b2_stack_1->GetYaxis()->SetLabelSize(0.035);
   b2/phimuphij1b2_stack_1->GetYaxis()->SetTitleSize(0.035);
   b2/phimuphij1b2_stack_1->GetYaxis()->SetTitleFont(42);
   b2/phimuphij1b2_stack_1->GetZaxis()->SetLabelFont(42);
   b2/phimuphij1b2_stack_1->GetZaxis()->SetLabelSize(0.035);
   b2/phimuphij1b2_stack_1->GetZaxis()->SetTitleSize(0.035);
   b2/phimuphij1b2_stack_1->GetZaxis()->SetTitleFont(42);
   b2/phimuphij1b2->SetHistogram(b2/phimuphij1b2_stack_1);
   
   
   TH1D *phimuphij1b21 = new TH1D("phimuphij1b21"," #Delta_{#phi}[#mu,jet_{1}]",20,-3.141593,3.141593);
   phimuphij1b21->SetBinContent(1,0.00068069);
   phimuphij1b21->SetBinContent(2,0.01036084);
   phimuphij1b21->SetBinContent(3,0.00136138);
   phimuphij1b21->SetBinContent(4,0.00204207);
   phimuphij1b21->SetBinContent(5,0.00968015);
   phimuphij1b21->SetBinContent(6,0.01663754);
   phimuphij1b21->SetBinContent(7,0.00136138);
   phimuphij1b21->SetBinContent(8,0.01731823);
   phimuphij1b21->SetBinContent(9,0.00272276);
   phimuphij1b21->SetBinContent(10,0.00136138);
   phimuphij1b21->SetBinContent(11,0.01104153);
   phimuphij1b21->SetBinContent(12,0.00831877);
   phimuphij1b21->SetBinContent(15,0.00831877);
   phimuphij1b21->SetBinContent(16,0.00272276);
   phimuphij1b21->SetBinContent(17,0.01731823);
   phimuphij1b21->SetBinContent(18,0.00340345);
   phimuphij1b21->SetBinContent(19,0.00899946);
   phimuphij1b21->SetBinContent(20,0.00831877);
   phimuphij1b21->SetBinError(1,0.00068069);
   phimuphij1b21->SetBinError(2,0.008401902);
   phimuphij1b21->SetBinError(3,0.000962641);
   phimuphij1b21->SetBinError(4,0.00117899);
   phimuphij1b21->SetBinError(5,0.008374283);
   phimuphij1b21->SetBinError(6,0.01176452);
   phimuphij1b21->SetBinError(7,0.000962641);
   phimuphij1b21->SetBinError(8,0.01178419);
   phimuphij1b21->SetBinError(9,0.00136138);
   phimuphij1b21->SetBinError(10,0.000962641);
   phimuphij1b21->SetBinError(11,0.00842943);
   phimuphij1b21->SetBinError(12,0.00831877);
   phimuphij1b21->SetBinError(15,0.00831877);
   phimuphij1b21->SetBinError(16,0.00136138);
   phimuphij1b21->SetBinError(17,0.01178419);
   phimuphij1b21->SetBinError(18,0.001522069);
   phimuphij1b21->SetBinError(19,0.008346573);
   phimuphij1b21->SetBinError(20,0.00831877);
   phimuphij1b21->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   phimuphij1b21->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimuphij1b21->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimuphij1b21->SetMarkerColor(ci);
   phimuphij1b21->SetMarkerStyle(22);
   phimuphij1b21->GetXaxis()->SetTitle("phimuphij1b2");
   phimuphij1b21->GetXaxis()->SetLabelFont(42);
   phimuphij1b21->GetXaxis()->SetLabelSize(0.035);
   phimuphij1b21->GetXaxis()->SetTitleSize(0.035);
   phimuphij1b21->GetXaxis()->SetTitleFont(42);
   phimuphij1b21->GetYaxis()->SetTitle("Events/pb");
   phimuphij1b21->GetYaxis()->SetLabelFont(42);
   phimuphij1b21->GetYaxis()->SetLabelSize(0.035);
   phimuphij1b21->GetYaxis()->SetTitleSize(0.035);
   phimuphij1b21->GetYaxis()->SetTitleFont(42);
   phimuphij1b21->GetZaxis()->SetLabelFont(42);
   phimuphij1b21->GetZaxis()->SetLabelSize(0.035);
   phimuphij1b21->GetZaxis()->SetTitleSize(0.035);
   phimuphij1b21->GetZaxis()->SetTitleFont(42);
   b2/phimuphij1b2->Add(phimuphij1b2,"");
   
   TH1D *phimuphij1b22 = new TH1D("phimuphij1b22"," #Delta_{#phi}[#mu,jet_{1}]",20,-3.141593,3.141593);
   phimuphij1b22->SetBinContent(1,0.04137542);
   phimuphij1b22->SetBinContent(2,0.03986725);
   phimuphij1b22->SetBinContent(3,0.03273531);
   phimuphij1b22->SetBinContent(4,0.03105146);
   phimuphij1b22->SetBinContent(5,0.03641875);
   phimuphij1b22->SetBinContent(6,0.03455958);
   phimuphij1b22->SetBinContent(7,0.02910451);
   phimuphij1b22->SetBinContent(8,0.02077217);
   phimuphij1b22->SetBinContent(9,0.01778479);
   phimuphij1b22->SetBinContent(10,0.01732303);
   phimuphij1b22->SetBinContent(11,0.0180287);
   phimuphij1b22->SetBinContent(12,0.01852663);
   phimuphij1b22->SetBinContent(13,0.01948645);
   phimuphij1b22->SetBinContent(14,0.02574106);
   phimuphij1b22->SetBinContent(15,0.03613609);
   phimuphij1b22->SetBinContent(16,0.03646323);
   phimuphij1b22->SetBinContent(17,0.0361111);
   phimuphij1b22->SetBinContent(18,0.03276386);
   phimuphij1b22->SetBinContent(19,0.03615144);
   phimuphij1b22->SetBinContent(20,0.04006042);
   phimuphij1b22->SetBinError(1,0.002009439);
   phimuphij1b22->SetBinError(2,0.002377916);
   phimuphij1b22->SetBinError(3,0.002001171);
   phimuphij1b22->SetBinError(4,0.001746659);
   phimuphij1b22->SetBinError(5,0.002172329);
   phimuphij1b22->SetBinError(6,0.002945802);
   phimuphij1b22->SetBinError(7,0.002553361);
   phimuphij1b22->SetBinError(8,0.002145404);
   phimuphij1b22->SetBinError(9,0.001656662);
   phimuphij1b22->SetBinError(10,0.00245249);
   phimuphij1b22->SetBinError(11,0.001906121);
   phimuphij1b22->SetBinError(12,0.002110143);
   phimuphij1b22->SetBinError(13,0.001699056);
   phimuphij1b22->SetBinError(14,0.002615756);
   phimuphij1b22->SetBinError(15,0.002701343);
   phimuphij1b22->SetBinError(16,0.002685858);
   phimuphij1b22->SetBinError(17,0.002120004);
   phimuphij1b22->SetBinError(18,0.001791061);
   phimuphij1b22->SetBinError(19,0.002092237);
   phimuphij1b22->SetBinError(20,0.00198632);
   phimuphij1b22->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   phimuphij1b22->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimuphij1b22->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimuphij1b22->SetMarkerColor(ci);
   phimuphij1b22->SetMarkerStyle(20);
   phimuphij1b22->GetXaxis()->SetTitle("phimuphij1b2");
   phimuphij1b22->GetXaxis()->SetLabelFont(42);
   phimuphij1b22->GetXaxis()->SetLabelSize(0.035);
   phimuphij1b22->GetXaxis()->SetTitleSize(0.035);
   phimuphij1b22->GetXaxis()->SetTitleFont(42);
   phimuphij1b22->GetYaxis()->SetTitle("Events/pb");
   phimuphij1b22->GetYaxis()->SetLabelFont(42);
   phimuphij1b22->GetYaxis()->SetLabelSize(0.035);
   phimuphij1b22->GetYaxis()->SetTitleSize(0.035);
   phimuphij1b22->GetYaxis()->SetTitleFont(42);
   phimuphij1b22->GetZaxis()->SetLabelFont(42);
   phimuphij1b22->GetZaxis()->SetLabelSize(0.035);
   phimuphij1b22->GetZaxis()->SetTitleSize(0.035);
   phimuphij1b22->GetZaxis()->SetTitleFont(42);
   b2/phimuphij1b2->Add(phimuphij1b2,"");
   
   TH1D *phimuphij1b23 = new TH1D("phimuphij1b23"," #Delta_{#phi}[#mu,jet_{1}]",20,-3.141593,3.141593);
   phimuphij1b23->SetBinContent(1,0.006649729);
   phimuphij1b23->SetBinContent(2,0.007444725);
   phimuphij1b23->SetBinContent(3,0.007888234);
   phimuphij1b23->SetBinContent(4,0.007265599);
   phimuphij1b23->SetBinContent(5,0.006848077);
   phimuphij1b23->SetBinContent(6,0.007819311);
   phimuphij1b23->SetBinContent(7,0.007051546);
   phimuphij1b23->SetBinContent(8,0.008439558);
   phimuphij1b23->SetBinContent(9,0.007995002);
   phimuphij1b23->SetBinContent(10,0.00688144);
   phimuphij1b23->SetBinContent(11,0.007371811);
   phimuphij1b23->SetBinContent(12,0.007197418);
   phimuphij1b23->SetBinContent(13,0.008005155);
   phimuphij1b23->SetBinContent(14,0.007279188);
   phimuphij1b23->SetBinContent(15,0.007343546);
   phimuphij1b23->SetBinContent(16,0.007613491);
   phimuphij1b23->SetBinContent(17,0.006703878);
   phimuphij1b23->SetBinContent(18,0.006361762);
   phimuphij1b23->SetBinContent(19,0.006790305);
   phimuphij1b23->SetBinContent(20,0.007526583);
   phimuphij1b23->SetBinError(1,0.0004008747);
   phimuphij1b23->SetBinError(2,0.0004462735);
   phimuphij1b23->SetBinError(3,0.0004314751);
   phimuphij1b23->SetBinError(4,0.0004424609);
   phimuphij1b23->SetBinError(5,0.0004042449);
   phimuphij1b23->SetBinError(6,0.0004355879);
   phimuphij1b23->SetBinError(7,0.0004038257);
   phimuphij1b23->SetBinError(8,0.0004607381);
   phimuphij1b23->SetBinError(9,0.00046367);
   phimuphij1b23->SetBinError(10,0.0004097207);
   phimuphij1b23->SetBinError(11,0.0004188017);
   phimuphij1b23->SetBinError(12,0.00042797);
   phimuphij1b23->SetBinError(13,0.0004395045);
   phimuphij1b23->SetBinError(14,0.0004170824);
   phimuphij1b23->SetBinError(15,0.0003964381);
   phimuphij1b23->SetBinError(16,0.0004612123);
   phimuphij1b23->SetBinError(17,0.0004092152);
   phimuphij1b23->SetBinError(18,0.0003934027);
   phimuphij1b23->SetBinError(19,0.0004066076);
   phimuphij1b23->SetBinError(20,0.0004388505);
   phimuphij1b23->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   phimuphij1b23->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimuphij1b23->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimuphij1b23->SetMarkerColor(ci);
   phimuphij1b23->SetMarkerStyle(21);
   phimuphij1b23->GetXaxis()->SetTitle("phimuphij1b2");
   phimuphij1b23->GetXaxis()->SetLabelFont(42);
   phimuphij1b23->GetXaxis()->SetLabelSize(0.035);
   phimuphij1b23->GetXaxis()->SetTitleSize(0.035);
   phimuphij1b23->GetXaxis()->SetTitleFont(42);
   phimuphij1b23->GetYaxis()->SetTitle("Events/pb");
   phimuphij1b23->GetYaxis()->SetLabelFont(42);
   phimuphij1b23->GetYaxis()->SetLabelSize(0.035);
   phimuphij1b23->GetYaxis()->SetTitleSize(0.035);
   phimuphij1b23->GetYaxis()->SetTitleFont(42);
   phimuphij1b23->GetZaxis()->SetLabelFont(42);
   phimuphij1b23->GetZaxis()->SetLabelSize(0.035);
   phimuphij1b23->GetZaxis()->SetTitleSize(0.035);
   phimuphij1b23->GetZaxis()->SetTitleFont(42);
   b2/phimuphij1b2->Add(phimuphij1b2,"");
   
   TH1D *phimuphij1b24 = new TH1D("phimuphij1b24"," #Delta_{#phi}[#mu,jet_{1}]",20,-3.141593,3.141593);
   phimuphij1b24->SetBinContent(1,0.001326514);
   phimuphij1b24->SetBinContent(2,0.001372787);
   phimuphij1b24->SetBinContent(3,0.001048871);
   phimuphij1b24->SetBinContent(4,0.00091005);
   phimuphij1b24->SetBinContent(5,0.0006632568);
   phimuphij1b24->SetBinContent(6,0.0007249551);
   phimuphij1b24->SetBinContent(7,0.0004935864);
   phimuphij1b24->SetBinContent(8,0.0004781619);
   phimuphij1b24->SetBinContent(9,0.0004781619);
   phimuphij1b24->SetBinContent(10,0.000401039);
   phimuphij1b24->SetBinContent(11,0.0003084915);
   phimuphij1b24->SetBinContent(12,0.0003393407);
   phimuphij1b24->SetBinContent(13,0.0004935864);
   phimuphij1b24->SetBinContent(14,0.0007866534);
   phimuphij1b24->SetBinContent(15,0.0006324076);
   phimuphij1b24->SetBinContent(16,0.0007712288);
   phimuphij1b24->SetBinContent(17,0.0008483517);
   phimuphij1b24->SetBinContent(18,0.00107972);
   phimuphij1b24->SetBinContent(19,0.001295664);
   phimuphij1b24->SetBinContent(20,0.001480759);
   phimuphij1b24->SetBinError(1,0.0001430416);
   phimuphij1b24->SetBinError(2,0.0001455152);
   phimuphij1b24->SetBinError(3,0.0001271943);
   phimuphij1b24->SetBinError(4,0.0001184784);
   phimuphij1b24->SetBinError(5,0.0001011457);
   phimuphij1b24->SetBinError(6,0.0001057456);
   phimuphij1b24->SetBinError(7,8.725458e-05);
   phimuphij1b24->SetBinError(8,8.58804e-05);
   phimuphij1b24->SetBinError(9,8.58804e-05);
   phimuphij1b24->SetBinError(10,7.865021e-05);
   phimuphij1b24->SetBinError(11,6.89808e-05);
   phimuphij1b24->SetBinError(12,7.234767e-05);
   phimuphij1b24->SetBinError(13,8.725458e-05);
   phimuphij1b24->SetBinError(14,0.0001101535);
   phimuphij1b24->SetBinError(15,9.876548e-05);
   phimuphij1b24->SetBinError(16,0.0001090682);
   phimuphij1b24->SetBinError(17,0.0001143917);
   phimuphij1b24->SetBinError(18,0.0001290513);
   phimuphij1b24->SetBinError(19,0.0001413686);
   phimuphij1b24->SetBinError(20,0.0001511294);
   phimuphij1b24->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   phimuphij1b24->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimuphij1b24->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimuphij1b24->SetMarkerColor(ci);
   phimuphij1b24->SetMarkerStyle(20);
   phimuphij1b24->GetXaxis()->SetTitle("phimuphij1b2");
   phimuphij1b24->GetXaxis()->SetLabelFont(42);
   phimuphij1b24->GetXaxis()->SetLabelSize(0.035);
   phimuphij1b24->GetXaxis()->SetTitleSize(0.035);
   phimuphij1b24->GetXaxis()->SetTitleFont(42);
   phimuphij1b24->GetYaxis()->SetTitle("Events/pb");
   phimuphij1b24->GetYaxis()->SetLabelFont(42);
   phimuphij1b24->GetYaxis()->SetLabelSize(0.035);
   phimuphij1b24->GetYaxis()->SetTitleSize(0.035);
   phimuphij1b24->GetYaxis()->SetTitleFont(42);
   phimuphij1b24->GetZaxis()->SetLabelFont(42);
   phimuphij1b24->GetZaxis()->SetLabelSize(0.035);
   phimuphij1b24->GetZaxis()->SetTitleSize(0.035);
   phimuphij1b24->GetZaxis()->SetTitleFont(42);
   b2/phimuphij1b2->Add(phimuphij1b2,"");
   
   TH1D *phimuphij1b25 = new TH1D("phimuphij1b25"," #Delta_{#phi}[#mu,jet_{1}]",20,-3.141593,3.141593);
   phimuphij1b25->SetBinContent(18,1.677165e-05);
   phimuphij1b25->SetBinError(18,1.677165e-05);
   phimuphij1b25->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   phimuphij1b25->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimuphij1b25->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimuphij1b25->SetMarkerColor(ci);
   phimuphij1b25->SetMarkerStyle(21);
   phimuphij1b25->GetXaxis()->SetTitle("phimuphij1b2");
   phimuphij1b25->GetXaxis()->SetLabelFont(42);
   phimuphij1b25->GetXaxis()->SetLabelSize(0.035);
   phimuphij1b25->GetXaxis()->SetTitleSize(0.035);
   phimuphij1b25->GetXaxis()->SetTitleFont(42);
   phimuphij1b25->GetYaxis()->SetTitle("Events/pb");
   phimuphij1b25->GetYaxis()->SetLabelFont(42);
   phimuphij1b25->GetYaxis()->SetLabelSize(0.035);
   phimuphij1b25->GetYaxis()->SetTitleSize(0.035);
   phimuphij1b25->GetYaxis()->SetTitleFont(42);
   phimuphij1b25->GetZaxis()->SetLabelFont(42);
   phimuphij1b25->GetZaxis()->SetLabelSize(0.035);
   phimuphij1b25->GetZaxis()->SetTitleSize(0.035);
   phimuphij1b25->GetZaxis()->SetTitleFont(42);
   b2/phimuphij1b2->Add(phimuphij1b2,"");
   b2/phimuphij1b2->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.2910057,0.9342857,0.7089943,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b2/phimuphij1b2");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimuphij1b2","b2/phimuphij1b2_QCD_b2/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphij1b2","b2/phimuphij1b2_WJetsToLNu_b2/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphij1b2","b2/phimuphij1b2_ZJetsToNuNu_b2/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphij1b2","b2/phimuphij1b2_signal_b2/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphij1b2","b2/phimuphij1b2_ttbar_b2/","lp");

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
   b2/phimuphij1b2->Modified();
   b2/phimuphij1b2->cd();
   b2/phimuphij1b2->SetSelected(b2/phimuphij1b2);
}
