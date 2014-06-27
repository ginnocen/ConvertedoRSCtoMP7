#include "../include/DefineLinks.h"


DefineLinks::DefineLinks(unsigned int Event, unsigned int Lumi, unsigned int Run) {
  event = Event;
  lumi = Lumi;
  run = Run;
  
  for (int i=0;i<1024;i++){
    for (int j=0;j<36;j++){
      nMP7int[i][j]=0;
      noRSCint[i][j]=0;
    }
  }
  
}

void DefineLinks::ReadFileoRSC() {

  char n0[10],n1[10],n2[10],n3[10],n4[10],n5[10],n6[10],n7[10],n8[10],n9[10];
  char n10[10],n11[10],n12[10],n13[10],n14[10],n15[10],n16[10],n17[10],n18[10],n19[10];
  char n20[10],n21[10],n22[10],n23[10],n24[10],n25[10],n26[10],n27[10],n28[10],n29[10];
  char n30[10],n31[10],n32[10],n33[10],n34[10],n35[10];
  
  FILE *fp=fopen("Inputs/outputoRSC.txt","read");   
  if (fp == NULL) {
    printf("ErrorAA");
    exit(1);
  }

  int counter=0;

  while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s",n0,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18,n19,n20,n21,n22,n23,n24,n25,n26,n27,n28,n29,n30,n31,n32,n33,n34,n35)!=EOF) {
    
    noRSCint[counter][0]=(int)strtol(n0, NULL, 16);
    noRSCint[counter][1]=(int)strtol(n1, NULL, 16);
    noRSCint[counter][2]=(int)strtol(n2, NULL, 16);
    noRSCint[counter][3]=(int)strtol(n3, NULL, 16);
    noRSCint[counter][4]=(int)strtol(n4, NULL, 16);
    noRSCint[counter][5]=(int)strtol(n5, NULL, 16);
    noRSCint[counter][6]=(int)strtol(n6, NULL, 16);
    noRSCint[counter][7]=(int)strtol(n7, NULL, 16);
    noRSCint[counter][8]=(int)strtol(n8, NULL, 16);
    noRSCint[counter][9]=(int)strtol(n9, NULL, 16);
    noRSCint[counter][10]=(int)strtol(n10, NULL, 16);
    noRSCint[counter][11]=(int)strtol(n11, NULL, 16);
    noRSCint[counter][12]=(int)strtol(n12, NULL, 16);
    noRSCint[counter][13]=(int)strtol(n13, NULL, 16);
    noRSCint[counter][14]=(int)strtol(n14, NULL, 16);
    noRSCint[counter][15]=(int)strtol(n15, NULL, 16);
    noRSCint[counter][16]=(int)strtol(n16, NULL, 16);
    noRSCint[counter][17]=(int)strtol(n17, NULL, 16);
    noRSCint[counter][18]=(int)strtol(n18, NULL, 16);
    noRSCint[counter][19]=(int)strtol(n19, NULL, 16);
    noRSCint[counter][20]=(int)strtol(n20, NULL, 16);
    noRSCint[counter][21]=(int)strtol(n21, NULL, 16);
    noRSCint[counter][22]=(int)strtol(n22, NULL, 16);
    noRSCint[counter][23]=(int)strtol(n23, NULL, 16);
    noRSCint[counter][24]=(int)strtol(n24, NULL, 16);
    noRSCint[counter][25]=(int)strtol(n25, NULL, 16);
    noRSCint[counter][26]=(int)strtol(n26, NULL, 16);
    noRSCint[counter][27]=(int)strtol(n27, NULL, 16);
    noRSCint[counter][28]=(int)strtol(n28, NULL, 16);
    noRSCint[counter][29]=(int)strtol(n29, NULL, 16);
    noRSCint[counter][30]=(int)strtol(n30, NULL, 16);
    noRSCint[counter][31]=(int)strtol(n31, NULL, 16);
    noRSCint[counter][32]=(int)strtol(n32, NULL, 16);
    noRSCint[counter][33]=(int)strtol(n33, NULL, 16);
    noRSCint[counter][34]=(int)strtol(n34, NULL, 16);
    noRSCint[counter][35]=(int)strtol(n35, NULL, 16);
    
    counter++;
  }
  
  for (int m=0;m<6;m++){
    for (int n=0;n<36;n++){
    
      nMP7int[m][n]=noRSCint[m][n];
    }
  }
  fclose(fp);

}


