void METPhiLeadJetPhi()
{
//=========Macro generated from canvas: METPhiLeadJetPhi/METPhiLeadJetPhi
//=========  (Fri Nov 13 11:38:52 2015) by ROOT version6.02/05
   TCanvas *METPhiLeadJetPhi = new TCanvas("METPhiLeadJetPhi", "METPhiLeadJetPhi",100,122,700,700);
   METPhiLeadJetPhi->Range(-0.3926991,-6.108752,3.534292,1.035839);
   METPhiLeadJetPhi->SetFillColor(0);
   METPhiLeadJetPhi->SetBorderMode(0);
   METPhiLeadJetPhi->SetBorderSize(2);
   METPhiLeadJetPhi->SetLogy();
   METPhiLeadJetPhi->SetFrameBorderMode(0);
   METPhiLeadJetPhi->SetFrameBorderMode(0);
   
   THStack *METPhiLeadJetPhi = new THStack();
   METPhiLeadJetPhi->SetName("METPhiLeadJetPhi");
   METPhiLeadJetPhi->SetTitle("METPhiLeadJetPhi");
   
   TH1F *METPhiLeadJetPhi_stack_6 = new TH1F("METPhiLeadJetPhi_stack_6","METPhiLeadJetPhi",10,0,3.141593);
   METPhiLeadJetPhi_stack_6->SetMinimum(4.033737e-06);
   METPhiLeadJetPhi_stack_6->SetMaximum(2.095947);
   METPhiLeadJetPhi_stack_6->SetDirectory(0);
   METPhiLeadJetPhi_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   METPhiLeadJetPhi_stack_6->SetLineColor(ci);
   METPhiLeadJetPhi_stack_6->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi_stack_6->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi_stack_6->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi_stack_6->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi_stack_6->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi_stack_6->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi_stack_6->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi_stack_6->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi_stack_6->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi_stack_6->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi_stack_6->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi_stack_6->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi_stack_6->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi_stack_6->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->SetHistogram(METPhiLeadJetPhi_stack_6);
   
   
   TH1D *METPhiLeadJetPhi26 = new TH1D("METPhiLeadJetPhi26"," MET and p_{T}^{lead jet} #Delta_{#phi}",10,0,3.141593);
   METPhiLeadJetPhi26->SetBinContent(1,0.00068069);
   METPhiLeadJetPhi26->SetBinContent(5,0.00068069);
   METPhiLeadJetPhi26->SetBinContent(9,0.00068069);
   METPhiLeadJetPhi26->SetBinContent(10,0.06148435);
   METPhiLeadJetPhi26->SetBinError(1,0.00068069);
   METPhiLeadJetPhi26->SetBinError(5,0.00068069);
   METPhiLeadJetPhi26->SetBinError(9,0.00068069);
   METPhiLeadJetPhi26->SetBinError(10,0.02056911);
   METPhiLeadJetPhi26->SetEntries(26);

   ci = TColor::GetColor("#00cc00");
   METPhiLeadJetPhi26->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   METPhiLeadJetPhi26->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   METPhiLeadJetPhi26->SetMarkerColor(ci);
   METPhiLeadJetPhi26->SetMarkerStyle(22);
   METPhiLeadJetPhi26->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi26->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi26->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi26->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi26->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi26->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi26->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi26->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi26->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi26->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi26->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi26->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi26->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi26->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->Add(METPhiLeadJetPhi,"");
   
   TH1D *METPhiLeadJetPhi27 = new TH1D("METPhiLeadJetPhi27"," MET and p_{T}^{lead jet} #Delta_{#phi}",10,0,3.141593);
   METPhiLeadJetPhi27->SetBinContent(1,0.0006193572);
   METPhiLeadJetPhi27->SetBinContent(2,0.0005890677);
   METPhiLeadJetPhi27->SetBinContent(3,0.0007676237);
   METPhiLeadJetPhi27->SetBinContent(4,0.0007560655);
   METPhiLeadJetPhi27->SetBinContent(5,0.002298757);
   METPhiLeadJetPhi27->SetBinContent(6,0.006348693);
   METPhiLeadJetPhi27->SetBinContent(7,0.0215278);
   METPhiLeadJetPhi27->SetBinContent(8,0.0698959);
   METPhiLeadJetPhi27->SetBinContent(9,0.219954);
   METPhiLeadJetPhi27->SetBinContent(10,1.060379);
   METPhiLeadJetPhi27->SetBinError(1,9.339464e-05);
   METPhiLeadJetPhi27->SetBinError(2,9.091104e-05);
   METPhiLeadJetPhi27->SetBinError(3,0.0001601048);
   METPhiLeadJetPhi27->SetBinError(4,0.0001038943);
   METPhiLeadJetPhi27->SetBinError(5,0.000249137);
   METPhiLeadJetPhi27->SetBinError(6,0.0004229977);
   METPhiLeadJetPhi27->SetBinError(7,0.0009778512);
   METPhiLeadJetPhi27->SetBinError(8,0.002154077);
   METPhiLeadJetPhi27->SetBinError(9,0.005002945);
   METPhiLeadJetPhi27->SetBinError(10,0.0142637);
   METPhiLeadJetPhi27->SetEntries(30221);

   ci = TColor::GetColor("#00ffff");
   METPhiLeadJetPhi27->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   METPhiLeadJetPhi27->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   METPhiLeadJetPhi27->SetMarkerColor(ci);
   METPhiLeadJetPhi27->SetMarkerStyle(20);
   METPhiLeadJetPhi27->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi27->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi27->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi27->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi27->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi27->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi27->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi27->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi27->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi27->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi27->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi27->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi27->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi27->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->Add(METPhiLeadJetPhi,"");
   
   TH1D *METPhiLeadJetPhi28 = new TH1D("METPhiLeadJetPhi28"," MET and p_{T}^{lead jet} #Delta_{#phi}",10,0,3.141593);
   METPhiLeadJetPhi28->SetBinContent(1,5.616504e-05);
   METPhiLeadJetPhi28->SetBinContent(2,2.32542e-05);
   METPhiLeadJetPhi28->SetBinContent(3,3.378692e-05);
   METPhiLeadJetPhi28->SetBinContent(4,3.144632e-05);
   METPhiLeadJetPhi28->SetBinContent(5,7.897319e-05);
   METPhiLeadJetPhi28->SetBinContent(6,0.0002105656);
   METPhiLeadJetPhi28->SetBinContent(7,0.0009003606);
   METPhiLeadJetPhi28->SetBinContent(8,0.002194423);
   METPhiLeadJetPhi28->SetBinContent(9,0.00778891);
   METPhiLeadJetPhi28->SetBinContent(10,0.03268463);
   METPhiLeadJetPhi28->SetBinError(1,2.886507e-05);
   METPhiLeadJetPhi28->SetBinError(2,6.540091e-06);
   METPhiLeadJetPhi28->SetBinError(3,7.422886e-06);
   METPhiLeadJetPhi28->SetBinError(4,7.236023e-06);
   METPhiLeadJetPhi28->SetBinError(5,1.243607e-05);
   METPhiLeadJetPhi28->SetBinError(6,2.225666e-05);
   METPhiLeadJetPhi28->SetBinError(7,9.69398e-05);
   METPhiLeadJetPhi28->SetBinError(8,0.0001562201);
   METPhiLeadJetPhi28->SetBinError(9,0.0003858322);
   METPhiLeadJetPhi28->SetBinError(10,0.0009526412);
   METPhiLeadJetPhi28->SetEntries(7352);

   ci = TColor::GetColor("#ffcc00");
   METPhiLeadJetPhi28->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METPhiLeadJetPhi28->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   METPhiLeadJetPhi28->SetMarkerColor(ci);
   METPhiLeadJetPhi28->SetMarkerStyle(21);
   METPhiLeadJetPhi28->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi28->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi28->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi28->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi28->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi28->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi28->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi28->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi28->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi28->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi28->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi28->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi28->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi28->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->Add(METPhiLeadJetPhi,"");
   
   TH1D *METPhiLeadJetPhi29 = new TH1D("METPhiLeadJetPhi29"," MET and p_{T}^{lead jet} #Delta_{#phi}",10,0,3.141593);
   METPhiLeadJetPhi29->SetBinContent(1,3.084915e-05);
   METPhiLeadJetPhi29->SetBinContent(2,1.542458e-05);
   METPhiLeadJetPhi29->SetBinContent(3,1.542458e-05);
   METPhiLeadJetPhi29->SetBinContent(4,1.542458e-05);
   METPhiLeadJetPhi29->SetBinContent(5,0.000107972);
   METPhiLeadJetPhi29->SetBinContent(6,0.0002005195);
   METPhiLeadJetPhi29->SetBinContent(7,0.0007558042);
   METPhiLeadJetPhi29->SetBinContent(8,0.002267413);
   METPhiLeadJetPhi29->SetBinContent(9,0.00745007);
   METPhiLeadJetPhi29->SetBinContent(10,0.02798018);
   METPhiLeadJetPhi29->SetBinError(1,2.181364e-05);
   METPhiLeadJetPhi29->SetBinError(2,1.542458e-05);
   METPhiLeadJetPhi29->SetBinError(3,1.542458e-05);
   METPhiLeadJetPhi29->SetBinError(4,1.542458e-05);
   METPhiLeadJetPhi29->SetBinError(5,4.080959e-05);
   METPhiLeadJetPhi29->SetBinError(6,5.56141e-05);
   METPhiLeadJetPhi29->SetBinError(7,0.000107972);
   METPhiLeadJetPhi29->SetBinError(8,0.000187013);
   METPhiLeadJetPhi29->SetBinError(9,0.0003389899);
   METPhiLeadJetPhi29->SetBinError(10,0.0006569493);
   METPhiLeadJetPhi29->SetEntries(2518);

   ci = TColor::GetColor("#ff0000");
   METPhiLeadJetPhi29->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   METPhiLeadJetPhi29->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   METPhiLeadJetPhi29->SetMarkerColor(ci);
   METPhiLeadJetPhi29->SetMarkerStyle(20);
   METPhiLeadJetPhi29->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi29->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi29->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi29->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi29->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi29->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi29->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi29->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi29->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi29->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi29->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi29->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi29->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi29->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->Add(METPhiLeadJetPhi,"");
   
   TH1D *METPhiLeadJetPhi30 = new TH1D("METPhiLeadJetPhi30"," MET and p_{T}^{lead jet} #Delta_{#phi}",10,0,3.141593);
   METPhiLeadJetPhi30->SetBinContent(1,1.677165e-05);
   METPhiLeadJetPhi30->SetBinContent(3,5.031494e-05);
   METPhiLeadJetPhi30->SetBinContent(4,1.677165e-05);
   METPhiLeadJetPhi30->SetBinContent(5,3.35433e-05);
   METPhiLeadJetPhi30->SetBinContent(6,3.35433e-05);
   METPhiLeadJetPhi30->SetBinContent(7,0.0001844881);
   METPhiLeadJetPhi30->SetBinContent(8,0.0003018897);
   METPhiLeadJetPhi30->SetBinContent(9,0.0005366927);
   METPhiLeadJetPhi30->SetBinContent(10,0.0009727556);
   METPhiLeadJetPhi30->SetBinError(1,1.677165e-05);
   METPhiLeadJetPhi30->SetBinError(3,2.904935e-05);
   METPhiLeadJetPhi30->SetBinError(4,1.677165e-05);
   METPhiLeadJetPhi30->SetBinError(5,2.371869e-05);
   METPhiLeadJetPhi30->SetBinError(6,2.371869e-05);
   METPhiLeadJetPhi30->SetBinError(7,5.562526e-05);
   METPhiLeadJetPhi30->SetBinError(8,7.115607e-05);
   METPhiLeadJetPhi30->SetBinError(9,9.487477e-05);
   METPhiLeadJetPhi30->SetBinError(10,0.0001277291);
   METPhiLeadJetPhi30->SetEntries(128);

   ci = TColor::GetColor("#0000ff");
   METPhiLeadJetPhi30->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   METPhiLeadJetPhi30->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   METPhiLeadJetPhi30->SetMarkerColor(ci);
   METPhiLeadJetPhi30->SetMarkerStyle(21);
   METPhiLeadJetPhi30->GetXaxis()->SetTitle("METPhiLeadJetPhi");
   METPhiLeadJetPhi30->GetXaxis()->SetLabelFont(42);
   METPhiLeadJetPhi30->GetXaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi30->GetXaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi30->GetXaxis()->SetTitleFont(42);
   METPhiLeadJetPhi30->GetYaxis()->SetTitle("Events/pb");
   METPhiLeadJetPhi30->GetYaxis()->SetLabelFont(42);
   METPhiLeadJetPhi30->GetYaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi30->GetYaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi30->GetYaxis()->SetTitleFont(42);
   METPhiLeadJetPhi30->GetZaxis()->SetLabelFont(42);
   METPhiLeadJetPhi30->GetZaxis()->SetLabelSize(0.035);
   METPhiLeadJetPhi30->GetZaxis()->SetTitleSize(0.035);
   METPhiLeadJetPhi30->GetZaxis()->SetTitleFont(42);
   METPhiLeadJetPhi->Add(METPhiLeadJetPhi,"");
   METPhiLeadJetPhi->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.2651437,0.94,0.7348563,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("METPhiLeadJetPhi");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("METPhiLeadJetPhi","METPhiLeadJetPhi_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METPhiLeadJetPhi","METPhiLeadJetPhi_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METPhiLeadJetPhi","METPhiLeadJetPhi_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METPhiLeadJetPhi","METPhiLeadJetPhi_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("METPhiLeadJetPhi","METPhiLeadJetPhi_ttbar","lp");

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
   METPhiLeadJetPhi->Modified();
   METPhiLeadJetPhi->cd();
   METPhiLeadJetPhi->SetSelected(METPhiLeadJetPhi);
}
