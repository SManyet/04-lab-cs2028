#include "Movie.h"
#include "Show.h"
#include <iostream>
using namespace std;

string openingCredits = "These are the opening credits.";

void play(){
    cout << openingCredits;
};

void setOpeningCredits(string newOpeningCredits){
    openingCredits = newOpeningCredits;
};

string getOpeningCredits(){
    return openingCredits;
};

Movie::Movie(string makeTitle, string makeDescription) : Show (makeTitle, makeDescription) {
    title = makeTitle;
    description = makeDescription;
};
