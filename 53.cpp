#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    //program to get to know the use of the functions:
    //1. adjacent_find() : finds you the matching elements and returns an iterator to it. If the element is not found then iterator to end is returned

    //initializing a vector 
    std::vector<int> v = {23,12,45,12,56,3};

    std::vector<int>::iterator p = v.begin();
    std::cout<<"Vector v : ";
    while(p!=v.end())
    {
        std::cout<<*p<<" ";
        p++;
    }
    std::cout<<std::endl;

    std::cout<<"Size of the vector : "<<v.size()<<std::endl;

    //finding an adjacent element 
    if(*std::adjacent_find(v.begin(),v.end()-1)!=*v.end())
    {
        std::cout<<"Yes adjacent element found\n";
        std::cout<<*std::adjacent_find(v.begin(),v.begin()+3)<<std::endl;
    }
    else
    {
        std::cout<<"Vector does not contain any similar elements!"<<std::endl;
    }

    return 0;
}
