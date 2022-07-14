#include<iostream>
#include<list>
#include<cstdlib>           //for rand() function to generate random integers
int main()
{
    //program for sorting a list 

    //create a list
    std::list<int> l;

    //inserting an integer
    for(int i=0;i<10;i++)
    {
        l.push_back(rand());
    }

    //printing the contents of the list
    std::cout<<"Contents of the list : ";
    std::list<int>::iterator p = l.begin();
    while(p!=l.end())
    {
        std::cout<<*p<<" ";
        p++;
    }
    std::cout<<std::endl;
    //now sorting the list
    l.sort();

    //printing the sorted contents 
    std::cout<<"Sorted Contents : ";
    p = l.begin();
    while(p!=l.end())
    {
        std::cout<<*p<<" ";
        p++;
    }
    std::cout<<std::endl;

    return 0;
}
