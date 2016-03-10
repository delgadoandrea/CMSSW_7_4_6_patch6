void 3rdjetpt()
{
//=========Macro generated from canvas: 3rdjetpt/3rdjetpt
//=========  (Fri Nov 13 11:38:50 2015) by ROOT version6.02/05
   TCanvas *3rdjetpt = new TCanvas("3rdjetpt", "3rdjetpt",20,42,700,700);
   3rdjetpt->Range(-66.25001,-6.844597,896.25,0.9451214);
   3rdjetpt->SetFillColor(0);
   3rdjetpt->SetBorderMode(0);
   3rdjetpt->SetBorderSize(2);
   3rdjetpt->SetLogy();
   3rdjetpt->SetFrameBorderMode(0);
   3rdjetpt->SetFrameBorderMode(0);
   
   THStack *3rdjetpt = new THStack();
   3rdjetpt->SetName("3rdjetpt");
   3rdjetpt->SetTitle("3rdjetpt");
   
   TH1F *3rdjetpt_stack_2 = new TH1F("3rdjetpt_stack_2","3rdjetpt",32,30,800);
   3rdjetpt_stack_2->SetMinimum(8.597554e-07);
   3rdjetpt_stack_2->SetMaximum(1.466052);
   3rdjetpt_stack_2->SetDirectory(0);
   3rdjetpt_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   3rdjetpt_stack_2->SetLineColor(ci);
   3rdjetpt_stack_2->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt_stack_2->GetXaxis()->SetLabelFont(42);
   3rdjetpt_stack_2->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt_stack_2->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt_stack_2->GetXaxis()->SetTitleFont(42);
   3rdjetpt_stack_2->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt_stack_2->GetYaxis()->SetLabelFont(42);
   3rdjetpt_stack_2->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt_stack_2->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt_stack_2->GetYaxis()->SetTitleFont(42);
   3rdjetpt_stack_2->GetZaxis()->SetLabelFont(42);
   3rdjetpt_stack_2->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt_stack_2->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt_stack_2->GetZaxis()->SetTitleFont(42);
   3rdjetpt->SetHistogram(3rdjetpt_stack_2);
   
   
   TH1D *3rdjetpt6 = new TH1D("3rdjetpt6","p_{T}^{3rd jet}",32,30,800);
   3rdjetpt6->SetBinContent(1,0.00476483);
   3rdjetpt6->SetBinContent(2,0.03327508);
   3rdjetpt6->SetBinContent(3,0.00952966);
   3rdjetpt6->SetBinContent(4,0.05316558);
   3rdjetpt6->SetBinContent(5,0.00612621);
   3rdjetpt6->SetBinContent(7,0.00408414);
   3rdjetpt6->SetBinContent(8,0.00476483);
   3rdjetpt6->SetBinContent(13,0.00272276);
   3rdjetpt6->SetBinError(1,0.001800936);
   3rdjetpt6->SetBinError(2,0.01663754);
   3rdjetpt6->SetBinError(3,0.002546909);
   3rdjetpt6->SetBinError(4,0.01881187);
   3rdjetpt6->SetBinError(5,0.00204207);
   3rdjetpt6->SetBinError(7,0.001667343);
   3rdjetpt6->SetBinError(8,0.001800936);
   3rdjetpt6->SetBinError(13,0.00136138);
   3rdjetpt6->SetEntries(73);

   ci = TColor::GetColor("#00cc00");
   3rdjetpt6->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   3rdjetpt6->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   3rdjetpt6->SetMarkerColor(ci);
   3rdjetpt6->SetMarkerStyle(22);
   3rdjetpt6->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt6->GetXaxis()->SetLabelFont(42);
   3rdjetpt6->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt6->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt6->GetXaxis()->SetTitleFont(42);
   3rdjetpt6->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt6->GetYaxis()->SetLabelFont(42);
   3rdjetpt6->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt6->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt6->GetYaxis()->SetTitleFont(42);
   3rdjetpt6->GetZaxis()->SetLabelFont(42);
   3rdjetpt6->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt6->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt6->GetZaxis()->SetTitleFont(42);
   3rdjetpt->Add(3rdjetpt,"");
   
   TH1D *3rdjetpt7 = new TH1D("3rdjetpt7","p_{T}^{3rd jet}",32,30,800);
   3rdjetpt7->SetBinContent(1,0.7082039);
   3rdjetpt7->SetBinContent(2,0.3398262);
   3rdjetpt7->SetBinContent(3,0.1600696);
   3rdjetpt7->SetBinContent(4,0.07674522);
   3rdjetpt7->SetBinContent(5,0.03755793);
   3rdjetpt7->SetBinContent(6,0.02028817);
   3rdjetpt7->SetBinContent(7,0.01184283);
   3rdjetpt7->SetBinContent(8,0.008195882);
   3rdjetpt7->SetBinContent(9,0.004331896);
   3rdjetpt7->SetBinContent(10,0.003732952);
   3rdjetpt7->SetBinContent(11,0.0016854);
   3rdjetpt7->SetBinContent(12,0.001072527);
   3rdjetpt7->SetBinContent(13,0.001016812);
   3rdjetpt7->SetBinContent(14,0.0002646496);
   3rdjetpt7->SetBinContent(15,0.0003482231);
   3rdjetpt7->SetBinContent(16,0.0002785785);
   3rdjetpt7->SetBinContent(17,0.0004317967);
   3rdjetpt7->SetBinContent(18,5.57157e-05);
   3rdjetpt7->SetBinContent(20,0.0002646496);
   3rdjetpt7->SetBinError(1,0.008267469);
   3rdjetpt7->SetBinError(2,0.004424091);
   3rdjetpt7->SetBinError(3,0.002347339);
   3rdjetpt7->SetBinError(4,0.001152816);
   3rdjetpt7->SetBinError(5,0.0007273045);
   3rdjetpt7->SetBinError(6,0.0005322793);
   3rdjetpt7->SetBinError(7,0.0004062089);
   3rdjetpt7->SetBinError(8,0.0003379992);
   3rdjetpt7->SetBinError(9,0.0002456393);
   3rdjetpt7->SetBinError(10,0.0002280263);
   3rdjetpt7->SetBinError(11,0.0001532182);
   3rdjetpt7->SetBinError(12,0.0001222258);
   3rdjetpt7->SetBinError(13,0.0001190088);
   3rdjetpt7->SetBinError(14,6.071478e-05);
   3rdjetpt7->SetBinError(15,6.964463e-05);
   3rdjetpt7->SetBinError(16,6.229205e-05);
   3rdjetpt7->SetBinError(17,7.755297e-05);
   3rdjetpt7->SetBinError(18,2.785785e-05);
   3rdjetpt7->SetBinError(20,6.071478e-05);
   3rdjetpt7->SetEntries(57890);

   ci = TColor::GetColor("#00ffff");
   3rdjetpt7->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   3rdjetpt7->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   3rdjetpt7->SetMarkerColor(ci);
   3rdjetpt7->SetMarkerStyle(20);
   3rdjetpt7->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt7->GetXaxis()->SetLabelFont(42);
   3rdjetpt7->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt7->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt7->GetXaxis()->SetTitleFont(42);
   3rdjetpt7->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt7->GetYaxis()->SetLabelFont(42);
   3rdjetpt7->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt7->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt7->GetYaxis()->SetTitleFont(42);
   3rdjetpt7->GetZaxis()->SetLabelFont(42);
   3rdjetpt7->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt7->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt7->GetZaxis()->SetTitleFont(42);
   3rdjetpt->Add(3rdjetpt,"");
   
   TH1D *3rdjetpt8 = new TH1D("3rdjetpt8","p_{T}^{3rd jet}",32,30,800);
   3rdjetpt8->SetBinContent(1,0.02686509);
   3rdjetpt8->SetBinContent(2,0.01424487);
   3rdjetpt8->SetBinContent(3,0.007027871);
   3rdjetpt8->SetBinContent(4,0.003542977);
   3rdjetpt8->SetBinContent(5,0.001628762);
   3rdjetpt8->SetBinContent(6,0.001029442);
   3rdjetpt8->SetBinContent(7,0.0004962079);
   3rdjetpt8->SetBinContent(8,0.0002387416);
   3rdjetpt8->SetBinContent(9,0.0002246979);
   3rdjetpt8->SetBinContent(10,0.0001228817);
   3rdjetpt8->SetBinContent(11,9.245384e-05);
   3rdjetpt8->SetBinContent(12,2.691694e-05);
   3rdjetpt8->SetBinContent(13,2.691694e-05);
   3rdjetpt8->SetBinContent(14,5.851509e-06);
   3rdjetpt8->SetBinContent(15,1.053272e-05);
   3rdjetpt8->SetBinContent(16,2.691694e-05);
   3rdjetpt8->SetBinContent(18,2.106543e-05);
   3rdjetpt8->SetBinContent(20,8.192112e-06);
   3rdjetpt8->SetBinContent(26,3.510905e-06);
   3rdjetpt8->SetBinError(1,0.000694144);
   3rdjetpt8->SetBinError(2,0.000396515);
   3rdjetpt8->SetBinError(3,0.0002094727);
   3rdjetpt8->SetBinError(4,0.0001179888);
   3rdjetpt8->SetBinError(5,5.036126e-05);
   3rdjetpt8->SetBinError(6,3.698811e-05);
   3rdjetpt8->SetBinError(7,2.409799e-05);
   3rdjetpt8->SetBinError(8,1.671525e-05);
   3rdjetpt8->SetBinError(9,1.621618e-05);
   3rdjetpt8->SetBinError(10,1.199202e-05);
   3rdjetpt8->SetBinError(11,1.040187e-05);
   3rdjetpt8->SetBinError(12,5.61257e-06);
   3rdjetpt8->SetBinError(13,5.61257e-06);
   3rdjetpt8->SetBinError(14,2.616874e-06);
   3rdjetpt8->SetBinError(15,3.510905e-06);
   3rdjetpt8->SetBinError(16,5.61257e-06);
   3rdjetpt8->SetBinError(18,4.96517e-06);
   3rdjetpt8->SetBinError(20,3.096327e-06);
   3rdjetpt8->SetBinError(26,2.027022e-06);
   3rdjetpt8->SetEntries(18629);

   ci = TColor::GetColor("#ffcc00");
   3rdjetpt8->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   3rdjetpt8->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   3rdjetpt8->SetMarkerColor(ci);
   3rdjetpt8->SetMarkerStyle(21);
   3rdjetpt8->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt8->GetXaxis()->SetLabelFont(42);
   3rdjetpt8->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt8->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt8->GetXaxis()->SetTitleFont(42);
   3rdjetpt8->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt8->GetYaxis()->SetLabelFont(42);
   3rdjetpt8->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt8->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt8->GetYaxis()->SetTitleFont(42);
   3rdjetpt8->GetZaxis()->SetLabelFont(42);
   3rdjetpt8->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt8->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt8->GetZaxis()->SetTitleFont(42);
   3rdjetpt->Add(3rdjetpt,"");
   
   TH1D *3rdjetpt9 = new TH1D("3rdjetpt9","p_{T}^{3rd jet}",32,30,800);
   3rdjetpt9->SetBinContent(1,0.03186717);
   3rdjetpt9->SetBinContent(2,0.02176408);
   3rdjetpt9->SetBinContent(3,0.0118615);
   3rdjetpt9->SetBinContent(4,0.004935864);
   3rdjetpt9->SetBinContent(5,0.002653027);
   3rdjetpt9->SetBinContent(6,0.001804675);
   3rdjetpt9->SetBinContent(7,0.001018022);
   3rdjetpt9->SetBinContent(8,0.0003856144);
   3rdjetpt9->SetBinContent(10,0.0002622178);
   3rdjetpt9->SetBinContent(11,0.000107972);
   3rdjetpt9->SetBinContent(13,0.0001233966);
   3rdjetpt9->SetBinError(1,0.0007010975);
   3rdjetpt9->SetBinError(2,0.0005793977);
   3rdjetpt9->SetBinError(3,0.0004277366);
   3rdjetpt9->SetBinError(4,0.0002759232);
   3rdjetpt9->SetBinError(5,0.0002022914);
   3rdjetpt9->SetBinError(6,0.0001668423);
   3rdjetpt9->SetBinError(7,0.0001253098);
   3rdjetpt9->SetBinError(8,7.712288e-05);
   3rdjetpt9->SetBinError(10,6.359716e-05);
   3rdjetpt9->SetBinError(11,4.080959e-05);
   3rdjetpt9->SetBinError(13,4.362729e-05);
   3rdjetpt9->SetEntries(4978);

   ci = TColor::GetColor("#ff0000");
   3rdjetpt9->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   3rdjetpt9->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   3rdjetpt9->SetMarkerColor(ci);
   3rdjetpt9->SetMarkerStyle(20);
   3rdjetpt9->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt9->GetXaxis()->SetLabelFont(42);
   3rdjetpt9->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt9->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt9->GetXaxis()->SetTitleFont(42);
   3rdjetpt9->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt9->GetYaxis()->SetLabelFont(42);
   3rdjetpt9->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt9->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt9->GetYaxis()->SetTitleFont(42);
   3rdjetpt9->GetZaxis()->SetLabelFont(42);
   3rdjetpt9->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt9->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt9->GetZaxis()->SetTitleFont(42);
   3rdjetpt->Add(3rdjetpt,"");
   
   TH1D *3rdjetpt10 = new TH1D("3rdjetpt10","p_{T}^{3rd jet}",32,30,800);
   3rdjetpt10->SetBinContent(1,0.001207559);
   3rdjetpt10->SetBinContent(2,0.00275055);
   3rdjetpt10->SetBinContent(3,0.003404644);
   3rdjetpt10->SetBinContent(4,0.002012598);
   3rdjetpt10->SetBinContent(5,0.001559763);
   3rdjetpt10->SetBinContent(6,0.0003689762);
   3rdjetpt10->SetBinContent(7,0.0008888973);
   3rdjetpt10->SetBinContent(8,0.0002012598);
   3rdjetpt10->SetBinContent(9,0.0001006299);
   3rdjetpt10->SetBinContent(10,0.0003018897);
   3rdjetpt10->SetBinContent(11,0.0001509448);
   3rdjetpt10->SetBinContent(18,0.0001174015);
   3rdjetpt10->SetBinError(1,0.0001423121);
   3rdjetpt10->SetBinError(2,0.0002147819);
   3rdjetpt10->SetBinError(3,0.0002389592);
   3rdjetpt10->SetBinError(4,0.0001837242);
   3rdjetpt10->SetBinError(5,0.0001617399);
   3rdjetpt10->SetBinError(6,7.8666e-05);
   3rdjetpt10->SetBinError(7,0.0001220994);
   3rdjetpt10->SetBinError(8,5.809869e-05);
   3rdjetpt10->SetBinError(9,4.108198e-05);
   3rdjetpt10->SetBinError(10,7.115607e-05);
   3rdjetpt10->SetBinError(11,5.031494e-05);
   3rdjetpt10->SetBinError(18,4.437361e-05);
   3rdjetpt10->SetEntries(779);

   ci = TColor::GetColor("#0000ff");
   3rdjetpt10->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   3rdjetpt10->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   3rdjetpt10->SetMarkerColor(ci);
   3rdjetpt10->SetMarkerStyle(21);
   3rdjetpt10->GetXaxis()->SetTitle("3rdjetpt");
   3rdjetpt10->GetXaxis()->SetLabelFont(42);
   3rdjetpt10->GetXaxis()->SetLabelSize(0.035);
   3rdjetpt10->GetXaxis()->SetTitleSize(0.035);
   3rdjetpt10->GetXaxis()->SetTitleFont(42);
   3rdjetpt10->GetYaxis()->SetTitle("Events/pb");
   3rdjetpt10->GetYaxis()->SetLabelFont(42);
   3rdjetpt10->GetYaxis()->SetLabelSize(0.035);
   3rdjetpt10->GetYaxis()->SetTitleSize(0.035);
   3rdjetpt10->GetYaxis()->SetTitleFont(42);
   3rdjetpt10->GetZaxis()->SetLabelFont(42);
   3rdjetpt10->GetZaxis()->SetLabelSize(0.035);
   3rdjetpt10->GetZaxis()->SetTitleSize(0.035);
   3rdjetpt10->GetZaxis()->SetTitleFont(42);
   3rdjetpt->Add(3rdjetpt,"");
   3rdjetpt->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.398046,0.9342857,0.601954,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("3rdjetpt");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("3rdjetpt","3rdjetpt_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("3rdjetpt","3rdjetpt_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("3rdjetpt","3rdjetpt_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("3rdjetpt","3rdjetpt_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("3rdjetpt","3rdjetpt_ttbar","lp");

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
   3rdjetpt->Modified();
   3rdjetpt->cd();
   3rdjetpt->SetSelected(3rdjetpt);
}
