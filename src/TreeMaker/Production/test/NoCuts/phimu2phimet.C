void phimu2phimet()
{
//=========Macro generated from canvas: phimu2phimet/phimu2phimet
//=========  (Mon Nov 23 11:05:12 2015) by ROOT version6.02/05
   TCanvas *phimu2phimet = new TCanvas("phimu2phimet", "phimu2phimet",340,362,700,700);
   phimu2phimet->Range(-3.926991,-6.228592,3.926991,2.005593);
   phimu2phimet->SetFillColor(0);
   phimu2phimet->SetBorderMode(0);
   phimu2phimet->SetBorderSize(2);
   phimu2phimet->SetLogy();
   phimu2phimet->SetFrameBorderMode(0);
   phimu2phimet->SetFrameBorderMode(0);
   
   THStack *phimu2phimet = new THStack();
   phimu2phimet->SetName("phimu2phimet");
   phimu2phimet->SetTitle("phimu2phimet");
   
   TH1F *phimu2phimet_stack_22 = new TH1F("phimu2phimet_stack_22","phimu2phimet",20,-3.141593,3.141593);
   phimu2phimet_stack_22->SetMinimum(3.933929e-06);
   phimu2phimet_stack_22->SetMaximum(15.21157);
   phimu2phimet_stack_22->SetDirectory(0);
   phimu2phimet_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   phimu2phimet_stack_22->SetLineColor(ci);
   phimu2phimet_stack_22->GetXaxis()->SetTitle("phimu2phimet");
   phimu2phimet_stack_22->GetXaxis()->SetLabelFont(42);
   phimu2phimet_stack_22->GetXaxis()->SetLabelSize(0.035);
   phimu2phimet_stack_22->GetXaxis()->SetTitleSize(0.035);
   phimu2phimet_stack_22->GetXaxis()->SetTitleFont(42);
   phimu2phimet_stack_22->GetYaxis()->SetTitle("Events/pb");
   phimu2phimet_stack_22->GetYaxis()->SetLabelFont(42);
   phimu2phimet_stack_22->GetYaxis()->SetLabelSize(0.035);
   phimu2phimet_stack_22->GetYaxis()->SetTitleSize(0.035);
   phimu2phimet_stack_22->GetYaxis()->SetTitleFont(42);
   phimu2phimet_stack_22->GetZaxis()->SetLabelFont(42);
   phimu2phimet_stack_22->GetZaxis()->SetLabelSize(0.035);
   phimu2phimet_stack_22->GetZaxis()->SetTitleSize(0.035);
   phimu2phimet_stack_22->GetZaxis()->SetTitleFont(42);
   phimu2phimet->SetHistogram(phimu2phimet_stack_22);
   
   
   TH1D *phimu2phimet106 = new TH1D("phimu2phimet106"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);
   phimu2phimet106->SetBinContent(1,4.428456);
   phimu2phimet106->SetBinContent(2,5.143334);
   phimu2phimet106->SetBinContent(3,4.08357);
   phimu2phimet106->SetBinContent(4,3.388884);
   phimu2phimet106->SetBinContent(5,4.443051);
   phimu2phimet106->SetBinContent(6,3.798958);
   phimu2phimet106->SetBinContent(7,7.101931);
   phimu2phimet106->SetBinContent(8,4.090527);
   phimu2phimet106->SetBinContent(9,4.115484);
   phimu2phimet106->SetBinContent(10,2.43318);
   phimu2phimet106->SetBinContent(11,6.083081);
   phimu2phimet106->SetBinContent(12,3.740046);
   phimu2phimet106->SetBinContent(13,5.146056);
   phimu2phimet106->SetBinContent(14,5.11142);
   phimu2phimet106->SetBinContent(15,7.125526);
   phimu2phimet106->SetBinContent(16,3.119548);
   phimu2phimet106->SetBinContent(17,6.105995);
   phimu2phimet106->SetBinContent(18,3.821872);
   phimu2phimet106->SetBinContent(19,3.471391);
   phimu2phimet106->SetBinContent(20,4.776895);
   phimu2phimet106->SetBinError(1,1.206406);
   phimu2phimet106->SetBinError(2,1.29601);
   phimu2phimet106->SetBinError(3,1.159067);
   phimu2phimet106->SetBinError(4,1.058024);
   phimu2phimet106->SetBinError(5,1.206462);
   phimu2phimet106->SetBinError(6,1.10993);
   phimu2phimet106->SetBinError(7,1.533189);
   phimu2phimet106->SetBinError(8,1.159097);
   phimu2phimet106->SetBinError(9,1.159186);
   phimu2phimet106->SetBinError(10,0.8854993);
   phimu2phimet106->SetBinError(11,1.41944);
   phimu2phimet106->SetBinError(12,1.109712);
   phimu2phimet106->SetBinError(13,1.29601);
   phimu2phimet106->SetBinError(14,1.295903);
   phimu2phimet106->SetBinError(15,1.533256);
   phimu2phimet106->SetBinError(16,1.004023);
   phimu2phimet106->SetBinError(17,1.419512);
   phimu2phimet106->SetBinError(18,1.110023);
   phimu2phimet106->SetBinError(19,1.058351);
   phimu2phimet106->SetBinError(20,1.251982);
   phimu2phimet106->SetEntries(545);

   ci = TColor::GetColor("#00cc00");
   phimu2phimet106->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimu2phimet106->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimu2phimet106->SetMarkerColor(ci);
   phimu2phimet106->SetMarkerStyle(22);
   phimu2phimet106->GetXaxis()->SetTitle("phimu2phimet");
   phimu2phimet106->GetXaxis()->SetLabelFont(42);
   phimu2phimet106->GetXaxis()->SetLabelSize(0.035);
   phimu2phimet106->GetXaxis()->SetTitleSize(0.035);
   phimu2phimet106->GetXaxis()->SetTitleFont(42);
   phimu2phimet106->GetYaxis()->SetTitle("Events/pb");
   phimu2phimet106->GetYaxis()->SetLabelFont(42);
   phimu2phimet106->GetYaxis()->SetLabelSize(0.035);
   phimu2phimet106->GetYaxis()->SetTitleSize(0.035);
   phimu2phimet106->GetYaxis()->SetTitleFont(42);
   phimu2phimet106->GetZaxis()->SetLabelFont(42);
   phimu2phimet106->GetZaxis()->SetLabelSize(0.035);
   phimu2phimet106->GetZaxis()->SetTitleSize(0.035);
   phimu2phimet106->GetZaxis()->SetTitleFont(42);
   phimu2phimet->Add(phimu2phimet,"");
   
   TH1D *phimu2phimet107 = new TH1D("phimu2phimet107"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);
   phimu2phimet107->SetBinContent(1,0.02514896);
   phimu2phimet107->SetBinContent(2,0.04068675);
   phimu2phimet107->SetBinContent(3,0.04195946);
   phimu2phimet107->SetBinContent(4,0.03242051);
   phimu2phimet107->SetBinContent(5,0.03914555);
   phimu2phimet107->SetBinContent(6,0.03909083);
   phimu2phimet107->SetBinContent(7,0.03257784);
   phimu2phimet107->SetBinContent(8,0.03477241);
   phimu2phimet107->SetBinContent(9,0.03443232);
   phimu2phimet107->SetBinContent(10,0.0446169);
   phimu2phimet107->SetBinContent(11,0.03105987);
   phimu2phimet107->SetBinContent(12,0.03062084);
   phimu2phimet107->SetBinContent(13,0.03329122);
   phimu2phimet107->SetBinContent(14,0.04054212);
   phimu2phimet107->SetBinContent(15,0.03497558);
   phimu2phimet107->SetBinContent(16,0.0339035);
   phimu2phimet107->SetBinContent(17,0.03424804);
   phimu2phimet107->SetBinContent(18,0.0395413);
   phimu2phimet107->SetBinContent(19,0.03954628);
   phimu2phimet107->SetBinContent(20,0.03218624);
   phimu2phimet107->SetBinError(1,0.004032818);
   phimu2phimet107->SetBinError(2,0.005744392);
   phimu2phimet107->SetBinError(3,0.005758766);
   phimu2phimet107->SetBinError(4,0.00487144);
   phimu2phimet107->SetBinError(5,0.005580881);
   phimu2phimet107->SetBinError(6,0.005653087);
   phimu2phimet107->SetBinError(7,0.004873181);
   phimu2phimet107->SetBinError(8,0.005147278);
   phimu2phimet107->SetBinError(9,0.00514395);
   phimu2phimet107->SetBinError(10,0.005995506);
   phimu2phimet107->SetBinError(11,0.00476686);
   phimu2phimet107->SetBinError(12,0.004847599);
   phimu2phimet107->SetBinError(13,0.005046798);
   phimu2phimet107->SetBinError(14,0.005598456);
   phimu2phimet107->SetBinError(15,0.005148993);
   phimu2phimet107->SetBinError(16,0.0050564);
   phimu2phimet107->SetBinError(17,0.004895205);
   phimu2phimet107->SetBinError(18,0.005513508);
   phimu2phimet107->SetBinError(19,0.005585348);
   phimu2phimet107->SetBinError(20,0.004869577);
   phimu2phimet107->SetEntries(2754);

   ci = TColor::GetColor("#00ffff");
   phimu2phimet107->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimu2phimet107->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimu2phimet107->SetMarkerColor(ci);
   phimu2phimet107->SetMarkerStyle(20);
   phimu2phimet107->GetXaxis()->SetTitle("phimu2phimet");
   phimu2phimet107->GetXaxis()->SetLabelFont(42);
   phimu2phimet107->GetXaxis()->SetLabelSize(0.035);
   phimu2phimet107->GetXaxis()->SetTitleSize(0.035);
   phimu2phimet107->GetXaxis()->SetTitleFont(42);
   phimu2phimet107->GetYaxis()->SetTitle("Events/pb");
   phimu2phimet107->GetYaxis()->SetLabelFont(42);
   phimu2phimet107->GetYaxis()->SetLabelSize(0.035);
   phimu2phimet107->GetYaxis()->SetTitleSize(0.035);
   phimu2phimet107->GetYaxis()->SetTitleFont(42);
   phimu2phimet107->GetZaxis()->SetLabelFont(42);
   phimu2phimet107->GetZaxis()->SetLabelSize(0.035);
   phimu2phimet107->GetZaxis()->SetTitleSize(0.035);
   phimu2phimet107->GetZaxis()->SetTitleFont(42);
   phimu2phimet->Add(phimu2phimet,"");
   
   TH1D *phimu2phimet108 = new TH1D("phimu2phimet108"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);
   phimu2phimet108->SetBinContent(1,0.005192415);
   phimu2phimet108->SetBinContent(2,0.003581617);
   phimu2phimet108->SetBinContent(3,0.004391097);
   phimu2phimet108->SetBinContent(4,0.005261388);
   phimu2phimet108->SetBinContent(5,0.004564447);
   phimu2phimet108->SetBinContent(6,0.005332368);
   phimu2phimet108->SetBinContent(7,0.005216657);
   phimu2phimet108->SetBinContent(8,0.005878509);
   phimu2phimet108->SetBinContent(9,0.00484534);
   phimu2phimet108->SetBinContent(10,0.004266303);
   phimu2phimet108->SetBinContent(11,0.004870992);
   phimu2phimet108->SetBinContent(12,0.005763889);
   phimu2phimet108->SetBinContent(13,0.004759471);
   phimu2phimet108->SetBinContent(14,0.004780161);
   phimu2phimet108->SetBinContent(15,0.005264869);
   phimu2phimet108->SetBinContent(16,0.004169637);
   phimu2phimet108->SetBinContent(17,0.005291458);
   phimu2phimet108->SetBinContent(18,0.004558205);
   phimu2phimet108->SetBinContent(19,0.004832826);
   phimu2phimet108->SetBinContent(20,0.004517436);
   phimu2phimet108->SetBinError(1,0.0006495926);
   phimu2phimet108->SetBinError(2,0.0005134917);
   phimu2phimet108->SetBinError(3,0.0005738414);
   phimu2phimet108->SetBinError(4,0.0006457447);
   phimu2phimet108->SetBinError(5,0.0005954362);
   phimu2phimet108->SetBinError(6,0.0006378448);
   phimu2phimet108->SetBinError(7,0.0006456319);
   phimu2phimet108->SetBinError(8,0.000678284);
   phimu2phimet108->SetBinError(9,0.0006057737);
   phimu2phimet108->SetBinError(10,0.0005658612);
   phimu2phimet108->SetBinError(11,0.0005966322);
   phimu2phimet108->SetBinError(12,0.0006666463);
   phimu2phimet108->SetBinError(13,0.0005939769);
   phimu2phimet108->SetBinError(14,0.0006152456);
   phimu2phimet108->SetBinError(15,0.0006417171);
   phimu2phimet108->SetBinError(16,0.0005572128);
   phimu2phimet108->SetBinError(17,0.0006267498);
   phimu2phimet108->SetBinError(18,0.0006003466);
   phimu2phimet108->SetBinError(19,0.0006111595);
   phimu2phimet108->SetBinError(20,0.0006039659);
   phimu2phimet108->SetEntries(2489);

   ci = TColor::GetColor("#ffcc00");
   phimu2phimet108->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimu2phimet108->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimu2phimet108->SetMarkerColor(ci);
   phimu2phimet108->SetMarkerStyle(21);
   phimu2phimet108->GetXaxis()->SetTitle("phimu2phimet");
   phimu2phimet108->GetXaxis()->SetLabelFont(42);
   phimu2phimet108->GetXaxis()->SetLabelSize(0.035);
   phimu2phimet108->GetXaxis()->SetTitleSize(0.035);
   phimu2phimet108->GetXaxis()->SetTitleFont(42);
   phimu2phimet108->GetYaxis()->SetTitle("Events/pb");
   phimu2phimet108->GetYaxis()->SetLabelFont(42);
   phimu2phimet108->GetYaxis()->SetLabelSize(0.035);
   phimu2phimet108->GetYaxis()->SetTitleSize(0.035);
   phimu2phimet108->GetYaxis()->SetTitleFont(42);
   phimu2phimet108->GetZaxis()->SetLabelFont(42);
   phimu2phimet108->GetZaxis()->SetLabelSize(0.035);
   phimu2phimet108->GetZaxis()->SetTitleSize(0.035);
   phimu2phimet108->GetZaxis()->SetTitleFont(42);
   phimu2phimet->Add(phimu2phimet,"");
   
   TH1D *phimu2phimet109 = new TH1D("phimu2phimet109"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);
   phimu2phimet109->SetBinContent(1,0.0001388212);
   phimu2phimet109->SetBinContent(2,4.627373e-05);
   phimu2phimet109->SetBinContent(3,6.16983e-05);
   phimu2phimet109->SetBinContent(4,0.0001233966);
   phimu2phimet109->SetBinContent(5,0.000107972);
   phimu2phimet109->SetBinContent(6,0.0001388212);
   phimu2phimet109->SetBinContent(7,6.16983e-05);
   phimu2phimet109->SetBinContent(8,0.0001388212);
   phimu2phimet109->SetBinContent(9,7.712288e-05);
   phimu2phimet109->SetBinContent(10,7.712288e-05);
   phimu2phimet109->SetBinContent(11,0.000107972);
   phimu2phimet109->SetBinContent(12,0.0001233966);
   phimu2phimet109->SetBinContent(13,0.000107972);
   phimu2phimet109->SetBinContent(14,0.000107972);
   phimu2phimet109->SetBinContent(15,7.712288e-05);
   phimu2phimet109->SetBinContent(16,3.084915e-05);
   phimu2phimet109->SetBinContent(17,9.254746e-05);
   phimu2phimet109->SetBinContent(18,6.16983e-05);
   phimu2phimet109->SetBinContent(19,0.000107972);
   phimu2phimet109->SetBinContent(20,6.16983e-05);
   phimu2phimet109->SetBinError(1,4.627373e-05);
   phimu2phimet109->SetBinError(2,2.671615e-05);
   phimu2phimet109->SetBinError(3,3.084915e-05);
   phimu2phimet109->SetBinError(4,4.362729e-05);
   phimu2phimet109->SetBinError(5,4.080959e-05);
   phimu2phimet109->SetBinError(6,4.627373e-05);
   phimu2phimet109->SetBinError(7,3.084915e-05);
   phimu2phimet109->SetBinError(8,4.627373e-05);
   phimu2phimet109->SetBinError(9,3.44904e-05);
   phimu2phimet109->SetBinError(10,3.44904e-05);
   phimu2phimet109->SetBinError(11,4.080959e-05);
   phimu2phimet109->SetBinError(12,4.362729e-05);
   phimu2phimet109->SetBinError(13,4.080959e-05);
   phimu2phimet109->SetBinError(14,4.080959e-05);
   phimu2phimet109->SetBinError(15,3.44904e-05);
   phimu2phimet109->SetBinError(16,2.181364e-05);
   phimu2phimet109->SetBinError(17,3.778234e-05);
   phimu2phimet109->SetBinError(18,3.084915e-05);
   phimu2phimet109->SetBinError(19,4.080959e-05);
   phimu2phimet109->SetBinError(20,3.084915e-05);
   phimu2phimet109->SetEntries(120);

   ci = TColor::GetColor("#ff0000");
   phimu2phimet109->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimu2phimet109->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimu2phimet109->SetMarkerColor(ci);
   phimu2phimet109->SetMarkerStyle(20);
   phimu2phimet109->GetXaxis()->SetTitle("phimu2phimet");
   phimu2phimet109->GetXaxis()->SetLabelFont(42);
   phimu2phimet109->GetXaxis()->SetLabelSize(0.035);
   phimu2phimet109->GetXaxis()->SetTitleSize(0.035);
   phimu2phimet109->GetXaxis()->SetTitleFont(42);
   phimu2phimet109->GetYaxis()->SetTitle("Events/pb");
   phimu2phimet109->GetYaxis()->SetLabelFont(42);
   phimu2phimet109->GetYaxis()->SetLabelSize(0.035);
   phimu2phimet109->GetYaxis()->SetTitleSize(0.035);
   phimu2phimet109->GetYaxis()->SetTitleFont(42);
   phimu2phimet109->GetZaxis()->SetLabelFont(42);
   phimu2phimet109->GetZaxis()->SetLabelSize(0.035);
   phimu2phimet109->GetZaxis()->SetTitleSize(0.035);
   phimu2phimet109->GetZaxis()->SetTitleFont(42);
   phimu2phimet->Add(phimu2phimet,"");
   
   TH1D *phimu2phimet110 = new TH1D("phimu2phimet110"," #Delta_{#phi}[#mu2,MET]",20,-3.141593,3.141593);
   phimu2phimet110->SetBinContent(13,1.677165e-05);
   phimu2phimet110->SetBinError(13,1.677165e-05);
   phimu2phimet110->SetEntries(1);

   ci = TColor::GetColor("#0000ff");
   phimu2phimet110->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimu2phimet110->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimu2phimet110->SetMarkerColor(ci);
   phimu2phimet110->SetMarkerStyle(21);
   phimu2phimet110->GetXaxis()->SetTitle("phimu2phimet");
   phimu2phimet110->GetXaxis()->SetLabelFont(42);
   phimu2phimet110->GetXaxis()->SetLabelSize(0.035);
   phimu2phimet110->GetXaxis()->SetTitleSize(0.035);
   phimu2phimet110->GetXaxis()->SetTitleFont(42);
   phimu2phimet110->GetYaxis()->SetTitle("Events/pb");
   phimu2phimet110->GetYaxis()->SetLabelFont(42);
   phimu2phimet110->GetYaxis()->SetLabelSize(0.035);
   phimu2phimet110->GetYaxis()->SetTitleSize(0.035);
   phimu2phimet110->GetYaxis()->SetTitleFont(42);
   phimu2phimet110->GetZaxis()->SetLabelFont(42);
   phimu2phimet110->GetZaxis()->SetLabelSize(0.035);
   phimu2phimet110->GetZaxis()->SetTitleSize(0.035);
   phimu2phimet110->GetZaxis()->SetTitleFont(42);
   phimu2phimet->Add(phimu2phimet,"");
   phimu2phimet->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3183046,0.9342857,0.6816954,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("phimu2phimet");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimu2phimet","phimu2phimet_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimu2phimet","phimu2phimet_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimu2phimet","phimu2phimet_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimu2phimet","phimu2phimet_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimu2phimet","phimu2phimet_ttbar","lp");

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
   phimu2phimet->Modified();
   phimu2phimet->cd();
   phimu2phimet->SetSelected(phimu2phimet);
}
