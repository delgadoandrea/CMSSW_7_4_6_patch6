void phimetphijet2()
{
//=========Macro generated from canvas: phimetphijet2/phimetphijet2
//=========  (Mon Nov 23 12:45:22 2015) by ROOT version6.02/05
   TCanvas *phimetphijet2 = new TCanvas("phimetphijet2", "phimetphijet2",380,402,700,700);
   phimetphijet2->Range(-3.926991,-5.156923,3.926991,-0.09020719);
   phimetphijet2->SetFillColor(0);
   phimetphijet2->SetBorderMode(0);
   phimetphijet2->SetBorderSize(2);
   phimetphijet2->SetLogy();
   phimetphijet2->SetFrameBorderMode(0);
   phimetphijet2->SetFrameBorderMode(0);
   
   THStack *phimetphijet2 = new THStack();
   phimetphijet2->SetName("phimetphijet2");
   phimetphijet2->SetTitle("phimetphijet2");
   
   TH1F *phimetphijet2_stack_20 = new TH1F("phimetphijet2_stack_20","phimetphijet2",20,-3.141593,3.141593);
   phimetphijet2_stack_20->SetMinimum(2.237428e-05);
   phimetphijet2_stack_20->SetMaximum(0.2530004);
   phimetphijet2_stack_20->SetDirectory(0);
   phimetphijet2_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   phimetphijet2_stack_20->SetLineColor(ci);
   phimetphijet2_stack_20->GetXaxis()->SetTitle("phimetphijet2");
   phimetphijet2_stack_20->GetXaxis()->SetLabelFont(42);
   phimetphijet2_stack_20->GetXaxis()->SetLabelSize(0.035);
   phimetphijet2_stack_20->GetXaxis()->SetTitleSize(0.035);
   phimetphijet2_stack_20->GetXaxis()->SetTitleFont(42);
   phimetphijet2_stack_20->GetYaxis()->SetTitle("Events/pb");
   phimetphijet2_stack_20->GetYaxis()->SetLabelFont(42);
   phimetphijet2_stack_20->GetYaxis()->SetLabelSize(0.035);
   phimetphijet2_stack_20->GetYaxis()->SetTitleSize(0.035);
   phimetphijet2_stack_20->GetYaxis()->SetTitleFont(42);
   phimetphijet2_stack_20->GetZaxis()->SetLabelFont(42);
   phimetphijet2_stack_20->GetZaxis()->SetLabelSize(0.035);
   phimetphijet2_stack_20->GetZaxis()->SetTitleSize(0.035);
   phimetphijet2_stack_20->GetZaxis()->SetTitleFont(42);
   phimetphijet2->SetHistogram(phimetphijet2_stack_20);
   
   
   TH1D *phimetphijet296 = new TH1D("phimetphijet296"," #Delta_{#phi}[MET,jet_{2}]",20,-3.141593,3.141593);
   phimetphijet296->SetBinContent(10,0.1506478);
   phimetphijet296->SetBinContent(11,0.1346909);
   phimetphijet296->SetBinContent(19,0.01663754);
   phimetphijet296->SetBinError(10,0.03249055);
   phimetphijet296->SetBinError(11,0.03029349);
   phimetphijet296->SetBinError(19,0.01176452);
   phimetphijet296->SetEntries(107);

   ci = TColor::GetColor("#00cc00");
   phimetphijet296->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphijet296->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphijet296->SetMarkerColor(ci);
   phimetphijet296->SetMarkerStyle(22);
   phimetphijet296->GetXaxis()->SetTitle("phimetphijet2");
   phimetphijet296->GetXaxis()->SetLabelFont(42);
   phimetphijet296->GetXaxis()->SetLabelSize(0.035);
   phimetphijet296->GetXaxis()->SetTitleSize(0.035);
   phimetphijet296->GetXaxis()->SetTitleFont(42);
   phimetphijet296->GetYaxis()->SetTitle("Events/pb");
   phimetphijet296->GetYaxis()->SetLabelFont(42);
   phimetphijet296->GetYaxis()->SetLabelSize(0.035);
   phimetphijet296->GetYaxis()->SetTitleSize(0.035);
   phimetphijet296->GetYaxis()->SetTitleFont(42);
   phimetphijet296->GetZaxis()->SetLabelFont(42);
   phimetphijet296->GetZaxis()->SetLabelSize(0.035);
   phimetphijet296->GetZaxis()->SetTitleSize(0.035);
   phimetphijet296->GetZaxis()->SetTitleFont(42);
   phimetphijet2->Add(phimetphijet2,"");
   
   TH1D *phimetphijet297 = new TH1D("phimetphijet297"," #Delta_{#phi}[MET,jet_{2}]",20,-3.141593,3.141593);
   phimetphijet297->SetBinContent(1,0.128797);
   phimetphijet297->SetBinContent(2,0.1202189);
   phimetphijet297->SetBinContent(3,0.08628078);
   phimetphijet297->SetBinContent(4,0.06187822);
   phimetphijet297->SetBinContent(5,0.05877428);
   phimetphijet297->SetBinContent(6,0.04707912);
   phimetphijet297->SetBinContent(7,0.04023144);
   phimetphijet297->SetBinContent(8,0.03908586);
   phimetphijet297->SetBinContent(9,0.0408884);
   phimetphijet297->SetBinContent(10,0.04855493);
   phimetphijet297->SetBinContent(11,0.04347269);
   phimetphijet297->SetBinContent(12,0.04143163);
   phimetphijet297->SetBinContent(13,0.03488101);
   phimetphijet297->SetBinContent(14,0.03805122);
   phimetphijet297->SetBinContent(15,0.04829116);
   phimetphijet297->SetBinContent(16,0.05370872);
   phimetphijet297->SetBinContent(17,0.0541476);
   phimetphijet297->SetBinContent(18,0.09034244);
   phimetphijet297->SetBinContent(19,0.1193525);
   phimetphijet297->SetBinContent(20,0.1389608);
   phimetphijet297->SetBinError(1,0.00533631);
   phimetphijet297->SetBinError(2,0.004631363);
   phimetphijet297->SetBinError(3,0.003826706);
   phimetphijet297->SetBinError(4,0.002823548);
   phimetphijet297->SetBinError(5,0.002412056);
   phimetphijet297->SetBinError(6,0.002022836);
   phimetphijet297->SetBinError(7,0.002761394);
   phimetphijet297->SetBinError(8,0.002198853);
   phimetphijet297->SetBinError(9,0.001787074);
   phimetphijet297->SetBinError(10,0.001938888);
   phimetphijet297->SetBinError(11,0.001747628);
   phimetphijet297->SetBinError(12,0.001764521);
   phimetphijet297->SetBinError(13,0.001663853);
   phimetphijet297->SetBinError(14,0.001791863);
   phimetphijet297->SetBinError(15,0.002919074);
   phimetphijet297->SetBinError(16,0.002744889);
   phimetphijet297->SetBinError(17,0.002310871);
   phimetphijet297->SetBinError(18,0.004576468);
   phimetphijet297->SetBinError(19,0.005039241);
   phimetphijet297->SetBinError(20,0.00580741);
   phimetphijet297->SetEntries(28309);

   ci = TColor::GetColor("#00ffff");
   phimetphijet297->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphijet297->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphijet297->SetMarkerColor(ci);
   phimetphijet297->SetMarkerStyle(20);
   phimetphijet297->GetXaxis()->SetTitle("phimetphijet2");
   phimetphijet297->GetXaxis()->SetLabelFont(42);
   phimetphijet297->GetXaxis()->SetLabelSize(0.035);
   phimetphijet297->GetXaxis()->SetTitleSize(0.035);
   phimetphijet297->GetXaxis()->SetTitleFont(42);
   phimetphijet297->GetYaxis()->SetTitle("Events/pb");
   phimetphijet297->GetYaxis()->SetLabelFont(42);
   phimetphijet297->GetYaxis()->SetLabelSize(0.035);
   phimetphijet297->GetYaxis()->SetTitleSize(0.035);
   phimetphijet297->GetYaxis()->SetTitleFont(42);
   phimetphijet297->GetZaxis()->SetLabelFont(42);
   phimetphijet297->GetZaxis()->SetLabelSize(0.035);
   phimetphijet297->GetZaxis()->SetTitleSize(0.035);
   phimetphijet297->GetZaxis()->SetTitleFont(42);
   phimetphijet2->Add(phimetphijet2,"");
   
   TH1D *phimetphijet298 = new TH1D("phimetphijet298"," #Delta_{#phi}[MET,jet_{2}]",20,-3.141593,3.141593);
   phimetphijet298->SetBinContent(1,0.03218517);
   phimetphijet298->SetBinContent(2,0.03161491);
   phimetphijet298->SetBinContent(3,0.02142398);
   phimetphijet298->SetBinContent(4,0.01848394);
   phimetphijet298->SetBinContent(5,0.01266415);
   phimetphijet298->SetBinContent(6,0.01046764);
   phimetphijet298->SetBinContent(7,0.008318254);
   phimetphijet298->SetBinContent(8,0.008554519);
   phimetphijet298->SetBinContent(9,0.00959638);
   phimetphijet298->SetBinContent(10,0.009207411);
   phimetphijet298->SetBinContent(11,0.008805577);
   phimetphijet298->SetBinContent(12,0.008202426);
   phimetphijet298->SetBinContent(13,0.007362024);
   phimetphijet298->SetBinContent(14,0.008752914);
   phimetphijet298->SetBinContent(15,0.01014307);
   phimetphijet298->SetBinContent(16,0.01295922);
   phimetphijet298->SetBinContent(17,0.01568322);
   phimetphijet298->SetBinContent(18,0.02170769);
   phimetphijet298->SetBinContent(19,0.03203249);
   phimetphijet298->SetBinContent(20,0.03471009);
   phimetphijet298->SetBinError(1,0.00100856);
   phimetphijet298->SetBinError(2,0.0009484864);
   phimetphijet298->SetBinError(3,0.0007654704);
   phimetphijet298->SetBinError(4,0.0006648585);
   phimetphijet298->SetBinError(5,0.0004918276);
   phimetphijet298->SetBinError(6,0.0004312089);
   phimetphijet298->SetBinError(7,0.0003554879);
   phimetphijet298->SetBinError(8,0.0003529908);
   phimetphijet298->SetBinError(9,0.0003855732);
   phimetphijet298->SetBinError(10,0.0003597955);
   phimetphijet298->SetBinError(11,0.0003950805);
   phimetphijet298->SetBinError(12,0.0003439885);
   phimetphijet298->SetBinError(13,0.0003139343);
   phimetphijet298->SetBinError(14,0.0003826412);
   phimetphijet298->SetBinError(15,0.0004210586);
   phimetphijet298->SetBinError(16,0.0005125825);
   phimetphijet298->SetBinError(17,0.0005833745);
   phimetphijet298->SetBinError(18,0.0007465054);
   phimetphijet298->SetBinError(19,0.001010639);
   phimetphijet298->SetBinError(20,0.001041266);
   phimetphijet298->SetEntries(44158);

   ci = TColor::GetColor("#ffcc00");
   phimetphijet298->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphijet298->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphijet298->SetMarkerColor(ci);
   phimetphijet298->SetMarkerStyle(21);
   phimetphijet298->GetXaxis()->SetTitle("phimetphijet2");
   phimetphijet298->GetXaxis()->SetLabelFont(42);
   phimetphijet298->GetXaxis()->SetLabelSize(0.035);
   phimetphijet298->GetXaxis()->SetTitleSize(0.035);
   phimetphijet298->GetXaxis()->SetTitleFont(42);
   phimetphijet298->GetYaxis()->SetTitle("Events/pb");
   phimetphijet298->GetYaxis()->SetLabelFont(42);
   phimetphijet298->GetYaxis()->SetLabelSize(0.035);
   phimetphijet298->GetYaxis()->SetTitleSize(0.035);
   phimetphijet298->GetYaxis()->SetTitleFont(42);
   phimetphijet298->GetZaxis()->SetLabelFont(42);
   phimetphijet298->GetZaxis()->SetLabelSize(0.035);
   phimetphijet298->GetZaxis()->SetTitleSize(0.035);
   phimetphijet298->GetZaxis()->SetTitleFont(42);
   phimetphijet2->Add(phimetphijet2,"");
   
   TH1D *phimetphijet299 = new TH1D("phimetphijet299"," #Delta_{#phi}[MET,jet_{2}]",20,-3.141593,3.141593);
   phimetphijet299->SetBinContent(1,0.003979541);
   phimetphijet299->SetBinContent(2,0.003825295);
   phimetphijet299->SetBinContent(3,0.002205714);
   phimetphijet299->SetBinContent(4,0.002066893);
   phimetphijet299->SetBinContent(5,0.001048871);
   phimetphijet299->SetBinContent(6,0.001095145);
   phimetphijet299->SetBinContent(7,0.001372787);
   phimetphijet299->SetBinContent(8,0.0008483517);
   phimetphijet299->SetBinContent(9,0.0009408991);
   phimetphijet299->SetBinContent(10,0.001125994);
   phimetphijet299->SetBinContent(11,0.0006478322);
   phimetphijet299->SetBinContent(12,0.001002597);
   phimetphijet299->SetBinContent(13,0.0008637763);
   phimetphijet299->SetBinContent(14,0.0007403796);
   phimetphijet299->SetBinContent(15,0.001295664);
   phimetphijet299->SetBinContent(16,0.00161958);
   phimetphijet299->SetBinContent(17,0.002036044);
   phimetphijet299->SetBinContent(18,0.002514206);
   phimetphijet299->SetBinContent(19,0.00434973);
   phimetphijet299->SetBinContent(20,0.005136384);
   phimetphijet299->SetBinError(1,0.0002477554);
   phimetphijet299->SetBinError(2,0.0002429065);
   phimetphijet299->SetBinError(3,0.0001844511);
   phimetphijet299->SetBinError(4,0.0001785524);
   phimetphijet299->SetBinError(5,0.0001271943);
   phimetphijet299->SetBinError(6,0.0001299698);
   phimetphijet299->SetBinError(7,0.0001455152);
   phimetphijet299->SetBinError(8,0.0001143917);
   phimetphijet299->SetBinError(9,0.0001204698);
   phimetphijet299->SetBinError(10,0.0001317876);
   phimetphijet299->SetBinError(11,9.996268e-05);
   phimetphijet299->SetBinError(12,0.0001243569);
   phimetphijet299->SetBinError(13,0.000115427);
   phimetphijet299->SetBinError(14,0.0001068646);
   phimetphijet299->SetBinError(15,0.0001413686);
   phimetphijet299->SetBinError(16,0.0001580549);
   phimetphijet299->SetBinError(17,0.0001772149);
   phimetphijet299->SetBinError(18,0.0001969278);
   phimetphijet299->SetBinError(19,0.0002590227);
   phimetphijet299->SetBinError(20,0.0002814721);
   phimetphijet299->SetEntries(2510);

   ci = TColor::GetColor("#ff0000");
   phimetphijet299->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphijet299->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphijet299->SetMarkerColor(ci);
   phimetphijet299->SetMarkerStyle(20);
   phimetphijet299->GetXaxis()->SetTitle("phimetphijet2");
   phimetphijet299->GetXaxis()->SetLabelFont(42);
   phimetphijet299->GetXaxis()->SetLabelSize(0.035);
   phimetphijet299->GetXaxis()->SetTitleSize(0.035);
   phimetphijet299->GetXaxis()->SetTitleFont(42);
   phimetphijet299->GetYaxis()->SetTitle("Events/pb");
   phimetphijet299->GetYaxis()->SetLabelFont(42);
   phimetphijet299->GetYaxis()->SetLabelSize(0.035);
   phimetphijet299->GetYaxis()->SetTitleSize(0.035);
   phimetphijet299->GetYaxis()->SetTitleFont(42);
   phimetphijet299->GetZaxis()->SetLabelFont(42);
   phimetphijet299->GetZaxis()->SetLabelSize(0.035);
   phimetphijet299->GetZaxis()->SetTitleSize(0.035);
   phimetphijet299->GetZaxis()->SetTitleFont(42);
   phimetphijet2->Add(phimetphijet2,"");
   
   TH1D *phimetphijet2100 = new TH1D("phimetphijet2100"," #Delta_{#phi}[MET,jet_{2}]",20,-3.141593,3.141593);
   phimetphijet2100->SetBinContent(10,6.708659e-05);
   phimetphijet2100->SetBinError(10,3.35433e-05);
   phimetphijet2100->SetEntries(4);

   ci = TColor::GetColor("#0000ff");
   phimetphijet2100->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphijet2100->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphijet2100->SetMarkerColor(ci);
   phimetphijet2100->SetMarkerStyle(21);
   phimetphijet2100->GetXaxis()->SetTitle("phimetphijet2");
   phimetphijet2100->GetXaxis()->SetLabelFont(42);
   phimetphijet2100->GetXaxis()->SetLabelSize(0.035);
   phimetphijet2100->GetXaxis()->SetTitleSize(0.035);
   phimetphijet2100->GetXaxis()->SetTitleFont(42);
   phimetphijet2100->GetYaxis()->SetTitle("Events/pb");
   phimetphijet2100->GetYaxis()->SetLabelFont(42);
   phimetphijet2100->GetYaxis()->SetLabelSize(0.035);
   phimetphijet2100->GetYaxis()->SetTitleSize(0.035);
   phimetphijet2100->GetYaxis()->SetTitleFont(42);
   phimetphijet2100->GetZaxis()->SetLabelFont(42);
   phimetphijet2100->GetZaxis()->SetLabelSize(0.035);
   phimetphijet2100->GetZaxis()->SetTitleSize(0.035);
   phimetphijet2100->GetZaxis()->SetTitleFont(42);
   phimetphijet2->Add(phimetphijet2,"");
   phimetphijet2->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3269253,0.9342857,0.6730747,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("phimetphijet2");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimetphijet2","phimetphijet2_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphijet2","phimetphijet2_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphijet2","phimetphijet2_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphijet2","phimetphijet2_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphijet2","phimetphijet2_ttbar","lp");

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
   phimetphijet2->Modified();
   phimetphijet2->cd();
   phimetphijet2->SetSelected(phimetphijet2);
}
