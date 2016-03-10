void METpt()
{
//=========Macro generated from canvas: METpt/METpt
//=========  (Fri Nov 13 11:38:53 2015) by ROOT version6.02/05
   TCanvas *METpt = new TCanvas("METpt", "METpt",140,162,700,700);
   METpt->Range(37.49999,-7.433161,1662.5,1.144363);
   METpt->SetFillColor(0);
   METpt->SetBorderMode(0);
   METpt->SetBorderSize(2);
   METpt->SetLogy();
   METpt->SetFrameBorderMode(0);
   METpt->SetFrameBorderMode(0);
   
   THStack *METpt = new THStack();
   METpt->SetName("METpt");
   METpt->SetTitle("METpt");
   
   TH1F *METpt_stack_8 = new TH1F("METpt_stack_8","METpt",26,200,1500);
   METpt_stack_8->SetMinimum(2.658222e-07);
   METpt_stack_8->SetMaximum(1.934686);
   METpt_stack_8->SetDirectory(0);
   METpt_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   METpt_stack_8->SetLineColor(ci);
   METpt_stack_8->GetXaxis()->SetTitle("METpt");
   METpt_stack_8->GetXaxis()->SetLabelFont(42);
   METpt_stack_8->GetXaxis()->SetLabelSize(0.035);
   METpt_stack_8->GetXaxis()->SetTitleSize(0.035);
   METpt_stack_8->GetXaxis()->SetTitleFont(42);
   METpt_stack_8->GetYaxis()->SetTitle("Events/pb");
   METpt_stack_8->GetYaxis()->SetLabelFont(42);
   METpt_stack_8->GetYaxis()->SetLabelSize(0.035);
   METpt_stack_8->GetYaxis()->SetTitleSize(0.035);
   METpt_stack_8->GetYaxis()->SetTitleFont(42);
   METpt_stack_8->GetZaxis()->SetLabelFont(42);
   METpt_stack_8->GetZaxis()->SetLabelSize(0.035);
   METpt_stack_8->GetZaxis()->SetTitleSize(0.035);
   METpt_stack_8->GetZaxis()->SetTitleFont(42);
   METpt->SetHistogram(METpt_stack_8);
   
   
   TH1D *METpt36 = new TH1D("METpt36","MET_{p_{T}}",26,200,1500);
   METpt36->SetBinContent(1,0.0580809);
   METpt36->SetBinContent(2,0.00136138);
   METpt36->SetBinContent(3,0.00272276);
   METpt36->SetBinContent(5,0.00068069);
   METpt36->SetBinContent(6,0.00068069);
   METpt36->SetBinError(1,0.02051272);
   METpt36->SetBinError(2,0.000962641);
   METpt36->SetBinError(3,0.00136138);
   METpt36->SetBinError(5,0.00068069);
   METpt36->SetBinError(6,0.00068069);
   METpt36->SetEntries(26);

   ci = TColor::GetColor("#00cc00");
   METpt36->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METpt36->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METpt36->SetMarkerColor(ci);
   METpt36->SetMarkerStyle(22);
   METpt36->GetXaxis()->SetTitle("METpt");
   METpt36->GetXaxis()->SetLabelFont(42);
   METpt36->GetXaxis()->SetLabelSize(0.035);
   METpt36->GetXaxis()->SetTitleSize(0.035);
   METpt36->GetXaxis()->SetTitleFont(42);
   METpt36->GetYaxis()->SetTitle("Events/pb");
   METpt36->GetYaxis()->SetLabelFont(42);
   METpt36->GetYaxis()->SetLabelSize(0.035);
   METpt36->GetYaxis()->SetTitleSize(0.035);
   METpt36->GetYaxis()->SetTitleFont(42);
   METpt36->GetZaxis()->SetLabelFont(42);
   METpt36->GetZaxis()->SetLabelSize(0.035);
   METpt36->GetZaxis()->SetTitleSize(0.035);
   METpt36->GetZaxis()->SetTitleFont(42);
   METpt->Add(METpt,"");
   
   TH1D *METpt37 = new TH1D("METpt37","MET_{p_{T}}",26,200,1500);
   METpt37->SetBinContent(1,0.8854694);
   METpt37->SetBinContent(2,0.2869202);
   METpt37->SetBinContent(3,0.1111467);
   METpt37->SetBinContent(4,0.04901941);
   METpt37->SetBinContent(5,0.02266621);
   METpt37->SetBinContent(6,0.01174085);
   METpt37->SetBinContent(7,0.006653654);
   METpt37->SetBinContent(8,0.003883141);
   METpt37->SetBinContent(9,0.002266213);
   METpt37->SetBinContent(10,0.001281461);
   METpt37->SetBinContent(11,0.0006964463);
   METpt37->SetBinContent(12,0.0005153702);
   METpt37->SetBinContent(13,0.0002785785);
   METpt37->SetBinContent(14,0.000195005);
   METpt37->SetBinContent(15,0.0001114314);
   METpt37->SetBinContent(16,5.57157e-05);
   METpt37->SetBinContent(17,5.57157e-05);
   METpt37->SetBinContent(18,4.178678e-05);
   METpt37->SetBinContent(19,2.785785e-05);
   METpt37->SetBinContent(20,1.392893e-05);
   METpt37->SetBinContent(21,2.785785e-05);
   METpt37->SetBinContent(23,5.57157e-05);
   METpt37->SetBinContent(25,1.392893e-05);
   METpt37->SetBinError(1,0.01392539);
   METpt37->SetBinError(2,0.00533313);
   METpt37->SetBinError(3,0.002950942);
   METpt37->SetBinError(4,0.001549836);
   METpt37->SetBinError(5,0.0007112557);
   METpt37->SetBinError(6,0.0004119203);
   METpt37->SetBinError(7,0.0003086791);
   METpt37->SetBinError(8,0.0002342319);
   METpt37->SetBinError(9,0.000178071);
   METpt37->SetBinError(10,0.0001336016);
   METpt37->SetBinError(11,9.849237e-05);
   METpt37->SetBinError(12,8.472634e-05);
   METpt37->SetBinError(13,6.229205e-05);
   METpt37->SetBinError(14,5.211727e-05);
   METpt37->SetBinError(15,3.939695e-05);
   METpt37->SetBinError(16,2.785785e-05);
   METpt37->SetBinError(17,2.785785e-05);
   METpt37->SetBinError(18,2.412561e-05);
   METpt37->SetBinError(19,1.969847e-05);
   METpt37->SetBinError(20,1.392893e-05);
   METpt37->SetBinError(21,1.969847e-05);
   METpt37->SetBinError(23,2.785785e-05);
   METpt37->SetBinError(25,1.392893e-05);
   METpt37->SetEntries(30221);

   ci = TColor::GetColor("#00ffff");
   METpt37->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METpt37->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METpt37->SetMarkerColor(ci);
   METpt37->SetMarkerStyle(20);
   METpt37->GetXaxis()->SetTitle("METpt");
   METpt37->GetXaxis()->SetLabelFont(42);
   METpt37->GetXaxis()->SetLabelSize(0.035);
   METpt37->GetXaxis()->SetTitleSize(0.035);
   METpt37->GetXaxis()->SetTitleFont(42);
   METpt37->GetYaxis()->SetTitle("Events/pb");
   METpt37->GetYaxis()->SetLabelFont(42);
   METpt37->GetYaxis()->SetLabelSize(0.035);
   METpt37->GetYaxis()->SetTitleSize(0.035);
   METpt37->GetYaxis()->SetTitleFont(42);
   METpt37->GetZaxis()->SetLabelFont(42);
   METpt37->GetZaxis()->SetLabelSize(0.035);
   METpt37->GetZaxis()->SetTitleSize(0.035);
   METpt37->GetZaxis()->SetTitleFont(42);
   METpt->Add(METpt,"");
   
   TH1D *METpt38 = new TH1D("METpt38","MET_{p_{T}}",26,200,1500);
   METpt38->SetBinContent(1,0.02593924);
   METpt38->SetBinContent(2,0.00911253);
   METpt38->SetBinContent(3,0.004070842);
   METpt38->SetBinContent(4,0.002273143);
   METpt38->SetBinContent(5,0.001086194);
   METpt38->SetBinContent(6,0.0006268953);
   METpt38->SetBinContent(7,0.0003421265);
   METpt38->SetBinContent(8,0.0001784488);
   METpt38->SetBinContent(9,0.000119143);
   METpt38->SetBinContent(10,7.255871e-05);
   METpt38->SetBinContent(11,6.319629e-05);
   METpt38->SetBinContent(12,3.979026e-05);
   METpt38->SetBinContent(13,2.574664e-05);
   METpt38->SetBinContent(14,1.287332e-05);
   METpt38->SetBinContent(15,1.521392e-05);
   METpt38->SetBinContent(16,8.192112e-06);
   METpt38->SetBinContent(17,1.170302e-06);
   METpt38->SetBinContent(18,3.510905e-06);
   METpt38->SetBinContent(19,3.510905e-06);
   METpt38->SetBinContent(20,4.681207e-06);
   METpt38->SetBinContent(23,1.170302e-06);
   METpt38->SetBinContent(24,1.170302e-06);
   METpt38->SetBinContent(25,1.170302e-06);
   METpt38->SetBinError(1,0.0009022103);
   METpt38->SetBinError(2,0.0004264117);
   METpt38->SetBinError(3,0.0002505498);
   METpt38->SetBinError(4,0.0001583184);
   METpt38->SetBinError(5,7.151111e-05);
   METpt38->SetBinError(6,4.015848e-05);
   METpt38->SetBinError(7,2.682047e-05);
   METpt38->SetBinError(8,1.646428e-05);
   METpt38->SetBinError(9,1.275817e-05);
   METpt38->SetBinError(10,9.214965e-06);
   METpt38->SetBinError(11,8.599926e-06);
   METpt38->SetBinError(12,6.823973e-06);
   METpt38->SetBinError(13,5.489202e-06);
   METpt38->SetBinError(14,3.881452e-06);
   METpt38->SetBinError(15,4.219583e-06);
   METpt38->SetBinError(16,3.096327e-06);
   METpt38->SetBinError(17,1.170302e-06);
   METpt38->SetBinError(18,2.027022e-06);
   METpt38->SetBinError(19,2.027022e-06);
   METpt38->SetBinError(20,2.340604e-06);
   METpt38->SetBinError(23,1.170302e-06);
   METpt38->SetBinError(24,1.170302e-06);
   METpt38->SetBinError(25,1.170302e-06);
   METpt38->SetEntries(7352);

   ci = TColor::GetColor("#ffcc00");
   METpt38->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METpt38->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METpt38->SetMarkerColor(ci);
   METpt38->SetMarkerStyle(21);
   METpt38->GetXaxis()->SetTitle("METpt");
   METpt38->GetXaxis()->SetLabelFont(42);
   METpt38->GetXaxis()->SetLabelSize(0.035);
   METpt38->GetXaxis()->SetTitleSize(0.035);
   METpt38->GetXaxis()->SetTitleFont(42);
   METpt38->GetYaxis()->SetTitle("Events/pb");
   METpt38->GetYaxis()->SetLabelFont(42);
   METpt38->GetYaxis()->SetLabelSize(0.035);
   METpt38->GetYaxis()->SetTitleSize(0.035);
   METpt38->GetYaxis()->SetTitleFont(42);
   METpt38->GetZaxis()->SetLabelFont(42);
   METpt38->GetZaxis()->SetLabelSize(0.035);
   METpt38->GetZaxis()->SetTitleSize(0.035);
   METpt38->GetZaxis()->SetTitleFont(42);
   METpt->Add(METpt,"");
   
   TH1D *METpt39 = new TH1D("METpt39","MET_{p_{T}}",26,200,1500);
   METpt39->SetBinContent(1,0.01318801);
   METpt39->SetBinContent(2,0.00856064);
   METpt39->SetBinContent(3,0.005275205);
   METpt39->SetBinContent(4,0.003917842);
   METpt39->SetBinContent(5,0.00219029);
   METpt39->SetBinContent(6,0.00161958);
   METpt39->SetBinContent(7,0.001033447);
   METpt39->SetBinContent(8,0.0008792008);
   METpt39->SetBinContent(9,0.000509011);
   METpt39->SetBinContent(10,0.0004627373);
   METpt39->SetBinContent(11,0.0003701898);
   METpt39->SetBinContent(12,0.0003239161);
   METpt39->SetBinContent(13,0.0001233966);
   METpt39->SetBinContent(14,0.0001542458);
   METpt39->SetBinContent(15,4.627373e-05);
   METpt39->SetBinContent(16,7.712288e-05);
   METpt39->SetBinContent(17,3.084915e-05);
   METpt39->SetBinContent(18,1.542458e-05);
   METpt39->SetBinContent(21,1.542458e-05);
   METpt39->SetBinContent(23,1.542458e-05);
   METpt39->SetBinContent(24,1.542458e-05);
   METpt39->SetBinContent(25,1.542458e-05);
   METpt39->SetBinError(1,0.0004510205);
   METpt39->SetBinError(2,0.0003633789);
   METpt39->SetBinError(3,0.0002852504);
   METpt39->SetBinError(4,0.0002458273);
   METpt39->SetBinError(5,0.000183805);
   METpt39->SetBinError(6,0.0001580549);
   METpt39->SetBinError(7,0.0001262556);
   METpt39->SetBinError(8,0.000116453);
   METpt39->SetBinError(9,8.860744e-05);
   METpt39->SetBinError(10,8.448388e-05);
   METpt39->SetBinError(11,7.556468e-05);
   METpt39->SetBinError(12,7.068429e-05);
   METpt39->SetBinError(13,4.362729e-05);
   METpt39->SetBinError(14,4.877679e-05);
   METpt39->SetBinError(15,2.671615e-05);
   METpt39->SetBinError(16,3.44904e-05);
   METpt39->SetBinError(17,2.181364e-05);
   METpt39->SetBinError(18,1.542458e-05);
   METpt39->SetBinError(21,1.542458e-05);
   METpt39->SetBinError(23,1.542458e-05);
   METpt39->SetBinError(24,1.542458e-05);
   METpt39->SetBinError(25,1.542458e-05);
   METpt39->SetEntries(2518);

   ci = TColor::GetColor("#ff0000");
   METpt39->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METpt39->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METpt39->SetMarkerColor(ci);
   METpt39->SetMarkerStyle(20);
   METpt39->GetXaxis()->SetTitle("METpt");
   METpt39->GetXaxis()->SetLabelFont(42);
   METpt39->GetXaxis()->SetLabelSize(0.035);
   METpt39->GetXaxis()->SetTitleSize(0.035);
   METpt39->GetXaxis()->SetTitleFont(42);
   METpt39->GetYaxis()->SetTitle("Events/pb");
   METpt39->GetYaxis()->SetLabelFont(42);
   METpt39->GetYaxis()->SetLabelSize(0.035);
   METpt39->GetYaxis()->SetTitleSize(0.035);
   METpt39->GetYaxis()->SetTitleFont(42);
   METpt39->GetZaxis()->SetLabelFont(42);
   METpt39->GetZaxis()->SetLabelSize(0.035);
   METpt39->GetZaxis()->SetTitleSize(0.035);
   METpt39->GetZaxis()->SetTitleFont(42);
   METpt->Add(METpt,"");
   
   TH1D *METpt40 = new TH1D("METpt40","MET_{p_{T}}",26,200,1500);
   METpt40->SetBinContent(1,0.001408818);
   METpt40->SetBinContent(2,0.0003857479);
   METpt40->SetBinContent(3,0.0001509448);
   METpt40->SetBinContent(4,6.708659e-05);
   METpt40->SetBinContent(5,8.385824e-05);
   METpt40->SetBinContent(6,1.677165e-05);
   METpt40->SetBinContent(7,1.677165e-05);
   METpt40->SetBinContent(9,1.677165e-05);
   METpt40->SetBinError(1,0.0001537147);
   METpt40->SetBinError(2,8.0434e-05);
   METpt40->SetBinError(3,5.031494e-05);
   METpt40->SetBinError(4,3.35433e-05);
   METpt40->SetBinError(5,3.750254e-05);
   METpt40->SetBinError(6,1.677165e-05);
   METpt40->SetBinError(7,1.677165e-05);
   METpt40->SetBinError(9,1.677165e-05);
   METpt40->SetEntries(128);

   ci = TColor::GetColor("#0000ff");
   METpt40->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METpt40->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METpt40->SetMarkerColor(ci);
   METpt40->SetMarkerStyle(21);
   METpt40->GetXaxis()->SetTitle("METpt");
   METpt40->GetXaxis()->SetLabelFont(42);
   METpt40->GetXaxis()->SetLabelSize(0.035);
   METpt40->GetXaxis()->SetTitleSize(0.035);
   METpt40->GetXaxis()->SetTitleFont(42);
   METpt40->GetYaxis()->SetTitle("Events/pb");
   METpt40->GetYaxis()->SetLabelFont(42);
   METpt40->GetYaxis()->SetLabelSize(0.035);
   METpt40->GetYaxis()->SetTitleSize(0.035);
   METpt40->GetYaxis()->SetTitleFont(42);
   METpt40->GetZaxis()->SetLabelFont(42);
   METpt40->GetZaxis()->SetLabelSize(0.035);
   METpt40->GetZaxis()->SetTitleSize(0.035);
   METpt40->GetZaxis()->SetTitleFont(42);
   METpt->Add(METpt,"");
   METpt->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.4138506,0.9342857,0.5861494,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("METpt");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METpt","METpt_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METpt","METpt_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METpt","METpt_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METpt","METpt_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METpt","METpt_ttbar","lp");

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
   METpt->Modified();
   METpt->cd();
   METpt->SetSelected(METpt);
}
