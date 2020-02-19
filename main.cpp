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


void displayShow(Show &show) {
    cout << "new function with show as parameter" << endl;
    show.play();
    show.details();

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
            case 4: {
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

