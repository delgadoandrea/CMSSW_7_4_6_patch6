void mupt()
{
//=========Macro generated from canvas: mupt/mupt
//=========  (Mon Nov 23 11:05:07 2015) by ROOT version6.02/05
   TCanvas *mupt = new TCanvas("mupt", "mupt",180,202,700,700);
   mupt->Range(1.5,-6.507408,16.5,3.747476);
   mupt->SetFillColor(0);
   mupt->SetBorderMode(0);
   mupt->SetBorderSize(2);
   mupt->SetLogy();
   mupt->SetFrameBorderMode(0);
   mupt->SetFrameBorderMode(0);
   
   THStack *mupt = new THStack();
   mupt->SetName("mupt");
   mupt->SetTitle("mupt");
   
   TH1F *mupt_stack_15 = new TH1F("mupt_stack_15","mupt",12,3,15);
   mupt_stack_15->SetMinimum(3.29671e-06);
   mupt_stack_15->SetMaximum(527.2142);
   mupt_stack_15->SetDirectory(0);
   mupt_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   mupt_stack_15->SetLineColor(ci);
   mupt_stack_15->GetXaxis()->SetTitle("mupt");
   mupt_stack_15->GetXaxis()->SetLabelFont(42);
   mupt_stack_15->GetXaxis()->SetLabelSize(0.035);
   mupt_stack_15->GetXaxis()->SetTitleSize(0.035);
   mupt_stack_15->GetXaxis()->SetTitleFont(42);
   mupt_stack_15->GetYaxis()->SetTitle("Events/pb");
   mupt_stack_15->GetYaxis()->SetLabelFont(42);
   mupt_stack_15->GetYaxis()->SetLabelSize(0.035);
   mupt_stack_15->GetYaxis()->SetTitleSize(0.035);
   mupt_stack_15->GetYaxis()->SetTitleFont(42);
   mupt_stack_15->GetZaxis()->SetLabelFont(42);
   mupt_stack_15->GetZaxis()->SetLabelSize(0.035);
   mupt_stack_15->GetZaxis()->SetTitleSize(0.035);
   mupt_stack_15->GetZaxis()->SetTitleFont(42);
   mupt->SetHistogram(mupt_stack_15);
   
   
   TH1D *mupt71 = new TH1D("mupt71","p_{T, #mu}",12,3,15);
   mupt71->SetBinContent(0,5059.016);
   mupt71->SetBinContent(1,216.8303);
   mupt71->SetBinContent(2,125.8939);
   mupt71->SetBinContent(3,88.6737);
   mupt71->SetBinContent(4,57.58962);
   mupt71->SetBinContent(5,48.86691);
   mupt71->SetBinContent(6,32.16604);
   mupt71->SetBinContent(7,22.23204);
   mupt71->SetBinContent(8,19.03067);
   mupt71->SetBinContent(9,13.36598);
   mupt71->SetBinContent(10,12.98018);
   mupt71->SetBinContent(11,7.18648);
   mupt71->SetBinContent(12,7.485688);
   mupt71->SetBinError(0,40.6794);
   mupt71->SetBinError(1,8.431903);
   mupt71->SetBinError(2,6.419079);
   mupt71->SetBinError(3,5.39534);
   mupt71->SetBinError(4,4.337247);
   mupt71->SetBinError(5,4.001391);
   mupt71->SetBinError(6,3.244246);
   mupt71->SetBinError(7,2.69777);
   mupt71->SetBinError(8,2.503839);
   mupt71->SetBinError(9,2.089736);
   mupt71->SetBinError(10,2.062686);
   mupt71->SetBinError(11,1.533415);
   mupt71->SetBinError(12,1.569391);
   mupt71->SetEntries(35032);

   ci = TColor::GetColor("#00cc00");
   mupt71->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   mupt71->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   mupt71->SetMarkerColor(ci);
   mupt71->SetMarkerStyle(22);
   mupt71->GetXaxis()->SetTitle("mupt");
   mupt71->GetXaxis()->SetLabelFont(42);
   mupt71->GetXaxis()->SetLabelSize(0.035);
   mupt71->GetXaxis()->SetTitleSize(0.035);
   mupt71->GetXaxis()->SetTitleFont(42);
   mupt71->GetYaxis()->SetTitle("Events/pb");
   mupt71->GetYaxis()->SetLabelFont(42);
   mupt71->GetYaxis()->SetLabelSize(0.035);
   mupt71->GetYaxis()->SetTitleSize(0.035);
   mupt71->GetYaxis()->SetTitleFont(42);
   mupt71->GetZaxis()->SetLabelFont(42);
   mupt71->GetZaxis()->SetLabelSize(0.035);
   mupt71->GetZaxis()->SetTitleSize(0.035);
   mupt71->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   
   TH1D *mupt72 = new TH1D("mupt72","p_{T, #mu}",12,3,15);
   mupt72->SetBinContent(0,12.05653);
   mupt72->SetBinContent(1,0.9027308);
   mupt72->SetBinContent(2,1.096866);
   mupt72->SetBinContent(3,1.215714);
   mupt72->SetBinContent(4,1.388301);
   mupt72->SetBinContent(5,1.577971);
   mupt72->SetBinContent(6,1.776428);
   mupt72->SetBinContent(7,2.136462);
   mupt72->SetBinContent(8,2.213578);
   mupt72->SetBinContent(9,2.504956);
   mupt72->SetBinContent(10,2.793499);
   mupt72->SetBinContent(11,3.025404);
   mupt72->SetBinContent(12,3.269965);
   mupt72->SetBinError(0,0.09744452);
   mupt72->SetBinError(1,0.02616349);
   mupt72->SetBinError(2,0.02904103);
   mupt72->SetBinError(3,0.03023007);
   mupt72->SetBinError(4,0.03231481);
   mupt72->SetBinError(5,0.03451374);
   mupt72->SetBinError(6,0.03629484);
   mupt72->SetBinError(7,0.04024513);
   mupt72->SetBinError(8,0.04097484);
   mupt72->SetBinError(9,0.0435691);
   mupt72->SetBinError(10,0.04620496);
   mupt72->SetBinError(11,0.04808163);
   mupt72->SetBinError(12,0.05016584);
   mupt72->SetEntries(136801);

   ci = TColor::GetColor("#00ffff");
   mupt72->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   mupt72->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   mupt72->SetMarkerColor(ci);
   mupt72->SetMarkerStyle(20);
   mupt72->GetXaxis()->SetTitle("mupt");
   mupt72->GetXaxis()->SetLabelFont(42);
   mupt72->GetXaxis()->SetLabelSize(0.035);
   mupt72->GetXaxis()->SetTitleSize(0.035);
   mupt72->GetXaxis()->SetTitleFont(42);
   mupt72->GetYaxis()->SetTitle("Events/pb");
   mupt72->GetYaxis()->SetLabelFont(42);
   mupt72->GetYaxis()->SetLabelSize(0.035);
   mupt72->GetYaxis()->SetTitleSize(0.035);
   mupt72->GetYaxis()->SetTitleFont(42);
   mupt72->GetZaxis()->SetLabelFont(42);
   mupt72->GetZaxis()->SetLabelSize(0.035);
   mupt72->GetZaxis()->SetTitleSize(0.035);
   mupt72->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   
   TH1D *mupt73 = new TH1D("mupt73","p_{T, #mu}",12,3,15);
   mupt73->SetBinContent(0,4.391068);
   mupt73->SetBinContent(1,0.1775167);
   mupt73->SetBinContent(2,0.109369);
   mupt73->SetBinContent(3,0.07185932);
   mupt73->SetBinContent(4,0.04841468);
   mupt73->SetBinContent(5,0.03447143);
   mupt73->SetBinContent(6,0.02808955);
   mupt73->SetBinContent(7,0.02092189);
   mupt73->SetBinContent(8,0.01671397);
   mupt73->SetBinContent(9,0.01352868);
   mupt73->SetBinContent(10,0.01183221);
   mupt73->SetBinContent(11,0.008118493);
   mupt73->SetBinContent(12,0.008135537);
   mupt73->SetBinError(0,0.01825006);
   mupt73->SetBinError(1,0.003659922);
   mupt73->SetBinError(2,0.00287377);
   mupt73->SetBinError(3,0.002325219);
   mupt73->SetBinError(4,0.001907467);
   mupt73->SetBinError(5,0.001609169);
   mupt73->SetBinError(6,0.001452818);
   mupt73->SetBinError(7,0.001253854);
   mupt73->SetBinError(8,0.001113712);
   mupt73->SetBinError(9,0.001009979);
   mupt73->SetBinError(10,0.000970728);
   mupt73->SetBinError(11,0.0007815885);
   mupt73->SetBinError(12,0.0007773978);
   mupt73->SetEntries(131338);

   ci = TColor::GetColor("#ffcc00");
   mupt73->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   mupt73->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   mupt73->SetMarkerColor(ci);
   mupt73->SetMarkerStyle(21);
   mupt73->GetXaxis()->SetTitle("mupt");
   mupt73->GetXaxis()->SetLabelFont(42);
   mupt73->GetXaxis()->SetLabelSize(0.035);
   mupt73->GetXaxis()->SetTitleSize(0.035);
   mupt73->GetXaxis()->SetTitleFont(42);
   mupt73->GetYaxis()->SetTitle("Events/pb");
   mupt73->GetYaxis()->SetLabelFont(42);
   mupt73->GetYaxis()->SetLabelSize(0.035);
   mupt73->GetYaxis()->SetTitleSize(0.035);
   mupt73->GetYaxis()->SetTitleFont(42);
   mupt73->GetZaxis()->SetLabelFont(42);
   mupt73->GetZaxis()->SetLabelSize(0.035);
   mupt73->GetZaxis()->SetTitleSize(0.035);
   mupt73->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   
   TH1D *mupt74 = new TH1D("mupt74","p_{T, #mu}",12,3,15);
   mupt74->SetBinContent(0,0.01767656);
   mupt74->SetBinContent(1,0.005275205);
   mupt74->SetBinContent(2,0.007157003);
   mupt74->SetBinContent(3,0.006617143);
   mupt74->SetBinContent(4,0.005475724);
   mupt74->SetBinContent(5,0.005198082);
   mupt74->SetBinContent(6,0.004133786);
   mupt74->SetBinContent(7,0.003563077);
   mupt74->SetBinContent(8,0.001958921);
   mupt74->SetBinContent(9,0.002452508);
   mupt74->SetBinContent(10,0.001727553);
   mupt74->SetBinContent(11,0.00161958);
   mupt74->SetBinContent(12,0.001372787);
   mupt74->SetBinError(0,0.0005221623);
   mupt74->SetBinError(1,0.0002852504);
   mupt74->SetBinError(2,0.0003322555);
   mupt74->SetBinError(3,0.0003194787);
   mupt74->SetBinError(4,0.0002906213);
   mupt74->SetBinError(5,0.0002831576);
   mupt74->SetBinError(6,0.0002525112);
   mupt74->SetBinError(7,0.0002344333);
   mupt74->SetBinError(8,0.0001738261);
   mupt74->SetBinError(9,0.0001944965);
   mupt74->SetBinError(10,0.0001632384);
   mupt74->SetBinError(11,0.0001580549);
   mupt74->SetBinError(12,0.0001455152);
   mupt74->SetEntries(4164);

   ci = TColor::GetColor("#ff0000");
   mupt74->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   mupt74->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   mupt74->SetMarkerColor(ci);
   mupt74->SetMarkerStyle(20);
   mupt74->GetXaxis()->SetTitle("mupt");
   mupt74->GetXaxis()->SetLabelFont(42);
   mupt74->GetXaxis()->SetLabelSize(0.035);
   mupt74->GetXaxis()->SetTitleSize(0.035);
   mupt74->GetXaxis()->SetTitleFont(42);
   mupt74->GetYaxis()->SetTitle("Events/pb");
   mupt74->GetYaxis()->SetLabelFont(42);
   mupt74->GetYaxis()->SetLabelSize(0.035);
   mupt74->GetYaxis()->SetTitleSize(0.035);
   mupt74->GetYaxis()->SetTitleFont(42);
   mupt74->GetZaxis()->SetLabelFont(42);
   mupt74->GetZaxis()->SetLabelSize(0.035);
   mupt74->GetZaxis()->SetTitleSize(0.035);
   mupt74->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   
   TH1D *mupt75 = new TH1D("mupt75","p_{T, #mu}",12,3,15);
   mupt75->SetBinContent(0,0.0001844881);
   mupt75->SetBinContent(1,1.677165e-05);
   mupt75->SetBinContent(2,0.0001341732);
   mupt75->SetBinContent(3,1.677165e-05);
   mupt75->SetBinContent(4,8.385824e-05);
   mupt75->SetBinContent(5,1.677165e-05);
   mupt75->SetBinContent(6,8.385824e-05);
   mupt75->SetBinContent(7,3.35433e-05);
   mupt75->SetBinContent(8,6.708659e-05);
   mupt75->SetBinContent(9,0.0001006299);
   mupt75->SetBinContent(10,6.708659e-05);
   mupt75->SetBinContent(11,0.0001006299);
   mupt75->SetBinContent(12,0.0001174015);
   mupt75->SetBinError(0,5.562526e-05);
   mupt75->SetBinError(1,1.677165e-05);
   mupt75->SetBinError(2,4.743738e-05);
   mupt75->SetBinError(3,1.677165e-05);
   mupt75->SetBinError(4,3.750254e-05);
   mupt75->SetBinError(5,1.677165e-05);
   mupt75->SetBinError(6,3.750254e-05);
   mupt75->SetBinError(7,2.371869e-05);
   mupt75->SetBinError(8,3.35433e-05);
   mupt75->SetBinError(9,4.108198e-05);
   mupt75->SetBinError(10,3.35433e-05);
   mupt75->SetBinError(11,4.108198e-05);
   mupt75->SetBinError(12,4.437361e-05);
   mupt75->SetEntries(61);

   ci = TColor::GetColor("#0000ff");
   mupt75->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   mupt75->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   mupt75->SetMarkerColor(ci);
   mupt75->SetMarkerStyle(21);
   mupt75->GetXaxis()->SetTitle("mupt");
   mupt75->GetXaxis()->SetLabelFont(42);
   mupt75->GetXaxis()->SetLabelSize(0.035);
   mupt75->GetXaxis()->SetTitleSize(0.035);
   mupt75->GetXaxis()->SetTitleFont(42);
   mupt75->GetYaxis()->SetTitle("Events/pb");
   mupt75->GetYaxis()->SetLabelFont(42);
   mupt75->GetYaxis()->SetLabelSize(0.035);
   mupt75->GetYaxis()->SetTitleSize(0.035);
   mupt75->GetYaxis()->SetTitleFont(42);
   mupt75->GetZaxis()->SetLabelFont(42);
   mupt75->GetZaxis()->SetLabelSize(0.035);
   mupt75->GetZaxis()->SetTitleSize(0.035);
   mupt75->GetZaxis()->SetTitleFont(42);
   mupt->Add(mupt,"");
   mupt->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.4289368,0.9378571,0.5710632,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("mupt");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("mupt","mupt_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mupt","mupt_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mupt","mupt_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mupt","mupt_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("mupt","mupt_ttbar","lp");

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
   mupt->Modified();
   mupt->cd();
   mupt->SetSelected(mupt);
}