void DefineLinks::ReadFileMP7() {

  char n0[10],n1[10],n2[10],n3[10],n4[10],n5[10],n6[10],n7[10],n8[10],n9[10];
  char n10[10],n11[10],n12[10],n13[10],n14[10],n15[10],n16[10],n17[10],n18[10],n19[10];
  char n20[10],n21[10],n22[10],n23[10],n24[10],n25[10],n26[10],n27[10],n28[10],n29[10];
  char n30[10],n31[10],n32[10],n33[10],n34[10],n35[10];
  
  FILE *fp=fopen("Inputs/outputoMP7.txt","read");
  if (fp == NULL) {
    printf("ErrorBB");
    exit(1);
  }

  int counter=0;

  while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s",n0,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18,n19,n20,n21,n22,n23,n24,n25,n26,n27,n28,n29,n30,n31,n32,n33,n34,n35)!=EOF) {
    nMP7int[counter][0]=(int)strtol(n0, NULL, 16);
    nMP7int[counter][1]=(int)strtol(n1, NULL, 16);
    nMP7int[counter][2]=(int)strtol(n2, NULL, 16);
    nMP7int[counter][3]=(int)strtol(n3, NULL, 16);
    nMP7int[counter][4]=(int)strtol(n4, NULL, 16);
    nMP7int[counter][5]=(int)strtol(n5, NULL, 16);
    nMP7int[counter][6]=(int)strtol(n6, NULL, 16);
    nMP7int[counter][7]=(int)strtol(n7, NULL, 16);
    nMP7int[counter][8]=(int)strtol(n8, NULL, 16);
    nMP7int[counter][9]=(int)strtol(n9, NULL, 16);
    nMP7int[counter][10]=(int)strtol(n10, NULL, 16);
    nMP7int[counter][11]=(int)strtol(n11, NULL, 16);
    nMP7int[counter][12]=(int)strtol(n12, NULL, 16);
    nMP7int[counter][13]=(int)strtol(n13, NULL, 16);
    nMP7int[counter][14]=(int)strtol(n14, NULL, 16);
    nMP7int[counter][15]=(int)strtol(n15, NULL, 16);
    nMP7int[counter][16]=(int)strtol(n16, NULL, 16);
    nMP7int[counter][17]=(int)strtol(n17, NULL, 16);
    nMP7int[counter][18]=(int)strtol(n18, NULL, 16);
    nMP7int[counter][19]=(int)strtol(n19, NULL, 16);
    nMP7int[counter][20]=(int)strtol(n20, NULL, 16);
    nMP7int[counter][21]=(int)strtol(n21, NULL, 16);
    nMP7int[counter][22]=(int)strtol(n22, NULL, 16);
    nMP7int[counter][23]=(int)strtol(n23, NULL, 16);
    nMP7int[counter][24]=(int)strtol(n24, NULL, 16);
    nMP7int[counter][25]=(int)strtol(n25, NULL, 16);
    nMP7int[counter][26]=(int)strtol(n26, NULL, 16);
    nMP7int[counter][27]=(int)strtol(n27, NULL, 16);
    nMP7int[counter][28]=(int)strtol(n28, NULL, 16);
    nMP7int[counter][29]=(int)strtol(n29, NULL, 16);
    nMP7int[counter][30]=(int)strtol(n30, NULL, 16);
    nMP7int[counter][31]=(int)strtol(n31, NULL, 16);
    nMP7int[counter][32]=(int)strtol(n32, NULL, 16);
    nMP7int[counter][33]=(int)strtol(n33, NULL, 16);
    nMP7int[counter][34]=(int)strtol(n34, NULL, 16);
    nMP7int[counter][35]=(int)strtol(n35, NULL, 16);
    
    counter++;
  }
fclose(fp);

}

void DefineLinks::WriteFileoRSCFormat(){

  std::ofstream outfile;
  outfile.open("Inputs/outputoRSCCheck.txt", std::ofstream::out);
  
  for (int i = 0; i < 6; ++i) {
    for (int j = 0; j < 36; ++j) {
      outfile << " " << std::setw(2) << std::hex << noRSCint[i][j] << std::dec;
    }
    outfile << std::endl;
  }
}

void DefineLinks::WriteFileMP7Format(){

  std::ofstream outfile;
  outfile.open("Inputs/outputoMP7Check.txt", std::ofstream::out);
  
  
  outfile << "Board MP7_TEST"<< std::endl;
  outfile << " Quad/Chan :    q00c0      q00c1      q00c2      q00c3      q01c0      q01c1      q01c2      q01c3      q02c0      q02c1      q02c2      q02c3      q03c0      q03c1      q03c2      q03c3      q04c0      q04c1      q04c2      q04c3      q05c0      q05c1      q05c2      q05c3      q06c0      q06c1      q06c2      q06c3      q07c0      q07c1      q07c2      q07c3      q08c0      q08c1      q08c2      q08c3"<< std::endl;      
  outfile << "      Link :     00         01         02         03         04         05         06         07         08         09         10         11         12         13         14         15         16         17         18         19         20         21         22         23         24         25         26         27         28         29         30         31         32         33         34         35"<< std::endl;  
  for (int i = 0; i < 1024; ++i) {
  if(i<10) outfile <<"Frame 000"<<i<<" : ";
  if(i>=10 && i<100) outfile <<"Frame 00"<<i<<" : ";
  if(i>=100 && i<1000) outfile <<"Frame 0"<<i<<" : ";
  if(i>=1000 && i<9999) outfile <<"Frame "<<i<<" : ";
    for (int j = 0; j < 36; ++j) {
       outfile <<"0v"<< std::hex << std::setfill('0') << std::setw(8)<< int(nMP7int[i][j]) << std::dec;
       outfile <<" ";
    }
    outfile << std::endl;
  }
  printf("HO SCRITTO IL FILE COME RICHIESTO \n");
}

