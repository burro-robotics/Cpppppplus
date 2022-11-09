#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "Rules/rule_of_5.h"

#include <chrono>
#include <memory>
using namespace std;
using namespace std::chrono;

int main ()
{
    unique_ptr<RuleOf5> P1 = make_unique<RuleOf5>(5e3);

    // unique ptr cannot reassign
    // unique_ptr<RuleOf5> P2 = P1;
    // unique_ptr<RuleOf5> P3(P1);
    // both of the above don't compile
    std::cout << "P1 has " << P1->m_size << " block of data\n\n";
    unique_ptr<RuleOf5> P4;
    P4 = std::move(P1);

    // std::cout << "P1 has " << P1->m_size << " block of data\n\n";
    std::cout << "P4 has " << P4->m_size << " block of data\n\n";

    shared_ptr<RuleOf5> S5 = make_shared<RuleOf5>(4e3);
    shared_ptr<RuleOf5> Ss5 = S5;
    // identify how this resonates people based on our stack/ robotics system
    return 0;
}