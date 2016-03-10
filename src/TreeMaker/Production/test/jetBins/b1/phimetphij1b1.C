void phimetphij1b1()
{
//=========Macro generated from canvas: b1/phimetphij1b1/b1/phimetphij1b1
//=========  (Tue Nov 24 14:28:24 2015) by ROOT version6.02/05
   TCanvas *b1/phimetphij1b1 = new TCanvas("b1/phimetphij1b1", "b1/phimetphij1b1",100,122,700,700);
   b1/phimetphij1b1->Range(-3.926991,-7.344951,3.926991,0.6076744);
   b1/phimetphij1b1->SetFillColor(0);
   b1/phimetphij1b1->SetBorderMode(0);
   b1/phimetphij1b1->SetBorderSize(2);
   b1/phimetphij1b1->SetLogy();
   b1/phimetphij1b1->SetFrameBorderMode(0);
   b1/phimetphij1b1->SetFrameBorderMode(0);
   
   THStack *b1/phimetphij1b1 = new THStack();
   b1/phimetphij1b1->SetName("b1/phimetphij1b1");
   b1/phimetphij1b1->SetTitle("b1/phimetphij1b1");
   
   TH1F *b1/phimetphij1b1_stack_6 = new TH1F("b1/phimetphij1b1_stack_6","b1/phimetphij1b1",20,-3.141593,3.141593);
   b1/phimetphij1b1_stack_6->SetMinimum(2.820405e-07);
   b1/phimetphij1b1_stack_6->SetMaximum(0.6492498);
   b1/phimetphij1b1_stack_6->SetDirectory(0);
   b1/phimetphij1b1_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1/phimetphij1b1_stack_6->SetLineColor(ci);
   b1/phimetphij1b1_stack_6->GetXaxis()->SetTitle("b1/phimetphij1b1");
   b1/phimetphij1b1_stack_6->GetXaxis()->SetLabelFont(42);
   b1/phimetphij1b1_stack_6->GetXaxis()->SetLabelSize(0.035);
   b1/phimetphij1b1_stack_6->GetXaxis()->SetTitleSize(0.035);
   b1/phimetphij1b1_stack_6->GetXaxis()->SetTitleFont(42);
   b1/phimetphij1b1_stack_6->GetYaxis()->SetTitle("Events/pb");
   b1/phimetphij1b1_stack_6->GetYaxis()->SetLabelFont(42);
   b1/phimetphij1b1_stack_6->GetYaxis()->SetLabelSize(0.035);
   b1/phimetphij1b1_stack_6->GetYaxis()->SetTitleSize(0.035);
   b1/phimetphij1b1_stack_6->GetYaxis()->SetTitleFont(42);
   b1/phimetphij1b1_stack_6->GetZaxis()->SetLabelFont(42);
   b1/phimetphij1b1_stack_6->GetZaxis()->SetLabelSize(0.035);
   b1/phimetphij1b1_stack_6->GetZaxis()->SetTitleSize(0.035);
   b1/phimetphij1b1_stack_6->GetZaxis()->SetTitleFont(42);
   b1/phimetphij1b1->SetHistogram(b1/phimetphij1b1_stack_6);
   
   
   TH1D *phimetphij1b126 = new TH1D("phimetphij1b126"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   phimetphij1b126->SetBinContent(1,0.00831877);
   phimetphij1b126->SetBinContent(20,0.00831877);
   phimetphij1b126->SetBinError(1,0.00831877);
   phimetphij1b126->SetBinError(20,0.00831877);
   phimetphij1b126->SetEntries(2);

   ci = TColor::GetColor("#00cc00");
   phimetphij1b126->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphij1b126->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphij1b126->SetMarkerColor(ci);
   phimetphij1b126->SetMarkerStyle(22);
   phimetphij1b126->GetXaxis()->SetTitle("phimetphij1b1");
   phimetphij1b126->GetXaxis()->SetLabelFont(42);
   phimetphij1b126->GetXaxis()->SetLabelSize(0.035);
   phimetphij1b126->GetXaxis()->SetTitleSize(0.035);
   phimetphij1b126->GetXaxis()->SetTitleFont(42);
   phimetphij1b126->GetYaxis()->SetTitle("Events/pb");
   phimetphij1b126->GetYaxis()->SetLabelFont(42);
   phimetphij1b126->GetYaxis()->SetLabelSize(0.035);
   phimetphij1b126->GetYaxis()->SetTitleSize(0.035);
   phimetphij1b126->GetYaxis()->SetTitleFont(42);
   phimetphij1b126->GetZaxis()->SetLabelFont(42);
   phimetphij1b126->GetZaxis()->SetLabelSize(0.035);
   phimetphij1b126->GetZaxis()->SetTitleSize(0.035);
   phimetphij1b126->GetZaxis()->SetTitleFont(42);
   b1/phimetphij1b1->Add(phimetphij1b1,"");
   
   TH1D *phimetphij1b127 = new TH1D("phimetphij1b127"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   phimetphij1b127->SetBinContent(1,0.3050376);
   phimetphij1b127->SetBinContent(2,0.01175935);
   phimetphij1b127->SetBinContent(3,0.002434217);
   phimetphij1b127->SetBinContent(4,0.0005628037);
   phimetphij1b127->SetBinContent(5,2.866842e-05);
   phimetphij1b127->SetBinContent(6,1.473949e-05);
   phimetphij1b127->SetBinContent(7,1.473949e-05);
   phimetphij1b127->SetBinContent(10,2.866842e-05);
   phimetphij1b127->SetBinContent(11,1.473949e-05);
   phimetphij1b127->SetBinContent(16,2.866842e-05);
   phimetphij1b127->SetBinContent(17,0.0003457032);
   phimetphij1b127->SetBinContent(18,0.001910436);
   phimetphij1b127->SetBinContent(19,0.01425154);
   phimetphij1b127->SetBinContent(20,0.3100839);
   phimetphij1b127->SetBinError(1,0.009015245);
   phimetphij1b127->SetBinError(2,0.001134549);
   phimetphij1b127->SetBinError(3,0.0004757772);
   phimetphij1b127->SetBinError(4,0.0001937905);
   phimetphij1b127->SetBinError(5,2.027973e-05);
   phimetphij1b127->SetBinError(6,1.473949e-05);
   phimetphij1b127->SetBinError(7,1.473949e-05);
   phimetphij1b127->SetBinError(10,2.027973e-05);
   phimetphij1b127->SetBinError(11,1.473949e-05);
   phimetphij1b127->SetBinError(16,2.027973e-05);
   phimetphij1b127->SetBinError(17,0.0001403457);
   phimetphij1b127->SetBinError(18,0.0003812831);
   phimetphij1b127->SetBinError(19,0.001549088);
   phimetphij1b127->SetBinError(20,0.008496606);
   phimetphij1b127->SetEntries(7038);

   ci = TColor::GetColor("#00ffff");
   phimetphij1b127->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphij1b127->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphij1b127->SetMarkerColor(ci);
   phimetphij1b127->SetMarkerStyle(20);
   phimetphij1b127->GetXaxis()->SetTitle("phimetphij1b1");
   phimetphij1b127->GetXaxis()->SetLabelFont(42);
   phimetphij1b127->GetXaxis()->SetLabelSize(0.035);
   phimetphij1b127->GetXaxis()->SetTitleSize(0.035);
   phimetphij1b127->GetXaxis()->SetTitleFont(42);
   phimetphij1b127->GetYaxis()->SetTitle("Events/pb");
   phimetphij1b127->GetYaxis()->SetLabelFont(42);
   phimetphij1b127->GetYaxis()->SetLabelSize(0.035);
   phimetphij1b127->GetYaxis()->SetTitleSize(0.035);
   phimetphij1b127->GetYaxis()->SetTitleFont(42);
   phimetphij1b127->GetZaxis()->SetLabelFont(42);
   phimetphij1b127->GetZaxis()->SetLabelSize(0.035);
   phimetphij1b127->GetZaxis()->SetTitleSize(0.035);
   phimetphij1b127->GetZaxis()->SetTitleFont(42);
   b1/phimetphij1b1->Add(phimetphij1b1,"");
   
   TH1D *phimetphij1b128 = new TH1D("phimetphij1b128"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   phimetphij1b128->SetBinContent(1,0.07880679);
   phimetphij1b128->SetBinContent(2,0.003616477);
   phimetphij1b128->SetBinContent(3,0.0005694472);
   phimetphij1b128->SetBinContent(4,8.100068e-05);
   phimetphij1b128->SetBinContent(5,1.264557e-05);
   phimetphij1b128->SetBinContent(6,1.170302e-06);
   phimetphij1b128->SetBinContent(8,3.434989e-06);
   phimetphij1b128->SetBinContent(10,3.434989e-06);
   phimetphij1b128->SetBinContent(11,4.605291e-06);
   phimetphij1b128->SetBinContent(13,3.434989e-06);
   phimetphij1b128->SetBinContent(14,3.434989e-06);
   phimetphij1b128->SetBinContent(15,6.31774e-05);
   phimetphij1b128->SetBinContent(16,3.510905e-06);
   phimetphij1b128->SetBinContent(17,0.000151124);
   phimetphij1b128->SetBinContent(18,0.0005969828);
   phimetphij1b128->SetBinContent(19,0.003332751);
   phimetphij1b128->SetBinContent(20,0.07536598);
   phimetphij1b128->SetBinError(1,0.001651332);
   phimetphij1b128->SetBinError(2,0.0002957505);
   phimetphij1b128->SetBinError(3,0.0001110583);
   phimetphij1b128->SetBinError(4,3.09129e-05);
   phimetphij1b128->SetBinError(5,6.175489e-06);
   phimetphij1b128->SetBinError(6,1.170302e-06);
   phimetphij1b128->SetBinError(8,3.434989e-06);
   phimetphij1b128->SetBinError(10,3.434989e-06);
   phimetphij1b128->SetBinError(11,3.628878e-06);
   phimetphij1b128->SetBinError(13,3.434989e-06);
   phimetphij1b128->SetBinError(14,3.434989e-06);
   phimetphij1b128->SetBinError(15,4.011061e-05);
   phimetphij1b128->SetBinError(16,2.027022e-06);
   phimetphij1b128->SetBinError(17,5.079741e-05);
   phimetphij1b128->SetBinError(18,0.0001379431);
   phimetphij1b128->SetBinError(19,0.0003184343);
   phimetphij1b128->SetBinError(20,0.001596666);
   phimetphij1b128->SetEntries(10014);

   ci = TColor::GetColor("#ffcc00");
   phimetphij1b128->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphij1b128->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphij1b128->SetMarkerColor(ci);
   phimetphij1b128->SetMarkerStyle(21);
   phimetphij1b128->GetXaxis()->SetTitle("phimetphij1b1");
   phimetphij1b128->GetXaxis()->SetLabelFont(42);
   phimetphij1b128->GetXaxis()->SetLabelSize(0.035);
   phimetphij1b128->GetXaxis()->SetTitleSize(0.035);
   phimetphij1b128->GetXaxis()->SetTitleFont(42);
   phimetphij1b128->GetYaxis()->SetTitle("Events/pb");
   phimetphij1b128->GetYaxis()->SetLabelFont(42);
   phimetphij1b128->GetYaxis()->SetLabelSize(0.035);
   phimetphij1b128->GetYaxis()->SetTitleSize(0.035);
   phimetphij1b128->GetYaxis()->SetTitleFont(42);
   phimetphij1b128->GetZaxis()->SetLabelFont(42);
   phimetphij1b128->GetZaxis()->SetLabelSize(0.035);
   phimetphij1b128->GetZaxis()->SetTitleSize(0.035);
   phimetphij1b128->GetZaxis()->SetTitleFont(42);
   b1/phimetphij1b1->Add(phimetphij1b1,"");
   
   TH1D *phimetphij1b129 = new TH1D("phimetphij1b129"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   phimetphij1b129->SetBinContent(1,0.005414026);
   phimetphij1b129->SetBinContent(2,0.0002159441);
   phimetphij1b129->SetBinContent(5,1.542458e-05);
   phimetphij1b129->SetBinContent(9,1.542458e-05);
   phimetphij1b129->SetBinContent(17,1.542458e-05);
   phimetphij1b129->SetBinContent(18,6.16983e-05);
   phimetphij1b129->SetBinContent(19,0.0004164636);
   phimetphij1b129->SetBinContent(20,0.005136384);
   phimetphij1b129->SetBinError(1,0.0002889793);
   phimetphij1b129->SetBinError(2,5.771348e-05);
   phimetphij1b129->SetBinError(5,1.542458e-05);
   phimetphij1b129->SetBinError(9,1.542458e-05);
   phimetphij1b129->SetBinError(17,1.542458e-05);
   phimetphij1b129->SetBinError(18,3.084915e-05);
   phimetphij1b129->SetBinError(19,8.014845e-05);
   phimetphij1b129->SetBinError(20,0.0002814721);
   phimetphij1b129->SetEntries(732);

   ci = TColor::GetColor("#ff0000");
   phimetphij1b129->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphij1b129->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphij1b129->SetMarkerColor(ci);
   phimetphij1b129->SetMarkerStyle(20);
   phimetphij1b129->GetXaxis()->SetTitle("phimetphij1b1");
   phimetphij1b129->GetXaxis()->SetLabelFont(42);
   phimetphij1b129->GetXaxis()->SetLabelSize(0.035);
   phimetphij1b129->GetXaxis()->SetTitleSize(0.035);
   phimetphij1b129->GetXaxis()->SetTitleFont(42);
   phimetphij1b129->GetYaxis()->SetTitle("Events/pb");
   phimetphij1b129->GetYaxis()->SetLabelFont(42);
   phimetphij1b129->GetYaxis()->SetLabelSize(0.035);
   phimetphij1b129->GetYaxis()->SetTitleSize(0.035);
   phimetphij1b129->GetYaxis()->SetTitleFont(42);
   phimetphij1b129->GetZaxis()->SetLabelFont(42);
   phimetphij1b129->GetZaxis()->SetLabelSize(0.035);
   phimetphij1b129->GetZaxis()->SetTitleSize(0.035);
   phimetphij1b129->GetZaxis()->SetTitleFont(42);
   b1/phimetphij1b1->Add(phimetphij1b1,"");
   
   TH1D *phimetphij1b130 = new TH1D("phimetphij1b130"," MET and p_{T}^{lead jet} #Delta_{#phi}",20,-3.141593,3.141593);
   phimetphij1b130->SetBinContent(1,3.35433e-05);
   phimetphij1b130->SetBinError(1,2.371869e-05);
   phimetphij1b130->SetEntries(2);

   ci = TColor::GetColor("#0000ff");
   phimetphij1b130->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphij1b130->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphij1b130->SetMarkerColor(ci);
   phimetphij1b130->SetMarkerStyle(21);
   phimetphij1b130->GetXaxis()->SetTitle("phimetphij1b1");
   phimetphij1b130->GetXaxis()->SetLabelFont(42);
   phimetphij1b130->GetXaxis()->SetLabelSize(0.035);
   phimetphij1b130->GetXaxis()->SetTitleSize(0.035);
   phimetphij1b130->GetXaxis()->SetTitleFont(42);
   phimetphij1b130->GetYaxis()->SetTitle("Events/pb");
   phimetphij1b130->GetYaxis()->SetLabelFont(42);
   phimetphij1b130->GetYaxis()->SetLabelSize(0.035);
   phimetphij1b130->GetYaxis()->SetTitleSize(0.035);
   phimetphij1b130->GetYaxis()->SetTitleFont(42);
   phimetphij1b130->GetZaxis()->SetLabelFont(42);
   phimetphij1b130->GetZaxis()->SetLabelSize(0.035);
   phimetphij1b130->GetZaxis()->SetTitleSize(0.035);
   phimetphij1b130->GetZaxis()->SetTitleFont(42);
   b1/phimetphij1b1->Add(phimetphij1b1,"");
   b1/phimetphij1b1->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.2874138,0.9342857,0.7125862,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b1/phimetphij1b1");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimetphij1b1","b1/phimetphij1b1_QCD_b1/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphij1b1","b1/phimetphij1b1_WJetsToLNu_b1/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphij1b1","b1/phimetphij1b1_ZJetsToNuNu_b1/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphij1b1","b1/phimetphij1b1_signal_b1/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphij1b1","b1/phimetphij1b1_ttbar_b1/","lp");

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
   b1/phimetphij1b1->Modified();
   b1/phimetphij1b1->cd();
   b1/phimetphij1b1->SetSelected(b1/phimetphij1b1);
}
