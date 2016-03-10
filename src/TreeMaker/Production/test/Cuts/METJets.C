void METJets()
{
//=========Macro generated from canvas: METJets/METJets
//=========  (Fri Nov  6 09:02:55 2015) by ROOT version6.02/05
   TCanvas *METJets = new TCanvas("METJets", "METJets",435,102,700,700);
   METJets->Range(-2.5,-6.939719,22.5,0.708446);
   METJets->SetFillColor(0);
   METJets->SetBorderMode(0);
   METJets->SetBorderSize(2);
   METJets->SetLogy();
   METJets->SetFrameBorderMode(0);
   METJets->SetFrameBorderMode(0);
   
   THStack *METJets = new THStack();
   METJets->SetName("METJets");
   METJets->SetTitle("METJets");
   
   TH1F *METJets_stack_3 = new TH1F("METJets_stack_3","METJets",20,0,20);
   METJets_stack_3->SetMinimum(6.684943e-07);
   METJets_stack_3->SetMaximum(0.8782728);
   METJets_stack_3->SetDirectory(0);
   METJets_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   METJets_stack_3->SetLineColor(ci);
   METJets_stack_3->GetXaxis()->SetTitle("METJets");
   METJets_stack_3->GetXaxis()->SetLabelFont(42);
   METJets_stack_3->GetXaxis()->SetLabelSize(0.035);
   METJets_stack_3->GetXaxis()->SetTitleSize(0.035);
   METJets_stack_3->GetXaxis()->SetTitleFont(42);
   METJets_stack_3->GetYaxis()->SetTitle("Events/pb");
   METJets_stack_3->GetYaxis()->SetLabelFont(42);
   METJets_stack_3->GetYaxis()->SetLabelSize(0.035);
   METJets_stack_3->GetYaxis()->SetTitleSize(0.035);
   METJets_stack_3->GetYaxis()->SetTitleFont(42);
   METJets_stack_3->GetZaxis()->SetLabelFont(42);
   METJets_stack_3->GetZaxis()->SetLabelSize(0.035);
   METJets_stack_3->GetZaxis()->SetTitleSize(0.035);
   METJets_stack_3->GetZaxis()->SetTitleFont(42);
   METJets->SetHistogram(METJets_stack_3);
   
   
   TH1D *METJets11 = new TH1D("METJets11"," Number of jets in MET hemisphere",20,0,20);
   METJets11->SetBinContent(4,0.001250901);
   METJets11->SetBinContent(5,0.02882494);
   METJets11->SetBinError(4,0.001250901);
   METJets11->SetBinError(5,0.02638252);
   METJets11->SetEntries(4);

   ci = TColor::GetColor("#00cc00");
   METJets11->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METJets11->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METJets11->SetMarkerColor(ci);
   METJets11->SetMarkerStyle(22);
   METJets11->GetXaxis()->SetTitle("METJets");
   METJets11->GetXaxis()->SetLabelFont(42);
   METJets11->GetXaxis()->SetLabelSize(0.035);
   METJets11->GetXaxis()->SetTitleSize(0.035);
   METJets11->GetXaxis()->SetTitleFont(42);
   METJets11->GetYaxis()->SetTitle("Events/pb");
   METJets11->GetYaxis()->SetLabelFont(42);
   METJets11->GetYaxis()->SetLabelSize(0.035);
   METJets11->GetYaxis()->SetTitleSize(0.035);
   METJets11->GetYaxis()->SetTitleFont(42);
   METJets11->GetZaxis()->SetLabelFont(42);
   METJets11->GetZaxis()->SetLabelSize(0.035);
   METJets11->GetZaxis()->SetTitleSize(0.035);
   METJets11->GetZaxis()->SetTitleFont(42);
   METJets->Add(METJets,"");
   
   TH1D *METJets12 = new TH1D("METJets12"," Number of jets in MET hemisphere",20,0,20);
   METJets12->SetBinContent(1,0.1125815);
   METJets12->SetBinContent(2,0.4285217);
   METJets12->SetBinContent(3,0.3409504);
   METJets12->SetBinContent(4,0.1708964);
   METJets12->SetBinContent(5,0.05932811);
   METJets12->SetBinContent(6,0.02373303);
   METJets12->SetBinContent(7,0.006545923);
   METJets12->SetBinContent(8,0.002482997);
   METJets12->SetBinContent(9,0.0004501454);
   METJets12->SetBinContent(10,5.615768e-05);
   METJets12->SetBinContent(11,5.615768e-05);
   METJets12->SetBinContent(12,1.392893e-05);
   METJets12->SetBinError(1,0.007309092);
   METJets12->SetBinError(2,0.01328181);
   METJets12->SetBinError(3,0.01094448);
   METJets12->SetBinError(4,0.006993249);
   METJets12->SetBinError(5,0.003460026);
   METJets12->SetBinError(6,0.002212104);
   METJets12->SetBinError(7,0.0008953739);
   METJets12->SetBinError(8,0.0006170034);
   METJets12->SetBinError(9,0.0001016709);
   METJets12->SetBinError(10,3.448057e-05);
   METJets12->SetBinError(11,3.448057e-05);
   METJets12->SetBinError(12,1.392893e-05);
   METJets12->SetEntries(9534);

   ci = TColor::GetColor("#00ffff");
   METJets12->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METJets12->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METJets12->SetMarkerColor(ci);
   METJets12->SetMarkerStyle(20);
   METJets12->GetXaxis()->SetTitle("METJets");
   METJets12->GetXaxis()->SetLabelFont(42);
   METJets12->GetXaxis()->SetLabelSize(0.035);
   METJets12->GetXaxis()->SetTitleSize(0.035);
   METJets12->GetXaxis()->SetTitleFont(42);
   METJets12->GetYaxis()->SetTitle("Events/pb");
   METJets12->GetYaxis()->SetLabelFont(42);
   METJets12->GetYaxis()->SetLabelSize(0.035);
   METJets12->GetYaxis()->SetTitleSize(0.035);
   METJets12->GetYaxis()->SetTitleFont(42);
   METJets12->GetZaxis()->SetLabelFont(42);
   METJets12->GetZaxis()->SetLabelSize(0.035);
   METJets12->GetZaxis()->SetTitleSize(0.035);
   METJets12->GetZaxis()->SetTitleFont(42);
   METJets->Add(METJets,"");
   
   TH1D *METJets13 = new TH1D("METJets13"," Number of jets in MET hemisphere",20,0,20);
   METJets13->SetBinContent(1,0.03196155);
   METJets13->SetBinContent(2,0.1172069);
   METJets13->SetBinContent(3,0.0774148);
   METJets13->SetBinContent(4,0.03694924);
   METJets13->SetBinContent(5,0.01471217);
   METJets13->SetBinContent(6,0.00457922);
   METJets13->SetBinContent(7,0.001196242);
   METJets13->SetBinContent(8,0.0003010538);
   METJets13->SetBinContent(9,3.996704e-05);
   METJets13->SetBinContent(10,2.319189e-05);
   METJets13->SetBinContent(11,2.691694e-06);
   METJets13->SetBinError(1,0.001597341);
   METJets13->SetBinError(2,0.002788097);
   METJets13->SetBinError(3,0.002050992);
   METJets13->SetBinError(4,0.001252285);
   METJets13->SetBinError(5,0.000761537);
   METJets13->SetBinError(6,0.0003464749);
   METJets13->SetBinError(7,0.0001505212);
   METJets13->SetBinError(8,6.572956e-05);
   METJets13->SetBinError(9,1.412354e-05);
   METJets13->SetBinError(10,9.646618e-06);
   METJets13->SetBinError(11,2.691694e-06);
   METJets13->SetEntries(13132);

   ci = TColor::GetColor("#ffcc00");
   METJets13->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METJets13->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METJets13->SetMarkerColor(ci);
   METJets13->SetMarkerStyle(21);
   METJets13->GetXaxis()->SetTitle("METJets");
   METJets13->GetXaxis()->SetLabelFont(42);
   METJets13->GetXaxis()->SetLabelSize(0.035);
   METJets13->GetXaxis()->SetTitleSize(0.035);
   METJets13->GetXaxis()->SetTitleFont(42);
   METJets13->GetYaxis()->SetTitle("Events/pb");
   METJets13->GetYaxis()->SetLabelFont(42);
   METJets13->GetYaxis()->SetLabelSize(0.035);
   METJets13->GetYaxis()->SetTitleSize(0.035);
   METJets13->GetYaxis()->SetTitleFont(42);
   METJets13->GetZaxis()->SetLabelFont(42);
   METJets13->GetZaxis()->SetLabelSize(0.035);
   METJets13->GetZaxis()->SetTitleSize(0.035);
   METJets13->GetZaxis()->SetTitleFont(42);
   METJets->Add(METJets,"");
   
   TH1D *METJets14 = new TH1D("METJets14"," Number of jets in MET hemisphere",20,0,20);
   METJets14->SetBinContent(1,0.001156843);
   METJets14->SetBinContent(2,0.007372947);
   METJets14->SetBinContent(3,0.009563237);
   METJets14->SetBinContent(4,0.007326674);
   METJets14->SetBinContent(5,0.003763597);
   METJets14->SetBinContent(6,0.002066893);
   METJets14->SetBinContent(7,0.0008175025);
   METJets14->SetBinContent(8,0.0003084915);
   METJets14->SetBinContent(9,0.0001233966);
   METJets14->SetBinContent(10,3.084915e-05);
   METJets14->SetBinContent(11,1.542458e-05);
   METJets14->SetBinError(1,0.0001335807);
   METJets14->SetBinError(2,0.0003372308);
   METJets14->SetBinError(3,0.0003840688);
   METJets14->SetBinError(4,0.0003361708);
   METJets14->SetBinError(5,0.0002409396);
   METJets14->SetBinError(6,0.0001785524);
   METJets14->SetBinError(7,0.0001122926);
   METJets14->SetBinError(8,6.89808e-05);
   METJets14->SetBinError(9,4.362729e-05);
   METJets14->SetBinError(10,2.181364e-05);
   METJets14->SetBinError(11,1.542458e-05);
   METJets14->SetEntries(2110);

   ci = TColor::GetColor("#ff0000");
   METJets14->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METJets14->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METJets14->SetMarkerColor(ci);
   METJets14->SetMarkerStyle(20);
   METJets14->GetXaxis()->SetTitle("METJets");
   METJets14->GetXaxis()->SetLabelFont(42);
   METJets14->GetXaxis()->SetLabelSize(0.035);
   METJets14->GetXaxis()->SetTitleSize(0.035);
   METJets14->GetXaxis()->SetTitleFont(42);
   METJets14->GetYaxis()->SetTitle("Events/pb");
   METJets14->GetYaxis()->SetLabelFont(42);
   METJets14->GetYaxis()->SetLabelSize(0.035);
   METJets14->GetYaxis()->SetTitleSize(0.035);
   METJets14->GetYaxis()->SetTitleFont(42);
   METJets14->GetZaxis()->SetLabelFont(42);
   METJets14->GetZaxis()->SetLabelSize(0.035);
   METJets14->GetZaxis()->SetTitleSize(0.035);
   METJets14->GetZaxis()->SetTitleFont(42);
   METJets->Add(METJets,"");
   
   TH1D *METJets15 = new TH1D("METJets15"," Number of jets in MET hemisphere",20,0,20);
   METJets15->SetBinContent(3,1.677165e-05);
   METJets15->SetBinContent(4,1.677165e-05);
   METJets15->SetBinContent(5,6.708659e-05);
   METJets15->SetBinContent(6,5.031494e-05);
   METJets15->SetBinContent(7,8.385824e-05);
   METJets15->SetBinContent(8,3.35433e-05);
   METJets15->SetBinContent(10,1.677165e-05);
   METJets15->SetBinError(3,1.677165e-05);
   METJets15->SetBinError(4,1.677165e-05);
   METJets15->SetBinError(5,3.35433e-05);
   METJets15->SetBinError(6,2.904935e-05);
   METJets15->SetBinError(7,3.750254e-05);
   METJets15->SetBinError(8,2.371869e-05);
   METJets15->SetBinError(10,1.677165e-05);
   METJets15->SetEntries(17);

   ci = TColor::GetColor("#0000ff");
   METJets15->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METJets15->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METJets15->SetMarkerColor(ci);
   METJets15->SetMarkerStyle(21);
   METJets15->GetXaxis()->SetTitle("METJets");
   METJets15->GetXaxis()->SetLabelFont(42);
   METJets15->GetXaxis()->SetLabelSize(0.035);
   METJets15->GetXaxis()->SetTitleSize(0.035);
   METJets15->GetXaxis()->SetTitleFont(42);
   METJets15->GetYaxis()->SetTitle("Events/pb");
   METJets15->GetYaxis()->SetLabelFont(42);
   METJets15->GetYaxis()->SetLabelSize(0.035);
   METJets15->GetYaxis()->SetTitleSize(0.035);
   METJets15->GetYaxis()->SetTitleFont(42);
   METJets15->GetZaxis()->SetLabelFont(42);
   METJets15->GetZaxis()->SetLabelSize(0.035);
   METJets15->GetZaxis()->SetTitleSize(0.035);
   METJets15->GetZaxis()->SetTitleFont(42);
   METJets->Add(METJets,"");
   METJets->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3872701,0.94,0.6127299,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("METJets");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METJets","METJets_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METJets","METJets_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METJets","METJets_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METJets","METJets_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METJets","METJets_ttbar","lp");

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
   METJets->Modified();
   METJets->cd();
   METJets->SetSelected(METJets);
}
