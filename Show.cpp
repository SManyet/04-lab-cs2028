#include "Show.h"
#include <iostream>
using namespace std;

Show::Show(){
    title = " ";
    description = " ";
}

Show::Show(string makeTitle, string makeDescription){
    title = makeTitle;
    description = makeDescription;
}

//functions
virtual void Show::play(){

}
void Show::details(){
    std::cout << "Title: " << title
    std::cout << "Description: " << description
}



//Task 1:
//Goal: create base class (abstractly models an online streaming service)
//  a- 2 attributes needed (Title, Description)
//  b- default constructor and an overloaded constructor that allows setting values for all attributes
//  c- Define a virtual function play.  Define a non-virtual function called Details
//     that prints out hte two attributes from 1a
//  d- Include in submission how each member will be available in derived classes