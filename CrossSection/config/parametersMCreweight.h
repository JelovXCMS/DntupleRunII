const int nBins=200;
double ptBins[nBins+1] = {0.,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5,5.5,6,6.5,7,7.5,8,8.5,9,9.5,10,10.5,11,11.5,12,12.5,13,13.5,14,14.5,15,15.5,16,16.5,17,17.5,18,18.5,19,19.5,20,20.5,21,21.5,22,22.5,23,23.5,24,24.5,25,25.5,26,26.5,27,27.5,28,28.5,29,29.5,30,30.5,31,31.5,32,32.5,33,33.5,34,34.5,35,35.5,36,36.5,37,37.5,38,38.5,39,39.5,40,40.5,41,41.5,42,42.5,43,43.5,44,44.5,45,45.5,46,46.5,47,47.5,48,48.5,49,49.5,50,50.5,51,51.5,52,52.5,53,53.5,54,54.5,55,55.5,56,56.5,57,57.5,58,58.5,59,59.5,60,60.5,61,61.5,62,62.5,63,63.5,64,64.5,65,65.5,66,66.5,67,67.5,68,68.5,69,69.5,70,70.5,71,71.5,72,72.5,73,73.5,74,74.5,75,75.5,76,76.5,77,77.5,78,78.5,79,79.5,80,80.5,81,81.5,82,82.5,83,83.5,84,84.5,85,85.5,86,86.5,87,87.5,88,88.5,89,89.5,90,90.5,91,91.5,92,92.5,93,93.5,94,94.5,95,95.5,96,96.5,97,97.5,98,98.5,99,99.5,100.};

const int ntriggers=3;
TString triggerHLTPP[ntriggers]={"HLT_DmesonPPTrackingGlobal_Dpt15_v1","HLT_DmesonPPTrackingGlobal_Dpt30_v1","HLT_DmesonPPTrackingGlobal_Dpt50_v1"};
int triggerassignmentPP[nBins]= {0,0,0,0,1,1,1,1,2,2,2};
TString triggerHLTPbPb[ntriggers]={"HLT_HIDmesonHITrackingGlobal_Dpt20_v1","HLT_HIDmesonHITrackingGlobal_Dpt40_v1","HLT_HIDmesonHITrackingGlobal_Dpt60_v1"};
int triggerassignmentPbPb[nBins]= {0,0,0,0,0,1,1,1,1,2,2};

/*
const int nBins=5;
double ptBins[nBins+1] = {10.,15.,20.,25.,30.,50};
const int ntriggers=3;
TString triggerHLTPP[ntriggers]={"HLT_DmesonPPTrackingGlobal_Dpt15_v1","HLT_DmesonPPTrackingGlobal_Dpt30_v1","HLT_DmesonPPTrackingGlobal_Dpt50_v1"};
int triggerassignmentPP[nBins]= {0,1,2};
TString triggerHLTPbPb[ntriggers]={"HLT_HIDmesonHITrackingGlobal_Dpt20_v1","HLT_HIDmesonHITrackingGlobal_Dpt40_v1","HLT_HIDmesonHITrackingGlobal_Dpt60_v1"};
int triggerassignmentPbPb[nBins]= {0,1,2};
*/
/*
const int nBins=2;
double ptBins[nBins+1] = {60.,80.,100.};
const int ntriggers=3;
TString triggerHLTPP[ntriggers]={"HLT_DmesonPPTrackingGlobal_Dpt15_v1","HLT_DmesonPPTrackingGlobal_Dpt30_v1","HLT_DmesonPPTrackingGlobal_Dpt50_v1"};
int triggerassignmentPP[nBins]= {2,2};
TString triggerHLTPbPb[ntriggers]={"HLT_HIDmesonHITrackingGlobal_Dpt20_v1","HLT_HIDmesonHITrackingGlobal_Dpt40_v1","HLT_HIDmesonHITrackingGlobal_Dpt60_v1"};
int triggerassignmentPbPb[nBins]= {2,2};
*/
/*
const int nBins=4;
double ptBins[nBins+1] = {15.,20.,30.,40.,60.};
*/
/*
const int nBins=1;
double ptBins[nBins+1] = {60.,100.};
const int ntriggers=3;
TString triggerHLTPP[ntriggers]={"HLT_DmesonPPTrackingGlobal_Dpt15_v1","HLT_DmesonPPTrackingGlobal_Dpt30_v1","HLT_DmesonPPTrackingGlobal_Dpt50_v1"};
int triggerassignmentPP[nBins]= {2};
TString triggerHLTPbPb[ntriggers]={"HLT_HIDmesonHITrackingGlobal_Dpt20_v1","HLT_HIDmesonHITrackingGlobal_Dpt40_v1","HLT_HIDmesonHITrackingGlobal_Dpt60_v1"};
int triggerassignmentPbPb[nBins]= {2};
*/
/*
//ALICE binning
const int nBins=9;
double ptBins[nBins+1] = {1.,2.,3.,4.,5.,6.,7.,8.,12.,16.};
const int ntriggers=1;
TString triggerHLTPP[ntriggers]={"HLT_DmesonPPTrackingGlobal_Dpt15_v1"};
int triggerassignmentPP[nBins]= {0,0,0,0,0,0,0,0,0};
TString triggerHLTPbPb[ntriggers]={"HLT_HIDmesonHITrackingGlobal_Dpt20_v1"};
int triggerassignmentPbPb[nBins]= {0,0,0,0,0,0,0,0,0};
*/
/*
//ATLAS binning for pp 7 TeV for D*
const int nBins=9;
double ptBins[nBins+1] = {3.5,5.0,6.5,8.0,12.0,20.0,30.,40.,60.,100.};
*/
//nothing from here on needs to be changed
const int BIN_NUM= 1196;
const int HMIN=1;
const int HMAX=300;

const double binsize=((double)(HMAX)-(double)(HMIN))/(double)(BIN_NUM);
Double_t BRchain=0.0388;
