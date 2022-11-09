#pragma once
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


class o_ptr{
    public:
    o_ptr(){};

    ~o_ptr(){};
};

class o_obj
{
    private:
        o_ptr* m_ptr;
    public:
    o_obj()
    {
        // m_ptr = new o_ptr();
    }

    ~o_obj()
    {
        // delete m_ptr;
    }
};

int main()
{
    o_obj o;

    return 0;
}