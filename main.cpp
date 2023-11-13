#include <iostream>
#include <cstring>
#include "all.h"
#include "videogames.h"
#include "music.h"
#include "movies.h"

using namespace std;

/*
Lina Goto
11/7/23
list of information in videogames, movies, and music.
Information could be added, searched, or deleted
*/

int main()
{
    all all_base;
    videogames videogames_base;
    movies movies_base;
    music music_base;
    
   char input[10];
    
    do{
        // ask for add search delete quit
        cout << "ADD/SEARCH/DELETE/QUIT: " << endl;
        cin.get(input,10);
        cin.get();
        
        //if add
        if ((input[0] == 'A') || (input[0] == 'a')){
            //ask for which section
            cout << "add to videogame, Movies, or Music?: "<<endl;
            cin.get(input,10);
            cin.get();
            //videogame
            if ((input[0] == 'V') || (input[0] == 'v')){
                //title(char), year(int), publisher(char), rating(int)
                cout << "title: " <<endl;
                    char title [50];
                    cin.get(title,50);
                    cin.get();
                cout << "year: " << endl;
                    int year;
                    cin >> year;
                    cin.get();
                cout << "publisher: " << endl;
                    char publisher [50];
                    cin.get(publisher,50);
                    cin.get();
                cout << "rating: " << endl;
                    int rating;
                    cin >> rating;
                    cin.get();
                //add title year publisher and rating
                videogames_base.add(title, year, publisher, rating);
                
            }
            //movie
            if(((input[0] == 'M') && (input[1] == 'o'))||((input[0] == 'm') && (input[1] == 'o'))){
                //title(char), year(int), director(char), duration(int), rating(int)
                cout << "title: " <<endl;
                    char title [50];
                    cin.get(title,50);
                    cin.get();
                cout << "year: " << endl;
                    int year;
                    cin >> year;
                    cin.get();
                cout << "director: " << endl;
                    char director [50];
                    cin.get (director,50);
                    cin.get();
                cout << "duration: " << endl;
                    int duration;
                    cin >> duration;
                    cin.get();
                cout << "rating: " << endl;
                    int rating;
                    cin >> rating;
                    cin.get();
                //add title, year, directory, duration, rating
                movies_base.add(title, year, director, duration, rating);
            }
            //music
            if(((input[0] == 'M') || (input[1] == 'u'))||((input[0] == 'm') && (input[1] == 'u'))){
             //title(char), year(int), artist(char), duration(int), publisher(char).
                cout << "title: " <<endl;
                    char title [50];
                    cin.get(title,50);
                    cin.get();
                cout << "year: " << endl;
                    int year;
                    cin >> year;
                    cin.get();
                cout << "artist: " << endl;
                    char artist [50];
                    cin.get (artist,50);
                    cin.get();
                cout << "duration: " << endl;
                    int duration;
                    cin >> duration;
                    cin.get();
                cout << "publisher: " << endl;
                    char publisher [50];
                    cin.get (publisher,50);
                    cin.get(); 
                //add title, year, artist, duration, publisher
                 music_base.add(title, year, artist, duration, publisher);
            }
        }
        
        //search
        if ((input[0] == 'S') || (input[0] == 's')){
           cout << "search by title or year?: " << endl;
           cin.get(input,10);
           cin.get();
           //search by title
           if ((input[0] == 'T') || (input[0] == 't')){
               cout << "Title: " << endl;
               char title [50];
               cin.get(title,50);
               cin.get();
               videogames_base.search(title);
               movies_base.search(title);
               music_base.search(title);
           }
           //search by year
           if ((input[0] == 'Y') || (input[0] == 'y')){
               cout << "Year: " << endl;
               int year;
               cin >> year;
                cin.get();
               videogames_base.search(year);
               movies_base.search(year);
               music_base.search(year);
           }
        }
        //delete
        if((input[0] == 'D') || (input[0] == 'd')){
            cout << "delete by title or year?: " << endl;
            cin.get(input,10);
            cin.get();
            //delete by time
            if ((input[0] == 'T') || (input[0] == 't')){
                cout << "Title: " << endl;
               char title [50];
               cin.get(title,50);
               cin.get();
               videogames_base.del(title);
               movies_base.del(title);
               music_base.del(title);
            }
            //delete by year
            if ((input[0] == 'Y') || (input[0] == 'y')){
               cout << "Year: " << endl;
               int year;
               cin >> year;
               cin.get();
               videogames_base.del(year);
               movies_base.del(year);
               music_base.del(year);
           }
        }
   }while ((input[0] != 'Q') && (input[0] != 'q'));//quit
}	
