void rLimitPlotCI_Run2CI_singleBin2800_DesLL()
{
//=========Macro generated from canvas: cCL/cCL
//=========  (Thu Jan 17 17:42:29 2019) by ROOT version6.06/09
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
   
   Double_t Graph0_fx3007[14] = {
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
   Double_t Graph0_fy3007[14] = {
   0.01327182,
   0.09409045,
   0.3538662,
   0.8883602,
   2.089158,
   4.084301,
   7.700975,
   25.09715,
   14.96902,
   7.170576,
   3.238579,
   1.230843,
   0.344013,
   0.04872584};
   Double_t Graph0_felx3007[14] = {
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
   Double_t Graph0_fely3007[14] = {
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
   Double_t Graph0_fehx3007[14] = {
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
   Double_t Graph0_fehy3007[14] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,Graph0_fx3007,Graph0_fy3007,Graph0_felx3007,Graph0_fehx3007,Graph0_fely3007,Graph0_fehy3007);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   grae->SetFillColor(ci);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","Graph",100,6.4,49.6);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(27.60553);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3007->SetLineColor(ci);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("f");
   
   Double_t Graph1_fx3008[14] = {
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
   Double_t Graph1_fy3008[14] = {
   0.01847806,
   0.1251584,
   0.4428482,
   1.155411,
   2.754881,
   5.461927,
   10.1251,
   20.42226,
   10.66577,
   5.41259,
   2.330534,
   0.8724205,
   0.24505,
   0.03655469};
   Double_t Graph1_felx3008[14] = {
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
   Double_t Graph1_fely3008[14] = {
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
   Double_t Graph1_fehx3008[14] = {
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
   Double_t Graph1_fehy3008[14] = {
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
   grae = new TGraphAsymmErrors(14,Graph1_fx3008,Graph1_fy3008,Graph1_felx3008,Graph1_fehx3008,Graph1_fely3008,Graph1_fehy3008);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   grae->SetFillColor(ci);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","Graph",100,6.4,49.6);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(22.46264);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3008->SetLineColor(ci);
   Graph_Graph3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("f");
   
   Double_t Graph2_fx7[7] = {
   10,
   16,
   22,
   28,
   34,
   40,
   46};
   Double_t Graph2_fy7[7] = {
   0.02568473,
   0.1746654,
   0.6267669,
   1.654836,
   3.810277,
   7.826016,
   14.48009};
   TGraph *graph = new TGraph(7,Graph2_fx7,Graph2_fy7);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,6.4,49.6);
   Graph_Graph7->SetMinimum(0);
   Graph_Graph7->SetMaximum(15.92553);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph7);
   
   graph->Draw("lp");
   
   Double_t Graph3_fx8[7] = {
   10,
   16,
   22,
   28,
   34,
   40,
   46};
   Double_t Graph3_fy8[7] = {
   0.04002303,
   0.2646765,
   0.9539432,
   2.598806,
   5.87908,
   11.95219,
   21.42221};
   graph = new TGraph(7,Graph3_fx8,Graph3_fy8);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,6.4,49.6);
   Graph_Graph8->SetMinimum(0);
   Graph_Graph8->SetMaximum(23.56043);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph8);
   
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
   TLegendEntry *entry=leg->AddEntry("NULL","destructive left-left","h");
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
