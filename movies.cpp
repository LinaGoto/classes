#include <iostream>
#include <cstring>
#include "movies.h"

using namespace std;

// Constructor
movies::movies() {
    int i;
    for (i = 0; i < MAX_ENTRY; i ++) {
     director[i][0] = '\0';
     duration[i] = 0;
     rating[i] = 0;
    }
}

// Destructor
movies::~movies() {
    int i;
    for (i = 0; i < MAX_ENTRY; i ++) {
     director[i][0] = '\0';
     duration[i] = 0;
     rating[i] = 0;
    }
}

//adding
void movies::add(char *title, int year, char *director, int duration, int rating) {
      int pos = 0;
    while((pos < MAX_ENTRY) && (movies::duration[pos] != 0)) pos++;
    if(pos >= MAX_ENTRY){
    }
    else{
        strcpy(all::title[pos], title);
        all::year[pos] = year;
        strcpy(movies::director[pos], director);
        movies::duration[pos] = duration;
        movies::rating[pos] = rating;
    }
 }
 
 //searching by title
 void movies::search(char *title){
   int pos = 0;
   int found = 0;
    
    while (pos < MAX_ENTRY){
        if (strcmp(movies::title[pos], title) == 0){
            cout << movies::title[pos] << ", ";
            cout << movies::year[pos] << ", ";
            cout << movies::director[pos] << ", ";
            cout << movies::duration[pos] << ", ";
            cout << movies::rating[pos] << endl;
        found = 1;
        }
    pos ++;
    }
    
    if (found == 0) {
            cout << "No entries found" << endl;
    }
    
}
 
 //search by year
 void movies::search(int year){
     int pos = 0;
    int found = 0;
    
    while (pos < MAX_ENTRY){
        if (movies::year[pos] == year){
           cout << movies::title[pos] << ", ";
            cout << movies::year[pos] << ", ";
            cout << movies::director[pos] << ", ";
            cout << movies::duration[pos] << ", ";
            cout << movies::rating[pos] << endl;
        found = 1;
        }
        pos ++;
    }
    
    if (found == 0) {
            cout << "No entries found in movies" << endl;
    }
 }
 
 //delete by title
 void movies::del(char *title){
    int pos = 0;
    while ((pos<MAX_ENTRY) && (strcmp(movies::title[pos], title) != 0)) pos++; 
        if (pos >= MAX_ENTRY){
            cout << "entry was not found." << endl;
        }
        if (strcmp(movies::title[pos],title) == 0){
            cout << "entry had been found would you like to delete?: " << endl;
            char yesno[5];
            cin.get(yesno, 5);
            cin.get();
            if (yesno[0] == 'y'){
                movies::title[pos][0] = '\0';
                movies::year[pos] = 0;
                movies::director[pos][0] = '\0';
                movies::duration[pos] = 0;
                movies::rating[pos]=0;
                cout << "entry had been successfully deleted" << endl;
            }
            if (yesno[0] == 'n'){
                cout << "entry has not been deleted" << endl;
            }
            
        }
}
 
 //delete by year
 void movies::del(int year){
    int pos = 0;
    while ((pos<MAX_ENTRY) && (movies::year[pos] != year)) pos++; 
        if (pos >= MAX_ENTRY){
            cout << "entry was not found." << endl;
        }
        if (movies::year[pos] == year){
            cout << "entry had been found would you like to delete?: " << endl;
            char yesno[5];
            cin.get(yesno, 5);
            cin.get();
            if (yesno[0] == 'y'){
                movies::title[pos][0] = '\0';
                movies::year[pos] = 0;
                movies::director[pos][0] = '\0';
                movies::duration[pos] = 0;
                movies::rating[pos]=0;
                cout << "entry had been successfully deleted" << endl;
            }
            if (yesno[0] == 'n'){
                cout << "entry has not been deleted" << endl;
              }
        } 
}
