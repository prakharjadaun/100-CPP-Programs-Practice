//Generic function are similar to overloaded functions except that they are more restrictive. When functions are overloaded, you may have different functionalities and actions performed with in the body of each function. But Generic functions must perform the same general action for all versions 
#include<iostream>
#include<cmath>

void myfunc(int i)
{
    std::cout<<"Value of i : "<<i<<std::endl;
}

void myfunc(double i)
{
    double intpart;
    double fracpart;

    fracpart = modf(i,&intpart);
    std::cout<<"Fractional part : "<<fracpart<<std::endl;
    std::cout<<"Integer part : "<<intpart<<std::endl;
}

int main()
{
    myfunc(3);
    myfunc(1.234);
    return 0;
}

//if we wish to use generic functions here, then it is not possible because both overloaded functions have different actions performed while generic functions do the same actions for all the data types.