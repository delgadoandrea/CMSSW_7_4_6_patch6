void METopt()
{
//=========Macro generated from canvas: METopt/METopt
//=========  (Mon Nov 23 11:05:02 2015) by ROOT version6.02/05
   TCanvas *METopt = new TCanvas("METopt", "METopt",140,162,700,700);
   METopt->Range(-0.375,-6.699291,3.375,4.995544);
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
   METopt_stack_8->SetMinimum(2.952517e-06);
   METopt_stack_8->SetMaximum(6699.78);
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
   METopt36->SetBinContent(1,2533.032);
   METopt36->SetBinContent(2,2254.833);
   METopt36->SetBinContent(3,648.2311);
   METopt36->SetBinContent(4,187.4846);
   METopt36->SetBinContent(5,66.9715);
   METopt36->SetBinContent(6,13.74047);
   METopt36->SetBinContent(7,4.348822);
   METopt36->SetBinContent(8,2.341673);
   METopt36->SetBinContent(9,0.3345248);
   METopt36->SetBinError(1,28.53174);
   METopt36->SetBinError(2,27.32623);
   METopt36->SetBinError(3,14.69328);
   METopt36->SetBinError(4,7.909483);
   METopt36->SetBinError(5,4.730953);
   METopt36->SetBinError(6,2.142052);
   METopt36->SetBinError(7,1.206146);
   METopt36->SetBinError(8,0.8850693);
   METopt36->SetBinError(9,0.3345248);
   METopt36->SetEntries(35032);

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
   METopt37->SetBinContent(1,1.774376);
   METopt37->SetBinContent(2,4.503728);
   METopt37->SetBinContent(3,6.107827);
   METopt37->SetBinContent(4,6.179938);
   METopt37->SetBinContent(5,5.355457);
   METopt37->SetBinContent(6,3.859607);
   METopt37->SetBinContent(7,2.774225);
   METopt37->SetBinContent(8,2.02865);
   METopt37->SetBinContent(9,1.300194);
   METopt37->SetBinContent(10,0.8137657);
   METopt37->SetBinContent(11,0.5247659);
   METopt37->SetBinContent(12,0.3071246);
   METopt37->SetBinContent(13,0.1877379);
   METopt37->SetBinContent(14,0.1016539);
   METopt37->SetBinContent(15,0.05821168);
   METopt37->SetBinContent(16,0.08113904);
   METopt37->SetBinError(1,0.03446825);
   METopt37->SetBinError(2,0.05582876);
   METopt37->SetBinError(3,0.06645706);
   METopt37->SetBinError(4,0.06797493);
   METopt37->SetBinError(5,0.06450051);
   METopt37->SetBinError(6,0.05558292);
   METopt37->SetBinError(7,0.04799603);
   METopt37->SetBinError(8,0.04175591);
   METopt37->SetBinError(9,0.03376712);
   METopt37->SetBinError(10,0.02686477);
   METopt37->SetBinError(11,0.02183434);
   METopt37->SetBinError(12,0.01666402);
   METopt37->SetBinError(13,0.01312623);
   METopt37->SetBinError(14,0.009658735);
   METopt37->SetBinError(15,0.007358255);
   METopt37->SetBinError(16,0.008666012);
   METopt37->SetEntries(136801);

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
   METopt38->SetBinContent(1,0.1906895);
   METopt38->SetBinContent(2,0.5363485);
   METopt38->SetBinContent(3,0.7572709);
   METopt38->SetBinContent(4,0.8124397);
   METopt38->SetBinContent(5,0.7208458);
   METopt38->SetBinContent(6,0.5735803);
   METopt38->SetBinContent(7,0.4521199);
   METopt38->SetBinContent(8,0.3191451);
   METopt38->SetBinContent(9,0.2256362);
   METopt38->SetBinContent(10,0.1437454);
   METopt38->SetBinContent(11,0.08828111);
   METopt38->SetBinContent(12,0.05264171);
   METopt38->SetBinContent(13,0.03009248);
   METopt38->SetBinContent(14,0.01615103);
   METopt38->SetBinContent(15,0.008894234);
   METopt38->SetBinContent(16,0.0121579);
   METopt38->SetBinError(1,0.003534671);
   METopt38->SetBinError(2,0.006040803);
   METopt38->SetBinError(3,0.00733556);
   METopt38->SetBinError(4,0.007719215);
   METopt38->SetBinError(5,0.007386052);
   METopt38->SetBinError(6,0.006669476);
   METopt38->SetBinError(7,0.006043659);
   METopt38->SetBinError(8,0.005144935);
   METopt38->SetBinError(9,0.004378963);
   METopt38->SetBinError(10,0.003517709);
   METopt38->SetBinError(11,0.002782847);
   METopt38->SetBinError(12,0.002167469);
   METopt38->SetBinError(13,0.001636211);
   METopt38->SetBinError(14,0.001208836);
   METopt38->SetBinError(15,0.0008879731);
   METopt38->SetBinError(16,0.001058859);
   METopt38->SetEntries(131338);

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
   METopt39->SetBinContent(1,0.0007558042);
   METopt39->SetBinContent(2,0.002421658);
   METopt39->SetBinContent(3,0.004303457);
   METopt39->SetBinContent(4,0.006277802);
   METopt39->SetBinContent(5,0.009887153);
   METopt39->SetBinContent(6,0.01011852);
   METopt39->SetBinContent(7,0.008421818);
   METopt39->SetBinContent(8,0.006447473);
   METopt39->SetBinContent(9,0.005213507);
   METopt39->SetBinContent(10,0.003686474);
   METopt39->SetBinContent(11,0.002375385);
   METopt39->SetBinContent(12,0.001465335);
   METopt39->SetBinContent(13,0.0009254746);
   METopt39->SetBinContent(14,0.0006786813);
   METopt39->SetBinContent(15,0.0004318881);
   METopt39->SetBinContent(16,0.0008175025);
   METopt39->SetBinError(1,0.000107972);
   METopt39->SetBinError(2,0.0001932694);
   METopt39->SetBinError(3,0.0002576412);
   METopt39->SetBinError(4,0.0003111791);
   METopt39->SetBinError(5,0.0003905191);
   METopt39->SetBinError(6,0.0003950619);
   METopt39->SetBinError(7,0.0003604206);
   METopt39->SetBinError(8,0.0003153562);
   METopt39->SetBinError(9,0.0002835774);
   METopt39->SetBinError(10,0.0002384582);
   METopt39->SetBinError(11,0.000191414);
   METopt39->SetBinError(12,0.0001503402);
   METopt39->SetBinError(13,0.0001194783);
   METopt39->SetBinError(14,0.0001023151);
   METopt39->SetBinError(15,8.161918e-05);
   METopt39->SetBinError(16,0.0001122926);
   METopt39->SetEntries(4164);

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
   METopt40->SetBinContent(1,6.708659e-05);
   METopt40->SetBinContent(2,0.0003018897);
   METopt40->SetBinContent(3,0.0001509448);
   METopt40->SetBinContent(4,0.0001006299);
   METopt40->SetBinContent(5,0.0001006299);
   METopt40->SetBinContent(6,0.0001677165);
   METopt40->SetBinContent(7,8.385824e-05);
   METopt40->SetBinContent(8,3.35433e-05);
   METopt40->SetBinContent(9,1.677165e-05);
   METopt40->SetBinError(1,3.35433e-05);
   METopt40->SetBinError(2,7.115607e-05);
   METopt40->SetBinError(3,5.031494e-05);
   METopt40->SetBinError(4,4.108198e-05);
   METopt40->SetBinError(5,4.108198e-05);
   METopt40->SetBinError(6,5.303661e-05);
   METopt40->SetBinError(7,3.750254e-05);
   METopt40->SetBinError(8,2.371869e-05);
   METopt40->SetBinError(9,1.677165e-05);
   METopt40->SetEntries(61);

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
