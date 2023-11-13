#ifndef ALL_H
#define ALL_H
#include <stdio.h>

const int MAX_ENTRY=100;

class all {
    public:
      char title[MAX_ENTRY][50];
      int year[MAX_ENTRY];
      all();
      ~all();
};

#endif
