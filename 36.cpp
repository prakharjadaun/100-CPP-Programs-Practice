#include<iostream>
#include<list>
int main()
{
    //demonstrating the list
    std::list<int> lt;

    //inserting elements in the list 
    for(int i=0;i<10;i++)
    {
        lt.push_back(i);
    }

    //printing the contents of the list
    std::list<int>::iterator p = lt.begin();
    std::cout<<"List : ";
    while(p!=lt.end())
    {
        std::cout<<*p<<" ";
        p++;
    }
    std::cout<<std::endl;

    //changing the contents of the list
    p = lt.begin();
    while(p!=lt.end())
    {
        *p = *p + 100;
        p++;
    }

    std::cout<<"Modified List : ";
    p = lt.begin();
    while(p!=lt.end())
    {
        std::cout<<*p<<" ";
        p++;
    }
    std::cout<<std::endl;


    //deleting the first and the last element of the list
    lt.pop_back();
    lt.pop_front();

    std::cout<<"Modified List : ";
    p = lt.begin();
    while(p!=lt.end())
    {
        std::cout<<*p<<" ";
        p++;
    }
    std::cout<<std::endl;
    return 0;
}
