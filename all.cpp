#include "all.h"
#include <cstring>
#include <iostream>

using namespace std;

// Constructor
all::all() {
    int i;
    for (i = 0; i < MAX_ENTRY; i ++) {
     title[i][0] = '\0';
     year[i] = 0;
    }
}

// Destructor
all::~all() {
    int i;
    for (i = 0; i < MAX_ENTRY; i ++) {
     title[i][0] = '\0';
     year[i] = 0;
    }
}
