#ifndef MOVIES_H
#define MOVIES_H
#include "all.h"

class movies : public all{
    public:
        char director[MAX_ENTRY][50];
        int duration[MAX_ENTRY];
        int rating[MAX_ENTRY];
    virtual void add(char *title, int year, char *director, int duration, int rating);
      virtual void search(char *title);
      virtual void search(int year);
      virtual void del(char *title);
      virtual void del(int year);
    movies();
    ~movies();
};
#endif
