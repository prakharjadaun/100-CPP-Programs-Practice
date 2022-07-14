#include<iostream>
#include<list>
int main()
{
    //understanding the end() function 
    //when we call end() func. we get the reference to the end()-1th element 
    std::list<int> lt;

    //inserting some elements 
    for(int i=0;i<10;i++)
    {
        lt.push_back(i);
    }

    //printing the list in forward direction 
    std::list<int>::iterator p = lt.begin();
    std::cout<<"List : ";
    while(p!=lt.end())
    {
        std::cout<<*p<<" ";
        p++;
    }
    std::cout<<std::endl;

    //printing the list in the backward direction 
    p = lt.end();
    std::cout<<"List : ";
    while(p!=lt.begin())
    {
        p--;                  //decrementing so that p should first point to the last element 
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;

    return 0;
}
