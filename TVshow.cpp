//Task 2:
//Goal: Create a class for TV show
//  a- add an attribute, 2D array to hold seasons and episodes
//  b- define play to ask the user which season, then show and print out the value from that season,
//    this should print out the value from the 2d array
//  c- non-virtual function "details" should be defined as printing out the two attributes of "1a and 2a"

#include "Show.h"
#include "TVshow.h"
#include <iostream>
using namespace std;

    string tvArray[3][3] = {
        {"The Pilot","The One with the Sonogram at the End", "The One with the Thumb"},
        {"The One with Ross's New Girlfriend", "The One with the Breast Milk", "The One Where Heckles Dies"},
        {"The One with the Princess Leia Fantasy", "The One Where No One's Ready", "The One with the Jam"}
                            };

    TVshow::TVshow () : Show () {
    }

    TVshow::TVshow (string makeTitle, string makeDescription) : Show (makeTitle, makeDescription) {
        title = makeTitle;
        description = makeDescription;
    };

    void TVshow::play(){
        int season;
        int episode;

        cout << "Which season would you like to play?";
        cin >> season;
        cout << "Which episode would you like to play?";
        cin >> episode;
        cout << tvArray[season + 1][episode + 1];
    };

    void TVshow::details(){
        cout << "Title: " << title;
        cout << "Description: " << description;
        cout << sizeof(tvArray[0]);
        Show::details();
    }
};
