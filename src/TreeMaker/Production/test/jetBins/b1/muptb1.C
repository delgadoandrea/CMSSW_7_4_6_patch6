void muptb1()
{
//=========Macro generated from canvas: b1/muptb1/b1/muptb1
//=========  (Tue Nov 24 14:28:23 2015) by ROOT version6.02/05
   TCanvas *b1/muptb1 = new TCanvas("b1/muptb1", "b1/muptb1",80,102,700,700);
   b1/muptb1->Range(1.5,-5.430348,16.5,-0.5389528);
   b1/muptb1->SetFillColor(0);
   b1/muptb1->SetBorderMode(0);
   b1/muptb1->SetBorderSize(2);
   b1/muptb1->SetLogy();
   b1/muptb1->SetFrameBorderMode(0);
   b1/muptb1->SetFrameBorderMode(0);
   
   THStack *b1/muptb1 = new THStack();
   b1/muptb1->SetName("b1/muptb1");
   b1/muptb1->SetTitle("b1/muptb1");
   
   TH1F *b1/muptb1_stack_5 = new TH1F("b1/muptb1_stack_5","b1/muptb1",12,3,15);
   b1/muptb1_stack_5->SetMinimum(1.144964e-05);
   b1/muptb1_stack_5->SetMaximum(0.09373626);
   b1/muptb1_stack_5->SetDirectory(0);
   b1/muptb1_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1/muptb1_stack_5->SetLineColor(ci);
   b1/muptb1_stack_5->GetXaxis()->SetTitle("b1/muptb1");
   b1/muptb1_stack_5->GetXaxis()->SetLabelFont(42);
   b1/muptb1_stack_5->GetXaxis()->SetLabelSize(0.035);
   b1/muptb1_stack_5->GetXaxis()->SetTitleSize(0.035);
   b1/muptb1_stack_5->GetXaxis()->SetTitleFont(42);
   b1/muptb1_stack_5->GetYaxis()->SetTitle("Events/pb");
   b1/muptb1_stack_5->GetYaxis()->SetLabelFont(42);
   b1/muptb1_stack_5->GetYaxis()->SetLabelSize(0.035);
   b1/muptb1_stack_5->GetYaxis()->SetTitleSize(0.035);
   b1/muptb1_stack_5->GetYaxis()->SetTitleFont(42);
   b1/muptb1_stack_5->GetZaxis()->SetLabelFont(42);
   b1/muptb1_stack_5->GetZaxis()->SetLabelSize(0.035);
   b1/muptb1_stack_5->GetZaxis()->SetTitleSize(0.035);
   b1/muptb1_stack_5->GetZaxis()->SetTitleFont(42);
   b1/muptb1->SetHistogram(b1/muptb1_stack_5);
   
   
   TH1D *muptb121 = new TH1D("muptb121","p_{T, #mu}",12,3,15);
   muptb121->SetBinContent(0,0.01663754);
   muptb121->SetBinError(0,0.01176452);
   muptb121->SetEntries(2);

   ci = TColor::GetColor("#00cc00");
   muptb121->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   muptb121->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   muptb121->SetMarkerColor(ci);
   muptb121->SetMarkerStyle(22);
   muptb121->GetXaxis()->SetTitle("muptb1");
   muptb121->GetXaxis()->SetLabelFont(42);
   muptb121->GetXaxis()->SetLabelSize(0.035);
   muptb121->GetXaxis()->SetTitleSize(0.035);
   muptb121->GetXaxis()->SetTitleFont(42);
   muptb121->GetYaxis()->SetTitle("Events/pb");
   muptb121->GetYaxis()->SetLabelFont(42);
   muptb121->GetYaxis()->SetLabelSize(0.035);
   muptb121->GetYaxis()->SetTitleSize(0.035);
   muptb121->GetYaxis()->SetTitleFont(42);
   muptb121->GetZaxis()->SetLabelFont(42);
   muptb121->GetZaxis()->SetLabelSize(0.035);
   muptb121->GetZaxis()->SetTitleSize(0.035);
   muptb121->GetZaxis()->SetTitleFont(42);
   b1/muptb1->Add(muptb1,"");
   
   TH1D *muptb122 = new TH1D("muptb122","p_{T, #mu}",12,3,15);
   muptb122->SetBinContent(0,0.1134751);
   muptb122->SetBinContent(1,0.01430668);
   muptb122->SetBinContent(2,0.02353392);
   muptb122->SetBinContent(3,0.0349235);
   muptb122->SetBinContent(4,0.04387598);
   muptb122->SetBinContent(5,0.05342076);
   muptb122->SetBinContent(6,0.05170668);
   muptb122->SetBinContent(7,0.0515908);
   muptb122->SetBinContent(8,0.05310378);
   muptb122->SetBinContent(9,0.05379438);
   muptb122->SetBinContent(10,0.05664953);
   muptb122->SetBinContent(11,0.04601714);
   muptb122->SetBinContent(12,0.05011747);
   muptb122->SetBinError(0,0.005256044);
   muptb122->SetBinError(1,0.00221906);
   muptb122->SetBinError(2,0.002290185);
   muptb122->SetBinError(3,0.002738618);
   muptb122->SetBinError(4,0.00278534);
   muptb122->SetBinError(5,0.003837396);
   muptb122->SetBinError(6,0.003585609);
   muptb122->SetBinError(7,0.003577186);
   muptb122->SetBinError(8,0.003935581);
   muptb122->SetBinError(9,0.003614309);
   muptb122->SetBinError(10,0.003887182);
   muptb122->SetBinError(11,0.002962665);
   muptb122->SetBinError(12,0.003422475);
   muptb122->SetEntries(7038);

   ci = TColor::GetColor("#00ffff");
   muptb122->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   muptb122->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   muptb122->SetMarkerColor(ci);
   muptb122->SetMarkerStyle(20);
   muptb122->GetXaxis()->SetTitle("muptb1");
   muptb122->GetXaxis()->SetLabelFont(42);
   muptb122->GetXaxis()->SetLabelSize(0.035);
   muptb122->GetXaxis()->SetTitleSize(0.035);
   muptb122->GetXaxis()->SetTitleFont(42);
   muptb122->GetYaxis()->SetTitle("Events/pb");
   muptb122->GetYaxis()->SetLabelFont(42);
   muptb122->GetYaxis()->SetLabelSize(0.035);
   muptb122->GetYaxis()->SetTitleSize(0.035);
   muptb122->GetYaxis()->SetTitleFont(42);
   muptb122->GetZaxis()->SetLabelFont(42);
   muptb122->GetZaxis()->SetLabelSize(0.035);
   muptb122->GetZaxis()->SetTitleSize(0.035);
   muptb122->GetZaxis()->SetTitleFont(42);
   b1/muptb1->Add(muptb1,"");
   
   TH1D *muptb123 = new TH1D("muptb123","p_{T, #mu}",12,3,15);
   muptb123->SetBinContent(0,0.1481403);
   muptb123->SetBinContent(1,0.005008212);
   muptb123->SetBinContent(2,0.003161447);
   muptb123->SetBinContent(3,0.001792895);
   muptb123->SetBinContent(4,0.001220377);
   muptb123->SetBinContent(5,0.0007407709);
   muptb123->SetBinContent(6,0.0007799591);
   muptb123->SetBinContent(7,0.0006429602);
   muptb123->SetBinContent(8,0.0005464816);
   muptb123->SetBinContent(9,0.0001964781);
   muptb123->SetBinContent(10,0.0001953837);
   muptb123->SetBinContent(11,0.0001016361);
   muptb123->SetBinContent(12,9.250141e-05);
   muptb123->SetBinError(0,0.002236313);
   muptb123->SetBinError(1,0.0004161203);
   muptb123->SetBinError(2,0.0003186405);
   muptb123->SetBinError(3,0.0002139839);
   muptb123->SetBinError(4,0.0002092644);
   muptb123->SetBinError(5,0.0001780746);
   muptb123->SetBinError(6,0.0001995916);
   muptb123->SetBinError(7,0.0001529929);
   muptb123->SetBinError(8,0.0001639701);
   muptb123->SetBinError(9,6.958801e-05);
   muptb123->SetBinError(10,6.952288e-05);
   muptb123->SetBinError(11,4.936487e-05);
   muptb123->SetBinError(12,4.9019e-05);
   muptb123->SetEntries(10014);

   ci = TColor::GetColor("#ffcc00");
   muptb123->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   muptb123->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   muptb123->SetMarkerColor(ci);
   muptb123->SetMarkerStyle(21);
   muptb123->GetXaxis()->SetTitle("muptb1");
   muptb123->GetXaxis()->SetLabelFont(42);
   muptb123->GetXaxis()->SetLabelSize(0.035);
   muptb123->GetXaxis()->SetTitleSize(0.035);
   muptb123->GetXaxis()->SetTitleFont(42);
   muptb123->GetYaxis()->SetTitle("Events/pb");
   muptb123->GetYaxis()->SetLabelFont(42);
   muptb123->GetYaxis()->SetLabelSize(0.035);
   muptb123->GetYaxis()->SetTitleSize(0.035);
   muptb123->GetYaxis()->SetTitleFont(42);
   muptb123->GetZaxis()->SetLabelFont(42);
   muptb123->GetZaxis()->SetLabelSize(0.035);
   muptb123->GetZaxis()->SetTitleSize(0.035);
   muptb123->GetZaxis()->SetTitleFont(42);
   b1/muptb1->Add(muptb1,"");
   
   TH1D *muptb124 = new TH1D("muptb124","p_{T, #mu}",12,3,15);
   muptb124->SetBinContent(0,0.002545055);
   muptb124->SetBinContent(1,0.0008946254);
   muptb124->SetBinContent(2,0.001249391);
   muptb124->SetBinContent(3,0.001326514);
   muptb124->SetBinContent(4,0.001295664);
   muptb124->SetBinContent(5,0.0009254746);
   muptb124->SetBinContent(6,0.0007866534);
   muptb124->SetBinContent(7,0.0006941059);
   muptb124->SetBinContent(8,0.0004935864);
   muptb124->SetBinContent(9,0.0003856144);
   muptb124->SetBinContent(10,0.0001850949);
   muptb124->SetBinContent(11,0.0002622178);
   muptb124->SetBinContent(12,0.0002467932);
   muptb124->SetBinError(0,0.0001981323);
   muptb124->SetBinError(1,0.0001174701);
   muptb124->SetBinError(2,0.0001388212);
   muptb124->SetBinError(3,0.0001430416);
   muptb124->SetBinError(4,0.0001413686);
   muptb124->SetBinError(5,0.0001194783);
   muptb124->SetBinError(6,0.0001101535);
   muptb124->SetBinError(7,0.0001034712);
   muptb124->SetBinError(8,8.725458e-05);
   muptb124->SetBinError(9,7.712288e-05);
   muptb124->SetBinError(10,5.34323e-05);
   muptb124->SetBinError(11,6.359716e-05);
   muptb124->SetBinError(12,6.16983e-05);
   muptb124->SetEntries(732);

   ci = TColor::GetColor("#ff0000");
   muptb124->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   muptb124->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   muptb124->SetMarkerColor(ci);
   muptb124->SetMarkerStyle(20);
   muptb124->GetXaxis()->SetTitle("muptb1");
   muptb124->GetXaxis()->SetLabelFont(42);
   muptb124->GetXaxis()->SetLabelSize(0.035);
   muptb124->GetXaxis()->SetTitleSize(0.035);
   muptb124->GetXaxis()->SetTitleFont(42);
   muptb124->GetYaxis()->SetTitle("Events/pb");
   muptb124->GetYaxis()->SetLabelFont(42);
   muptb124->GetYaxis()->SetLabelSize(0.035);
   muptb124->GetYaxis()->SetTitleSize(0.035);
   muptb124->GetYaxis()->SetTitleFont(42);
   muptb124->GetZaxis()->SetLabelFont(42);
   muptb124->GetZaxis()->SetLabelSize(0.035);
   muptb124->GetZaxis()->SetTitleSize(0.035);
   muptb124->GetZaxis()->SetTitleFont(42);
   b1/muptb1->Add(muptb1,"");
   
   TH1D *muptb125 = new TH1D("muptb125","p_{T, #mu}",12,3,15);
   muptb125->SetBinContent(10,3.35433e-05);
   muptb125->SetBinError(10,2.371869e-05);
   muptb125->SetEntries(2);

   ci = TColor::GetColor("#0000ff");
   muptb125->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   muptb125->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   muptb125->SetMarkerColor(ci);
   muptb125->SetMarkerStyle(21);
   muptb125->GetXaxis()->SetTitle("muptb1");
   muptb125->GetXaxis()->SetLabelFont(42);
   muptb125->GetXaxis()->SetLabelSize(0.035);
   muptb125->GetXaxis()->SetTitleSize(0.035);
   muptb125->GetXaxis()->SetTitleFont(42);
   muptb125->GetYaxis()->SetTitle("Events/pb");
   muptb125->GetYaxis()->SetLabelFont(42);
   muptb125->GetYaxis()->SetLabelSize(0.035);
   muptb125->GetYaxis()->SetTitleSize(0.035);
   muptb125->GetYaxis()->SetTitleFont(42);
   muptb125->GetZaxis()->SetLabelFont(42);
   muptb125->GetZaxis()->SetLabelSize(0.035);
   muptb125->GetZaxis()->SetTitleSize(0.035);
   muptb125->GetZaxis()->SetTitleFont(42);
   b1/muptb1->Add(muptb1,"");
   b1/muptb1->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3671552,0.9342857,0.6328448,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b1/muptb1");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("muptb1","b1/muptb1_QCD_b1/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("muptb1","b1/muptb1_WJetsToLNu_b1/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("muptb1","b1/muptb1_ZJetsToNuNu_b1/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("muptb1","b1/muptb1_signal_b1/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("muptb1","b1/muptb1_ttbar_b1/","lp");

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
   b1/muptb1->Modified();
   b1/muptb1->cd();
   b1/muptb1->SetSelected(b1/muptb1);
}
