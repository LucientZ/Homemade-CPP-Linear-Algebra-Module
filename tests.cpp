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

bool error_thrower(){
    throw std::length_error("test");
    return true;
}

bool false_returner(){
    expect(1 == 2);
    expect(error_thrower());
    FINISH_TEST
}




int main(){
    unsigned passes = 0, fails = 0, skips = 0;

    cout << "Begin Tests" << "\n";
    test(true_returner);
    test(false_returner);
    skip(false_returner);
    test(true_returner);

    cout << '\n' << "Results\n-------" << '\n' << red << "Fails:  " << fails << '\n' << green << "Passes: " << passes << '\n' << yellow << "Skips:  " << skips << '\n' << reset << flush;
} 