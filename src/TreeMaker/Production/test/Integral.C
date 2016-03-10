{
   TFile *f = new TFile("Signal_plots.root", "READ");
   TH2D* hist = (TH2D*)f->Get("METvspTjet2");
   TH2D *cutportion = (TH2D*)hist->Clone("cutportion");
   double total = hist->Integral(0, -1, 0, -1);
   cout << "Total : " << total << endl;
   for(int x=1; x<hist->GetNbinsX()+1; ++x) {
      for(int y=1; y<hist->GetNbinsY()+1; ++y){
         
         cutportion->SetBinContent(x, y, hist->Integral(x, -1, y, -1)/total);
         
      }
   }
   TH2D* hist2 = (TH2D*)f->Get("METvspTjet2noWeight");
   TH2D *cutportion2 = (TH2D*)hist2->Clone("cutportion2");
   double total2 = hist2->Integral(0, -1, 0, -1);
   cout << "Total : " << total2 << endl;

   for(int x=1; x<hist2->GetNbinsX()+1; ++x) {
      for(int y=1; y<hist2->GetNbinsY()+1; ++y){
         
         cutportion2->SetBinContent(x, y, hist2->Integral(x, -1, y, -1)/total2);
         
      }
   }
   TH2D* hist3 = (TH2D*)f->Get("mjjvsMET");
   TH2D *cutportion3 = (TH2D*)hist3->Clone("cutportion3");
   double total3 = hist3->Integral(0, -1, 0, -1);
   cout << "Total : " << total3 << endl;

   for(int x=1; x<hist3->GetNbinsX()+1; ++x) {
      for(int y=1; y<hist3->GetNbinsY()+1; ++y){
         
         cutportion3->SetBinContent(x, y, hist3->Integral(x, -1, y, -1)/total3);
         
      }
   }
   TH2D* hist4 = (TH2D*)f->Get("mjjvsMETnoWeight");
   TH2D *cutportion4 = (TH2D*)hist4->Clone("cutportion4");
   double total4 = hist4->Integral(0, -1, 0, -1);
   cout << "Total : " << total4 << endl;

   for(int x=1; x<hist4->GetNbinsX()+1; ++x) {
      for(int y=1; y<hist4->GetNbinsY()+1; ++y){

         cutportion4->SetBinContent(x, y, hist4->Integral(x, -1, y, -1)/total4);

      }
   }
   TCanvas *a = new TCanvas("a", "a", 1500, 1500);
   gStyle->SetOptStat(0);
   a->Divide(2,2);

   a->cd(1);
   cutportion->Draw("colz");
   a->cd(2);
   cutportion2->Draw("colz");
   a->cd(3);
   cutportion3->Draw("colz");
   a->cd(4);
   cutportion4->Draw("colz");
}
