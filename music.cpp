#include <iostream>
#include <cstring>
#include "music.h"

using namespace std;

// Constructor
music::music() {
    int i;
    for (i = 0; i < MAX_ENTRY; i ++) {
     artist[i][0] = '\0';
     duration[i] = 0;
     publisher[i][0] = '\0';
    }
}

// Destructor
music::~music() {
    int i;
    for (i = 0; i < MAX_ENTRY; i ++) {
     artist[i][0] = '\0';
     duration[i] = 0;
     publisher[i][0] = '\0';
    }
}
//adding
void music::add(char *title, int year, char *artist, int duration, char *publisher) {
      int pos = 0;
    while((pos < MAX_ENTRY) && (music::duration[pos] != 0)) pos++;
    if(pos >= MAX_ENTRY){
    }
    else{
        strcpy(all::title[pos], title);
        all::year[pos] = year;
        strcpy(music::artist[pos], artist);
        music::duration[pos] = duration;
        strcpy(music::publisher[pos], publisher);
    }
 }
 
 //search by title
 void music::search(char *title){
   int pos = 0;
   int found = 0;
    
    while (pos < MAX_ENTRY){
        if (strcmp(music::title[pos], title) == 0){
            cout << music::title[pos] << ", ";
            cout << music::year[pos] << ", ";
            cout << music::artist[pos] << ", ";
            cout << music::duration[pos] << ",";
            cout << music::publisher[pos] << endl;
        found = 1;
        }
    pos ++;
    }
    
    if (found == 0) {
            cout << "No entries found in music" << endl;
    }
    
}
 
 //search by year
 void music::search(int year){
     int pos = 0;
    int found = 0;
    
    while (pos < MAX_ENTRY){
        if (music::year[pos] == year){
            cout << music::title[pos] << ", ";
            cout << music::year[pos] << ", ";
            cout << music::artist[pos] << ", ";
            cout << music::duration[pos] << ",";
            cout << music::publisher[pos] << endl;
        found=1;
        }
        pos ++;
    }
    
    if (found ==0) {
            cout << "No entries found in music" << endl;
    }
 }
 
 //delete by title
 void music::del(char *title){
    int pos = 0;
    while ((pos<MAX_ENTRY) && (strcmp(music::title[pos], title) != 0)) pos++; 
        if (pos >= MAX_ENTRY){
            cout << "entry was not found." << endl;
        }
        if (strcmp(music::title[pos],title) == 0){
            cout << "entry had been found. Would you like to delete?: " << endl;
            char yesno[5];
            cin.get(yesno, 5);
            cin.get();
            if (yesno[0] == 'y'){
                music::title[pos][0] = '\0';
                music::year[pos] = 0;
                music::artist[pos][0] = '\0';
                music::duration[pos] = 0;
                music::publisher[pos][0] ='\0';
                cout << "entry had been successfully deleted" << endl;
            }
            if (yesno[0] == 'n'){
                cout << "entry has not been deleted" << endl;
            }
            
        }
}
 
 //delete by year
 void music::del(int year){
    int pos = 0;
    while ((pos<MAX_ENTRY) && (music::year[pos] != year)) pos++; 
        if (pos >= MAX_ENTRY){
            cout << "entry was not found." << endl;
        }
        if (music::year[pos] == year){
            cout << "entry had been found would you like to delete?: " << endl;
            char yesno[5];
            cin.get(yesno, 5);
            cin.get();
            if (yesno[0] == 'y'){
                music::title[pos][0] = '\0';
                music::year[pos] = 0;
                music::artist[pos][0] = '\0';
                music::duration[pos] = 0;
                music::publisher[pos][0] ='\0';
                cout << "entry had been successfully deleted" << endl;
            }
            if (yesno[0] == 'n'){
                cout << "entry has not been deleted" << endl;
              }
        } 
}
