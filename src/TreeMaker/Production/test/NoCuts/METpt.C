void METpt()
{
//=========Macro generated from canvas: METpt/METpt
//=========  (Mon Nov 23 11:05:02 2015) by ROOT version6.02/05
   TCanvas *METpt = new TCanvas("METpt", "METpt",160,182,700,700);
   METpt->Range(37.49999,-7.364757,1662.5,0.7273038);
   METpt->SetFillColor(0);
   METpt->SetBorderMode(0);
   METpt->SetBorderSize(2);
   METpt->SetLogy();
   METpt->SetFrameBorderMode(0);
   METpt->SetFrameBorderMode(0);
   
   THStack *METpt = new THStack();
   METpt->SetName("METpt");
   METpt->SetTitle("METpt");
   
   TH1F *METpt_stack_9 = new TH1F("METpt_stack_9","METpt",26,200,1500);
   METpt_stack_9->SetMinimum(2.782592e-07);
   METpt_stack_9->SetMaximum(0.8281284);
   METpt_stack_9->SetDirectory(0);
   METpt_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   METpt_stack_9->SetLineColor(ci);
   METpt_stack_9->GetXaxis()->SetTitle("METpt");
   METpt_stack_9->GetXaxis()->SetLabelFont(42);
   METpt_stack_9->GetXaxis()->SetLabelSize(0.035);
   METpt_stack_9->GetXaxis()->SetTitleSize(0.035);
   METpt_stack_9->GetXaxis()->SetTitleFont(42);
   METpt_stack_9->GetYaxis()->SetTitle("Events/pb");
   METpt_stack_9->GetYaxis()->SetLabelFont(42);
   METpt_stack_9->GetYaxis()->SetLabelSize(0.035);
   METpt_stack_9->GetYaxis()->SetTitleSize(0.035);
   METpt_stack_9->GetYaxis()->SetTitleFont(42);
   METpt_stack_9->GetZaxis()->SetLabelFont(42);
   METpt_stack_9->GetZaxis()->SetLabelSize(0.035);
   METpt_stack_9->GetZaxis()->SetTitleSize(0.035);
   METpt_stack_9->GetZaxis()->SetTitleFont(42);
   METpt->SetHistogram(METpt_stack_9);
   
   
   TH1D *METpt41 = new TH1D("METpt41","MET_{p_{T}}",26,200,1500);
   METpt41->SetBinContent(0,5711.186);
   METpt41->SetBinContent(1,0.1044396);
   METpt41->SetBinContent(2,0.0193603);
   METpt41->SetBinContent(3,0.00544552);
   METpt41->SetBinContent(4,0.00204207);
   METpt41->SetBinContent(8,0.00068069);
   METpt41->SetBinError(0,43.22679);
   METpt41->SetBinError(1,0.02774932);
   METpt41->SetBinError(2,0.01184302);
   METpt41->SetBinError(3,0.001925282);
   METpt41->SetBinError(4,0.00117899);
   METpt41->SetBinError(8,0.00068069);
   METpt41->SetEntries(35032);

   ci = TColor::GetColor("#00cc00");
   METpt41->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METpt41->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METpt41->SetMarkerColor(ci);
   METpt41->SetMarkerStyle(22);
   METpt41->GetXaxis()->SetTitle("METpt");
   METpt41->GetXaxis()->SetLabelFont(42);
   METpt41->GetXaxis()->SetLabelSize(0.035);
   METpt41->GetXaxis()->SetTitleSize(0.035);
   METpt41->GetXaxis()->SetTitleFont(42);
   METpt41->GetYaxis()->SetTitle("Events/pb");
   METpt41->GetYaxis()->SetLabelFont(42);
   METpt41->GetYaxis()->SetLabelSize(0.035);
   METpt41->GetYaxis()->SetTitleSize(0.035);
   METpt41->GetYaxis()->SetTitleFont(42);
   METpt41->GetZaxis()->SetLabelFont(42);
   METpt41->GetZaxis()->SetLabelSize(0.035);
   METpt41->GetZaxis()->SetTitleSize(0.035);
   METpt41->GetZaxis()->SetTitleFont(42);
   METpt->Add(METpt,"");
   
   TH1D *METpt42 = new TH1D("METpt42","MET_{p_{T}}",26,200,1500);
   METpt42->SetBinContent(0,35.35794);
   METpt42->SetBinContent(1,0.3917192);
   METpt42->SetBinContent(2,0.1187636);
   METpt42->SetBinContent(3,0.04893815);
   METpt42->SetBinContent(4,0.01957569);
   METpt42->SetBinContent(5,0.00999049);
   METpt42->SetBinContent(6,0.005074523);
   METpt42->SetBinContent(7,0.002797197);
   METpt42->SetBinContent(8,0.001509849);
   METpt42->SetBinContent(9,0.0007554042);
   METpt42->SetBinContent(10,0.0005153702);
   METpt42->SetBinContent(11,0.0003203653);
   METpt42->SetBinContent(12,0.0001671471);
   METpt42->SetBinContent(13,9.750248e-05);
   METpt42->SetBinContent(14,8.357355e-05);
   METpt42->SetBinContent(15,2.785785e-05);
   METpt42->SetBinContent(16,1.392893e-05);
   METpt42->SetBinContent(17,5.57157e-05);
   METpt42->SetBinContent(18,1.392893e-05);
   METpt42->SetBinContent(19,1.392893e-05);
   METpt42->SetBinContent(21,1.392893e-05);
   METpt42->SetBinContent(23,1.392893e-05);
   METpt42->SetBinError(0,0.1659874);
   METpt42->SetBinError(1,0.009015143);
   METpt42->SetBinError(2,0.003467256);
   METpt42->SetBinError(3,0.00198213);
   METpt42->SetBinError(4,0.0009025235);
   METpt42->SetBinError(5,0.0004185742);
   METpt42->SetBinError(6,0.0002713332);
   METpt42->SetBinError(7,0.0002003913);
   METpt42->SetBinError(8,0.0001460045);
   METpt42->SetBinError(9,0.0001028093);
   METpt42->SetBinError(10,8.472634e-05);
   METpt42->SetBinError(11,6.680078e-05);
   METpt42->SetBinError(12,4.825121e-05);
   METpt42->SetBinError(13,3.685247e-05);
   METpt42->SetBinError(14,3.411876e-05);
   METpt42->SetBinError(15,1.969847e-05);
   METpt42->SetBinError(16,1.392893e-05);
   METpt42->SetBinError(17,2.785785e-05);
   METpt42->SetBinError(18,1.392893e-05);
   METpt42->SetBinError(19,1.392893e-05);
   METpt42->SetBinError(21,1.392893e-05);
   METpt42->SetBinError(23,1.392893e-05);
   METpt42->SetEntries(136801);

   ci = TColor::GetColor("#00ffff");
   METpt42->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METpt42->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METpt42->SetMarkerColor(ci);
   METpt42->SetMarkerStyle(20);
   METpt42->GetXaxis()->SetTitle("METpt");
   METpt42->GetXaxis()->SetLabelFont(42);
   METpt42->GetXaxis()->SetLabelSize(0.035);
   METpt42->GetXaxis()->SetTitleSize(0.035);
   METpt42->GetXaxis()->SetTitleFont(42);
   METpt42->GetYaxis()->SetTitle("Events/pb");
   METpt42->GetYaxis()->SetLabelFont(42);
   METpt42->GetYaxis()->SetLabelSize(0.035);
   METpt42->GetYaxis()->SetTitleSize(0.035);
   METpt42->GetYaxis()->SetTitleFont(42);
   METpt42->GetZaxis()->SetLabelFont(42);
   METpt42->GetZaxis()->SetLabelSize(0.035);
   METpt42->GetZaxis()->SetTitleSize(0.035);
   METpt42->GetZaxis()->SetTitleFont(42);
   METpt->Add(METpt,"");
   
   TH1D *METpt43 = new TH1D("METpt43","MET_{p_{T}}",26,200,1500);
   METpt43->SetBinContent(0,4.793564);
   METpt43->SetBinContent(1,0.08670416);
   METpt43->SetBinContent(2,0.03119945);
   METpt43->SetBinContent(3,0.01373989);
   METpt43->SetBinContent(4,0.006818856);
   METpt43->SetBinContent(5,0.003406878);
   METpt43->SetBinContent(6,0.001827934);
   METpt43->SetBinContent(7,0.001084198);
   METpt43->SetBinContent(8,0.0005744535);
   METpt43->SetBinContent(9,0.0004089983);
   METpt43->SetBinContent(10,0.0002469337);
   METpt43->SetBinContent(11,0.000147458);
   METpt43->SetBinContent(12,8.426173e-05);
   METpt43->SetBinContent(13,7.372901e-05);
   METpt43->SetBinContent(14,4.564177e-05);
   METpt43->SetBinContent(15,3.159815e-05);
   METpt43->SetBinContent(16,2.340604e-05);
   METpt43->SetBinContent(17,1.638422e-05);
   METpt43->SetBinContent(18,1.053272e-05);
   METpt43->SetBinContent(19,8.192112e-06);
   METpt43->SetBinContent(20,8.192112e-06);
   METpt43->SetBinContent(21,4.681207e-06);
   METpt43->SetBinContent(22,2.340604e-06);
   METpt43->SetBinContent(24,1.170302e-06);
   METpt43->SetBinContent(26,2.340604e-06);
   METpt43->SetBinContent(27,4.681207e-06);
   METpt43->SetBinError(0,0.01925681);
   METpt43->SetBinError(1,0.00161953);
   METpt43->SetBinError(2,0.0008248426);
   METpt43->SetBinError(3,0.0004810386);
   METpt43->SetBinError(4,0.0002668444);
   METpt43->SetBinError(5,0.0001146987);
   METpt43->SetBinError(6,7.088941e-05);
   METpt43->SetBinError(7,5.03671e-05);
   METpt43->SetBinError(8,3.047945e-05);
   METpt43->SetBinError(9,2.325693e-05);
   METpt43->SetBinError(10,1.699961e-05);
   METpt43->SetBinError(11,1.31366e-05);
   METpt43->SetBinError(12,9.93034e-06);
   METpt43->SetBinError(13,9.288982e-06);
   METpt43->SetBinError(14,7.308532e-06);
   METpt43->SetBinError(15,6.081066e-06);
   METpt43->SetBinError(16,5.233749e-06);
   METpt43->SetBinError(17,4.378868e-06);
   METpt43->SetBinError(18,3.510905e-06);
   METpt43->SetBinError(19,3.096327e-06);
   METpt43->SetBinError(20,3.096327e-06);
   METpt43->SetBinError(21,2.340604e-06);
   METpt43->SetBinError(22,1.655057e-06);
   METpt43->SetBinError(24,1.170302e-06);
   METpt43->SetBinError(26,1.655057e-06);
   METpt43->SetBinError(27,2.340604e-06);
   METpt43->SetEntries(131338);

   ci = TColor::GetColor("#ffcc00");
   METpt43->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METpt43->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METpt43->SetMarkerColor(ci);
   METpt43->SetMarkerStyle(21);
   METpt43->GetXaxis()->SetTitle("METpt");
   METpt43->GetXaxis()->SetLabelFont(42);
   METpt43->GetXaxis()->SetLabelSize(0.035);
   METpt43->GetXaxis()->SetTitleSize(0.035);
   METpt43->GetXaxis()->SetTitleFont(42);
   METpt43->GetYaxis()->SetTitle("Events/pb");
   METpt43->GetYaxis()->SetLabelFont(42);
   METpt43->GetYaxis()->SetLabelSize(0.035);
   METpt43->GetYaxis()->SetTitleSize(0.035);
   METpt43->GetYaxis()->SetTitleFont(42);
   METpt43->GetZaxis()->SetLabelFont(42);
   METpt43->GetZaxis()->SetLabelSize(0.035);
   METpt43->GetZaxis()->SetTitleSize(0.035);
   METpt43->GetZaxis()->SetTitleFont(42);
   METpt->Add(METpt,"");
   
   TH1D *METpt44 = new TH1D("METpt44","MET_{p_{T}}",26,200,1500);
   METpt44->SetBinContent(0,0.04829435);
   METpt44->SetBinContent(1,0.006046434);
   METpt44->SetBinContent(2,0.003609351);
   METpt44->SetBinContent(3,0.002082318);
   METpt44->SetBinContent(4,0.001604156);
   METpt44->SetBinContent(5,0.0008175025);
   METpt44->SetBinContent(6,0.0006941059);
   METpt44->SetBinContent(7,0.0003084915);
   METpt44->SetBinContent(8,0.0002930669);
   METpt44->SetBinContent(9,0.0001388212);
   METpt44->SetBinContent(10,0.000107972);
   METpt44->SetBinContent(11,7.712288e-05);
   METpt44->SetBinContent(12,4.627373e-05);
   METpt44->SetBinContent(13,4.627373e-05);
   METpt44->SetBinContent(14,1.542458e-05);
   METpt44->SetBinContent(15,1.542458e-05);
   METpt44->SetBinContent(18,1.542458e-05);
   METpt44->SetBinContent(21,1.542458e-05);
   METpt44->SetBinError(0,0.0008630874);
   METpt44->SetBinError(1,0.000305391);
   METpt44->SetBinError(2,0.0002359506);
   METpt44->SetBinError(3,0.0001792174);
   METpt44->SetBinError(4,0.0001573004);
   METpt44->SetBinError(5,0.0001122926);
   METpt44->SetBinError(6,0.0001034712);
   METpt44->SetBinError(7,6.89808e-05);
   METpt44->SetBinError(8,6.723417e-05);
   METpt44->SetBinError(9,4.627373e-05);
   METpt44->SetBinError(10,4.080959e-05);
   METpt44->SetBinError(11,3.44904e-05);
   METpt44->SetBinError(12,2.671615e-05);
   METpt44->SetBinError(13,2.671615e-05);
   METpt44->SetBinError(14,1.542458e-05);
   METpt44->SetBinError(15,1.542458e-05);
   METpt44->SetBinError(18,1.542458e-05);
   METpt44->SetBinError(21,1.542458e-05);
   METpt44->SetEntries(4164);

   ci = TColor::GetColor("#ff0000");
   METpt44->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METpt44->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METpt44->SetMarkerColor(ci);
   METpt44->SetMarkerStyle(20);
   METpt44->GetXaxis()->SetTitle("METpt");
   METpt44->GetXaxis()->SetLabelFont(42);
   METpt44->GetXaxis()->SetLabelSize(0.035);
   METpt44->GetXaxis()->SetTitleSize(0.035);
   METpt44->GetXaxis()->SetTitleFont(42);
   METpt44->GetYaxis()->SetTitle("Events/pb");
   METpt44->GetYaxis()->SetLabelFont(42);
   METpt44->GetYaxis()->SetLabelSize(0.035);
   METpt44->GetYaxis()->SetTitleSize(0.035);
   METpt44->GetYaxis()->SetTitleFont(42);
   METpt44->GetZaxis()->SetLabelFont(42);
   METpt44->GetZaxis()->SetLabelSize(0.035);
   METpt44->GetZaxis()->SetTitleSize(0.035);
   METpt44->GetZaxis()->SetTitleFont(42);
   METpt->Add(METpt,"");
   
   TH1D *METpt45 = new TH1D("METpt45","MET_{p_{T}}",26,200,1500);
   METpt45->SetBinContent(0,0.001006299);
   METpt45->SetBinContent(1,1.677165e-05);
   METpt45->SetBinError(0,0.0001299126);
   METpt45->SetBinError(1,1.677165e-05);
   METpt45->SetEntries(61);

   ci = TColor::GetColor("#0000ff");
   METpt45->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METpt45->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METpt45->SetMarkerColor(ci);
   METpt45->SetMarkerStyle(21);
   METpt45->GetXaxis()->SetTitle("METpt");
   METpt45->GetXaxis()->SetLabelFont(42);
   METpt45->GetXaxis()->SetLabelSize(0.035);
   METpt45->GetXaxis()->SetTitleSize(0.035);
   METpt45->GetXaxis()->SetTitleFont(42);
   METpt45->GetYaxis()->SetTitle("Events/pb");
   METpt45->GetYaxis()->SetLabelFont(42);
   METpt45->GetYaxis()->SetLabelSize(0.035);
   METpt45->GetYaxis()->SetTitleSize(0.035);
   METpt45->GetYaxis()->SetTitleFont(42);
   METpt45->GetZaxis()->SetLabelFont(42);
   METpt45->GetZaxis()->SetLabelSize(0.035);
   METpt45->GetZaxis()->SetTitleSize(0.035);
   METpt45->GetZaxis()->SetTitleFont(42);
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
