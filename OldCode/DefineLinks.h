#ifndef _DEFINELINKS_h
#define _DEFINELINKS_h

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <stdint.h>
#include <iomanip>  
#include <sstream>    


class DefineLinks {
  private:
  
    unsigned int event;
    unsigned int lumi;
    unsigned int run;
    
    int noRSCint[1024][36];
    int nMP7int[1024][36];

  public:
    DefineLinks(unsigned int Event, unsigned int Lumi, unsigned int Run);
    ~DefineLinks() { }
    void ReadFileoRSC();
    void ReadFileMP7();
    void WriteFileoRSCFormat();
    void WriteFileMP7Format();
    bool CompareoRSCMP7();
    int maplinkfromoRSCtoMP7(int);
    int maplinkfromMP7tooRSC(int);
    
    
    void GenerateConstantPatternMP7(int);
    void GenerateIncreasingPatternMP7();
    void GenerateConstantPatternoRSC(int);
    void GenerateIncreasingPatternoRSC();

};

#endif