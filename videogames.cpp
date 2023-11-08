#include <iostream>
#include <cstring>
#include "videogames.h"

using namespace std;

// Constructor
videogames::videogames() {
    int i;
    for (i = 0; i < MAX_ENTRY; i ++) {
     publisher[i][0] = '\0';
     rating[i] = 0;
    }
}

// Destructor
videogames::~videogames() {
    int i;
    for (i = 0; i < MAX_ENTRY; i ++) {
     publisher[i][0] = '\0';
     rating[i] = 0;
    }
}

//adding
void videogames::add(char *title, int year, char *publisher, int rating) {
      int pos = 0;
    while((pos < MAX_ENTRY) && (videogames::rating[pos] != 0)) pos++;
    if(pos >= MAX_ENTRY){
    }
    else{
        strcpy(all::title[pos], title);
        all::year[pos] = year;
        strcpy(videogames::publisher[pos], publisher);
        videogames::rating[pos] = rating;
    }
 }
 
 //search by title
 void videogames::search(char *title){
   int pos = 0;
   int found = 0;
    
    while (pos < MAX_ENTRY){
        if (strcmp(videogames::title[pos], title) == 0){
            cout << videogames::title[pos] << ", ";
            cout << videogames::year[pos] << ", ";
            cout << videogames::publisher[pos] << ", ";
            cout << videogames::rating[pos] << endl;
        found = 1;
        }
    pos ++;
    }
    
    if (found == 0) {
            cout << "No entries found in videogames" << endl;
    }
    
}
 
 //search by year
 void videogames::search(int year){
     int pos = 0;
    int found = 0;
    
    while (pos < MAX_ENTRY){
        if (videogames::year[pos] == year){
           cout << videogames::title[pos] << ", ";
            cout << videogames::year[pos] << ", ";
            cout << videogames::publisher[pos] << ", ";
            cout << videogames::rating[pos] << endl;
        found=1;
        }
        pos ++;
    }
    
    if (found ==0) {
            cout << "No entries found in videogames" << endl;
    }
 }
 
 //delete by title
 void videogames::del(char *title){
    int pos = 0;
    while ((pos<MAX_ENTRY) && (strcmp(videogames::title[pos], title) != 0)) pos++; 
        if (pos >= MAX_ENTRY){
            cout << "entry was not found." << endl;
        }
        if (strcmp(videogames::title[pos],title) == 0){
            cout << "entry had been found. Would you like to delete?: " << endl;
            char yesno[5];
            cin.get(yesno, 5);
            cin.get();
            if (yesno[0] == 'y'){
                videogames::title[pos][0] = '\0';
                videogames::year[pos] = 0;
                videogames::publisher[pos][0] = '\0';
                videogames::rating[pos] = 0;
                cout << "entry had been successfully deleted" << endl;
            }
            if (yesno[0] == 'n'){
                cout << "entry has not been deleted" << endl;
            }
            
        }
}
 
 //delete by year
 void videogames::del(int year){
    int pos = 0;
    while ((pos<MAX_ENTRY) && (videogames::year[pos] != year)) pos++; 
        if (pos >= MAX_ENTRY){
            cout << "entry was not found." << endl;
        }
        if (videogames::year[pos] == year){
            cout << "entry had been found would you like to delete?: " << endl;
            char yesno[5];
            cin.get(yesno, 5);
            cin.get();
            if (yesno[0] == 'y'){
                videogames::title[pos][0] = '\0';
                videogames::year[pos] = 0;
                videogames::publisher[pos][0] = '\0';
                videogames::rating[pos] = 0;
                cout << "entry had been successfully deleted" << endl;
            }
            if (yesno[0] == 'n'){
                cout << "entry has not been deleted" << endl;
              }
        } 
}