bool DefineLinks::CompareoRSCMP7(){

  bool statuscheck=true;
  for (int i = 0; i < 6; ++i) {
    for (int j = 0; j < 36; ++j) {
      if(!(nMP7int[i][j]==noRSCint[i][j])) statuscheck=false;
    }
  }
  return statuscheck;
}

int DefineLinks::maplinkfromoRSCtoMP7(int linkoRSCid){
int indexfromoRSCtoMP7[36]={0,1,8,9,16,17,24,25,32,33,28,29,20,21,12,13,4,5,2,3,10,11,18,19,26,27,34,35,30,31,22,23,14,15,6,7};
return indexfromoRSCtoMP7[linkoRSCid];
}

int DefineLinks::maplinkfromMP7tooRSC(int linkMP7id){
int indexfromMP7tooRSC[36]={0,1,18,19,16,17,34,35,2,3,20,21,14,15,32,33,4,5,22,23,12,13,30,31,6,7,24,25,10,11,28,29,8,9,26,27};
return indexfromMP7tooRSC[linkMP7id];
}

void DefineLinks::GenerateConstantPatternMP7(int constpattern){

  for (int i=0;i<1024;i++){
    for (int j=0;j<36;j++){
      nMP7int[i][j]=constpattern;
    }
  }
}


void DefineLinks::GenerateIncreasingPatternMP7(){

  for (int i=0;i<1024;i++){
    for (int j=0;j<36;j++){
      nMP7int[i][j]=i*j*200;
    }
  }
}

/*
MP7 Link #, RCT # - Fibre #, Nominal Processing Quads
00, 00-0, X0Y8 & X1Y8
01, 00-1,   "     "
02, 09-0,   "     "
03, 09-1,   "     "
04, 08-0, X0Y7 & X1Y7
05, 08-1,   "     "
06, 17-0,   "     "
07, 17-1,   "     "
08, 01-0, X0Y6 & X1Y6
09, 01-1,   "     "
10, 10-0,   "     "
11, 10-1,   "     "
12, 07-0, X0Y5 & X1Y5
13, 07-1,   "     "
14, 16-0,   "     "
15, 16-1,   "     "
16, 02-0, X0Y4 & X1Y4
17, 02-1,   "     "
18, 11-0,   "     "
19, 11-1,   "     "
20, 06-0, X0Y3 & X1Y3
21, 06-1,   "     "
22, 15-0,   "     "
23, 15-1,   "     "
24, 03-0, X0Y2 & X1Y2
25, 03-1,   "     "
26, 12-0,   "     "
27, 12-1,   "     "
28, 05-0, X0Y1 & X1Y1
29, 05-1,   "     "
30, 14-0,   "     "
31, 14-1,   "     "
32, 04-0, X0Y0 & X1Y0
33, 04-1,   "     "
34, 13-0,   "     "
35, 13-1,   "     "

00, 00-0, X0Y8 & X1Y8
01, 00-1,   "     "
08, 01-0, X0Y6 & X1Y6
09, 01-1,   "     "
16, 02-0, X0Y4 & X1Y4
17, 02-1,   "     "
24, 03-0, X0Y2 & X1Y2
25, 03-1,   "     "
32, 04-0, X0Y0 & X1Y0
33, 04-1,   "     "
28, 05-0, X0Y1 & X1Y1
29, 05-1,   "     "
20, 06-0, X0Y3 & X1Y3
21, 06-1,   "     "
12, 07-0, X0Y5 & X1Y5
13, 07-1,   "     "
04, 08-0, X0Y7 & X1Y7
05, 08-1,   "     "
02, 09-0,   "     "
03, 09-1,   "     "
10, 10-0,   "     "
11, 10-1,   "     "
18, 11-0,   "     "
19, 11-1,   "     "
26, 12-0,   "     "
27, 12-1,   "     "
34, 13-0,   "     "
35, 13-1,   "     "
30, 14-0,   "     "
31, 14-1,   "     "
22, 15-0,   "     "
23, 15-1,   "     "
14, 16-0,   "     "
15, 16-1,   "     "
06, 17-0,   "     "
07, 17-1,   "     "

*/
