#include "Movie.h"
#include "Show.h"
#include <iostream>
using namespace std;

void Movie::play(){
    cout << openingCredits;
};

void Movie::setOpeningCredits(string newOpeningCredits){
    openingCredits = newOpeningCredits;
};

string Movie::getOpeningCredits(){
    return openingCredits;
};

Movie::Movie(string makeTitle, string makeDescription) : Show (makeTitle, makeDescription) {
    title = makeTitle;
    description = makeDescription;
    openingCredits = "These are the opening credits.\n";
};

Movie::Movie() : Show() {
    openingCredits = "These are the opening credits.";
}
