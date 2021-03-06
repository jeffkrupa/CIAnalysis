void limitPlotCI_Run2CI_singleBin2800_DesLL()
{
//=========Macro generated from canvas: cCL/cCL
//=========  (Thu Jan 17 17:42:02 2019) by ROOT version6.06/09
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
   plotPad->Range(5.5,-3.713659,50.5,0.4126288);
   plotPad->SetFillColor(0);
   plotPad->SetBorderMode(0);
   plotPad->SetBorderSize(2);
   plotPad->SetLogy();
   plotPad->SetFrameBorderMode(0);
   plotPad->SetFrameBorderMode(0);
   
   TH1F *DummyGraph = new TH1F("DummyGraph","",100,10,46);
   DummyGraph->SetMinimum(0.0005);
   DummyGraph->SetMaximum(1);
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
   DummyGraph->GetYaxis()->SetTitle("95% CL limit on #sigma(pp#rightarrow CI+X#rightarrow#font[12]{ll}) [pb]");
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
   -0.000224496,
   -0.004301513,
   -0.0102447,
   -0.01810965,
   -0.02833858,
   -0.04375196,
   -0.05627966,
   -0.01726923,
   -0.01193774,
   -0.008256487,
   -0.004967577,
   -0.002945342,
   -0.0011765,
   -6.114766e-05};
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
   Graph_Graph3007->SetMinimum(5.560704e-06);
   Graph_Graph3007->SetMaximum(0.005560704);
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
   -0.0001684195,
   -0.003064086,
   -0.007261435,
   -0.01303199,
   -0.02139091,
   -0.03117428,
   -0.04579636,
   -0.02270525,
   -0.01596431,
   -0.01088747,
   -0.006460884,
   -0.003685967,
   -0.001564971,
   -8.513452e-05};
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
   Graph_Graph3008->SetMinimum(4.485988e-06);
   Graph_Graph3008->SetMaximum(0.004485988);
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
   -0.0001180015,
   -0.002176672,
   -0.005201826,
   -0.009251755,
   -0.0150513,
   -0.02287375,
   -0.03220576};
   TGraph *graph = new TGraph(7,Graph2_fx7,Graph2_fy7);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,6.4,49.6);
   Graph_Graph7->SetMinimum(3.090774e-06);
   Graph_Graph7->SetMaximum(0.003090774);
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
   -0.0001843993,
   -0.003309494,
   -0.007939974,
   -0.01453213,
   -0.02323451,
   -0.03493428,
   -0.04803873};
   graph = new TGraph(7,Graph3_fx8,Graph3_fy8);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,6.4,49.6);
   Graph_Graph8->SetMinimum(4.601034e-06);
   Graph_Graph8->SetMaximum(0.004601034);
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
   
   TF1 *func4 = new TF1("func","[2]*([0]/x^2+[1]/x^4)",10,46);
   func4->SetFillColor(19);
   func4->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   func4->SetLineColor(ci);
   func4->SetLineWidth(3);
   func4->GetXaxis()->SetLabelFont(42);
   func4->GetXaxis()->SetLabelSize(0.035);
   func4->GetXaxis()->SetTitleSize(0.035);
   func4->GetXaxis()->SetTitleFont(42);
   func4->GetYaxis()->SetLabelFont(42);
   func4->GetYaxis()->SetLabelSize(0.035);
   func4->GetYaxis()->SetTitleSize(0.035);
   func4->GetYaxis()->SetTitleFont(42);
   func4->SetParameter(0,-3.81353);
   func4->SetParError(0,0);
   func4->SetParLimits(0,0,0);
   func4->SetParameter(1,345.912);
   func4->SetParError(1,0);
   func4->SetParLimits(1,0,0);
   func4->SetParameter(2,1.3);
   func4->SetParError(2,0);
   func4->SetParLimits(2,0,0);
   func4->Draw("sameR");
   
   TPaveLabel *pl = new TPaveLabel(0.15,0.81,0.25,0.88,"CMS","NBNDC");
   pl->SetBorderSize(0);
   pl->SetFillColor(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextSize(0.99);
   pl->Draw();
   
   TLegend *leg = new TLegend(0.440517,0.523051,0.834885,0.878644,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(0);
   leg->SetLineWidth(0);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph3","Obs. 95% CL limit","l");
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
   entry=leg->AddEntry("func","destructive left-left","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
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
   
   TH1F *DummyGraph_copy = new TH1F("DummyGraph_copy","",100,10,46);
   DummyGraph_copy->SetMinimum(0.0005);
   DummyGraph_copy->SetMaximum(1);
   DummyGraph_copy->SetDirectory(0);
   DummyGraph_copy->SetStats(0);

   ci = TColor::GetColor("#000099");
   DummyGraph_copy->SetLineColor(ci);
   DummyGraph_copy->GetXaxis()->SetTitle("#Lambda [TeV]");
   DummyGraph_copy->GetXaxis()->SetRange(1,100);
   DummyGraph_copy->GetXaxis()->SetLabelFont(42);
   DummyGraph_copy->GetXaxis()->SetTitleSize(0.045);
   DummyGraph_copy->GetXaxis()->SetTitleFont(42);
   DummyGraph_copy->GetYaxis()->SetTitle("95% CL limit on #sigma(pp#rightarrow CI+X#rightarrow#font[12]{ll}) [pb]");
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
