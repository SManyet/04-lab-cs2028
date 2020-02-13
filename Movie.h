#include <iostream>
#include "Show.h"

using namespace std;

class Movie : public Show{
private:
    string openingCredits;

public:

    Movie(string, string);
    string getOpeningCredits();
    void setOpeningCredits(string newOpeningCredits);
    void play();

};

