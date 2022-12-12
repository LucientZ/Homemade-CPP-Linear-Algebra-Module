#ifndef TESTS_H
#define TESTS_H

#include <iostream>
#include "terminal_colors.h"

#define here std::cout << __FUNCTION__ << " | " << __LINE__ << '\n' << std::endl;

// Expects a boolean expression to be true
#define expect(expression)\
try{\
    if(!(expression)){\
        std::cout << red << "    [FAILURE] " << reset << "Unexpected value at Function: " << __FUNCTION__ << " | Line: " << __LINE__ << "\n              " << "Expected: " << #expression << '\n';\
        test_passed = false;\
    }\
}\
catch(const std::exception& err){\
    std::cout << red << "    [ERROR]   " << reset << "An unexpected error has occurred at {Function: " << __FUNCTION__ << " | File: " << __FILE__ <<  " | Line: " << __LINE__ << "}\n              {" << #expression << "} threw an unexpected exception.\n              " << err.what() << '\n';  test_passed = false;\
}

// Expects an error to be thrown given an expression.
#define expect_throw(expression,error)\
try {expression;}\
catch(const error& err){}\
catch(...){}\



#define test(func)\
if (func()) {std::cout << green << "[SUCCESS] " << #func << '\n'; passes++;}\
else {std::cout << red << "[FAILURE] " << #func << '\n'; fails++;}\
std::cout << '\n' << reset;

#define skip(func) std::cout << yellow << "[SKIP]    " << #func << reset << '\n'; skips++;


#define is ==
#define is_not !=

#define FINISH_TEST bool current_test_passed = test_passed;\
test_passed = true;\
return current_test_passed;


#endif