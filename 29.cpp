#include<iostream>
#include<stdlib.h>     //for rand()
#include<time.h>
int main()
{
    //to print n random numbers 
    int n;
    std::cout<<"Enter n : ";
    std::cin>>n;

    for(int i=0;i<n;i++)
    {
        // srand(time(0));
        std::cout<<rand()<<std::endl;
    }
}