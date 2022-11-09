#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "rule_of_5.h"
#include "rule_of_3.h"

#include <chrono>
using namespace std;
using namespace std::chrono;

int main ()
{
    // Rule of 3 Examples
    // normal construction
    auto start = high_resolution_clock::now();
    RuleOf3 r3_obj(5e8 + 1);
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl << '\n';

    // copy construction
    start = high_resolution_clock::now();
    RuleOf3 r3_obj_copy(r3_obj);
    stop = high_resolution_clock::now();

    duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl << '\n';

    // copy assignment
    start = high_resolution_clock::now();
    RuleOf3 r3_obj_assgin = r3_obj;
    stop = high_resolution_clock::now();

    duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl << '\n';

    // Rule Of 5 Examples
    start = high_resolution_clock::now();
    RuleOf5 r5_obj(5e8 + 3);
    stop = high_resolution_clock::now();

    duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl << '\n';

    // move assignment
    RuleOf5 r5_move_assign;
    start = high_resolution_clock::now();
    r5_move_assign = std::move(r5_obj);
    // Q: is this equal to RuleOf5 r5_move_assign = std::move(r5_obj) ?
    stop = high_resolution_clock::now();

    duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl << '\n';

    // move constructor
    RuleOf5 r5_obj_2(5e8 + 2);
    start = high_resolution_clock::now();
    RuleOf5 r5_move(std::move(r5_obj_2));
    stop = high_resolution_clock::now();

    duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl << '\n';

    // deallocating order is from bottom to top

    return 0;
}