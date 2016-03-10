void VBFDeltaEta()
{
//=========Macro generated from canvas: VBFDeltaEta/VBFDeltaEta
//=========  (Wed Nov  4 11:47:03 2015) by ROOT version6.02/05
   TCanvas *VBFDeltaEta = new TCanvas("VBFDeltaEta", "VBFDeltaEta",220,242,700,700);
   VBFDeltaEta->Range(-12.5,-5.529375,12.5,2.023205);
   VBFDeltaEta->SetFillColor(0);
   VBFDeltaEta->SetBorderMode(0);
   VBFDeltaEta->SetBorderSize(2);
   VBFDeltaEta->SetLogy();
   VBFDeltaEta->SetFrameBorderMode(0);
   VBFDeltaEta->SetFrameBorderMode(0);
   
   THStack *VBFDeltaEta = new THStack();
   VBFDeltaEta->SetName("VBFDeltaEta");
   VBFDeltaEta->SetTitle("VBFDeltaEta");
   
   TH1F *VBFDeltaEta_stack_12 = new TH1F("VBFDeltaEta_stack_12","VBFDeltaEta",20,-10,10);
   VBFDeltaEta_stack_12->SetMinimum(1.682221e-05);
   VBFDeltaEta_stack_12->SetMaximum(18.53305);
   VBFDeltaEta_stack_12->SetDirectory(0);
   VBFDeltaEta_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VBFDeltaEta_stack_12->SetLineColor(ci);
   VBFDeltaEta_stack_12->GetXaxis()->SetTitle("VBFDeltaEta");
   VBFDeltaEta_stack_12->GetXaxis()->SetLabelFont(42);
   VBFDeltaEta_stack_12->GetXaxis()->SetLabelSize(0.035);
   VBFDeltaEta_stack_12->GetXaxis()->SetTitleSize(0.035);
   VBFDeltaEta_stack_12->GetXaxis()->SetTitleFont(42);
   VBFDeltaEta_stack_12->GetYaxis()->SetTitle("Events/pb");
   VBFDeltaEta_stack_12->GetYaxis()->SetLabelFont(42);
   VBFDeltaEta_stack_12->GetYaxis()->SetLabelSize(0.035);
   VBFDeltaEta_stack_12->GetYaxis()->SetTitleSize(0.035);
   VBFDeltaEta_stack_12->GetYaxis()->SetTitleFont(42);
   VBFDeltaEta_stack_12->GetZaxis()->SetLabelFont(42);
   VBFDeltaEta_stack_12->GetZaxis()->SetLabelSize(0.035);
   VBFDeltaEta_stack_12->GetZaxis()->SetTitleSize(0.035);
   VBFDeltaEta_stack_12->GetZaxis()->SetTitleFont(42);
   VBFDeltaEta->SetHistogram(VBFDeltaEta_stack_12);
   
   
   TH1D *VBFDeltaEta56 = new TH1D("VBFDeltaEta56","#Delta_{#eta} + VBF cuts",20,-10,10);
   VBFDeltaEta56->SetBinContent(2,0.02757404);
   VBFDeltaEta56->SetBinContent(3,0.03883215);
   VBFDeltaEta56->SetBinContent(4,0.634203);
   VBFDeltaEta56->SetBinContent(5,5.370436);
   VBFDeltaEta56->SetBinContent(6,3.979399);
   VBFDeltaEta56->SetBinContent(11,6.295011);
   VBFDeltaEta56->SetBinContent(15,1.928552);
   VBFDeltaEta56->SetBinContent(16,5.0433);
   VBFDeltaEta56->SetBinContent(17,3.894055);
   VBFDeltaEta56->SetBinContent(18,0.1366193);
   VBFDeltaEta56->SetBinContent(19,0.003752704);
   VBFDeltaEta56->SetBinContent(20,0.02632314);
   VBFDeltaEta56->SetBinError(2,0.02635285);
   VBFDeltaEta56->SetBinError(3,0.0266187);
   VBFDeltaEta56->SetBinError(4,0.1263838);
   VBFDeltaEta56->SetBinError(5,1.984666);
   VBFDeltaEta56->SetBinError(6,1.622458);
   VBFDeltaEta56->SetBinError(11,1.989275);
   VBFDeltaEta56->SetBinError(15,0.2097407);
   VBFDeltaEta56->SetBinError(16,1.982566);
   VBFDeltaEta56->SetBinError(17,1.975533);
   VBFDeltaEta56->SetBinError(18,0.05891348);
   VBFDeltaEta56->SetBinError(19,0.002166624);
   VBFDeltaEta56->SetBinError(20,0.02632314);
   VBFDeltaEta56->SetEntries(1398);

   ci = TColor::GetColor("#00cc00");
   VBFDeltaEta56->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   VBFDeltaEta56->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   VBFDeltaEta56->SetMarkerColor(ci);
   VBFDeltaEta56->SetMarkerStyle(22);
   VBFDeltaEta56->GetXaxis()->SetTitle("VBFDeltaEta");
   VBFDeltaEta56->GetXaxis()->SetLabelFont(42);
   VBFDeltaEta56->GetXaxis()->SetLabelSize(0.035);
   VBFDeltaEta56->GetXaxis()->SetTitleSize(0.035);
   VBFDeltaEta56->GetXaxis()->SetTitleFont(42);
   VBFDeltaEta56->GetYaxis()->SetTitle("Events/pb");
   VBFDeltaEta56->GetYaxis()->SetLabelFont(42);
   VBFDeltaEta56->GetYaxis()->SetLabelSize(0.035);
   VBFDeltaEta56->GetYaxis()->SetTitleSize(0.035);
   VBFDeltaEta56->GetYaxis()->SetTitleFont(42);
   VBFDeltaEta56->GetZaxis()->SetLabelFont(42);
   VBFDeltaEta56->GetZaxis()->SetLabelSize(0.035);
   VBFDeltaEta56->GetZaxis()->SetTitleSize(0.035);
   VBFDeltaEta56->GetZaxis()->SetTitleFont(42);
   VBFDeltaEta->Add(VBFDeltaEta,"");
   
   TH1D *VBFDeltaEta57 = new TH1D("VBFDeltaEta57","#Delta_{#eta} + VBF cuts",20,-10,10);
   VBFDeltaEta57->SetBinContent(1,0.02028896);
   VBFDeltaEta57->SetBinContent(2,0.08985857);
   VBFDeltaEta57->SetBinContent(3,0.4571356);
   VBFDeltaEta57->SetBinContent(4,1.161785);
   VBFDeltaEta57->SetBinContent(5,3.111093);
   VBFDeltaEta57->SetBinContent(6,3.297386);
   VBFDeltaEta57->SetBinContent(11,9.104142);
   VBFDeltaEta57->SetBinContent(15,3.349544);
   VBFDeltaEta57->SetBinContent(16,2.978421);
   VBFDeltaEta57->SetBinContent(17,1.133212);
   VBFDeltaEta57->SetBinContent(18,0.5140127);
   VBFDeltaEta57->SetBinContent(19,0.0909154);
   VBFDeltaEta57->SetBinContent(20,0.01469553);
   VBFDeltaEta57->SetBinError(1,0.00406594);
   VBFDeltaEta57->SetBinError(2,0.00809007);
   VBFDeltaEta57->SetBinError(3,0.01852798);
   VBFDeltaEta57->SetBinError(4,0.02902226);
   VBFDeltaEta57->SetBinError(5,0.04737842);
   VBFDeltaEta57->SetBinError(6,0.04719168);
   VBFDeltaEta57->SetBinError(11,0.08243018);
   VBFDeltaEta57->SetBinError(15,0.04736777);
   VBFDeltaEta57->SetBinError(16,0.04612548);
   VBFDeltaEta57->SetBinError(17,0.02866639);
   VBFDeltaEta57->SetBinError(18,0.01972925);
   VBFDeltaEta57->SetBinError(19,0.008035675);
   VBFDeltaEta57->SetBinError(20,0.003248628);
   VBFDeltaEta57->SetEntries(106434);

   ci = TColor::GetColor("#00ffff");
   VBFDeltaEta57->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   VBFDeltaEta57->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   VBFDeltaEta57->SetMarkerColor(ci);
   VBFDeltaEta57->SetMarkerStyle(20);
   VBFDeltaEta57->GetXaxis()->SetTitle("VBFDeltaEta");
   VBFDeltaEta57->GetXaxis()->SetLabelFont(42);
   VBFDeltaEta57->GetXaxis()->SetLabelSize(0.035);
   VBFDeltaEta57->GetXaxis()->SetTitleSize(0.035);
   VBFDeltaEta57->GetXaxis()->SetTitleFont(42);
   VBFDeltaEta57->GetYaxis()->SetTitle("Events/pb");
   VBFDeltaEta57->GetYaxis()->SetLabelFont(42);
   VBFDeltaEta57->GetYaxis()->SetLabelSize(0.035);
   VBFDeltaEta57->GetYaxis()->SetTitleSize(0.035);
   VBFDeltaEta57->GetYaxis()->SetTitleFont(42);
   VBFDeltaEta57->GetZaxis()->SetLabelFont(42);
   VBFDeltaEta57->GetZaxis()->SetLabelSize(0.035);
   VBFDeltaEta57->GetZaxis()->SetTitleSize(0.035);
   VBFDeltaEta57->GetZaxis()->SetTitleFont(42);
   VBFDeltaEta->Add(VBFDeltaEta,"");
   
   TH1D *VBFDeltaEta58 = new TH1D("VBFDeltaEta58","#Delta_{#eta} + VBF cuts",20,-10,10);
   VBFDeltaEta58->SetBinContent(1,0.002795082);
   VBFDeltaEta58->SetBinContent(2,0.01316622);
   VBFDeltaEta58->SetBinContent(3,0.0740267);
   VBFDeltaEta58->SetBinContent(4,0.1689951);
   VBFDeltaEta58->SetBinContent(5,0.474113);
   VBFDeltaEta58->SetBinContent(6,0.5076733);
   VBFDeltaEta58->SetBinContent(11,1.595792);
   VBFDeltaEta58->SetBinContent(15,0.5220246);
   VBFDeltaEta58->SetBinContent(16,0.472889);
   VBFDeltaEta58->SetBinContent(17,0.1752986);
   VBFDeltaEta58->SetBinContent(18,0.0716702);
   VBFDeltaEta58->SetBinContent(19,0.01745);
   VBFDeltaEta58->SetBinContent(20,0.003213651);
   VBFDeltaEta58->SetBinError(1,0.0006578478);
   VBFDeltaEta58->SetBinError(2,0.001353033);
   VBFDeltaEta58->SetBinError(3,0.003294266);
   VBFDeltaEta58->SetBinError(4,0.004879182);
   VBFDeltaEta58->SetBinError(5,0.008172085);
   VBFDeltaEta58->SetBinError(6,0.008148824);
   VBFDeltaEta58->SetBinError(11,0.01529831);
   VBFDeltaEta58->SetBinError(15,0.008295855);
   VBFDeltaEta58->SetBinError(16,0.008141481);
   VBFDeltaEta58->SetBinError(17,0.00495115);
   VBFDeltaEta58->SetBinError(18,0.003269719);
   VBFDeltaEta58->SetBinError(19,0.001647783);
   VBFDeltaEta58->SetBinError(20,0.0006736957);
   VBFDeltaEta58->SetEntries(92263);

   ci = TColor::GetColor("#ffcc00");
   VBFDeltaEta58->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   VBFDeltaEta58->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   VBFDeltaEta58->SetMarkerColor(ci);
   VBFDeltaEta58->SetMarkerStyle(21);
   VBFDeltaEta58->GetXaxis()->SetTitle("VBFDeltaEta");
   VBFDeltaEta58->GetXaxis()->SetLabelFont(42);
   VBFDeltaEta58->GetXaxis()->SetLabelSize(0.035);
   VBFDeltaEta58->GetXaxis()->SetTitleSize(0.035);
   VBFDeltaEta58->GetXaxis()->SetTitleFont(42);
   VBFDeltaEta58->GetYaxis()->SetTitle("Events/pb");
   VBFDeltaEta58->GetYaxis()->SetLabelFont(42);
   VBFDeltaEta58->GetYaxis()->SetLabelSize(0.035);
   VBFDeltaEta58->GetYaxis()->SetTitleSize(0.035);
   VBFDeltaEta58->GetYaxis()->SetTitleFont(42);
   VBFDeltaEta58->GetZaxis()->SetLabelFont(42);
   VBFDeltaEta58->GetZaxis()->SetLabelSize(0.035);
   VBFDeltaEta58->GetZaxis()->SetTitleSize(0.035);
   VBFDeltaEta58->GetZaxis()->SetTitleFont(42);
   VBFDeltaEta->Add(VBFDeltaEta,"");
   
   TH1D *VBFDeltaEta59 = new TH1D("VBFDeltaEta59","#Delta_{#eta} + VBF cuts",20,-10,10);
   VBFDeltaEta59->SetBinContent(1,0.0002467932);
   VBFDeltaEta59->SetBinContent(2,0.001758402);
   VBFDeltaEta59->SetBinContent(3,0.005568272);
   VBFDeltaEta59->SetBinContent(4,0.01050414);
   VBFDeltaEta59->SetBinContent(5,0.01783081);
   VBFDeltaEta59->SetBinContent(6,0.01866374);
   VBFDeltaEta59->SetBinContent(11,0.02649942);
   VBFDeltaEta59->SetBinContent(15,0.01784623);
   VBFDeltaEta59->SetBinContent(16,0.01798506);
   VBFDeltaEta59->SetBinContent(17,0.01124452);
   VBFDeltaEta59->SetBinContent(18,0.004843317);
   VBFDeltaEta59->SetBinContent(19,0.002082318);
   VBFDeltaEta59->SetBinContent(20,0.0002467932);
   VBFDeltaEta59->SetBinError(1,6.16983e-05);
   VBFDeltaEta59->SetBinError(2,0.0001646894);
   VBFDeltaEta59->SetBinError(3,0.0002930669);
   VBFDeltaEta59->SetBinError(4,0.0004025194);
   VBFDeltaEta59->SetBinError(5,0.0005244356);
   VBFDeltaEta59->SetBinError(6,0.0005365447);
   VBFDeltaEta59->SetBinError(11,0.0006393296);
   VBFDeltaEta59->SetBinError(15,0.0005246624);
   VBFDeltaEta59->SetBinError(16,0.000526699);
   VBFDeltaEta59->SetBinError(17,0.0004164636);
   VBFDeltaEta59->SetBinError(18,0.0002733242);
   VBFDeltaEta59->SetBinError(19,0.0001792174);
   VBFDeltaEta59->SetBinError(20,6.16983e-05);
   VBFDeltaEta59->SetEntries(8773);

   ci = TColor::GetColor("#ff0000");
   VBFDeltaEta59->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   VBFDeltaEta59->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   VBFDeltaEta59->SetMarkerColor(ci);
   VBFDeltaEta59->SetMarkerStyle(20);
   VBFDeltaEta59->GetXaxis()->SetTitle("VBFDeltaEta");
   VBFDeltaEta59->GetXaxis()->SetLabelFont(42);
   VBFDeltaEta59->GetXaxis()->SetLabelSize(0.035);
   VBFDeltaEta59->GetXaxis()->SetTitleSize(0.035);
   VBFDeltaEta59->GetXaxis()->SetTitleFont(42);
   VBFDeltaEta59->GetYaxis()->SetTitle("Events/pb");
   VBFDeltaEta59->GetYaxis()->SetLabelFont(42);
   VBFDeltaEta59->GetYaxis()->SetLabelSize(0.035);
   VBFDeltaEta59->GetYaxis()->SetTitleSize(0.035);
   VBFDeltaEta59->GetYaxis()->SetTitleFont(42);
   VBFDeltaEta59->GetZaxis()->SetLabelFont(42);
   VBFDeltaEta59->GetZaxis()->SetLabelSize(0.035);
   VBFDeltaEta59->GetZaxis()->SetTitleSize(0.035);
   VBFDeltaEta59->GetZaxis()->SetTitleFont(42);
   VBFDeltaEta->Add(VBFDeltaEta,"");
   
   TH1D *VBFDeltaEta60 = new TH1D("VBFDeltaEta60","#Delta_{#eta} + VBF cuts",20,-10,10);
   VBFDeltaEta60->SetBinContent(2,0.0001341732);
   VBFDeltaEta60->SetBinContent(3,0.0003186613);
   VBFDeltaEta60->SetBinContent(4,0.0007211808);
   VBFDeltaEta60->SetBinContent(5,0.001911968);
   VBFDeltaEta60->SetBinContent(6,0.003136298);
   VBFDeltaEta60->SetBinContent(11,0.004327085);
   VBFDeltaEta60->SetBinContent(15,0.003304015);
   VBFDeltaEta60->SetBinContent(16,0.001995826);
   VBFDeltaEta60->SetBinContent(17,0.0008218107);
   VBFDeltaEta60->SetBinContent(18,0.0003522046);
   VBFDeltaEta60->SetBinContent(19,6.708659e-05);
   VBFDeltaEta60->SetBinError(2,4.743738e-05);
   VBFDeltaEta60->SetBinError(3,7.310592e-05);
   VBFDeltaEta60->SetBinError(4,0.000109979);
   VBFDeltaEta60->SetBinError(5,0.0001790722);
   VBFDeltaEta60->SetBinError(6,0.0002293488);
   VBFDeltaEta60->SetBinError(11,0.0002693925);
   VBFDeltaEta60->SetBinError(15,0.0002354013);
   VBFDeltaEta60->SetBinError(16,0.0001829571);
   VBFDeltaEta60->SetBinError(17,0.0001174015);
   VBFDeltaEta60->SetBinError(18,7.685734e-05);
   VBFDeltaEta60->SetBinError(19,3.35433e-05);
   VBFDeltaEta60->SetEntries(1019);

   ci = TColor::GetColor("#0000ff");
   VBFDeltaEta60->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   VBFDeltaEta60->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   VBFDeltaEta60->SetMarkerColor(ci);
   VBFDeltaEta60->SetMarkerStyle(21);
   VBFDeltaEta60->GetXaxis()->SetTitle("VBFDeltaEta");
   VBFDeltaEta60->GetXaxis()->SetLabelFont(42);
   VBFDeltaEta60->GetXaxis()->SetLabelSize(0.035);
   VBFDeltaEta60->GetXaxis()->SetTitleSize(0.035);
   VBFDeltaEta60->GetXaxis()->SetTitleFont(42);
   VBFDeltaEta60->GetYaxis()->SetTitle("Events/pb");
   VBFDeltaEta60->GetYaxis()->SetLabelFont(42);
   VBFDeltaEta60->GetYaxis()->SetLabelSize(0.035);
   VBFDeltaEta60->GetYaxis()->SetTitleSize(0.035);
   VBFDeltaEta60->GetYaxis()->SetTitleFont(42);
   VBFDeltaEta60->GetZaxis()->SetLabelFont(42);
   VBFDeltaEta60->GetZaxis()->SetLabelSize(0.035);
   VBFDeltaEta60->GetZaxis()->SetTitleSize(0.035);
   VBFDeltaEta60->GetZaxis()->SetTitleFont(42);
   VBFDeltaEta->Add(VBFDeltaEta,"");
   VBFDeltaEta->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3391379,0.94,0.6608621,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("VBFDeltaEta");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VBFDeltaEta","VBFDeltaEta_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VBFDeltaEta","VBFDeltaEta_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VBFDeltaEta","VBFDeltaEta_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VBFDeltaEta","VBFDeltaEta_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VBFDeltaEta","VBFDeltaEta_ttbar","lp");

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
   VBFDeltaEta->Modified();
   VBFDeltaEta->cd();
   VBFDeltaEta->SetSelected(VBFDeltaEta);
}
