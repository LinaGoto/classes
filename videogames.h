#ifndef VIDEOGAMES_H
#define VIDEOGAMES_H
#include "all.h"

class videogames : public all {
    public:
      char publisher[MAX_ENTRY][50];
      int rating[MAX_ENTRY];
      virtual void add(char *title, int year, char *publisher, int rating);
      virtual void search(char *title);
      virtual void search(int year);
      virtual void del(char *title);
      virtual void del(int year);
    videogames();
    ~videogames();
} ;

#endif
