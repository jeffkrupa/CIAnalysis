void limitPlotCI_Run2CI_multibin_DesRR()
{
//=========Macro generated from canvas: cCL/cCL
//=========  (Thu Jan 17 17:48:00 2019) by ROOT version6.06/09
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
   
   Double_t Graph0_fx3011[14] = {
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
   Double_t Graph0_fy3011[14] = {
   0.00027524,
   -0.002688305,
   -0.01172062,
   -0.03770053,
   -0.04384185,
   -0.06710823,
   -0.07880574,
   -0.07329629,
   -0.05082986,
   -0.02748468,
   -0.01138237,
   -0.003180839,
   -0.0007166154,
   0.001100512};
   Double_t Graph0_felx3011[14] = {
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
   Double_t Graph0_fely3011[14] = {
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
   Double_t Graph0_fehx3011[14] = {
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
   Double_t Graph0_fehy3011[14] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,Graph0_fx3011,Graph0_fy3011,Graph0_felx3011,Graph0_fehx3011,Graph0_fely3011,Graph0_fehy3011);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   grae->SetFillColor(ci);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","Graph",100,6.4,49.6);
   Graph_Graph3011->SetMinimum(9.091137e-06);
   Graph_Graph3011->SetMaximum(0.009091137);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3011->SetLineColor(ci);
   Graph_Graph3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("f");
   
   Double_t Graph1_fx3012[14] = {
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
   Double_t Graph1_fy3012[14] = {
   0.0003857718,
   -0.001969597,
   -0.00827727,
   -0.02724084,
   -0.04105201,
   -0.06480998,
   -0.07776804,
   -0.0747049,
   -0.05538536,
   -0.03044243,
   -0.01457048,
   -0.00411922,
   -0.0009596198,
   0.0008375893};
   Double_t Graph1_felx3012[14] = {
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
   Double_t Graph1_fely3012[14] = {
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
   Double_t Graph1_fehx3012[14] = {
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
   Double_t Graph1_fehy3012[14] = {
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
   grae = new TGraphAsymmErrors(14,Graph1_fx3012,Graph1_fy3012,Graph1_felx3012,Graph1_fehx3012,Graph1_fely3012,Graph1_fehy3012);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   grae->SetFillColor(ci);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","Graph",100,6.4,49.6);
   Graph_Graph3012->SetMinimum(8.698152e-06);
   Graph_Graph3012->SetMaximum(0.008698152);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3012->SetLineColor(ci);
   Graph_Graph3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("f");
   
   Double_t Graph2_fx11[7] = {
   10,
   16,
   22,
   28,
   34,
   40,
   46};
   Double_t Graph2_fy11[7] = {
   0.0005631493,
   -0.001359915,
   -0.005863034,
   -0.01916031,
   -0.03549489,
   -0.06079785,
   -0.07628331};
   TGraph *graph = new TGraph(7,Graph2_fx11,Graph2_fy11);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,6.4,49.6);
   Graph_Graph11->SetMinimum(8.247795e-06);
   Graph_Graph11->SetMaximum(0.008247795);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11->SetLineColor(ci);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
   graph->Draw("lp");
   
   Double_t Graph3_fx12[7] = {
   10,
   16,
   22,
   28,
   34,
   40,
   46};
   Double_t Graph3_fy12[7] = {
   0.0008966804,
   -0.002330224,
   -0.009229466,
   -0.02372303,
   -0.03261739,
   -0.05735028,
   -0.07585045};
   graph = new TGraph(7,Graph3_fx12,Graph3_fy12);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Graph",100,6.4,49.6);
   Graph_Graph12->SetMinimum(8.571394e-06);
   Graph_Graph12->SetMaximum(0.008571394);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph12->SetLineColor(ci);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph12->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph12->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph12->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12);
   
   graph->Draw("pl");
   
   TF1 *func6 = new TF1("func","[2]*([0]/x^2+[1]/x^4)",10,46);
   func6->SetFillColor(19);
   func6->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   func6->SetLineColor(ci);
   func6->SetLineWidth(3);
   func6->GetXaxis()->SetLabelFont(42);
   func6->GetXaxis()->SetLabelSize(0.035);
   func6->GetXaxis()->SetTitleSize(0.035);
   func6->GetXaxis()->SetTitleFont(42);
   func6->GetYaxis()->SetLabelFont(42);
   func6->GetYaxis()->SetLabelSize(0.035);
   func6->GetYaxis()->SetTitleSize(0.035);
   func6->GetYaxis()->SetTitleFont(42);
   func6->SetParameter(0,-4.76197);
   func6->SetParError(0,0);
   func6->SetParLimits(0,0,0);
   func6->SetParameter(1,705.997);
   func6->SetParError(1,0);
   func6->SetParLimits(1,0,0);
   func6->SetParameter(2,1.3);
   func6->SetParError(2,0);
   func6->SetParLimits(2,0,0);
   func6->Draw("sameR");
   
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
   entry=leg->AddEntry("func","destructive right-right","l");

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
