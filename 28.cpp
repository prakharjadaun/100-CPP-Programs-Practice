#include<iostream>
#include<math.h>
int main()
{
    //program to find the cube of a number
    int a;
    std::cout<<"Enter a number : ";
    std::cin>>a;

    //1. using * operator 
    std::cout<<a*a*a<<std::endl;

    //2. pow() function        
    std::cout<<pow(a,3)<<std::endl;
    return 0;
}