void BJets()
{
//=========Macro generated from canvas: BJets/BJets
//=========  (Fri Nov 13 11:38:51 2015) by ROOT version6.02/05
   TCanvas *BJets = new TCanvas("BJets", "BJets",40,62,700,700);
   BJets->Range(-0.8750001,-5.970713,7.875,1.123078);
   BJets->SetFillColor(0);
   BJets->SetBorderMode(0);
   BJets->SetBorderSize(2);
   BJets->SetLogy();
   BJets->SetFrameBorderMode(0);
   BJets->SetFrameBorderMode(0);
   
   THStack *BJets = new THStack();
   BJets->SetName("BJets");
   BJets->SetTitle("BJets");
   
   TH1F *BJets_stack_3 = new TH1F("BJets_stack_3","BJets",7,0,7);
   BJets_stack_3->SetMinimum(5.478552e-06);
   BJets_stack_3->SetMaximum(2.592381);
   BJets_stack_3->SetDirectory(0);
   BJets_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   BJets_stack_3->SetLineColor(ci);
   BJets_stack_3->GetXaxis()->SetTitle("BJets");
   BJets_stack_3->GetXaxis()->SetLabelFont(42);
   BJets_stack_3->GetXaxis()->SetLabelSize(0.035);
   BJets_stack_3->GetXaxis()->SetTitleSize(0.035);
   BJets_stack_3->GetXaxis()->SetTitleFont(42);
   BJets_stack_3->GetYaxis()->SetTitle("Events/pb");
   BJets_stack_3->GetYaxis()->SetLabelFont(42);
   BJets_stack_3->GetYaxis()->SetLabelSize(0.035);
   BJets_stack_3->GetYaxis()->SetTitleSize(0.035);
   BJets_stack_3->GetYaxis()->SetTitleFont(42);
   BJets_stack_3->GetZaxis()->SetLabelFont(42);
   BJets_stack_3->GetZaxis()->SetLabelSize(0.035);
   BJets_stack_3->GetZaxis()->SetTitleSize(0.035);
   BJets_stack_3->GetZaxis()->SetTitleFont(42);
   BJets->SetHistogram(BJets_stack_3);
   
   
   TH1D *BJets11 = new TH1D("BJets11"," Number of b-tagged jets",7,0,7);
   BJets11->SetBinContent(1,0.04976213);
   BJets11->SetBinContent(2,0.01376429);
   BJets11->SetBinError(1,0.01875019);
   BJets11->SetBinError(2,0.008538656);
   BJets11->SetEntries(26);

   ci = TColor::GetColor("#00cc00");
   BJets11->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   BJets11->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   BJets11->SetMarkerColor(ci);
   BJets11->SetMarkerStyle(22);
   BJets11->GetXaxis()->SetTitle("BJets");
   BJets11->GetXaxis()->SetLabelFont(42);
   BJets11->GetXaxis()->SetLabelSize(0.035);
   BJets11->GetXaxis()->SetTitleSize(0.035);
   BJets11->GetXaxis()->SetTitleFont(42);
   BJets11->GetYaxis()->SetTitle("Events/pb");
   BJets11->GetYaxis()->SetLabelFont(42);
   BJets11->GetYaxis()->SetLabelSize(0.035);
   BJets11->GetYaxis()->SetTitleSize(0.035);
   BJets11->GetYaxis()->SetTitleFont(42);
   BJets11->GetZaxis()->SetLabelFont(42);
   BJets11->GetZaxis()->SetLabelSize(0.035);
   BJets11->GetZaxis()->SetTitleSize(0.035);
   BJets11->GetZaxis()->SetTitleFont(42);
   BJets->Add(BJets,"");
   
   TH1D *BJets12 = new TH1D("BJets12"," Number of b-tagged jets",7,0,7);
   BJets12->SetBinContent(1,1.316424);
   BJets12->SetBinContent(2,0.0629929);
   BJets12->SetBinContent(3,0.003590708);
   BJets12->SetBinContent(4,0.0001294132);
   BJets12->SetBinError(1,0.01510642);
   BJets12->SetBinError(2,0.002440041);
   BJets12->SetBinError(3,0.0004620195);
   BJets12->SetBinError(4,4.315464e-05);
   BJets12->SetEntries(30221);

   ci = TColor::GetColor("#00ffff");
   BJets12->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   BJets12->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   BJets12->SetMarkerColor(ci);
   BJets12->SetMarkerStyle(20);
   BJets12->GetXaxis()->SetTitle("BJets");
   BJets12->GetXaxis()->SetLabelFont(42);
   BJets12->GetXaxis()->SetLabelSize(0.035);
   BJets12->GetXaxis()->SetTitleSize(0.035);
   BJets12->GetXaxis()->SetTitleFont(42);
   BJets12->GetYaxis()->SetTitle("Events/pb");
   BJets12->GetYaxis()->SetLabelFont(42);
   BJets12->GetYaxis()->SetLabelSize(0.035);
   BJets12->GetYaxis()->SetTitleSize(0.035);
   BJets12->GetYaxis()->SetTitleFont(42);
   BJets12->GetZaxis()->SetLabelFont(42);
   BJets12->GetZaxis()->SetLabelSize(0.035);
   BJets12->GetZaxis()->SetTitleSize(0.035);
   BJets12->GetZaxis()->SetTitleFont(42);
   BJets->Add(BJets,"");
   
   TH1D *BJets13 = new TH1D("BJets13"," Number of b-tagged jets",7,0,7);
   BJets13->SetBinContent(1,0.0370729);
   BJets13->SetBinContent(2,0.006439609);
   BJets13->SetBinContent(3,0.0004691772);
   BJets13->SetBinContent(4,2.083768e-05);
   BJets13->SetBinError(1,0.0009774393);
   BJets13->SetBinError(2,0.0003617629);
   BJets13->SetBinError(3,7.429316e-05);
   BJets13->SetBinError(4,6.908249e-06);
   BJets13->SetEntries(7352);

   ci = TColor::GetColor("#ffcc00");
   BJets13->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   BJets13->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   BJets13->SetMarkerColor(ci);
   BJets13->SetMarkerStyle(21);
   BJets13->GetXaxis()->SetTitle("BJets");
   BJets13->GetXaxis()->SetLabelFont(42);
   BJets13->GetXaxis()->SetLabelSize(0.035);
   BJets13->GetXaxis()->SetTitleSize(0.035);
   BJets13->GetXaxis()->SetTitleFont(42);
   BJets13->GetYaxis()->SetTitle("Events/pb");
   BJets13->GetYaxis()->SetLabelFont(42);
   BJets13->GetYaxis()->SetLabelSize(0.035);
   BJets13->GetYaxis()->SetTitleSize(0.035);
   BJets13->GetYaxis()->SetTitleFont(42);
   BJets13->GetZaxis()->SetLabelFont(42);
   BJets13->GetZaxis()->SetLabelSize(0.035);
   BJets13->GetZaxis()->SetTitleSize(0.035);
   BJets13->GetZaxis()->SetTitleFont(42);
   BJets->Add(BJets,"");
   
   TH1D *BJets14 = new TH1D("BJets14"," Number of b-tagged jets",7,0,7);
   BJets14->SetBinContent(1,0.0343968);
   BJets14->SetBinContent(2,0.003840719);
   BJets14->SetBinContent(3,0.0006015585);
   BJets14->SetBinError(1,0.0007283928);
   BJets14->SetBinError(2,0.0002433957);
   BJets14->SetBinError(3,9.632645e-05);
   BJets14->SetEntries(2518);

   ci = TColor::GetColor("#ff0000");
   BJets14->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   BJets14->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   BJets14->SetMarkerColor(ci);
   BJets14->SetMarkerStyle(20);
   BJets14->GetXaxis()->SetTitle("BJets");
   BJets14->GetXaxis()->SetLabelFont(42);
   BJets14->GetXaxis()->SetLabelSize(0.035);
   BJets14->GetXaxis()->SetTitleSize(0.035);
   BJets14->GetXaxis()->SetTitleFont(42);
   BJets14->GetYaxis()->SetTitle("Events/pb");
   BJets14->GetYaxis()->SetLabelFont(42);
   BJets14->GetYaxis()->SetLabelSize(0.035);
   BJets14->GetYaxis()->SetTitleSize(0.035);
   BJets14->GetYaxis()->SetTitleFont(42);
   BJets14->GetZaxis()->SetLabelFont(42);
   BJets14->GetZaxis()->SetLabelSize(0.035);
   BJets14->GetZaxis()->SetTitleSize(0.035);
   BJets14->GetZaxis()->SetTitleFont(42);
   BJets->Add(BJets,"");
   
   TH1D *BJets15 = new TH1D("BJets15"," Number of b-tagged jets",7,0,7);
   BJets15->SetBinContent(1,0.0004696061);
   BJets15->SetBinContent(2,0.0006876375);
   BJets15->SetBinContent(3,0.0006373226);
   BJets15->SetBinContent(4,0.0002515747);
   BJets15->SetBinContent(5,0.0001006299);
   BJets15->SetBinError(1,8.874722e-05);
   BJets15->SetBinError(2,0.0001073909);
   BJets15->SetBinError(3,0.0001033874);
   BJets15->SetBinError(4,6.495631e-05);
   BJets15->SetBinError(5,4.108198e-05);
   BJets15->SetEntries(128);

   ci = TColor::GetColor("#0000ff");
   BJets15->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   BJets15->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   BJets15->SetMarkerColor(ci);
   BJets15->SetMarkerStyle(21);
   BJets15->GetXaxis()->SetTitle("BJets");
   BJets15->GetXaxis()->SetLabelFont(42);
   BJets15->GetXaxis()->SetLabelSize(0.035);
   BJets15->GetXaxis()->SetTitleSize(0.035);
   BJets15->GetXaxis()->SetTitleFont(42);
   BJets15->GetYaxis()->SetTitle("Events/pb");
   BJets15->GetYaxis()->SetLabelFont(42);
   BJets15->GetYaxis()->SetLabelSize(0.035);
   BJets15->GetYaxis()->SetTitleSize(0.035);
   BJets15->GetYaxis()->SetTitleFont(42);
   BJets15->GetZaxis()->SetLabelFont(42);
   BJets15->GetZaxis()->SetLabelSize(0.035);
   BJets15->GetZaxis()->SetTitleSize(0.035);
   BJets15->GetZaxis()->SetTitleFont(42);
   BJets->Add(BJets,"");
   BJets->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.4217529,0.94,0.5782471,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("BJets");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("BJets","BJets_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BJets","BJets_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BJets","BJets_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BJets","BJets_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BJets","BJets_ttbar","lp");

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
   BJets->Modified();
   BJets->cd();
   BJets->SetSelected(BJets);
}
