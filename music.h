#ifndef MUSIC_H
#define MUSIC_H
#include "all.h"

class music : public all{
    public:
        char artist[MAX_ENTRY][50];
        int duration[MAX_ENTRY];
        char publisher[MAX_ENTRY][50];
        
     virtual void add(char *tile, int year, char *artist, int duration, char *publisher);
      virtual void search(char *title);
      virtual void search(int year);
      virtual void del(char *title);
      virtual void del(int year);
    music();
    ~music();
        
};

#endif
