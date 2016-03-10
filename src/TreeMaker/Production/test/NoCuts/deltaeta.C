void deltaeta()
{
//=========Macro generated from canvas: deltaeta/deltaeta
//=========  (Mon Nov 23 11:05:04 2015) by ROOT version6.02/05
   TCanvas *deltaeta = new TCanvas("deltaeta", "deltaeta",200,222,700,700);
   deltaeta->Range(-1.25,-6.640499,11.25,4.609242);
   deltaeta->SetFillColor(0);
   deltaeta->SetBorderMode(0);
   deltaeta->SetBorderSize(2);
   deltaeta->SetLogy();
   deltaeta->SetFrameBorderMode(0);
   deltaeta->SetFrameBorderMode(0);
   
   THStack *deltaeta = new THStack();
   deltaeta->SetName("deltaeta");
   deltaeta->SetTitle("deltaeta");
   
   TH1F *deltaeta_stack_11 = new TH1F("deltaeta_stack_11","deltaeta",10,0,10);
   deltaeta_stack_11->SetMinimum(3.05123e-06);
   deltaeta_stack_11->SetMaximum(3049.772);
   deltaeta_stack_11->SetDirectory(0);
   deltaeta_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   deltaeta_stack_11->SetLineColor(ci);
   deltaeta_stack_11->GetXaxis()->SetTitle("deltaeta");
   deltaeta_stack_11->GetXaxis()->SetLabelFont(42);
   deltaeta_stack_11->GetXaxis()->SetLabelSize(0.035);
   deltaeta_stack_11->GetXaxis()->SetTitleSize(0.035);
   deltaeta_stack_11->GetXaxis()->SetTitleFont(42);
   deltaeta_stack_11->GetYaxis()->SetTitle("Events/pb");
   deltaeta_stack_11->GetYaxis()->SetLabelFont(42);
   deltaeta_stack_11->GetYaxis()->SetLabelSize(0.035);
   deltaeta_stack_11->GetYaxis()->SetTitleSize(0.035);
   deltaeta_stack_11->GetYaxis()->SetTitleFont(42);
   deltaeta_stack_11->GetZaxis()->SetLabelFont(42);
   deltaeta_stack_11->GetZaxis()->SetLabelSize(0.035);
   deltaeta_stack_11->GetZaxis()->SetTitleSize(0.035);
   deltaeta_stack_11->GetZaxis()->SetTitleFont(42);
   deltaeta->SetHistogram(deltaeta_stack_11);
   
   
   TH1D *deltaeta51 = new TH1D("deltaeta51","#Delta_{#eta}",10,0,10);
   deltaeta51->SetBinContent(1,845.9134);
   deltaeta51->SetBinContent(2,672.1954);
   deltaeta51->SetBinContent(3,559.0138);
   deltaeta51->SetBinContent(4,745.4243);
   deltaeta51->SetBinContent(5,1182.63);
   deltaeta51->SetBinContent(6,1042.9);
   deltaeta51->SetBinContent(7,487.9746);
   deltaeta51->SetBinContent(8,151.3482);
   deltaeta51->SetBinContent(9,23.58447);
   deltaeta51->SetBinContent(10,0.3345248);
   deltaeta51->SetBinError(1,16.49852);
   deltaeta51->SetBinError(2,14.69992);
   deltaeta51->SetBinError(3,13.48171);
   deltaeta51->SetBinError(4,15.67569);
   deltaeta51->SetBinError(5,19.76287);
   deltaeta51->SetBinError(6,18.52993);
   deltaeta51->SetBinError(7,12.68776);
   deltaeta51->SetBinError(8,7.065991);
   deltaeta51->SetBinError(9,2.799082);
   deltaeta51->SetBinError(10,0.3345248);
   deltaeta51->SetEntries(35032);

   ci = TColor::GetColor("#00cc00");
   deltaeta51->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   deltaeta51->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   deltaeta51->SetMarkerColor(ci);
   deltaeta51->SetMarkerStyle(22);
   deltaeta51->GetXaxis()->SetTitle("deltaeta");
   deltaeta51->GetXaxis()->SetLabelFont(42);
   deltaeta51->GetXaxis()->SetLabelSize(0.035);
   deltaeta51->GetXaxis()->SetTitleSize(0.035);
   deltaeta51->GetXaxis()->SetTitleFont(42);
   deltaeta51->GetYaxis()->SetTitle("Events/pb");
   deltaeta51->GetYaxis()->SetLabelFont(42);
   deltaeta51->GetYaxis()->SetLabelSize(0.035);
   deltaeta51->GetYaxis()->SetTitleSize(0.035);
   deltaeta51->GetYaxis()->SetTitleFont(42);
   deltaeta51->GetZaxis()->SetLabelFont(42);
   deltaeta51->GetZaxis()->SetLabelSize(0.035);
   deltaeta51->GetZaxis()->SetTitleSize(0.035);
   deltaeta51->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   
   TH1D *deltaeta52 = new TH1D("deltaeta52","#Delta_{#eta}",10,0,10);
   deltaeta52->SetBinContent(1,3.394532);
   deltaeta52->SetBinContent(2,3.272054);
   deltaeta52->SetBinContent(3,4.542456);
   deltaeta52->SetBinContent(4,8.145725);
   deltaeta52->SetBinContent(5,9.089083);
   deltaeta52->SetBinContent(6,5.253162);
   deltaeta52->SetBinContent(7,1.834615);
   deltaeta52->SetBinContent(8,0.3805153);
   deltaeta52->SetBinContent(9,0.04519863);
   deltaeta52->SetBinContent(10,0.001058788);
   deltaeta52->SetBinError(1,0.04910249);
   deltaeta52->SetBinError(2,0.04869787);
   deltaeta52->SetBinError(3,0.05969095);
   deltaeta52->SetBinError(4,0.08103936);
   deltaeta52->SetBinError(5,0.08483115);
   deltaeta52->SetBinError(6,0.06276801);
   deltaeta52->SetBinError(7,0.03639874);
   deltaeta52->SetBinError(8,0.01575882);
   deltaeta52->SetBinError(9,0.005270374);
   deltaeta52->SetBinError(10,0.0003645121);
   deltaeta52->SetEntries(136801);

   ci = TColor::GetColor("#00ffff");
   deltaeta52->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   deltaeta52->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   deltaeta52->SetMarkerColor(ci);
   deltaeta52->SetMarkerStyle(20);
   deltaeta52->GetXaxis()->SetTitle("deltaeta");
   deltaeta52->GetXaxis()->SetLabelFont(42);
   deltaeta52->GetXaxis()->SetLabelSize(0.035);
   deltaeta52->GetXaxis()->SetTitleSize(0.035);
   deltaeta52->GetXaxis()->SetTitleFont(42);
   deltaeta52->GetYaxis()->SetTitle("Events/pb");
   deltaeta52->GetYaxis()->SetLabelFont(42);
   deltaeta52->GetYaxis()->SetLabelSize(0.035);
   deltaeta52->GetYaxis()->SetTitleSize(0.035);
   deltaeta52->GetYaxis()->SetTitleFont(42);
   deltaeta52->GetZaxis()->SetLabelFont(42);
   deltaeta52->GetZaxis()->SetLabelSize(0.035);
   deltaeta52->GetZaxis()->SetTitleSize(0.035);
   deltaeta52->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   
   TH1D *deltaeta53 = new TH1D("deltaeta53","#Delta_{#eta}",10,0,10);
   deltaeta53->SetBinContent(1,0.513753);
   deltaeta53->SetBinContent(2,0.4956795);
   deltaeta53->SetBinContent(3,0.6747957);
   deltaeta53->SetBinContent(4,1.131926);
   deltaeta53->SetBinContent(5,1.231123);
   deltaeta53->SetBinContent(6,0.6374224);
   deltaeta53->SetBinContent(7,0.2088968);
   deltaeta53->SetBinContent(8,0.04210779);
   deltaeta53->SetBinContent(9,0.00420104);
   deltaeta53->SetBinContent(10,0.0001345266);
   deltaeta53->SetBinError(1,0.006047521);
   deltaeta53->SetBinError(2,0.00598833);
   deltaeta53->SetBinError(3,0.007199073);
   deltaeta53->SetBinError(4,0.009454507);
   deltaeta53->SetBinError(5,0.009816235);
   deltaeta53->SetBinError(6,0.006835568);
   deltaeta53->SetBinError(7,0.003846698);
   deltaeta53->SetBinError(8,0.001639494);
   deltaeta53->SetBinError(9,0.0004778938);
   deltaeta53->SetBinError(10,9.917139e-05);
   deltaeta53->SetEntries(131338);

   ci = TColor::GetColor("#ffcc00");
   deltaeta53->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   deltaeta53->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   deltaeta53->SetMarkerColor(ci);
   deltaeta53->SetMarkerStyle(21);
   deltaeta53->GetXaxis()->SetTitle("deltaeta");
   deltaeta53->GetXaxis()->SetLabelFont(42);
   deltaeta53->GetXaxis()->SetLabelSize(0.035);
   deltaeta53->GetXaxis()->SetTitleSize(0.035);
   deltaeta53->GetXaxis()->SetTitleFont(42);
   deltaeta53->GetYaxis()->SetTitle("Events/pb");
   deltaeta53->GetYaxis()->SetLabelFont(42);
   deltaeta53->GetYaxis()->SetLabelSize(0.035);
   deltaeta53->GetYaxis()->SetTitleSize(0.035);
   deltaeta53->GetYaxis()->SetTitleFont(42);
   deltaeta53->GetZaxis()->SetLabelFont(42);
   deltaeta53->GetZaxis()->SetLabelSize(0.035);
   deltaeta53->GetZaxis()->SetTitleSize(0.035);
   deltaeta53->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   
   TH1D *deltaeta54 = new TH1D("deltaeta54","#Delta_{#eta}",10,0,10);
   deltaeta54->SetBinContent(1,0.002375385);
   deltaeta54->SetBinContent(2,0.003424256);
   deltaeta54->SetBinContent(3,0.00691021);
   deltaeta54->SetBinContent(4,0.01232424);
   deltaeta54->SetBinContent(5,0.01684364);
   deltaeta54->SetBinContent(6,0.01303377);
   deltaeta54->SetBinContent(7,0.006786813);
   deltaeta54->SetBinContent(8,0.002020619);
   deltaeta54->SetBinContent(9,0.0004627373);
   deltaeta54->SetBinContent(10,4.627373e-05);
   deltaeta54->SetBinError(1,0.000191414);
   deltaeta54->SetBinError(2,0.000229821);
   deltaeta54->SetBinError(3,0.0003264767);
   deltaeta54->SetBinError(4,0.0004360001);
   deltaeta54->SetBinError(5,0.0005097116);
   deltaeta54->SetBinError(6,0.0004483752);
   deltaeta54->SetBinError(7,0.0003235486);
   deltaeta54->SetBinError(8,0.0001765423);
   deltaeta54->SetBinError(9,8.448388e-05);
   deltaeta54->SetBinError(10,2.671615e-05);
   deltaeta54->SetEntries(4164);

   ci = TColor::GetColor("#ff0000");
   deltaeta54->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   deltaeta54->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   deltaeta54->SetMarkerColor(ci);
   deltaeta54->SetMarkerStyle(20);
   deltaeta54->GetXaxis()->SetTitle("deltaeta");
   deltaeta54->GetXaxis()->SetLabelFont(42);
   deltaeta54->GetXaxis()->SetLabelSize(0.035);
   deltaeta54->GetXaxis()->SetTitleSize(0.035);
   deltaeta54->GetXaxis()->SetTitleFont(42);
   deltaeta54->GetYaxis()->SetTitle("Events/pb");
   deltaeta54->GetYaxis()->SetLabelFont(42);
   deltaeta54->GetYaxis()->SetLabelSize(0.035);
   deltaeta54->GetYaxis()->SetTitleSize(0.035);
   deltaeta54->GetYaxis()->SetTitleFont(42);
   deltaeta54->GetZaxis()->SetLabelFont(42);
   deltaeta54->GetZaxis()->SetLabelSize(0.035);
   deltaeta54->GetZaxis()->SetTitleSize(0.035);
   deltaeta54->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   
   TH1D *deltaeta55 = new TH1D("deltaeta55","#Delta_{#eta}",10,0,10);
   deltaeta55->SetBinContent(1,5.031494e-05);
   deltaeta55->SetBinContent(2,0.0001006299);
   deltaeta55->SetBinContent(3,8.385824e-05);
   deltaeta55->SetBinContent(4,0.0002348031);
   deltaeta55->SetBinContent(5,0.0001677165);
   deltaeta55->SetBinContent(6,0.0002180314);
   deltaeta55->SetBinContent(7,0.0001509448);
   deltaeta55->SetBinContent(8,1.677165e-05);
   deltaeta55->SetBinError(1,2.904935e-05);
   deltaeta55->SetBinError(2,4.108198e-05);
   deltaeta55->SetBinError(3,3.750254e-05);
   deltaeta55->SetBinError(4,6.275376e-05);
   deltaeta55->SetBinError(5,5.303661e-05);
   deltaeta55->SetBinError(6,6.047104e-05);
   deltaeta55->SetBinError(7,5.031494e-05);
   deltaeta55->SetBinError(8,1.677165e-05);
   deltaeta55->SetEntries(61);

   ci = TColor::GetColor("#0000ff");
   deltaeta55->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   deltaeta55->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   deltaeta55->SetMarkerColor(ci);
   deltaeta55->SetMarkerStyle(21);
   deltaeta55->GetXaxis()->SetTitle("deltaeta");
   deltaeta55->GetXaxis()->SetLabelFont(42);
   deltaeta55->GetXaxis()->SetLabelSize(0.035);
   deltaeta55->GetXaxis()->SetTitleSize(0.035);
   deltaeta55->GetXaxis()->SetTitleFont(42);
   deltaeta55->GetYaxis()->SetTitle("Events/pb");
   deltaeta55->GetYaxis()->SetLabelFont(42);
   deltaeta55->GetYaxis()->SetLabelSize(0.035);
   deltaeta55->GetYaxis()->SetTitleSize(0.035);
   deltaeta55->GetYaxis()->SetTitleFont(42);
   deltaeta55->GetZaxis()->SetLabelFont(42);
   deltaeta55->GetZaxis()->SetLabelSize(0.035);
   deltaeta55->GetZaxis()->SetTitleSize(0.035);
   deltaeta55->GetZaxis()->SetTitleFont(42);
   deltaeta->Add(deltaeta,"");
   deltaeta->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.3951724,0.94,0.6048276,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("deltaeta");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("deltaeta","deltaeta_QCD","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaeta","deltaeta_WJetsToLNu","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaeta","deltaeta_ZJetsToNuNu","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaeta","deltaeta_signal","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("deltaeta","deltaeta_ttbar","lp");

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
   deltaeta->Modified();
   deltaeta->cd();
   deltaeta->SetSelected(deltaeta);
}
