#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    //program to understand unique() and unique_copy() function 
    std::vector<char> c = {'a','b','b','b','d','c','c','e'};
    std::cout<<"Vector c : ";
    for(int i=0;i<c.size();i++)
    {
        std::cout<<c[i]<<" ";
    }
    std::cout<<std::endl;

    std::vector<char>::iterator p,pend;
    pend = std::unique(c.begin(),c.end());
    std::cout<<"Updated vector c : ";
    for(p=c.begin();p!=pend;p++)
    {
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;

    std::vector<char> c2 = {'a','b','b','b','d','c','c','e'},c3(8);
    std::cout<<"\nVector c2 : ";
    for(int i=0;i<c2.size();i++)
    {
        std::cout<<c2[i]<<" ";
    }
    std::cout<<std::endl;

    pend = std::unique_copy(c2.begin(),c2.end(),c3.begin());
    std::cout<<"Updated vector c3 : ";
    for(p=c3.begin();p!=pend;p++)
    {
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;
    return 0;

}
