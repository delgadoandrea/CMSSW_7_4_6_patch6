void phimuphij1b1()
{
//=========Macro generated from canvas: b1/phimuphij1b1/b1/phimuphij1b1
//=========  (Tue Nov 24 14:28:25 2015) by ROOT version6.02/05
   TCanvas *b1/phimuphij1b1 = new TCanvas("b1/phimuphij1b1", "b1/phimuphij1b1",140,162,700,700);
   b1/phimuphij1b1->Range(-3.926991,-5.791164,3.926991,-0.5183965);
   b1/phimuphij1b1->SetFillColor(0);
   b1/phimuphij1b1->SetBorderMode(0);
   b1/phimuphij1b1->SetBorderSize(2);
   b1/phimuphij1b1->SetLogy();
   b1/phimuphij1b1->SetFrameBorderMode(0);
   b1/phimuphij1b1->SetFrameBorderMode(0);
   
   THStack *b1/phimuphij1b1 = new THStack();
   b1/phimuphij1b1->SetName("b1/phimuphij1b1");
   b1/phimuphij1b1->SetTitle("b1/phimuphij1b1");
   
   TH1F *b1/phimuphij1b1_stack_8 = new TH1F("b1/phimuphij1b1_stack_8","b1/phimuphij1b1",20,-3.141593,3.141593);
   b1/phimuphij1b1_stack_8->SetMinimum(5.446446e-06);
   b1/phimuphij1b1_stack_8->SetMaximum(0.09001747);
   b1/phimuphij1b1_stack_8->SetDirectory(0);
   b1/phimuphij1b1_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1/phimuphij1b1_stack_8->SetLineColor(ci);
   b1/phimuphij1b1_stack_8->GetXaxis()->SetTitle("b1/phimuphij1b1");
   b1/phimuphij1b1_stack_8->GetXaxis()->SetLabelFont(42);
   b1/phimuphij1b1_stack_8->GetXaxis()->SetLabelSize(0.035);
   b1/phimuphij1b1_stack_8->GetXaxis()->SetTitleSize(0.035);
   b1/phimuphij1b1_stack_8->GetXaxis()->SetTitleFont(42);
   b1/phimuphij1b1_stack_8->GetYaxis()->SetTitle("Events/pb");
   b1/phimuphij1b1_stack_8->GetYaxis()->SetLabelFont(42);
   b1/phimuphij1b1_stack_8->GetYaxis()->SetLabelSize(0.035);
   b1/phimuphij1b1_stack_8->GetYaxis()->SetTitleSize(0.035);
   b1/phimuphij1b1_stack_8->GetYaxis()->SetTitleFont(42);
   b1/phimuphij1b1_stack_8->GetZaxis()->SetLabelFont(42);
   b1/phimuphij1b1_stack_8->GetZaxis()->SetLabelSize(0.035);
   b1/phimuphij1b1_stack_8->GetZaxis()->SetTitleSize(0.035);
   b1/phimuphij1b1_stack_8->GetZaxis()->SetTitleFont(42);
   b1/phimuphij1b1->SetHistogram(b1/phimuphij1b1_stack_8);
   
   
   TH1D *phimuphij1b136 = new TH1D("phimuphij1b136"," #Delta_{#phi}[#mu,jet_{1}]",20,-3.141593,3.141593);
   phimuphij1b136->SetBinContent(4,0.00831877);
   phimuphij1b136->SetBinContent(20,0.00831877);
   phimuphij1b136->SetBinError(4,0.00831877);
   phimuphij1b136->SetBinError(20,0.00831877);
   phimuphij1b136->SetEntries(2);

   ci = TColor::GetColor("#00cc00");
   phimuphij1b136->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimuphij1b136->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimuphij1b136->SetMarkerColor(ci);
   phimuphij1b136->SetMarkerStyle(22);
   phimuphij1b136->GetXaxis()->SetTitle("phimuphij1b1");
   phimuphij1b136->GetXaxis()->SetLabelFont(42);
   phimuphij1b136->GetXaxis()->SetLabelSize(0.035);
   phimuphij1b136->GetXaxis()->SetTitleSize(0.035);
   phimuphij1b136->GetXaxis()->SetTitleFont(42);
   phimuphij1b136->GetYaxis()->SetTitle("Events/pb");
   phimuphij1b136->GetYaxis()->SetLabelFont(42);
   phimuphij1b136->GetYaxis()->SetLabelSize(0.035);
   phimuphij1b136->GetYaxis()->SetTitleSize(0.035);
   phimuphij1b136->GetYaxis()->SetTitleFont(42);
   phimuphij1b136->GetZaxis()->SetLabelFont(42);
   phimuphij1b136->GetZaxis()->SetLabelSize(0.035);
   phimuphij1b136->GetZaxis()->SetTitleSize(0.035);
   phimuphij1b136->GetZaxis()->SetTitleFont(42);
   b1/phimuphij1b1->Add(phimuphij1b1,"");
   
   TH1D *phimuphij1b137 = new TH1D("phimuphij1b137"," #Delta_{#phi}[#mu,jet_{1}]",20,-3.141593,3.141593);
   phimuphij1b137->SetBinContent(1,0.0526857);
   phimuphij1b137->SetBinContent(2,0.03868766);
   phimuphij1b137->SetBinContent(3,0.02850642);
   phimuphij1b137->SetBinContent(4,0.03762748);
   phimuphij1b137->SetBinContent(5,0.04459525);
   phimuphij1b137->SetBinContent(6,0.03274823);
   phimuphij1b137->SetBinContent(7,0.03152409);
   phimuphij1b137->SetBinContent(8,0.0247646);
   phimuphij1b137->SetBinContent(9,0.01831837);
   phimuphij1b137->SetBinContent(10,0.01570965);
   phimuphij1b137->SetBinContent(11,0.01483506);
   phimuphij1b137->SetBinContent(12,0.0191479);
   phimuphij1b137->SetBinContent(13,0.02015253);
   phimuphij1b137->SetBinContent(14,0.03287899);
   phimuphij1b137->SetBinContent(15,0.03633926);
   phimuphij1b137->SetBinContent(16,0.04229773);
   phimuphij1b137->SetBinContent(17,0.03848207);
   phimuphij1b137->SetBinContent(18,0.03361134);
   phimuphij1b137->SetBinContent(19,0.03915664);
   phimuphij1b137->SetBinContent(20,0.04444675);
   phimuphij1b137->SetBinError(1,0.003087912);
   phimuphij1b137->SetBinError(2,0.003072948);
   phimuphij1b137->SetBinError(3,0.001826653);
   phimuphij1b137->SetBinError(4,0.002468178);
   phimuphij1b137->SetBinError(5,0.003228697);
   phimuphij1b137->SetBinError(6,0.002703113);
   phimuphij1b137->SetBinError(7,0.003232417);
   phimuphij1b137->SetBinError(8,0.002824436);
   phimuphij1b137->SetBinError(9,0.002676615);
   phimuphij1b137->SetBinError(10,0.002285492);
   phimuphij1b137->SetBinError(11,0.002072686);
   phimuphij1b137->SetBinError(12,0.00219408);
   phimuphij1b137->SetBinError(13,0.002220679);
   phimuphij1b137->SetBinError(14,0.003382545);
   phimuphij1b137->SetBinError(15,0.00307452);
   phimuphij1b137->SetBinError(16,0.003044796);
   phimuphij1b137->SetBinError(17,0.00321787);
   phimuphij1b137->SetBinError(18,0.002980707);
   phimuphij1b137->SetBinError(19,0.002505119);
   phimuphij1b137->SetBinError(20,0.003303259);
   phimuphij1b137->SetEntries(7038);

   ci = TColor::GetColor("#00ffff");
   phimuphij1b137->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimuphij1b137->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimuphij1b137->SetMarkerColor(ci);
   phimuphij1b137->SetMarkerStyle(20);
   phimuphij1b137->GetXaxis()->SetTitle("phimuphij1b1");
   phimuphij1b137->GetXaxis()->SetLabelFont(42);
   phimuphij1b137->GetXaxis()->SetLabelSize(0.035);
   phimuphij1b137->GetXaxis()->SetTitleSize(0.035);
   phimuphij1b137->GetXaxis()->SetTitleFont(42);
   phimuphij1b137->GetYaxis()->SetTitle("Events/pb");
   phimuphij1b137->GetYaxis()->SetLabelFont(42);
   phimuphij1b137->GetYaxis()->SetLabelSize(0.035);
   phimuphij1b137->GetYaxis()->SetTitleSize(0.035);
   phimuphij1b137->GetYaxis()->SetTitleFont(42);
   phimuphij1b137->GetZaxis()->SetLabelFont(42);
   phimuphij1b137->GetZaxis()->SetLabelSize(0.035);
   phimuphij1b137->GetZaxis()->SetTitleSize(0.035);
   phimuphij1b137->GetZaxis()->SetTitleFont(42);
   b1/phimuphij1b1->Add(phimuphij1b1,"");
   
   TH1D *phimuphij1b138 = new TH1D("phimuphij1b138"," #Delta_{#phi}[#mu,jet_{1}]",20,-3.141593,3.141593);
   phimuphij1b138->SetBinContent(1,0.008022656);
   phimuphij1b138->SetBinContent(2,0.008411821);
   phimuphij1b138->SetBinContent(3,0.007704194);
   phimuphij1b138->SetBinContent(4,0.008287964);
   phimuphij1b138->SetBinContent(5,0.00760224);
   phimuphij1b138->SetBinContent(6,0.007110145);
   phimuphij1b138->SetBinContent(7,0.008364612);
   phimuphij1b138->SetBinContent(8,0.008332796);
   phimuphij1b138->SetBinContent(9,0.007916328);
   phimuphij1b138->SetBinContent(10,0.008084711);
   phimuphij1b138->SetBinContent(11,0.009149826);
   phimuphij1b138->SetBinContent(12,0.008328489);
   phimuphij1b138->SetBinContent(13,0.00799787);
   phimuphij1b138->SetBinContent(14,0.008811014);
   phimuphij1b138->SetBinContent(15,0.008210246);
   phimuphij1b138->SetBinContent(16,0.007748738);
   phimuphij1b138->SetBinContent(17,0.008367121);
   phimuphij1b138->SetBinContent(18,0.007684122);
   phimuphij1b138->SetBinContent(19,0.008883954);
   phimuphij1b138->SetBinContent(20,0.007600558);
   phimuphij1b138->SetBinError(1,0.0004950766);
   phimuphij1b138->SetBinError(2,0.0005597983);
   phimuphij1b138->SetBinError(3,0.0005182398);
   phimuphij1b138->SetBinError(4,0.0005443211);
   phimuphij1b138->SetBinError(5,0.0004782403);
   phimuphij1b138->SetBinError(6,0.0004455129);
   phimuphij1b138->SetBinError(7,0.000546457);
   phimuphij1b138->SetBinError(8,0.0005457416);
   phimuphij1b138->SetBinError(9,0.0004984964);
   phimuphij1b138->SetBinError(10,0.0005537874);
   phimuphij1b138->SetBinError(11,0.0005848009);
   phimuphij1b138->SetBinError(12,0.0005383046);
   phimuphij1b138->SetBinError(13,0.0005152055);
   phimuphij1b138->SetBinError(14,0.0005598288);
   phimuphij1b138->SetBinError(15,0.0005317823);
   phimuphij1b138->SetBinError(16,0.0005096716);
   phimuphij1b138->SetBinError(17,0.0005201717);
   phimuphij1b138->SetBinError(18,0.0004867774);
   phimuphij1b138->SetBinError(19,0.0005665215);
   phimuphij1b138->SetBinError(20,0.0004668184);
   phimuphij1b138->SetEntries(10014);

   ci = TColor::GetColor("#ffcc00");
   phimuphij1b138->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimuphij1b138->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimuphij1b138->SetMarkerColor(ci);
   phimuphij1b138->SetMarkerStyle(21);
   phimuphij1b138->GetXaxis()->SetTitle("phimuphij1b1");
   phimuphij1b138->GetXaxis()->SetLabelFont(42);
   phimuphij1b138->GetXaxis()->SetLabelSize(0.035);
   phimuphij1b138->GetXaxis()->SetTitleSize(0.035);
   phimuphij1b138->GetXaxis()->SetTitleFont(42);
   phimuphij1b138->GetYaxis()->SetTitle("Events/pb");
   phimuphij1b138->GetYaxis()->SetLabelFont(42);
   phimuphij1b138->GetYaxis()->SetLabelSize(0.035);
   phimuphij1b138->GetYaxis()->SetTitleSize(0.035);
   phimuphij1b138->GetYaxis()->SetTitleFont(42);
   phimuphij1b138->GetZaxis()->SetLabelFont(42);
   phimuphij1b138->GetZaxis()->SetLabelSize(0.035);
   phimuphij1b138->GetZaxis()->SetTitleSize(0.035);
   phimuphij1b138->GetZaxis()->SetTitleFont(42);
   b1/phimuphij1b1->Add(phimuphij1b1,"");
   
   TH1D *phimuphij1b139 = new TH1D("phimuphij1b139"," #Delta_{#phi}[#mu,jet_{1}]",20,-3.141593,3.141593);
   phimuphij1b139->SetBinContent(1,0.0009563237);
   phimuphij1b139->SetBinContent(2,0.001048871);
   phimuphij1b139->SetBinContent(3,0.0007249551);
   phimuphij1b139->SetBinContent(4,0.0008020779);
   phimuphij1b139->SetBinContent(5,0.0004318881);
   phimuphij1b139->SetBinContent(6,0.0004164636);
   phimuphij1b139->SetBinContent(7,0.0003701898);
   phimuphij1b139->SetBinContent(8,0.0004627373);
   phimuphij1b139->SetBinContent(9,0.0002776424);
   phimuphij1b139->SetBinContent(10,9.254746e-05);
   phimuphij1b139->SetBinContent(11,0.0002313686);
   phimuphij1b139->SetBinContent(12,0.0003239161);
   phimuphij1b139->SetBinContent(13,0.0002159441);
   phimuphij1b139->SetBinContent(14,0.0002930669);
   phimuphij1b139->SetBinContent(15,0.0004473127);
   phimuphij1b139->SetBinContent(16,0.0005398602);
   phimuphij1b139->SetBinContent(17,0.0007558042);
   phimuphij1b139->SetBinContent(18,0.001018022);
   phimuphij1b139->SetBinContent(19,0.0008637763);
   phimuphij1b139->SetBinContent(20,0.001018022);
   phimuphij1b139->SetBinError(1,0.0001214532);
   phimuphij1b139->SetBinError(2,0.0001271943);
   phimuphij1b139->SetBinError(3,0.0001057456);
   phimuphij1b139->SetBinError(4,0.0001112282);
   phimuphij1b139->SetBinError(5,8.161918e-05);
   phimuphij1b139->SetBinError(6,8.014845e-05);
   phimuphij1b139->SetBinError(7,7.556468e-05);
   phimuphij1b139->SetBinError(8,8.448388e-05);
   phimuphij1b139->SetBinError(9,6.544093e-05);
   phimuphij1b139->SetBinError(10,3.778234e-05);
   phimuphij1b139->SetBinError(11,5.973913e-05);
   phimuphij1b139->SetBinError(12,7.068429e-05);
   phimuphij1b139->SetBinError(13,5.771348e-05);
   phimuphij1b139->SetBinError(14,6.723417e-05);
   phimuphij1b139->SetBinError(15,8.306388e-05);
   phimuphij1b139->SetBinError(16,9.125302e-05);
   phimuphij1b139->SetBinError(17,0.000107972);
   phimuphij1b139->SetBinError(18,0.0001253098);
   phimuphij1b139->SetBinError(19,0.000115427);
   phimuphij1b139->SetBinError(20,0.0001253098);
   phimuphij1b139->SetEntries(732);

   ci = TColor::GetColor("#ff0000");
   phimuphij1b139->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimuphij1b139->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimuphij1b139->SetMarkerColor(ci);
   phimuphij1b139->SetMarkerStyle(20);
   phimuphij1b139->GetXaxis()->SetTitle("phimuphij1b1");
   phimuphij1b139->GetXaxis()->SetLabelFont(42);
   phimuphij1b139->GetXaxis()->SetLabelSize(0.035);
   phimuphij1b139->GetXaxis()->SetTitleSize(0.035);
   phimuphij1b139->GetXaxis()->SetTitleFont(42);
   phimuphij1b139->GetYaxis()->SetTitle("Events/pb");
   phimuphij1b139->GetYaxis()->SetLabelFont(42);
   phimuphij1b139->GetYaxis()->SetLabelSize(0.035);
   phimuphij1b139->GetYaxis()->SetTitleSize(0.035);
   phimuphij1b139->GetYaxis()->SetTitleFont(42);
   phimuphij1b139->GetZaxis()->SetLabelFont(42);
   phimuphij1b139->GetZaxis()->SetLabelSize(0.035);
   phimuphij1b139->GetZaxis()->SetTitleSize(0.035);
   phimuphij1b139->GetZaxis()->SetTitleFont(42);
   b1/phimuphij1b1->Add(phimuphij1b1,"");
   
   TH1D *phimuphij1b140 = new TH1D("phimuphij1b140"," #Delta_{#phi}[#mu,jet_{1}]",20,-3.141593,3.141593);
   phimuphij1b140->SetBinContent(8,1.677165e-05);
   phimuphij1b140->SetBinContent(17,1.677165e-05);
   phimuphij1b140->SetBinError(8,1.677165e-05);
   phimuphij1b140->SetBinError(17,1.677165e-05);
   phimuphij1b140->SetEntries(2);

   ci = TColor::GetColor("#0000ff");
   phimuphij1b140->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimuphij1b140->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimuphij1b140->SetMarkerColor(ci);
   phimuphij1b140->SetMarkerStyle(21);
   phimuphij1b140->GetXaxis()->SetTitle("phimuphij1b1");
   phimuphij1b140->GetXaxis()->SetLabelFont(42);
   phimuphij1b140->GetXaxis()->SetLabelSize(0.035);
   phimuphij1b140->GetXaxis()->SetTitleSize(0.035);
   phimuphij1b140->GetXaxis()->SetTitleFont(42);
   phimuphij1b140->GetYaxis()->SetTitle("Events/pb");
   phimuphij1b140->GetYaxis()->SetLabelFont(42);
   phimuphij1b140->GetYaxis()->SetLabelSize(0.035);
   phimuphij1b140->GetYaxis()->SetTitleSize(0.035);
   phimuphij1b140->GetYaxis()->SetTitleFont(42);
   phimuphij1b140->GetZaxis()->SetLabelFont(42);
   phimuphij1b140->GetZaxis()->SetLabelSize(0.035);
   phimuphij1b140->GetZaxis()->SetTitleSize(0.035);
   phimuphij1b140->GetZaxis()->SetTitleFont(42);
   b1/phimuphij1b1->Add(phimuphij1b1,"");
   b1/phimuphij1b1->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.2945977,0.9342857,0.7054023,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b1/phimuphij1b1");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimuphij1b1","b1/phimuphij1b1_QCD_b1/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphij1b1","b1/phimuphij1b1_WJetsToLNu_b1/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphij1b1","b1/phimuphij1b1_ZJetsToNuNu_b1/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphij1b1","b1/phimuphij1b1_signal_b1/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimuphij1b1","b1/phimuphij1b1_ttbar_b1/","lp");

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
   b1/phimuphij1b1->Modified();
   b1/phimuphij1b1->cd();
   b1/phimuphij1b1->SetSelected(b1/phimuphij1b1);
}
