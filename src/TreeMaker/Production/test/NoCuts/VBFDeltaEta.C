void VBFDeltaEta()
{
//=========Macro generated from canvas: VBFDeltaEta/VBFDeltaEta
//=========  (Wed Nov  4 11:41:02 2015) by ROOT version6.02/05
   TCanvas *VBFDeltaEta = new TCanvas("VBFDeltaEta", "VBFDeltaEta",220,242,700,700);
   VBFDeltaEta->Range(-12.5,-4.846832,12.5,6.885048);
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
   VBFDeltaEta_stack_12->SetMinimum(0.0002120097);
   VBFDeltaEta_stack_12->SetMaximum(515062.5);
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
   VBFDeltaEta56->SetBinContent(1,697.4182);
   VBFDeltaEta56->SetBinContent(2,3778.693);
   VBFDeltaEta56->SetBinContent(3,16131.23);
   VBFDeltaEta56->SetBinContent(4,40398.26);
   VBFDeltaEta56->SetBinContent(5,91802.17);
   VBFDeltaEta56->SetBinContent(6,100035.2);
   VBFDeltaEta56->SetBinContent(11,194328.2);
   VBFDeltaEta56->SetBinContent(15,99096.31);
   VBFDeltaEta56->SetBinContent(16,91096.89);
   VBFDeltaEta56->SetBinContent(17,40023.5);
   VBFDeltaEta56->SetBinContent(18,16203.62);
   VBFDeltaEta56->SetBinContent(19,3794.331);
   VBFDeltaEta56->SetBinContent(20,618.0092);
   VBFDeltaEta56->SetBinError(1,27.78869);
   VBFDeltaEta56->SetBinError(2,64.86167);
   VBFDeltaEta56->SetBinError(3,134.0374);
   VBFDeltaEta56->SetBinError(4,211.506);
   VBFDeltaEta56->SetBinError(5,317.1309);
   VBFDeltaEta56->SetBinError(6,329.3019);
   VBFDeltaEta56->SetBinError(11,461.6809);
   VBFDeltaEta56->SetBinError(15,327.741);
   VBFDeltaEta56->SetBinError(16,315.8987);
   VBFDeltaEta56->SetBinError(17,210.4648);
   VBFDeltaEta56->SetBinError(18,134.3561);
   VBFDeltaEta56->SetBinError(19,65.01117);
   VBFDeltaEta56->SetBinError(20,26.12851);
   VBFDeltaEta56->SetEntries(2219516);

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
   VBFDeltaEta57->SetBinContent(1,2.857846);
   VBFDeltaEta57->SetBinContent(2,16.34096);
   VBFDeltaEta57->SetBinContent(3,76.39075);
   VBFDeltaEta57->SetBinContent(4,181.8147);
   VBFDeltaEta57->SetBinContent(5,374.2782);
   VBFDeltaEta57->SetBinContent(6,368.2399);
   VBFDeltaEta57->SetBinContent(11,870.7336);
   VBFDeltaEta57->SetBinContent(15,366.082);
   VBFDeltaEta57->SetBinContent(16,371.626);
   VBFDeltaEta57->SetBinContent(17,180.4278);
   VBFDeltaEta57->SetBinContent(18,76.45896);
   VBFDeltaEta57->SetBinContent(19,16.38877);
   VBFDeltaEta57->SetBinContent(20,2.815039);
   VBFDeltaEta57->SetBinError(1,0.04841957);
   VBFDeltaEta57->SetBinError(2,0.1167198);
   VBFDeltaEta57->SetBinError(3,0.2525308);
   VBFDeltaEta57->SetBinError(4,0.3872601);
   VBFDeltaEta57->SetBinError(5,0.5469123);
   VBFDeltaEta57->SetBinError(6,0.5303494);
   VBFDeltaEta57->SetBinError(11,0.8410872);
   VBFDeltaEta57->SetBinError(15,0.5289865);
   VBFDeltaEta57->SetBinError(16,0.5448987);
   VBFDeltaEta57->SetBinError(17,0.3854801);
   VBFDeltaEta57->SetBinError(18,0.2526637);
   VBFDeltaEta57->SetBinError(19,0.1167124);
   VBFDeltaEta57->SetBinError(20,0.04811372);
   VBFDeltaEta57->SetEntries(8129436);

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
   VBFDeltaEta58->SetBinContent(1,0.5776708);
   VBFDeltaEta58->SetBinContent(2,3.224553);
   VBFDeltaEta58->SetBinContent(3,15.49357);
   VBFDeltaEta58->SetBinContent(4,35.72775);
   VBFDeltaEta58->SetBinContent(5,78.75889);
   VBFDeltaEta58->SetBinContent(6,72.8474);
   VBFDeltaEta58->SetBinContent(11,206.3682);
   VBFDeltaEta58->SetBinContent(15,72.53998);
   VBFDeltaEta58->SetBinContent(16,78.33231);
   VBFDeltaEta58->SetBinContent(17,35.82351);
   VBFDeltaEta58->SetBinContent(18,15.6893);
   VBFDeltaEta58->SetBinContent(19,3.237774);
   VBFDeltaEta58->SetBinContent(20,0.5851738);
   VBFDeltaEta58->SetBinError(1,0.009826501);
   VBFDeltaEta58->SetBinError(2,0.02328747);
   VBFDeltaEta58->SetBinError(3,0.0513639);
   VBFDeltaEta58->SetBinError(4,0.07732304);
   VBFDeltaEta58->SetBinError(5,0.1130737);
   VBFDeltaEta58->SetBinError(6,0.1058951);
   VBFDeltaEta58->SetBinError(11,0.1847064);
   VBFDeltaEta58->SetBinError(15,0.105752);
   VBFDeltaEta58->SetBinError(16,0.1127869);
   VBFDeltaEta58->SetBinError(17,0.07745716);
   VBFDeltaEta58->SetBinError(18,0.051653);
   VBFDeltaEta58->SetBinError(19,0.02336781);
   VBFDeltaEta58->SetBinError(20,0.00990369);
   VBFDeltaEta58->SetEntries(8795469);

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
   VBFDeltaEta59->SetBinContent(1,0.01334226);
   VBFDeltaEta59->SetBinContent(2,0.06925635);
   VBFDeltaEta59->SetBinContent(3,0.2046378);
   VBFDeltaEta59->SetBinContent(4,0.3349138);
   VBFDeltaEta59->SetBinContent(5,0.4778534);
   VBFDeltaEta59->SetBinContent(6,0.3802775);
   VBFDeltaEta59->SetBinContent(11,0.8410713);
   VBFDeltaEta59->SetBinContent(15,0.3693415);
   VBFDeltaEta59->SetBinContent(16,0.4793495);
   VBFDeltaEta59->SetBinContent(17,0.3338341);
   VBFDeltaEta59->SetBinContent(18,0.2029566);
   VBFDeltaEta59->SetBinContent(19,0.06735912);
   VBFDeltaEta59->SetBinContent(20,0.01241678);
   VBFDeltaEta59->SetBinError(1,0.0004536504);
   VBFDeltaEta59->SetBinError(2,0.001033562);
   VBFDeltaEta59->SetBinError(3,0.001776641);
   VBFDeltaEta59->SetBinError(4,0.002272862);
   VBFDeltaEta59->SetBinError(5,0.002714901);
   VBFDeltaEta59->SetBinError(6,0.002421904);
   VBFDeltaEta59->SetBinError(11,0.003601828);
   VBFDeltaEta59->SetBinError(15,0.002386825);
   VBFDeltaEta59->SetBinError(16,0.002719148);
   VBFDeltaEta59->SetBinError(17,0.002269196);
   VBFDeltaEta59->SetBinError(18,0.001769327);
   VBFDeltaEta59->SetBinError(19,0.001019307);
   VBFDeltaEta59->SetBinError(20,0.0004376341);
   VBFDeltaEta59->SetEntries(245492);

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
   VBFDeltaEta60->SetBinContent(1,0.00132496);
   VBFDeltaEta60->SetBinContent(2,0.00732921);
   VBFDeltaEta60->SetBinContent(3,0.02752227);
   VBFDeltaEta60->SetBinContent(4,0.06405092);
   VBFDeltaEta60->SetBinContent(5,0.164664);
   VBFDeltaEta60->SetBinContent(6,0.2309456);
   VBFDeltaEta60->SetBinContent(11,0.3273826);
   VBFDeltaEta60->SetBinContent(15,0.2262663);
   VBFDeltaEta60->SetBinContent(16,0.1632049);
   VBFDeltaEta60->SetBinContent(17,0.06436958);
   VBFDeltaEta60->SetBinContent(18,0.02824345);
   VBFDeltaEta60->SetBinContent(19,0.006708659);
   VBFDeltaEta60->SetBinContent(20,0.001207559);
   VBFDeltaEta60->SetBinError(1,0.0001490697);
   VBFDeltaEta60->SetBinError(2,0.0003506037);
   VBFDeltaEta60->SetBinError(3,0.000679407);
   VBFDeltaEta60->SetBinError(4,0.001036455);
   VBFDeltaEta60->SetBinError(5,0.001661832);
   VBFDeltaEta60->SetBinError(6,0.00196808);
   VBFDeltaEta60->SetBinError(11,0.002343234);
   VBFDeltaEta60->SetBinError(15,0.00194804);
   VBFDeltaEta60->SetBinError(16,0.001654453);
   VBFDeltaEta60->SetBinError(17,0.00103903);
   VBFDeltaEta60->SetBinError(18,0.0006882509);
   VBFDeltaEta60->SetBinError(19,0.000335433);
   VBFDeltaEta60->SetBinError(20,0.0001423121);
   VBFDeltaEta60->SetEntries(78300);

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
