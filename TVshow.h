#ifndef LAB4_TVSHOW_H
#define LAB4_TVSHOW_H

#include <iostream>
using namespace std;

//Task 2:
//Goal: Create a class for TV show
//  a- add an attribute, 2D array to hold seasons and episodes
//  b- define play to ask the user which season, then show and print out the value from that season,
//    this should print out the value from the 2d array
//  c- non-virtual function "details" should be defined as printing out the two attributes of "1a and 2a"

class TVshow : public Show{

private:
    string tvArray[][];

public:

    void play();
    void details();

    TVshow() : Show(;
    TVshow(string makeTitle, string makeDescription) : Show(makeTitle, makeDescription);

};


#endif //LAB4_TVSHOW_H
