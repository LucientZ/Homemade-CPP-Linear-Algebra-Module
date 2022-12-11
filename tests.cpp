#include "tests.h"
#include <iostream>
using namespace std; // Temporary using statement to be replaced.


namespace {
    bool test_passed = true;
}


bool test_fraction(){

    FINISH_TEST;
}


bool true_returner(){
    FINISH_TEST
}

bool false_returner(){
    test_passed = false;
    FINISH_TEST
}



int main(){
    unsigned passes = 0, fails = 0, skips = 0;

    cout << "Begin Tests" << "\n";
    test(true_returner);
    test(false_returner);
    skip(false_returner)

    cout << '\n' << red << "Fails: " << fails << '\n' << green << "Passes: " << passes << '\n' << yellow << "Skips: " << skips << '\n' << reset << flush;
}