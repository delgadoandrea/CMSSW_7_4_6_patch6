void phimuphileadj()
{
//=========Macro generated from canvas: phimuphileadj/phimuphileadj
//=========  (Mon Nov 23 12:45:26 2015) by ROOT version6.02/05
   TCanvas *phimuphileadj = new TCanvas("phimuphileadj", "phimuphileadj",420,442,700,700);
   phimuphileadj->Range(-3.926991,-5.768034,3.926991,-0.6435428);
   phimuphileadj->SetFillColor(0);
   phimuphileadj->SetBorderMode(0);
   phimuphileadj->SetBorderSize(2);
   phimuphileadj->SetLogy();
   phimuphileadj->SetFrameBorderMode(0);
   phimuphileadj->SetFrameBorderMode(0);
   
   THStack *phimuphileadj = new THStack();
   phimuphileadj->SetName("phimuphileadj");
   phimuphileadj->SetTitle("phimuphileadj");
   
   TH1F *phimuphileadj_stack_23 = new TH1F("phimuphileadj_stack_23","phimuphileadj",20,-3.141593,3.141593);
   phimuphileadj_stack_23->SetMinimum(5.551561e-06);
   phimuphileadj_stack_23->SetMaximum(0.06982454);
   phimuphileadj_stack_23->SetDirectory(0);
   phimuphileadj_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   phimuphileadj_stack_23->SetLineColor(ci);
   phimuphileadj_stack_23->GetXaxis()->SetTitle("phimuphileadj");
   phimuphileadj_stack_23->GetXaxis()->SetLabelFont(42);
   phimuphileadj_stack_23->GetXaxis()->SetLabelSize(0.035);
   phimuphileadj_stack_23->GetXaxis()->SetTitleSize(0.035);
   phimuphileadj_stack_23->GetXaxis()->SetTitleFont(42);
   phimuphileadj_stack_23->GetYaxis()->SetTitle("Events/pb");
   phimuphileadj_stack_23->GetYaxis()->SetLabelFont(42);
   phimuphileadj_stack_23->GetYaxis()->SetLabelSize(0.035);
   phimuphileadj_stack_23->GetYaxis()->SetTitleSize(0.035);
   phimuphileadj_stack_23->GetYaxis()->SetTitleFont(42);
   phimuphileadj_stack_23->GetZaxis()->SetLabelFont(42);
   phimuphileadj_stack_23->GetZaxis()->SetLabelSize(0.035);
   phimuphileadj_stack_23->GetZaxis()->SetTitleSize(0.035);
   phimuphileadj_stack_23->GetZaxis()->SetTitleFont(42);
   phimuphileadj->SetHistogram(phimuphileadj_stack_23);
   
   
   TH1D *phimuphileadj111 = new TH1D("phimuphileadj111"," #Delta_{#phi}[#mu,jet_{1}]",20,-3.141593,3.141593);
   phimuphileadj111->SetBinContent(1,0.00068069);
   phimuphileadj111->SetBinContent(2,0.01036084);
   phimuphileadj111->SetBinContent(3,0.00136138);
   phimuphileadj111->SetBinContent(4,0.00204207);
   phimuphileadj111->SetBinContent(5,0.00968015);
   phimuphileadj111->SetBinContent(6,0.01663754);
   phimuphileadj111->SetBinContent(7,0.00136138);
   phimuphileadj111->SetBinContent(8,0.01731823);
   phimuphileadj111->SetBinContent(9,0.00272276);
   phimuphileadj111->SetBinContent(10,0.00136138);
   phimuphileadj111->SetBinContent(11,0.01104153);
   phimuphileadj111->SetBinContent(12,0.00831877);
   phimuphileadj111->SetBinContent(15,0.00831877);
   phimuphileadj111->SetBinContent(16,0.00272276);
   phimuphileadj111->SetBinContent(17,0.01731823);
   phimuphileadj111->SetBinContent(18,0.00340345);
   phimuphileadj111->SetBinContent(19,0.00899946);
   phimuphileadj111->SetBinContent(20,0.00831877);
   phimuphileadj111->SetBinError(1,0.00068069);
   phimuphileadj111->SetBinError(2,0.008401902);
   phimuphileadj111->SetBinError(3,0.000962641);
   phimuphileadj111->SetBinError(4,0.00117899);
   phimuphileadj111->SetBinError(5,0.008374283);
   phimuphileadj111->SetBinError(6,0.01176452);
   phimuphileadj111->SetBinError(7,0.000962641);
   phimuphileadj111->SetBinError(8,0.01178419);
   phimuphileadj111->SetBinError(9,0.00136138);
   phimuphileadj111->SetBinError(10,0.000962641);
   phimuphileadj111->SetBinError(11,0.00842943);
   phimuphileadj111->SetBinError(12,0.00831877);
   phimuphileadj111->SetBinError(15,0.00831877);
   phimuphileadj111->SetBinError(16,0.00136138);
   phimuphileadj111->SetBinError(17,0.01178419);
   phimuphileadj111->SetBinError(18,0.001522069);
   phimuphileadj111->SetBinError(19,0.008346573);
   phimuphileadj111->SetBinError(20,0.00831877);
   phimuphileadj111->SetEntries(48);

   ci = TColor::GetColor("#00cc00");
   phimuphileadj111->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimuphileadj111->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimuphileadj111->SetMarkerColor(ci);
   phimuphileadj111->SetMarkerStyle(22);
   phimuphileadj111->GetXaxis()->SetTitle("phimuphileadj");
   phimuphileadj111->GetXaxis()->SetLabelFont(42);
   phimuphileadj111->GetXaxis()->SetLabelSize(0.035);
   phimuphileadj111->GetXaxis()->SetTitleSize(0.035);
   phimuphileadj111->GetXaxis()->SetTitleFont(42);
   phimuphileadj111->GetYaxis()->SetTitle("Events/pb");
   phimuphileadj111->GetYaxis()->SetLabelFont(42);
   phimuphileadj111->GetYaxis()->SetLabelSize(0.035);
   phimuphileadj111->GetYaxis()->SetTitleSize(0.035);
   phimuphileadj111->GetYaxis()->SetTitleFont(42);
   phimuphileadj111->GetZaxis()->SetLabelFont(42);
   phimuphileadj111->GetZaxis()->SetLabelSize(0.035);
   phimuphileadj111->GetZaxis()->SetTitleSize(0.035);
   phimuphileadj111->GetZaxis()->SetTitleFont(42);
   phimuphileadj->Add(phimuphileadj,"");
   
   TH1D *phimuphileadj112 = new TH1D("phimuphileadj112"," #Delta_{#phi}[#mu,jet_{1}]",20,-3.141593,3.141593);
   phimuphileadj112->SetBinContent(1,0.04137542);
   phimuphileadj112->SetBinContent(2,0.03986725);
   phimuphileadj112->SetBinContent(3,0.03273531);
   phimuphileadj112->SetBinContent(4,0.03105146);
   phimuphileadj112->SetBinContent(5,0.03641875);
   phimuphileadj112->SetBinContent(6,0.03455958);
   phimuphileadj112->SetBinContent(7,0.02910451);
   phimuphileadj112->SetBinContent(8,0.02077217);
   phimuphileadj112->SetBinContent(9,0.01778479);
   phimuphileadj112->SetBinContent(10,0.01732303);
   phimuphileadj112->SetBinContent(11,0.0180287);
   phimuphileadj112->SetBinContent(12,0.01852663);
   phimuphileadj112->SetBinContent(13,0.01948645);
   phimuphileadj112->SetBinContent(14,0.02574106);
   phimuphileadj112->SetBinContent(15,0.03613609);
   phimuphileadj112->SetBinContent(16,0.03646323);
   phimuphileadj112->SetBinContent(17,0.0361111);
   phimuphileadj112->SetBinContent(18,0.03276386);
   phimuphileadj112->SetBinContent(19,0.03615144);
   phimuphileadj112->SetBinContent(20,0.04006042);
   phimuphileadj112->SetBinError(1,0.002009439);
   phimuphileadj112->SetBinError(2,0.002377916);
   phimuphileadj112->SetBinError(3,0.002001171);
   phimuphileadj112->SetBinError(4,0.001746659);
   phimuphileadj112->SetBinError(5,0.002172329);
   phimuphileadj112->SetBinError(6,0.002945802);
   phimuphileadj112->SetBinError(7,0.002553361);
   phimuphileadj112->SetBinError(8,0.002145404);
   phimuphileadj112->SetBinError(9,0.001656662);
   phimuphileadj112->SetBinError(10,0.00245249);
   phimuphileadj112->SetBinError(11,0.001906121);
   phimuphileadj112->SetBinError(12,0.002110143);
   phimuphileadj112->SetBinError(13,0.001699056);
   phimuphileadj112->SetBinError(14,0.002615756);
   phimuphileadj112->SetBinError(15,0.002701343);
   phimuphileadj112->SetBinError(16,0.002685858);
   phimuphileadj112->SetBinError(17,0.002120004);
   phimuphileadj112->SetBinError(18,0.001791061);
   phimuphileadj112->SetBinError(19,0.002092237);
   phimuphileadj112->SetBinError(20,0.00198632);
   phimuphileadj112->SetEntries(12325);

   ci = TColor::GetColor("#00ffff");
   phimuphileadj112->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimuphileadj112->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimuphileadj112->SetMarkerColor(ci);
   phimuphileadj112->SetMarkerStyle(20);
   phimuphileadj112->GetXaxis()->SetTitle("phimuphileadj");
   phimuphileadj112->GetXaxis()->SetLabelFont(42);
   phimuphileadj112->GetXaxis()->SetLabelSize(0.035);
   phimuphileadj112->GetXaxis()->SetTitleSize(0.035);
   phimuphileadj112->GetXaxis()->SetTitleFont(42);
   phimuphileadj112->GetYaxis()->SetTitle("Events/pb");
   phimuphileadj112->GetYaxis()->SetLabelFont(42);
   phimuphileadj112->GetYaxis()->SetLabelSize(0.035);
   phimuphileadj112->GetYaxis()->SetTitleSize(0.035);
   phimuphileadj112->GetYaxis()->SetTitleFont(42);
   phimuphileadj112->GetZaxis()->SetLabelFont(42);
   phimuphileadj112->GetZaxis()->SetLabelSize(0.035);
   phimuphileadj112->GetZaxis()->SetTitleSize(0.035);
   phimuphileadj112->GetZaxis()->SetTitleFont(42);
   phimuphileadj->Add(phimuphileadj,"");
   
   TH1D *phimuphileadj113 = new TH1D("phimuphileadj113"," #Delta_{#phi}[#mu,jet_{1}]",20,-3.141593,3.141593);
   phimuphileadj113->SetBinContent(1,0.006649729);
   phimuphileadj113->SetBinContent(2,0.007444725);
   phimuphileadj113->SetBinContent(3,0.007888234);
   phimuphileadj113->SetBinContent(4,0.007265599);
   phimuphileadj113->SetBinContent(5,0.006848077);
   phimuphileadj113->SetBinContent(6,0.007819311);
   phimuphileadj113->SetBinContent(7,0.007051546);
   phimuphileadj113->SetBinContent(8,0.008439558);
   phimuphileadj113->SetBinContent(9,0.007995002);
   phimuphileadj113->SetBinContent(10,0.00688144);
   phimuphileadj113->SetBinContent(11,0.007371811);
   phimuphileadj113->SetBinContent(12,0.007197418);
   phimuphileadj113->SetBinContent(13,0.008005155);
   phimuphileadj113->SetBinContent(14,0.007279188);
   phimuphileadj113->SetBinContent(15,0.007343546);
   phimuphileadj113->SetBinContent(16,0.007613491);
   phimuphileadj113->SetBinContent(17,0.006703878);
   phimuphileadj113->SetBinContent(18,0.006361762);
   phimuphileadj113->SetBinContent(19,0.006790305);
   phimuphileadj113->SetBinContent(20,0.007526583);
   phimuphileadj113->SetBinError(1,0.0004008747);
   phimuphileadj113->SetBinError(2,0.0004462735);
   phimuphileadj113->SetBinError(3,0.0004314751);
   phimuphileadj113->SetBinError(4,0.0004424609);
   phimuphileadj113->SetBinError(5,0.0004042449);
   phimuphileadj113->SetBinError(6,0.0004355879);
   phimuphileadj113->SetBinError(7,0.0004038257);
   phimuphileadj113->SetBinError(8,0.0004607381);
   phimuphileadj113->SetBinError(9,0.00046367);
   phimuphileadj113->SetBinError(10,0.0004097207);
   phimuphileadj113->SetBinError(11,0.0004188017);
   phimuphileadj113->SetBinError(12,0.00042797);
   phimuphileadj113->SetBinError(13,0.0004395045);
   phimuphileadj113->SetBinError(14,0.0004170824);
   phimuphileadj113->SetBinError(15,0.0003964381);
   phimuphileadj113->SetBinError(16,0.0004612123);
   phimuphileadj113->SetBinError(17,0.0004092152);
   phimuphileadj113->SetBinError(18,0.0003934027);
   phimuphileadj113->SetBinError(19,0.0004066076);
   phimuphileadj113->SetBinError(20,0.0004388505);
   phimuphileadj113->SetEntries(19290);

   ci = TColor::GetColor("#ffcc00");
   phimuphileadj113->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimuphileadj113->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimuphileadj113->SetMarkerColor(ci);
   phimuphileadj113->SetMarkerStyle(21);
   phimuphileadj113->GetXaxis()->SetTitle("phimuphileadj");
   phimuphileadj113->GetXaxis()->SetLabelFont(42);
   phimuphileadj113->GetXaxis()->SetLabelSize(0.035);
   phimuphileadj113->GetXaxis()->SetTitleSize(0.035);
   phimuphileadj113->GetXaxis()->SetTitleFont(42);
   phimuphileadj113->GetYaxis()->SetTitle("Events/pb");
   phimuphileadj113->GetYaxis()->SetLabelFont(42);
   phimuphileadj113->GetYaxis()->SetLabelSize(0.035);
   phimuphileadj113->GetYaxis()->SetTitleSize(0.035);
   phimuphileadj113->GetYaxis()->SetTitleFont(42);
   phimuphileadj113->GetZaxis()->SetLabelFont(42);
   phimuphileadj113->GetZaxis()->SetLabelSize(0.035);
   phimuphileadj113->GetZaxis()->SetTitleSize(0.035);
   phimuphileadj113->GetZaxis()->SetTitleFont(42);
   phimuphileadj->Add(phimuphileadj,"");
   
   TH1D *phimuphileadj114 = new TH1D("phimuphileadj114"," #Delta_{#phi}[#mu,jet_{1}]",20,-3.141593,3.141593);
   phimuphileadj114->SetBinContent(1,0.001326514);
   phimuphileadj114->SetBinContent(2,0.001372787);
   phimuphileadj114->SetBinContent(3,0.001048871);
   phimuphileadj114->SetBinContent(4,0.00091005);
   phimuphileadj114->SetBinContent(5,0.0006632568);
   phimuphileadj114->SetBinContent(6,0.0007249551);
   phimuphileadj114->SetBinContent(7,0.0004935864);
   phimuphileadj114->SetBinContent(8,0.0004781619);
   phimuphileadj114->SetBinContent(9,0.0004781619);
   phimuphileadj114->SetBinContent(10,0.000401039);
   phimuphileadj114->SetBinContent(11,0.0003084915);
   phimuphileadj114->SetBinContent(12,0.0003393407);
   phimuphileadj114->SetBinContent(13,0.0004935864);
   phimuphileadj114->SetBinContent(14,0.0007866534);
   phimuphileadj114->SetBinContent(15,0.0006324076);
   phimuphileadj114->SetBinContent(16,0.0007712288);
   phimuphileadj114->SetBinContent(17,0.0008483517);
   phimuphileadj114->SetBinContent(18,0.00107972);
   phimuphileadj114->SetBinContent(19,0.001295664);
   phimuphileadj114->SetBinContent(20,0.001480759);
   phimuphileadj114->SetBinError(1,0.0001430416);
   phimuphileadj114->SetBinError(2,0.0001455152);
   phimuphileadj114->SetBinError(3,0.0001271943);
   phimuphileadj114->SetBinError(4,0.0001184784);
   phimuphileadj114->SetBinError(5,0.0001011457);
   phimuphileadj114->SetBinError(6,0.0001057456);
   phimuphileadj114->SetBinError(7,8.725458e-05);
   phimuphileadj114->SetBinError(8,8.58804e-05);
   phimuphileadj114->SetBinError(9,8.58804e-05);
   phimuphileadj114->SetBinError(10,7.865021e-05);
   phimuphileadj114->SetBinError(11,6.89808e-05);
   phimuphileadj114->SetBinError(12,7.234767e-05);
   phimuphileadj114->SetBinError(13,8.725458e-05);
   phimuphileadj114->SetBinError(14,0.0001101535);
   phimuphileadj114->SetBinError(15,9.876548e-05);
   phimuphileadj114->SetBinError(16,0.0001090682);
   phimuphileadj114->SetBinError(17,0.0001143917);
   phimuphileadj114->SetBinError(18,0.0001290513);
   phimuphileadj114->SetBinError(19,0.0001413686);
   phimuphileadj114->SetBinError(20,0.0001511294);
   phimuphileadj114->SetEntries(1033);

   ci = TColor::GetColor("#ff0000");
   phimuphileadj114->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimuphileadj114->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimuphileadj114->SetMarkerColor(ci);
   phimuphileadj114->SetMarkerStyle(20);
   phimuphileadj114->GetXaxis()->SetTitle("phimuphileadj");
   phimuphileadj114->GetXaxis()->SetLabelFont(42);
   phimuphileadj114->GetXaxis()->SetLabelSize(0.035);
   phimuphileadj114->GetXaxis()->SetTitleSize(0.035);
   phimuphileadj114->GetXaxis()->SetTitleFont(42);
   phimuphileadj114->GetYaxis()->SetTitle("Events/pb");
   phimuphileadj114->GetYaxis()->SetLabelFont(42);
   phimuphileadj114->GetYaxis()->SetLabelSize(0.035);
   phimuphileadj114->GetYaxis()->SetTitleSize(0.035);
   phimuphileadj114->GetYaxis()->SetTitleFont(42);
   phimuphileadj114->GetZaxis()->SetLabelFont(42);
   phimuphileadj114->GetZaxis()->SetLabelSize(0.035);
   phimuphileadj114->GetZaxis()->SetTitleSize(0.035);
   phimuphileadj114->GetZaxis()->SetTitleFont(42);
   phimuphileadj->Add(phimuphileadj,"");
   
   TH1D *phimuphileadj115 = new TH1D("phimuphileadj115"," #Delta_{#phi}[#mu,jet_{1}]",20,-3.141593,3.141593);
   phimuphileadj115->SetBinContent(18,1.677165e-05);
   phimuphileadj115->SetBinError(18,1.677165e-05);
   phimuphileadj115->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   phimuphileadj115->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimuphileadj115->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimuphileadj115->SetMarkerColor(ci);
   phimuphileadj115->SetMarkerStyle(21);
   phimuphileadj115->GetXaxis()->SetTitle("phimuphileadj");
   phimuphileadj115->GetXaxis()->SetLabelFont(42);
   phimuphileadj115->GetXaxis()->SetLabelSize(0.035);
   phimuphileadj115->GetXaxis()->SetTitleSize(0.035);
   phimuphileadj115->GetXaxis()->SetTitleFont(42);
   phimuphileadj115->GetYaxis()->SetTitle("Events/pb");
   phimuphileadj115->GetYaxis()->SetLabelFont(42);
   phimuphileadj115->GetYaxis()->SetLabelSize(0.035);
   phimuphileadj115->GetYaxis()->SetTitleSize(0.035);
   phimuphileadj115->GetYaxis()->SetTitleFont(42);
   phimuphileadj115->GetZaxis()->SetLabelFont(42);
   phimuphileadj115->GetZaxis()->SetLabelSize(0.035);
   phimuphileadj115->GetZaxis()->SetTitleSize(0.035);
   phimuphileadj115->GetZaxis()->SetTitleFont(42);
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
