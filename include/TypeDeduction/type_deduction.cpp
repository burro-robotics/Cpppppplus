#include "type_deduction.h"

using namespace std;

template<typename T>
void f(T& p){
    // p++;
    // read-only
    std::cout << "Dtype is: " <<typeid(T).name() << " with value: " << p << "\n\n";
}


int main ()
{
    // f(1);

    int x = 1;
    f(x);
    const int y = 1;
    f(y);

    float k = 2;
    f(k);
    return 0;
}