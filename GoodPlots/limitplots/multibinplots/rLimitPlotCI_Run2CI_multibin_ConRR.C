void rLimitPlotCI_Run2CI_multibin_ConRR()
{
//=========Macro generated from canvas: cCL/cCL
//=========  (Thu Jan 17 17:47:50 2019) by ROOT version6.06/09
   TCanvas *cCL = new TCanvas("cCL", "cCL",0,0,800,500);
   gStyle->SetOptStat(0);
   cCL->SetHighLightColor(2);
   cCL->Range(0,0,1,1);
   cCL->SetFillColor(0);
   cCL->SetBorderMode(0);
   cCL->SetBorderSize(2);
   cCL->SetTickx(1);
   cCL->SetTicky(1);
   cCL->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: plotPad
   TPad *plotPad = new TPad("plotPad", "plotPad",0,0,1,1);
   plotPad->Draw();
   plotPad->cd();
   plotPad->Range(6.25,-0.5,43.75,4.5);
   plotPad->SetFillColor(0);
   plotPad->SetBorderMode(0);
   plotPad->SetBorderSize(2);
   plotPad->SetFrameBorderMode(0);
   plotPad->SetFrameBorderMode(0);
   
   TH1F *DummyGraph = new TH1F("DummyGraph","",100,10,40);
   DummyGraph->SetMinimum(0);
   DummyGraph->SetMaximum(4);
   DummyGraph->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   DummyGraph->SetLineColor(ci);
   DummyGraph->GetXaxis()->SetTitle("#Lambda [TeV]");
   DummyGraph->GetXaxis()->SetRange(1,100);
   DummyGraph->GetXaxis()->SetLabelFont(42);
   DummyGraph->GetXaxis()->SetTitleSize(0.045);
   DummyGraph->GetXaxis()->SetTitleFont(42);
   DummyGraph->GetYaxis()->SetTitle("95% CL limit on signal strength #mu");
   DummyGraph->GetYaxis()->SetLabelFont(42);
   DummyGraph->GetYaxis()->SetTitleSize(0.045);
   DummyGraph->GetYaxis()->SetTitleFont(42);
   DummyGraph->GetZaxis()->SetLabelFont(42);
   DummyGraph->GetZaxis()->SetLabelSize(0.035);
   DummyGraph->GetZaxis()->SetTitleSize(0.035);
   DummyGraph->GetZaxis()->SetTitleFont(42);
   DummyGraph->Draw("");
   
   Double_t Graph0_fx3005[14] = {
   10,
   16,
   22,
   28,
   34,
   40,
   46,
   46,
   40,
   34,
   28,
   22,
   16,
   10};
   Double_t Graph0_fy3005[14] = {
   0.006012566,
   0.03417108,
   0.1018402,
   0.1902201,
   0.4104122,
   0.5293511,
   0.7371048,
   3.669386,
   2.653842,
   1.461687,
   1.053104,
   0.4966492,
   0.1537254,
   0.03183515};
   Double_t Graph0_felx3005[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fely3005[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fehx3005[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fehy3005[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,Graph0_fx3005,Graph0_fy3005,Graph0_felx3005,Graph0_fehx3005,Graph0_fely3005,Graph0_fehy3005);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   grae->SetFillColor(ci);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","Graph",100,6.4,49.6);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(4.035723);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3005->SetLineColor(ci);
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("f");
   
   Double_t Graph1_fx3006[14] = {
   10,
   16,
   22,
   28,
   34,
   40,
   46,
   46,
   40,
   34,
   28,
   22,
   16,
   10};
   Double_t Graph1_fy3006[14] = {
   0.008737772,
   0.05147361,
   0.1630374,
   0.3003187,
   0.5784013,
   0.8433824,
   1.184911,
   2.720007,
   1.882923,
   1.16842,
   0.7086615,
   0.3498439,
   0.1182126,
   0.02258536};
   Double_t Graph1_felx3006[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fely3006[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fehx3006[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fehy3006[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(14,Graph1_fx3006,Graph1_fy3006,Graph1_felx3006,Graph1_fehx3006,Graph1_fely3006,Graph1_fehy3006);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   grae->SetFillColor(ci);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","Graph",100,6.4,49.6);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2.991134);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3006->SetLineColor(ci);
   Graph_Graph3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("f");
   
   Double_t Graph2_fx5[7] = {
   10,
   16,
   22,
   28,
   34,
   40,
   46};
   Double_t Graph2_fy5[7] = {
   0.01516071,
   0.07842317,
   0.2453614,
   0.46703,
   0.8243214,
   1.266856,
   1.796903};
   TGraph *graph = new TGraph(7,Graph2_fx5,Graph2_fy5);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,6.4,49.6);
   Graph_Graph5->SetMinimum(0);
   Graph_Graph5->SetMaximum(1.975077);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   graph->Draw("lp");
   
   Double_t Graph3_fx6[7] = {
   10,
   16,
   22,
   28,
   34,
   40,
   46};
   Double_t Graph3_fy6[7] = {
   0.02263237,
   0.1381186,
   0.3583534,
   0.7888764,
   1.056766,
   1.779853,
   2.231687};
   graph = new TGraph(7,Graph3_fx6,Graph3_fy6);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,6.4,49.6);
   Graph_Graph6->SetMinimum(0);
   Graph_Graph6->SetMaximum(2.452592);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   graph->Draw("pl");
   
   TPaveLabel *pl = new TPaveLabel(0.15,0.81,0.25,0.88,"CMS","NBNDC");
   pl->SetBorderSize(0);
   pl->SetFillColor(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextSize(0.99);
   pl->Draw();
   
   TLegend *leg = new TLegend(0.15,0.473051,0.375,0.728644,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(0);
   leg->SetLineWidth(0);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","constructive right-right","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","Obs. 95% CL limit","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","Exp. 95% CL limit, median","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","Exp. (68%)","f");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","Exp. (95%)","f");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   pl = new TPaveLabel(0.4,0.905,0.9,0.99,"137.4 fb^{-1} (13 TeV, ee) + 140.1 fb^{-1} (13 TeV, #mu#mu)","NBNDC");
   pl->SetBorderSize(0);
   pl->SetFillColor(0);
   pl->SetTextFont(42);
   pl->SetTextSize(0.5);
   pl->Draw();
   TLine *line = new TLine(10,1,40,1);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *DummyGraph_copy = new TH1F("DummyGraph_copy","",100,10,40);
   DummyGraph_copy->SetMinimum(0);
   DummyGraph_copy->SetMaximum(4);
   DummyGraph_copy->SetDirectory(0);
   DummyGraph_copy->SetStats(0);

   ci = TColor::GetColor("#000099");
   DummyGraph_copy->SetLineColor(ci);
   DummyGraph_copy->GetXaxis()->SetTitle("#Lambda [TeV]");
   DummyGraph_copy->GetXaxis()->SetRange(1,100);
   DummyGraph_copy->GetXaxis()->SetLabelFont(42);
   DummyGraph_copy->GetXaxis()->SetTitleSize(0.045);
   DummyGraph_copy->GetXaxis()->SetTitleFont(42);
   DummyGraph_copy->GetYaxis()->SetTitle("95% CL limit on signal strength #mu");
   DummyGraph_copy->GetYaxis()->SetLabelFont(42);
   DummyGraph_copy->GetYaxis()->SetTitleSize(0.045);
   DummyGraph_copy->GetYaxis()->SetTitleFont(42);
   DummyGraph_copy->GetZaxis()->SetLabelFont(42);
   DummyGraph_copy->GetZaxis()->SetLabelSize(0.035);
   DummyGraph_copy->GetZaxis()->SetTitleSize(0.035);
   DummyGraph_copy->GetZaxis()->SetTitleFont(42);
   DummyGraph_copy->Draw("sameaxis");
   plotPad->Modified();
   cCL->cd();
   cCL->Modified();
   cCL->cd();
   cCL->SetSelected(cCL);
}
