import argparse	
import ROOT
ROOT.PyConfig.IgnoreCommandLineOptions = True

from ROOT import TCanvas, TPad, TH1F, TH1I, THStack, TLegend, TMath, gROOT
import ratios
from setTDRStyle import setTDRStyle
gROOT.SetBatch(True)
from helpers import *
from defs import getPlot, Backgrounds, Backgrounds2016, Signals, Signals2016, Data, Data2016, Data2018, path, plotList, zScale, zScale2016, zScale2018
import math
import os
from copy import copy



def plotDataMC(args,plot):
	

	hCanvas = TCanvas("hCanvas", "Distribution", 800,800)
	if args.ratio:
		plotPad = ROOT.TPad("plotPad","plotPad",0,0.3,1,1)
		ratioPad = ROOT.TPad("ratioPad","ratioPad",0,0.,1,0.3)
		setTDRStyle()		
		plotPad.UseCurrentStyle()
		ratioPad.UseCurrentStyle()
		plotPad.Draw()	
		ratioPad.Draw()	
		plotPad.cd()
	else:
		plotPad = ROOT.TPad("plotPad","plotPad",0,0,1,1)
		setTDRStyle()
		plotPad.UseCurrentStyle()
		plotPad.Draw()	
		plotPad.cd()	
		
	colors = createMyColors()		
	if args.use2016:
		data = Process(Data2016, normalized=True)
	elif args.use2018:
		data = Process(Data2018, normalized=True)
	else:	
		data = Process(Data, normalized=True)
	
	eventCounts = totalNumberOfGeneratedEvents(path,plot.muon)	
	negWeights = negWeightFractions(path,plot.muon)
	
	backgrounds = copy(args.backgrounds)
	if plot.useJets:
		if "Wjets" in backgrounds:
			backgrounds.remove("Wjets")
		backgrounds.insert(0,"Jets")
	processes = []
        processes2 = []
	for background in backgrounds:
		if args.use2016:
			if background == "Jets":
				processes.append(Process(getattr(Backgrounds2016,background),eventCounts,negWeights,normalized=True))
			else:	
				processes.append(Process(getattr(Backgrounds2016,background),eventCounts,negWeights))
		elif args.useAll:
			if background == "Jets":
				processes.append(Process(getattr(Backgrounds,background),eventCounts,negWeights,normalized=True))
				processes2.append(Process(getattr(Backgrounds2016,background),eventCounts,negWeights,normalized=True))

			else:	
				processes.append(Process(getattr(Backgrounds,background),eventCounts,negWeights))
				processes2.append(Process(getattr(Backgrounds2016,background),eventCounts,negWeights))
		else:
			if background == "Jets":
				processes.append(Process(getattr(Backgrounds,background),eventCounts,negWeights,normalized=True))
			else:	
				processes.append(Process(getattr(Backgrounds,background),eventCounts,negWeights))
	
	signals = []
	for signal in args.signals:
		if args.use2016:
			signals.append(Process(getattr(Signals2016,signal),eventCounts,negWeights))
		elif arge.useAll:
			signals.append(Process(getattr(Signals,signal),eventCounts,negWeights))
			signals.append(Process(getattr(Signals2016,signal),eventCounts,negWeights))
                else:	
			signals.append(Process(getattr(Signals,signal),eventCounts,negWeights))
		
	legend = TLegend(0.55, 0.6, 0.925, 0.925)
	legend.SetFillStyle(0)
	legend.SetBorderSize(0)
	legend.SetTextFont(42)
	
	legendEta = TLegend(0.35, 0.55, 0.9, 0.9)
	legendEta.SetFillStyle(0)
	legendEta.SetBorderSize(0)
	legendEta.SetTextFont(42)
	legendEta.SetNColumns(2)


	latex = ROOT.TLatex()
	latex.SetTextFont(42)
	latex.SetTextAlign(31)
	latex.SetTextSize(0.04)
	latex.SetNDC(True)
	latexCMS = ROOT.TLatex()
	latexCMS.SetTextFont(61)
	latexCMS.SetTextSize(0.06)
	latexCMS.SetNDC(True)
	latexCMSExtra = ROOT.TLatex()
	latexCMSExtra.SetTextFont(52)
	latexCMSExtra.SetTextSize(0.045)
	latexCMSExtra.SetNDC(True)	
	legendHists = []
	

	legendHistData = ROOT.TH1F()
	if args.data:	
		legend.AddEntry(legendHistData,"Data","pe")	
		legendEta.AddEntry(legendHistData,"Data","pe")	

	
	


	for process in reversed(processes):
		if not plot.muon and "#mu^{+}#mu^{-}" in process.label:
			process.label = process.label.replace("#mu^{+}#mu^{-}","e^{+}e^{-}")
		temphist = ROOT.TH1F()
		temphist.SetFillColor(process.theColor)
		legendHists.append(temphist.Clone)
		legend.AddEntry(temphist,process.label,"f")
		legendEta.AddEntry(temphist,process.label,"f")



	
	if args.signals !=0:
		processesWithSignal = []
		for process in processes:
			processesWithSignal.append(process)
		for Signal in signals:
			processesWithSignal.append(Signal)
			temphist = ROOT.TH1F()
			temphist.SetFillColor(Signal.theColor)
			temphist.SetLineColor(Signal.theLineColor)
			legendHists.append(temphist.Clone)		
			legend.AddEntry(temphist,Signal.label,"l")
			legendEta.AddEntry(temphist,Signal.label,"l")
	
	


	nEvents=-1

	
	ROOT.gStyle.SetOptStat(0)
	
	intlumi = ROOT.TLatex()
	intlumi.SetTextAlign(12)
	intlumi.SetTextSize(0.045)
	intlumi.SetNDC(True)
	intlumi2 = ROOT.TLatex()
	intlumi2.SetTextAlign(12)
	intlumi2.SetTextSize(0.07)
	intlumi2.SetNDC(True)
	scalelabel = ROOT.TLatex()
	scalelabel.SetTextAlign(12)
	scalelabel.SetTextSize(0.03)
	scalelabel.SetNDC(True)
	metDiffLabel = ROOT.TLatex()
	metDiffLabel.SetTextAlign(12)
	metDiffLabel.SetTextSize(0.03)
	metDiffLabel.SetNDC(True)
	chi2Label = ROOT.TLatex()
	chi2Label.SetTextAlign(12)
	chi2Label.SetTextSize(0.03)
	chi2Label.SetNDC(True)
	hCanvas.SetLogy()




	
	plotPad.cd()
	plotPad.SetLogy(0)
	logScale = plot.log

        ElLumi2016 = 35.9*1000
        MuLumi2016 = 36.3*1000
        ElLumi2017 = 41.529*1000
        MuLumi2017 = 42.153*1000
        ElLumi2018 = 59.97*1000
        MuLumi2018 = 61.608*1000
	
	if logScale == True:
		plotPad.SetLogy()
	if args.use2016:	
		lumi = ElLumi2016
		if plot.muon:
			lumi = MuLumi2016
	elif args.use2018:	
		lumi = ElLumi2018
		if plot.muon:
			lumi = MuLumi2018

        elif args.useAll:
                lumi = ElLumi2016+ElLumi2017+ElLumi2018
		if plot.muon:
			lumi = MuLumi2016+MuLumi2017+MuLumi2018
	else:
		lumi = ElLumi2017
		if plot.muon:
			lumi = MuLumi2017
	if args.use2016:		
		zScaleFac = zScale2016["muons"]
		if not plot.muon:
			zScaleFac = zScale2016["electrons"]
	elif args.use2018:		
		zScaleFac = zScale2018["muons"]
		if not plot.muon:
			zScaleFac = zScale2018["electrons"]
	else:
		zScaleFac = zScale["muons"]
		if not plot.muon:
			zScaleFac = zScale["electrons"]
			
			
			
	if plot.plot2D:	
		datahist = data.loadHistogramProjected(plot,lumi,zScaleFac)	
		
		stack = TheStack2D(processes,lumi,plot,zScaleFac)
	else:

		if args.useAll:
                        if plot.muon:
			 	datahist = data.loadHistogram(plot,MuLumi2016,zScale2016["muons"])
                                datahist.Add(data.loadHistogram(plot,MuLumi2017,zScale["muons"]))	
                                datahist.Add(data.loadHistogram(plot,MuLumi2018,zScale2018["muons"]))
		
				stack = TheStack(processes,MuLumi2017,plot,zScale["muons"],processes2,MuLumi2016,zScale2016["muons"],MuLumi2018,zScale2018["muons"])
			else:
				datahist = data.loadHistogram(plot,ElLumi2016,zScale2016["electrons"])
                                datahist.Add(data.loadHistogram(plot,ElLumi2017,zScale["electrons"]))	
                                datahist.Add(data.loadHistogram(plot,ElLumi2018,zScale2018["electrons"]))
		
				stack = TheStack(processes,ElLumi2017,plot,zScale["electrons"],processes2,ElLumi2016,zScale2016["electrons"],ElLumi2018,zScale2018["electrons"])

		else:
			datahist = data.loadHistogram(plot,lumi,zScaleFac)	
		
			stack = TheStack(processes,lumi,plot,zScaleFac)

	if args.data:
		yMax = datahist.GetBinContent(datahist.GetMaximumBin())
		if "Mass" in plot.fileName:
			yMin = 0.00001
		else:
			yMin = 0.01
		xMax = datahist.GetXaxis().GetXmax()
		xMin = datahist.GetXaxis().GetXmin()
	else:	
		yMax = stack.theHistogram.GetBinContent(datahist.GetMaximumBin())
		yMin = 0.01
		xMax = stack.theHistogram.GetXaxis().GetXmax()
		xMin = stack.theHistogram.GetXaxis().GetXmin()	
	if plot.yMax == None:
		if logScale:
			yMax = yMax*10000
		else:
			yMax = yMax*1.5
	else: yMax = plot.yMax
	
	if "Mass" in plot.fileName:
		yMax = 20000000	
	
	if not plot.yMin == None:
		yMin = plot.yMin
	if not plot.xMin == None:
		xMin = plot.xMin
	if not plot.xMax == None:
		xMax = plot.xMax
	plotPad.DrawFrame(xMin,yMin,xMax,yMax,"; %s ; %s" %(plot.xaxis,plot.yaxis))
	
	
	drawStack = stack
 	#~ print datahist.Integral(datahist.FindBin(60),datahist.FindBin(120))/drawStack.theHistogram.Integral(drawStack.theHistogram.FindBin(60),drawStack.theHistogram.FindBin(120))
 	#~ low = 900
 	#~ high = 1300
 	#~ print datahist.Integral(datahist.FindBin(low),datahist.FindBin(high))
 	#~ print drawStack.theHistogram.Integral(datahist.FindBin(low),datahist.FindBin(high))

	

	drawStack.theStack.Draw("samehist")							


	
	if len(args.signals) != 0:
		signalhists = []
		for Signal in signals:
			if plot.plot2D:
				signalhist = Signal.loadHistogramProjected(plot,lumi)
				signalhist.SetLineWidth(2)
				signalBackgrounds = deepcopy(backgrounds)
				signalBackgrounds.remove("DrellYan")
				signalProcesses = []
				for background in signalBackgrounds:
					if background == "Jets":
						signalProcesses.append(Process(getattr(Backgrounds,background),eventCounts,negWeights,normalized=True))
					else:	
						signalProcesses.append(Process(getattr(Backgrounds,background),eventCounts,negWeights))
				signalStack = TheStack2D(signalProcesses,lumi,plot)
				signalhist.Add(signalStack.theHistogram)
				signalhist.SetMinimum(0.1)
				signalhist.Draw("samehist")
				signalhists.append(signalhist)	
			else:
				if args.useAll:
					if not plot.muon:
						signalhist = Signal.loadHistogram(plot,ElLumi2016,zScale2016["electrons"])
                                		signalhist.Add(Signal.loadHistogram(plot,ElLumi2017,zScale["electrons"]))	
                                		signalhist.Add(Signal.loadHistogram(plot,ElLumi2018,zScale2018["electrons"]))
					else:
						signalhist = Signal.loadHistogram(plot,MuLumi2016,zScale2016["muons"])
                                		signalhist.Add(Signal.loadHistogram(plot,MuLumi2017,zScale["muons"]))	
                                		signalhist.Add(Signal.loadHistogram(plot,MuLumi2018,zScale2018["muons"]))

				else:
					signalhist = Signal.loadHistogram(plot,lumi,zScaleFac)
				signalhist.SetLineWidth(2)
				signalBackgrounds = deepcopy(backgrounds)
				signalBackgrounds.remove("DrellYan")
				signalProcesses = []
				for background in signalBackgrounds:
					if background == "Jets":
						signalProcesses.append(Process(getattr(Backgrounds,background),eventCounts,negWeights,normalized=True))
					else:	
						signalProcesses.append(Process(getattr(Backgrounds,background),eventCounts,negWeights))
				if args.useAll:
					signalStack = TheStack(signalProcesses,lumi,plot,zScaleFac)
					signalStack = TheStack(signalProcesses,ElLumi2017,plot,zScale["electrons"],ElLumi2016,zScale2016["electrons"],ElLumi2018,zScale2018["electrons"])

				else:
					signalStack = TheStack(signalProcesses,lumi,plot,zScaleFac)
				signalhist.Add(signalStack.theHistogram)
				signalhist.SetMinimum(0.1)
				signalhist.Draw("samehist")
				signalhists.append(signalhist)	

	datahist.SetMinimum(0.1)
	if args.data:
		datahist.Draw("samep")	


	if "Eta" in plot.fileName or "CosTheta" in plot.fileName:
		legendEta.Draw()
	else:
		legend.Draw()

	plotPad.SetLogx(plot.logX)
	
	latex.DrawLatex(0.95, 0.96, "%.1f fb^{-1} (13 TeV)"%(float(lumi)/1000,))
	yLabelPos = 0.85
	cmsExtra = "Private Work"
	if not args.data:
		cmsExtra = "#splitline{Private Work}{Simulation}"
		yLabelPos = 0.82	
	latexCMS.DrawLatex(0.19,0.89,"CMS")
	latexCMSExtra.DrawLatex(0.19,yLabelPos,"%s"%(cmsExtra))
	#~ print datahist.Integral()
	if args.ratio:
		try:
			ratioPad.cd()
			ratioPad.SetLogx(plot.logX)
		except AttributeError:
			print ("Plot fails. Look up in errs/failedPlots.txt")
			outFile =open("errs/failedPlots.txt","a")
			outFile.write('%s\n'%plot.filename%("_"+run.label+"_"+dilepton))
			outFile.close()
			plot.cuts=baseCut
			return 1
		ratioGraphs =  ratios.RatioGraph(datahist,drawStack.theHistogram, xMin=xMin, xMax=xMax,title="Data / MC",yMin=0.0,yMax=2,ndivisions=10,color=ROOT.kBlack,adaptiveBinning=10000)
		ratioGraphs.draw(ROOT.gPad,True,False,True,chi2Pos=0.8)
					

	ROOT.gPad.RedrawAxis()
	plotPad.RedrawAxis()
	if args.ratio:

		ratioPad.RedrawAxis()
	if not os.path.exists("plots"):
		os.makedirs("plots")	
	if args.use2016:
		hCanvas.Print("plots/"+plot.fileName+"_2016.pdf")
	if args.use2018:
		hCanvas.Print("plots/"+plot.fileName+"_2018.pdf")
	else:	
		hCanvas.Print("plots/"+plot.fileName+".pdf")

					
