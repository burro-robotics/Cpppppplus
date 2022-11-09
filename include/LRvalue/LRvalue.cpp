#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <assert.h>     /* assert */

int main ()
{
    int x = 6;
    std::cout << "x's address: " << &x << '\n';
    // x is lvalue

    // Q: is the following compiled?
    // std::cout << "6's address: " << &6 << '\n';

    int *y = &x;
    std::cout << "y's address: " << &y << '\n';
    // y is lvalue

    // Q: how about this,
    // int* y = &6;
    // this doesn't compile
    // why? &(the address of) only works with lvalue

    int a = 1;
    int b = 2;
    // Q: is (a + b) lvalue or rvalue?
    int c = a + b;
    // Q: how does this assignment work?

    int& xref = x;
    // lvalue reference
    // could think of xref is a const ptr pointing to x(value can be changed but the address cannot)
    xref += 1;

    std::cout << "xref is: " << xref << " and x is " << x << '\n';

    assert(xref == x);
    // value
    assert(&xref == &x);
    // address
    int *p = &x;
    int *p2 = &xref;

    assert(p == p2);
    assert(*p == *p2);
    assert(&p != &p2);

    // pointer p pointing to addr of x which is same as the addr of xref

    //Q: does int& xref = 10; work?

    //https://stackoverflow.com/questions/2750316/this-vs-this-in-c

    //part2: rvalue reference

    int&& xrref = 10;
    xrref ++;
    std::cout << "xrref is: " << xrref << " and xrref's address is " << &xrref << '\n';

    int&& xrrref = std::move(xref);
    // Q: what is in xrrref and what is in xref?

    // what is good about rvalue reference?

    //   const * -> const value
    //  * const -> const pointer
    // ex :
    // int* a; // ptr to a value
    // const int* b; // pointer to const value
    // int * const c; // const pointer to a value
    // int const* d; // pointer to const value
}