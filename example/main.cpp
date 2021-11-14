# include "math.h"
#include <iostream>

int main()
{
    int a; std::cin >> a;
    float b; std::cin >> b;

    float sum = add(a, b);
    std::cout<<"sum: "<<sum<<std::endl;
    return 0;

}