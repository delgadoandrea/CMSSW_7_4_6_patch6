void phimetphimub1()
{
//=========Macro generated from canvas: b1/phimetphimub1/b1/phimetphimub1
//=========  (Tue Nov 24 14:28:25 2015) by ROOT version6.02/05
   TCanvas *b1/phimetphimub1 = new TCanvas("b1/phimetphimub1", "b1/phimetphimub1",120,142,700,700);
   b1/phimetphimub1->Range(-3.926991,-5.782603,3.926991,-0.5648234);
   b1/phimetphimub1->SetFillColor(0);
   b1/phimetphimub1->SetBorderMode(0);
   b1/phimetphimub1->SetBorderSize(2);
   b1/phimetphimub1->SetLogy();
   b1/phimetphimub1->SetFrameBorderMode(0);
   b1/phimetphimub1->SetFrameBorderMode(0);
   
   THStack *b1/phimetphimub1 = new THStack();
   b1/phimetphimub1->SetName("b1/phimetphimub1");
   b1/phimetphimub1->SetTitle("b1/phimetphimub1");
   
   TH1F *b1/phimetphimub1_stack_7 = new TH1F("b1/phimetphimub1_stack_7","b1/phimetphimub1",20,-3.141593,3.141593);
   b1/phimetphimub1_stack_7->SetMinimum(5.484983e-06);
   b1/phimetphimub1_stack_7->SetMaximum(0.08192164);
   b1/phimetphimub1_stack_7->SetDirectory(0);
   b1/phimetphimub1_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   b1/phimetphimub1_stack_7->SetLineColor(ci);
   b1/phimetphimub1_stack_7->GetXaxis()->SetTitle("b1/phimetphimub1");
   b1/phimetphimub1_stack_7->GetXaxis()->SetLabelFont(42);
   b1/phimetphimub1_stack_7->GetXaxis()->SetLabelSize(0.035);
   b1/phimetphimub1_stack_7->GetXaxis()->SetTitleSize(0.035);
   b1/phimetphimub1_stack_7->GetXaxis()->SetTitleFont(42);
   b1/phimetphimub1_stack_7->GetYaxis()->SetTitle("Events/pb");
   b1/phimetphimub1_stack_7->GetYaxis()->SetLabelFont(42);
   b1/phimetphimub1_stack_7->GetYaxis()->SetLabelSize(0.035);
   b1/phimetphimub1_stack_7->GetYaxis()->SetTitleSize(0.035);
   b1/phimetphimub1_stack_7->GetYaxis()->SetTitleFont(42);
   b1/phimetphimub1_stack_7->GetZaxis()->SetLabelFont(42);
   b1/phimetphimub1_stack_7->GetZaxis()->SetLabelSize(0.035);
   b1/phimetphimub1_stack_7->GetZaxis()->SetTitleSize(0.035);
   b1/phimetphimub1_stack_7->GetZaxis()->SetTitleFont(42);
   b1/phimetphimub1->SetHistogram(b1/phimetphimub1_stack_7);
   
   
   TH1D *phimetphimub131 = new TH1D("phimetphimub131"," #Delta_{#phi}[#mu,MET]",20,-3.141593,3.141593);
   phimetphimub131->SetBinContent(8,0.00831877);
   phimetphimub131->SetBinContent(11,0.00831877);
   phimetphimub131->SetBinError(8,0.00831877);
   phimetphimub131->SetBinError(11,0.00831877);
   phimetphimub131->SetEntries(2);

   ci = TColor::GetColor("#00cc00");
   phimetphimub131->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphimub131->SetLineColor(ci);

   ci = TColor::GetColor("#00cc00");
   phimetphimub131->SetMarkerColor(ci);
   phimetphimub131->SetMarkerStyle(22);
   phimetphimub131->GetXaxis()->SetTitle("phimetphimub1");
   phimetphimub131->GetXaxis()->SetLabelFont(42);
   phimetphimub131->GetXaxis()->SetLabelSize(0.035);
   phimetphimub131->GetXaxis()->SetTitleSize(0.035);
   phimetphimub131->GetXaxis()->SetTitleFont(42);
   phimetphimub131->GetYaxis()->SetTitle("Events/pb");
   phimetphimub131->GetYaxis()->SetLabelFont(42);
   phimetphimub131->GetYaxis()->SetLabelSize(0.035);
   phimetphimub131->GetYaxis()->SetTitleSize(0.035);
   phimetphimub131->GetYaxis()->SetTitleFont(42);
   phimetphimub131->GetZaxis()->SetLabelFont(42);
   phimetphimub131->GetZaxis()->SetLabelSize(0.035);
   phimetphimub131->GetZaxis()->SetTitleSize(0.035);
   phimetphimub131->GetZaxis()->SetTitleFont(42);
   b1/phimetphimub1->Add(phimetphimub1,"");
   
   TH1D *phimetphimub132 = new TH1D("phimetphimub132"," #Delta_{#phi}[#mu,MET]",20,-3.141593,3.141593);
   phimetphimub132->SetBinContent(1,0.01633979);
   phimetphimub132->SetBinContent(2,0.01577641);
   phimetphimub132->SetBinContent(3,0.02776151);
   phimetphimub132->SetBinContent(4,0.03162148);
   phimetphimub132->SetBinContent(5,0.03691767);
   phimetphimub132->SetBinContent(6,0.04371726);
   phimetphimub132->SetBinContent(7,0.03485779);
   phimetphimub132->SetBinContent(8,0.03188994);
   phimetphimub132->SetBinContent(9,0.03576088);
   phimetphimub132->SetBinContent(10,0.04816692);
   phimetphimub132->SetBinContent(11,0.04622826);
   phimetphimub132->SetBinContent(12,0.04091512);
   phimetphimub132->SetBinContent(13,0.02857639);
   phimetphimub132->SetBinContent(14,0.03957982);
   phimetphimub132->SetBinContent(15,0.04154974);
   phimetphimub132->SetBinContent(16,0.03904911);
   phimetphimub132->SetBinContent(17,0.0315464);
   phimetphimub132->SetBinContent(18,0.02386621);
   phimetphimub132->SetBinContent(19,0.01547046);
   phimetphimub132->SetBinContent(20,0.01692456);
   phimetphimub132->SetBinError(1,0.002300296);
   phimetphimub132->SetBinError(2,0.002093618);
   phimetphimub132->SetBinError(3,0.003292189);
   phimetphimub132->SetBinError(4,0.003106876);
   phimetphimub132->SetBinError(5,0.002794282);
   phimetphimub132->SetBinError(6,0.00320389);
   phimetphimub132->SetBinError(7,0.002402617);
   phimetphimub132->SetBinError(8,0.001933477);
   phimetphimub132->SetBinError(9,0.003151719);
   phimetphimub132->SetBinError(10,0.002992584);
   phimetphimub132->SetBinError(11,0.003214189);
   phimetphimub132->SetBinError(12,0.002992859);
   phimetphimub132->SetBinError(13,0.002234074);
   phimetphimub132->SetBinError(14,0.003482324);
   phimetphimub132->SetBinError(15,0.002742025);
   phimetphimub132->SetBinError(16,0.003123524);
   phimetphimub132->SetBinError(17,0.003237001);
   phimetphimub132->SetBinError(18,0.00265513);
   phimetphimub132->SetBinError(19,0.00165092);
   phimetphimub132->SetBinError(20,0.002647981);
   phimetphimub132->SetEntries(7038);

   ci = TColor::GetColor("#00ffff");
   phimetphimub132->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphimub132->SetLineColor(ci);

   ci = TColor::GetColor("#00ffff");
   phimetphimub132->SetMarkerColor(ci);
   phimetphimub132->SetMarkerStyle(20);
   phimetphimub132->GetXaxis()->SetTitle("phimetphimub1");
   phimetphimub132->GetXaxis()->SetLabelFont(42);
   phimetphimub132->GetXaxis()->SetLabelSize(0.035);
   phimetphimub132->GetXaxis()->SetTitleSize(0.035);
   phimetphimub132->GetXaxis()->SetTitleFont(42);
   phimetphimub132->GetYaxis()->SetTitle("Events/pb");
   phimetphimub132->GetYaxis()->SetLabelFont(42);
   phimetphimub132->GetYaxis()->SetLabelSize(0.035);
   phimetphimub132->GetYaxis()->SetTitleSize(0.035);
   phimetphimub132->GetYaxis()->SetTitleFont(42);
   phimetphimub132->GetZaxis()->SetLabelFont(42);
   phimetphimub132->GetZaxis()->SetLabelSize(0.035);
   phimetphimub132->GetZaxis()->SetTitleSize(0.035);
   phimetphimub132->GetZaxis()->SetTitleFont(42);
   b1/phimetphimub1->Add(phimetphimub1,"");
   
   TH1D *phimetphimub133 = new TH1D("phimetphimub133"," #Delta_{#phi}[#mu,MET]",20,-3.141593,3.141593);
   phimetphimub133->SetBinContent(1,0.008117942);
   phimetphimub133->SetBinContent(2,0.008450776);
   phimetphimub133->SetBinContent(3,0.00850497);
   phimetphimub133->SetBinContent(4,0.008022807);
   phimetphimub133->SetBinContent(5,0.007179285);
   phimetphimub133->SetBinContent(6,0.007652989);
   phimetphimub133->SetBinContent(7,0.008141785);
   phimetphimub133->SetBinContent(8,0.007790889);
   phimetphimub133->SetBinContent(9,0.008510695);
   phimetphimub133->SetBinContent(10,0.007696408);
   phimetphimub133->SetBinContent(11,0.007960577);
   phimetphimub133->SetBinContent(12,0.008392843);
   phimetphimub133->SetBinContent(13,0.007757584);
   phimetphimub133->SetBinContent(14,0.008095291);
   phimetphimub133->SetBinContent(15,0.007856008);
   phimetphimub133->SetBinContent(16,0.008004501);
   phimetphimub133->SetBinContent(17,0.008575535);
   phimetphimub133->SetBinContent(18,0.007966413);
   phimetphimub133->SetBinContent(19,0.009244479);
   phimetphimub133->SetBinContent(20,0.008697624);
   phimetphimub133->SetBinError(1,0.0005364155);
   phimetphimub133->SetBinError(2,0.0005322625);
   phimetphimub133->SetBinError(3,0.0005613063);
   phimetphimub133->SetBinError(4,0.0005125649);
   phimetphimub133->SetBinError(5,0.0004618413);
   phimetphimub133->SetBinError(6,0.0004986645);
   phimetphimub133->SetBinError(7,0.0005338713);
   phimetphimub133->SetBinError(8,0.0005155302);
   phimetphimub133->SetBinError(9,0.0005625811);
   phimetphimub133->SetBinError(10,0.000480022);
   phimetphimub133->SetBinError(11,0.0004972726);
   phimetphimub133->SetBinError(12,0.0005308134);
   phimetphimub133->SetBinError(13,0.0004951809);
   phimetphimub133->SetBinError(14,0.0005118416);
   phimetphimub133->SetBinError(15,0.0004937886);
   phimetphimub133->SetBinError(16,0.0005208873);
   phimetphimub133->SetBinError(17,0.0005600284);
   phimetphimub133->SetBinError(18,0.0005207923);
   phimetphimub133->SetBinError(19,0.0005906292);
   phimetphimub133->SetBinError(20,0.0005551007);
   phimetphimub133->SetEntries(10014);

   ci = TColor::GetColor("#ffcc00");
   phimetphimub133->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphimub133->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   phimetphimub133->SetMarkerColor(ci);
   phimetphimub133->SetMarkerStyle(21);
   phimetphimub133->GetXaxis()->SetTitle("phimetphimub1");
   phimetphimub133->GetXaxis()->SetLabelFont(42);
   phimetphimub133->GetXaxis()->SetLabelSize(0.035);
   phimetphimub133->GetXaxis()->SetTitleSize(0.035);
   phimetphimub133->GetXaxis()->SetTitleFont(42);
   phimetphimub133->GetYaxis()->SetTitle("Events/pb");
   phimetphimub133->GetYaxis()->SetLabelFont(42);
   phimetphimub133->GetYaxis()->SetLabelSize(0.035);
   phimetphimub133->GetYaxis()->SetTitleSize(0.035);
   phimetphimub133->GetYaxis()->SetTitleFont(42);
   phimetphimub133->GetZaxis()->SetLabelFont(42);
   phimetphimub133->GetZaxis()->SetLabelSize(0.035);
   phimetphimub133->GetZaxis()->SetTitleSize(0.035);
   phimetphimub133->GetZaxis()->SetTitleFont(42);
   b1/phimetphimub1->Add(phimetphimub1,"");
   
   TH1D *phimetphimub134 = new TH1D("phimetphimub134"," #Delta_{#phi}[#mu,MET]",20,-3.141593,3.141593);
   phimetphimub134->SetBinContent(1,0.0001388212);
   phimetphimub134->SetBinContent(2,0.0003701898);
   phimetphimub134->SetBinContent(3,0.0003393407);
   phimetphimub134->SetBinContent(4,0.0004164636);
   phimetphimub134->SetBinContent(5,0.000509011);
   phimetphimub134->SetBinContent(6,0.0003393407);
   phimetphimub134->SetBinContent(7,0.0007249551);
   phimetphimub134->SetBinContent(8,0.0007558042);
   phimetphimub134->SetBinContent(9,0.001033447);
   phimetphimub134->SetBinContent(10,0.0009717483);
   phimetphimub134->SetBinContent(11,0.001048871);
   phimetphimub134->SetBinContent(12,0.0008637763);
   phimetphimub134->SetBinContent(13,0.00107972);
   phimetphimub134->SetBinContent(14,0.0006478322);
   phimetphimub134->SetBinContent(15,0.0005398602);
   phimetphimub134->SetBinContent(16,0.0004473127);
   phimetphimub134->SetBinContent(17,0.0003856144);
   phimetphimub134->SetBinContent(18,0.0001850949);
   phimetphimub134->SetBinContent(19,0.0002776424);
   phimetphimub134->SetBinContent(20,0.0002159441);
   phimetphimub134->SetBinError(1,4.627373e-05);
   phimetphimub134->SetBinError(2,7.556468e-05);
   phimetphimub134->SetBinError(3,7.234767e-05);
   phimetphimub134->SetBinError(4,8.014845e-05);
   phimetphimub134->SetBinError(5,8.860744e-05);
   phimetphimub134->SetBinError(6,7.234767e-05);
   phimetphimub134->SetBinError(7,0.0001057456);
   phimetphimub134->SetBinError(8,0.000107972);
   phimetphimub134->SetBinError(9,0.0001262556);
   phimetphimub134->SetBinError(10,0.0001224288);
   phimetphimub134->SetBinError(11,0.0001271943);
   phimetphimub134->SetBinError(12,0.000115427);
   phimetphimub134->SetBinError(13,0.0001290513);
   phimetphimub134->SetBinError(14,9.996268e-05);
   phimetphimub134->SetBinError(15,9.125302e-05);
   phimetphimub134->SetBinError(16,8.306388e-05);
   phimetphimub134->SetBinError(17,7.712288e-05);
   phimetphimub134->SetBinError(18,5.34323e-05);
   phimetphimub134->SetBinError(19,6.544093e-05);
   phimetphimub134->SetBinError(20,5.771348e-05);
   phimetphimub134->SetEntries(732);

   ci = TColor::GetColor("#ff0000");
   phimetphimub134->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphimub134->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   phimetphimub134->SetMarkerColor(ci);
   phimetphimub134->SetMarkerStyle(20);
   phimetphimub134->GetXaxis()->SetTitle("phimetphimub1");
   phimetphimub134->GetXaxis()->SetLabelFont(42);
   phimetphimub134->GetXaxis()->SetLabelSize(0.035);
   phimetphimub134->GetXaxis()->SetTitleSize(0.035);
   phimetphimub134->GetXaxis()->SetTitleFont(42);
   phimetphimub134->GetYaxis()->SetTitle("Events/pb");
   phimetphimub134->GetYaxis()->SetLabelFont(42);
   phimetphimub134->GetYaxis()->SetLabelSize(0.035);
   phimetphimub134->GetYaxis()->SetTitleSize(0.035);
   phimetphimub134->GetYaxis()->SetTitleFont(42);
   phimetphimub134->GetZaxis()->SetLabelFont(42);
   phimetphimub134->GetZaxis()->SetLabelSize(0.035);
   phimetphimub134->GetZaxis()->SetTitleSize(0.035);
   phimetphimub134->GetZaxis()->SetTitleFont(42);
   b1/phimetphimub1->Add(phimetphimub1,"");
   
   TH1D *phimetphimub135 = new TH1D("phimetphimub135"," #Delta_{#phi}[#mu,MET]",20,-3.141593,3.141593);
   phimetphimub135->SetBinContent(4,1.677165e-05);
   phimetphimub135->SetBinContent(15,1.677165e-05);
   phimetphimub135->SetBinError(4,1.677165e-05);
   phimetphimub135->SetBinError(15,1.677165e-05);
   phimetphimub135->SetEntries(2);

   ci = TColor::GetColor("#0000ff");
   phimetphimub135->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphimub135->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   phimetphimub135->SetMarkerColor(ci);
   phimetphimub135->SetMarkerStyle(21);
   phimetphimub135->GetXaxis()->SetTitle("phimetphimub1");
   phimetphimub135->GetXaxis()->SetLabelFont(42);
   phimetphimub135->GetXaxis()->SetLabelSize(0.035);
   phimetphimub135->GetXaxis()->SetTitleSize(0.035);
   phimetphimub135->GetXaxis()->SetTitleFont(42);
   phimetphimub135->GetYaxis()->SetTitle("Events/pb");
   phimetphimub135->GetYaxis()->SetLabelFont(42);
   phimetphimub135->GetYaxis()->SetLabelSize(0.035);
   phimetphimub135->GetYaxis()->SetTitleSize(0.035);
   phimetphimub135->GetYaxis()->SetTitleFont(42);
   phimetphimub135->GetZaxis()->SetLabelFont(42);
   phimetphimub135->GetZaxis()->SetLabelSize(0.035);
   phimetphimub135->GetZaxis()->SetTitleSize(0.035);
   phimetphimub135->GetZaxis()->SetTitleFont(42);
   b1/phimetphimub1->Add(phimetphimub1,"");
   b1/phimetphimub1->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.2708908,0.9342857,0.7291092,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("b1/phimetphimub1");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.54023,0.639881,0.938218,0.924107,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.034965);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phimetphimub1","b1/phimetphimub1_QCD_b1/","lp");

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00cc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphimub1","b1/phimetphimub1_WJetsToLNu_b1/","lp");

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ffff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphimub1","b1/phimetphimub1_ZJetsToNuNu_b1/","lp");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphimub1","b1/phimetphimub1_signal_b1/","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("phimetphimub1","b1/phimetphimub1_ttbar_b1/","lp");

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
   b1/phimetphimub1->Modified();
   b1/phimetphimub1->cd();
   b1/phimetphimub1->SetSelected(b1/phimetphimub1);
}
