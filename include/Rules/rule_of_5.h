#pragma once
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "rule_of_3.h"

class RuleOf5 : public RuleOf3
{
    /*
    1. destrcutor
    2. copy constructor
    3. copy assignment operator
    4. move constructor
    5. move assignment operator
    */

    public:
    RuleOf5(){}
    RuleOf5(int size) : RuleOf3(size)
    {}

    // move constructor
    RuleOf5(RuleOf5&& rhs);

    // move assignment
    RuleOf5& operator=(RuleOf5&& rhs);

    ~RuleOf5();
};