#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "rule_of_5.h"

#include <chrono>
using namespace std;
using namespace std::chrono;



RuleOf5::RuleOf5(RuleOf5&& rhs)
{
      std::cout << "move constructor is called\n";
      std::swap(m_data, rhs.m_data);
      std::swap(m_size, rhs.m_size);
}

// move assignment
RuleOf5& RuleOf5::operator=(RuleOf5&& rhs)
{
    std::cout << "move assignment is called\n";
    std::swap(m_data, rhs.m_data);
    std::swap(m_size, rhs.m_size);
    // what swap does:               // if not using move
    // a, b
    // temp = std::move(a)           temp = a (we have two copies of a, temp & a)
    // a = std::move(b)              a = b (we have two copes of b, a & b)
    // b = std::move(temp)           b = temp (we have two copies of the original a, b & temp)
    return *this;
}

RuleOf5::~RuleOf5()
{
    std::cout << "deallocate r5 data space" << '\n';
}