if __name__ == "__main__":
	
	
	parser = argparse.ArgumentParser(description='Process some integers.')
	
	parser.add_argument("-d", "--data", action="store_true", dest="data", default=False,
						  help="plot data points.")
	parser.add_argument("-m", "--mc", action="store_true", dest="mc", default=False,
						  help="plot mc backgrounds.")
	parser.add_argument("-p", "--plot", dest="plot", nargs=1, default="",
						  help="plot to plot.")
	parser.add_argument("-n", "--norm", action="store_true", dest="norm", default=False,
						  help="normalize to data.")
	parser.add_argument("-2016", "--2016", action="store_true", dest="use2016", default=False,
						  help="use 2016 data and MC.")
	parser.add_argument("-2018", "--2018", action="store_true", dest="use2018", default=False,
						  help="use 2018 data with 2017 MC.")
        parser.add_argument("-AllYears", "--AllYears", action="store_true", dest="useAll", default=False,
						  help="use All data with 2016 and 2017 MC.")
	parser.add_argument("-r", "--ratio", action="store_true", dest="ratio", default=False,
						  help="plot ratio plot")
	parser.add_argument("-l", "--log", action="store_true", dest="log", default=False,
						  help="plot with log scale for y axis")
	parser.add_argument("-s", "--signal", dest="signals", action="append", default=[],
						  help="signals to plot.")
	parser.add_argument("-b", "--backgrounds", dest="backgrounds", action="append", default=[],
						  help="backgrounds to plot.")


	args = parser.parse_args()
	if len(args.backgrounds) == 0:
		args.backgrounds = ["Wjets","Other","DrellYan"]
		#~ args.backgrounds = ["Diboson","DrellYan"]

	if len(args.signals) != 0:
		args.plotSignal = True

	if args.plot == "":
		args.plot = plotList
	
	signals = args.signals
	for plot in args.plot:
		args.signals = signals
		plotObject = getPlot(plot)
		if len(args.signals) > 0:
			#~ if ("To2E" in args.signals[0] and plotObject.muon) or ("To2Mu" in args.signals[0] and not plotObject.muon):
			args.signals = []
			if plotObject.muon:
				for signal in signals:
					args.signals.append("CITo2Mu_"+signal)
			else:
				for signal in signals:
					args.signals.append("CITo2E_"+signal)
		#~ print args.plotSignal	
		plotDataMC(args,plotObject)
	
