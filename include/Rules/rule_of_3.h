#pragma once
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

class RuleOf3
{
    /*
    1. destrcutor
    2. copy constructor
    3. copy assignment operator
    */
    public:
    char* m_data;
    size_t m_size{0};
    RuleOf3(){}
    RuleOf3(int size) : m_size(size)
    {
        std::cout << "Initializing " << m_size << " blocks" << '\n';
        m_data = new char[size];
    }

    // copy assignment
    RuleOf3(const RuleOf3& rhs) : RuleOf3(rhs.m_size)
    {
        std::cout << "Copy data from assigner to asignee's memory space with " << rhs.m_size << " blocks" << '\n';
        std::copy(rhs.m_data, rhs.m_data + rhs.m_size, m_data);
    }

    // copy assignment
    RuleOf3& operator=(const RuleOf3& rhs)
    {
        if(this == &rhs)
        {
            return *this;
        }
        std::cout << "Deleting asignee's original data with " << m_size << " blocks" << '\n';
        if (m_size)
        {
            delete[] m_data;
        }
        m_size = rhs.m_size;
        std::cout << "Reallocate / copy data from assigner to asignee's memory space with " << rhs.m_size << " blocks" << '\n';
        m_data = new char[m_size];
        std::copy(rhs.m_data, rhs.m_data + rhs.m_size, m_data);
        return *this;
    }

    // destructor
    ~RuleOf3()
    {
        std::cout << "deallocate r3 data space:  " << m_size << " blocks" << '\n';
        if (m_size)
        {
            delete[] m_data;
        }
    }


};