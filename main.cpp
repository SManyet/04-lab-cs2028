#include <iostream>

#include "Show.h"
#include "Movie.h"
#include "TVshow.h"


using namespace std;

void fixBadInput() {
    cin.clear();
    cin.ignore();
    cout << "Invalid input, try again" << endl;
}

template <class Shows>
void displayShow(Shows &show) {
    show.details();
    show.play();
}

int main() {
    
    bool running = true;
    while (running) {
        cout << "Press 1 for instance of Show" << endl;
        cout << "Press 2 for instance of Movie" << endl;
        cout << "Press 3 for instance of TV Show" << endl;
        cout << "Press 4 for instance of Movie declared as Show" << endl;
        cout << "Press 5 for instance of TV Show declared as Show" << endl;
        int userInput;
        cin >> userInput;
        if (cin.fail() || userInput > 5 || userInput < 1) {
            fixBadInput();
            continue;
        }

        string title;
        string description;
        while (true) {
            cout << "Title of Show: " << endl;
            cin >> title;
            cout << "Description of the Show: " << endl;
            cin >> description;
            if (cin.fail()) {
                fixBadInput();
                continue;
            } else {
                break;
            } 
        }

        switch (userInput) {
            case 1: {
                Show userShow = Show(title, description);
                userShow.details();
                userShow.play();
                displayShow(userShow);
                break;
            }
            case 2: {
                Movie userShow = Movie(title, description);
                userShow.details();
                userShow.play();
                displayShow(userShow);

                break;
            }
            case 3: {
                TVshow userShow = TVshow(title, description);
                userShow.details();
                userShow.play();
                displayShow(userShow);
                break;
            }
            case 4: { // TODO   pointer stuff???
                Show userMS = Movie(title, description);
                userMS.details();
                userMS.play();
                displayShow(userMS);
                break;
            }
            case 5: {
                Show userTS = TVshow(title, description);
                userTS.details();
                userTS.play();
                displayShow(userTS);
                break;
            }
        
        }
        while(true) {
            int quit;
            cout << "continue(1), or quit(2): " << endl;
            cin >> quit;
            if (cin.fail()) {
                fixBadInput();
                continue;
            } else if (quit == 2) {
                running = false;
            }
        break;
        }
    }

    return 0;
}


//Task 1:
//Goal: create base class (abstractly models an online streaming service)
//  a- 2 attributes needed (Title, Description)
//  b- default constructor and an overloaded constructor that allows setting values for all attributes
//  c- Define a virtual function play.  Define a non-virtual function called Details
//     that prints out hte two attributes from 1a
//  d- Include in submission how each member will be available in derived classes

//Task 2:
//Goal: Create a class for TV show
//  a- add an attribute, 2D array to hold seasons and episodes
//  b- define play to ask the user which season, then show and print out the value from that season,
//    this should print out the value from the 2d array
//  c- non-virtual function "details" should be defined as printing out the two attributes of "1a and 2a"

//Task 3:
//Goal: Create a class for Movie
//  a- add an attribute, such as opening credits, include getters and setters
//  b- play should be defined as printing out the attribute of 3a
//  c- details doesn't need to be overloaded
//  d- include in submission, what version of the derived classes will be available in instances of the derived class
//     declared as the base class type.  complete this before doing task 3

//Task 4:
//Goal: Tests classes
//  a- prompt user to pick a kind of class to create
//        Options:
//        -instance of show
//        -instance of movie
//        -instance of tv show
//        -instance of movie declared as show
//        -instance of tv show declared as show
//  b- call the details and play functions created in task 1
//  c- create function outside of classes that accepts a show as a parameter.  This function
//     should call the details and play function fo the input parameter
//  d- test all member functions
//  e- include in lab report a screen shot of the output of the test
//     include a discussion of the actual results compared with the expected results from task 2&3

/*Lab Report:
 * Description of the objectives/concepts explored
 * Sections from each task indicated in the Lab sheet*/




//2a:
