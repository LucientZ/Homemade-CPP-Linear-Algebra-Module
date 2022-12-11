#ifndef TESTS_H
#define TESTS_H

#include <iostream>
#include "terminal_colors.h"

#define here cout << __FUNCTION__ << " | " << __LINE__ << endl;

#define expect(expression)\
if(!expression){\
    std::cout << red << "[FAILURE] " << reset << "Unexpected value: " << here << "Expected: " << #expression << std::endl;\
}


#define test(func)\
if (func()) {std::cout << green << "[SUCCESS] " << #func << '\n'; passes++;}\
else {std::cout << red << "[FAILURE] " << #func << '\n'; fails++;}\
std::cout << reset;

#define skip(func) std::cout << yellow << "[SKIP] " << #func << reset << '\n';


#define is ==
#define is_not !=

#define FINISH_TEST bool current_test_passed = test_passed;\
test_passed = true;\
return current_test_passed;


#endif