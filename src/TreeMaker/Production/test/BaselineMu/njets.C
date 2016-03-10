void njets()
{
//=========Macro generated from canvas: njets/njets
//=========  (Fri Nov 13 11:38:56 2015) by ROOT version6.02/05
   TCanvas *njets = new TCanvas("njets", "njets",280,302,700,700);
   njets->Range(-1.875,-7.381712,16.875,0.8301233);
   njets->SetFillColor(0);
   njets->SetBorderMode(0);
   njets->SetBorderSize(2);
   njets->SetLogy();
   njets->SetFrameBorderMode(0);
   njets->SetFrameBorderMode(0);
   
   THStack *njets = new THStack();
   njets->SetName("njets");
   njets->SetTitle("njets");
   
   TH1F *njets_stack_15 = new TH1F("njets_stack_15","njets",15,0,15);
   njets_stack_15->SetMinimum(2.75088e-07);
   njets_stack_15->SetMaximum(1.020798);
   njets_stack_15->SetDirectory(0);
   njets_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   njets_stack_15->SetLineColor(ci);
   njets_stack_15->GetXaxis()->SetTitle("njets");
   njets_stack_15->GetXaxis()->SetLabelFont(42);
   njets_stack_15->GetXaxis()->SetLabelSize(0.035);
   njets_stack_15->GetXaxis()->SetTitleSize(0.035);
   njets_stack_15->GetXaxis()->SetTitleFont(42);
   njets_stack_15->GetYaxis()->SetTitle("Events/pb");
   njets_stack_15->GetYaxis()->SetLabelFont(42);
   njets_stack_15->GetYaxis()->SetLabelSize(0.035);
   njets_stack_15->GetYaxis()->SetTitleSize(0.035);
   njets_stack_15->GetYaxis()->SetTitleFont(42);
   njets_stack_15->GetZaxis()->SetLabelFont(42);
   njets_stack_15->GetZaxis()->SetLabelSize(0.035);
   njets_stack_15->GetZaxis()->SetTitleSize(0.035);
   njets_stack_15->GetZaxis()->SetTitleFont(42);
   njets->SetHistogram(njets_stack_15);
   
   
   TH1D *njets71 = new TH1D("njets71","Number of jets",15,0,15);
   njets71->SetBinContent(3,0.02699838);
   njets71->SetBinContent(4,0.00340345);
   njets71->SetBinContent(5,0.02140237);
   njets71->SetBinContent(6,0.01036084);
   njets71->SetBinContent(7,0.00068069);
   njets71->SetBinContent(8,0.00068069);
   njets71->SetBinError(3,0.01445669);
   njets71->SetBinError(4,0.001522069);
   njets71->SetBinError(5,0.01190157);
   njets71->SetBinError(6,0.008401902);
   njets71->SetBinError(7,0.00068069);
   njets71->SetBinError(8,0.00068069);
   njets71->SetEntries(26);

   ci = TColor::GetColor("#00cc00");
   njets71->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   njets71->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   njets71->SetMarkerColor(ci);
   njets71->SetMarkerStyle(22);
   njets71->GetXaxis()->SetTitle("njets");
   njets71->GetXaxis()->SetLabelFont(42);
   njets71->GetXaxis()->SetLabelSize(0.035);
   njets71->GetXaxis()->SetTitleSize(0.035);
   njets71->GetXaxis()->SetTitleFont(42);
   njets71->GetYaxis()->SetTitle("Events/pb");
   njets71->GetYaxis()->SetLabelFont(42);
   njets71->GetYaxis()->SetLabelSize(0.035);
   njets71->GetYaxis()->SetTitleSize(0.035);
   njets71->GetYaxis()->SetTitleFont(42);
   njets71->GetZaxis()->SetLabelFont(42);
   njets71->GetZaxis()->SetLabelSize(0.035);
   njets71->GetZaxis()->SetTitleSize(0.035);
   njets71->GetZaxis()->SetTitleFont(42);
   njets->Add(njets,"");
   
   TH1D *njets72 = new TH1D("njets72","Number of jets",15,0,15);
   njets72->SetBinContent(2,0.4306609);
   njets72->SetBinContent(3,0.4789013);
   njets72->SetBinContent(4,0.2808862);
   njets72->SetBinContent(5,0.1285601);
   njets72->SetBinContent(6,0.04277606);
   njets72->SetBinContent(7,0.01507856);
   njets72->SetBinContent(8,0.004690754);
   njets72->SetBinContent(9,0.00124682);
   njets72->SetBinContent(10,0.0002384129);
   njets72->SetBinContent(11,6.964463e-05);
   njets72->SetBinContent(12,2.785785e-05);
   njets72->SetBinError(2,0.01054472);
   njets72->SetBinError(3,0.008919774);
   njets72->SetBinError(4,0.005569301);
   njets72->SetBinError(5,0.003174893);
   njets72->SetBinError(6,0.001349451);
   njets72->SetBinError(7,0.0007539194);
   njets72->SetBinError(8,0.0003329658);
   njets72->SetBinError(9,0.0001329567);
   njets72->SetBinError(10,5.783364e-05);
   njets72->SetBinError(11,3.114602e-05);
   njets72->SetBinError(12,1.969847e-05);
   njets72->SetEntries(30221);

   ci = TColor::GetColor("#00ffff");
   njets72->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   njets72->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   njets72->SetMarkerColor(ci);
   njets72->SetMarkerStyle(20);
   njets72->GetXaxis()->SetTitle("njets");
   njets72->GetXaxis()->SetLabelFont(42);
   njets72->GetXaxis()->SetLabelSize(0.035);
   njets72->GetXaxis()->SetTitleSize(0.035);
   njets72->GetXaxis()->SetTitleFont(42);
   njets72->GetYaxis()->SetTitle("Events/pb");
   njets72->GetYaxis()->SetLabelFont(42);
   njets72->GetYaxis()->SetLabelSize(0.035);
   njets72->GetYaxis()->SetTitleSize(0.035);
   njets72->GetYaxis()->SetTitleFont(42);
   njets72->GetZaxis()->SetLabelFont(42);
   njets72->GetZaxis()->SetLabelSize(0.035);
   njets72->GetZaxis()->SetTitleSize(0.035);
   njets72->GetZaxis()->SetTitleFont(42);
   njets->Add(njets,"");
   
   TH1D *njets73 = new TH1D("njets73","Number of jets",15,0,15);
   njets73->SetBinContent(2,0.01120649);
   njets73->SetBinContent(3,0.01509122);
   njets73->SetBinContent(4,0.009312094);
   njets73->SetBinContent(5,0.00510994);
   njets73->SetBinContent(6,0.002107166);
   njets73->SetBinContent(7,0.000870518);
   njets73->SetBinContent(8,0.0002292494);
   njets73->SetBinContent(9,6.413885e-05);
   njets73->SetBinContent(10,9.362414e-06);
   njets73->SetBinContent(11,1.170302e-06);
   njets73->SetBinContent(12,1.170302e-06);
   njets73->SetBinError(2,0.0006347919);
   njets73->SetBinError(3,0.0006467171);
   njets73->SetBinError(4,0.0004198958);
   njets73->SetBinError(5,0.0002538452);
   njets73->SetBinError(6,0.0001420474);
   njets73->SetBinError(7,9.173885e-05);
   njets73->SetBinError(8,3.4176e-05);
   njets73->SetBinError(9,9.919644e-06);
   njets73->SetBinError(10,3.310113e-06);
   njets73->SetBinError(11,1.170302e-06);
   njets73->SetBinError(12,1.170302e-06);
   njets73->SetEntries(7352);

   ci = TColor::GetColor("#ffcc00");
   njets73->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   njets73->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   njets73->SetMarkerColor(ci);
   njets73->SetMarkerStyle(21);
   njets73->GetXaxis()->SetTitle("njets");
   njets73->GetXaxis()->SetLabelFont(42);
   njets73->GetXaxis()->SetLabelSize(0.035);
   njets73->GetXaxis()->SetTitleSize(0.035);
   njets73->GetXaxis()->SetTitleFont(42);
   njets73->GetYaxis()->SetTitle("Events/pb");
   njets73->GetYaxis()->SetLabelFont(42);
   njets73->GetYaxis()->SetLabelSize(0.035);
   njets73->GetYaxis()->SetTitleSize(0.035);
   njets73->GetYaxis()->SetTitleFont(42);
   njets73->GetZaxis()->SetLabelFont(42);
   njets73->GetZaxis()->SetLabelSize(0.035);
   njets73->GetZaxis()->SetTitleSize(0.035);
   njets73->GetZaxis()->SetTitleFont(42);
   njets->Add(njets,"");
   
   TH1D *njets74 = new TH1D("njets74","Number of jets",15,0,15);
   njets74->SetBinContent(2,0.005722518);
   njets74->SetBinContent(3,0.01007225);
   njets74->SetBinContent(4,0.01042701);
   njets74->SetBinContent(5,0.006308652);
   njets74->SetBinContent(6,0.003701898);
   njets74->SetBinContent(7,0.001496184);
   njets74->SetBinContent(8,0.0007403796);
   njets74->SetBinContent(9,0.0002776424);
   njets74->SetBinContent(10,6.16983e-05);
   njets74->SetBinContent(11,3.084915e-05);
   njets74->SetBinError(2,0.0002970983);
   njets74->SetBinError(3,0.0003941575);
   njets74->SetBinError(4,0.000401039);
   njets74->SetBinError(5,0.0003119427);
   njets74->SetBinError(6,0.0002389565);
   njets74->SetBinError(7,0.0001519145);
   njets74->SetBinError(8,0.0001068646);
   njets74->SetBinError(9,6.544093e-05);
   njets74->SetBinError(10,3.084915e-05);
   njets74->SetBinError(11,2.181364e-05);
   njets74->SetEntries(2518);

   ci = TColor::GetColor("#ff0000");
   njets74->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   njets74->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   njets74->SetMarkerColor(ci);
   njets74->SetMarkerStyle(20);
   njets74->GetXaxis()->SetTitle("njets");
   njets74->GetXaxis()->SetLabelFont(42);
   njets74->GetXaxis()->SetLabelSize(0.035);
   njets74->GetXaxis()->SetTitleSize(0.035);
   njets74->GetXaxis()->SetTitleFont(42);
   njets74->GetYaxis()->SetTitle("Events/pb");
   njets74->GetYaxis()->SetLabelFont(42);
   njets74->GetYaxis()->SetLabelSize(0.035);
   njets74->GetYaxis()->SetTitleSize(0.035);
   njets74->GetYaxis()->SetTitleFont(42);
   njets74->GetZaxis()->SetLabelFont(42);
   njets74->GetZaxis()->SetLabelSize(0.035);
   njets74->GetZaxis()->SetTitleSize(0.035);
   njets74->GetZaxis()->SetTitleFont(42);
   njets->Add(njets,"");
   
   TH1D *njets75 = new TH1D("njets75","Number of jets",15,0,15);
   njets75->SetBinContent(3,1.677165e-05);
   njets75->SetBinContent(4,0.0001006299);
   njets75->SetBinContent(5,0.0003018897);
   njets75->SetBinContent(6,0.0004025195);
   njets75->SetBinContent(7,0.0004528345);
   njets75->SetBinContent(8,0.0003857479);
   njets75->SetBinContent(9,0.0002683464);
   njets75->SetBinContent(10,0.0001509448);
   njets75->SetBinContent(11,5.031494e-05);
   njets75->SetBinContent(15,1.677165e-05);
   njets75->SetBinError(3,1.677165e-05);
   njets75->SetBinError(4,4.108198e-05);
   njets75->SetBinError(5,7.115607e-05);
   njets75->SetBinError(6,8.216396e-05);
   njets75->SetBinError(7,8.714804e-05);
   njets75->SetBinError(8,8.0434e-05);
   njets75->SetBinError(9,6.708659e-05);
   njets75->SetBinError(10,5.031494e-05);
   njets75->SetBinError(11,2.904935e-05);
   njets75->SetBinError(15,1.677165e-05);
   njets75->SetEntries(128);

   ci = TColor::GetColor("#0000ff");
   njets75->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   njets75->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   njets75->SetMarkerColor(ci);
   njets75->SetMarkerStyle(21);
   njets75->GetXaxis()->SetTitle("njets");
   njets75->GetXaxis()->SetLabelFont(42);
   njets75->GetXaxis()->SetLabelSize(0.035);
   njets75->GetXaxis()->SetTitleSize(0.035);
   njets75->GetXaxis()->SetTitleFont(42);
   njets75->GetYaxis()->SetTitle("Events/pb");
   njets75->GetYaxis()->SetLabelFont(42);
   njets75->GetYaxis()->SetLabelSize(0.035);
   njets75->GetYaxis()->SetTitleSize(0.035);
   njets75->GetYaxis()->SetTitleFont(42);
   njets75->GetZaxis()->SetLabelFont(42);
   njets75->GetZaxis()->SetLabelSize(0.035);
   njets75->GetZaxis()->SetTitleSize(0.035);
   njets75->GetZaxis()->SetTitleFont(42);
   njets->Add(njets,"");
   njets->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.4318103,0.9342857,0.5681897,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("njets");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("njets","njets_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("njets","njets_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("njets","njets_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("njets","njets_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("njets","njets_ttbar","lp");

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
   njets->Modified();
   njets->cd();
   njets->SetSelected(njets);
}
