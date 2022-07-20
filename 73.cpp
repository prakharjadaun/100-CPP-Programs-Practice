#include<bits/stdc++.h>
int add100(int i)
{
    return i+100;
}
int main()
{
    //program to understand the swap(), swap_ranges() and transform() function
    int a = 2;
    int b = 3;

    std::cout<<"Before swapping : \na = "<<a<<"\nb = "<<b<<std::endl;
    std::swap(a,b);
    std::cout<<"After swapping : \na = "<<a<<"\nb = "<<b<<std::endl;

    std::vector<int> v = {1,2,3,4};
    std::vector<int> v2 = {5,6,7,8};

    std::cout<<"Vector 1 : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"Vector 2 : ";
    for(int i=0;i<v2.size();i++)
    {
        std::cout<<v2[i]<<" ";
    }
    std::cout<<std::endl;

    std::vector<int>::iterator p,pend;
    pend = std::swap_ranges(v.begin(),v.end(),v2.begin());
    std::cout<<"\nVector 1 : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"Vector 2 : ";

    for(p = v2.begin();p!=pend;p++)
    {
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;

    //transform() : applies a function to a range of elements and stores the outcome in a result 
    std::vector<int> v3(4);
    std::transform(v.begin(),v.end(),v3.begin(),add100);
    std::cout<<"\nVector 3 : ";
    for(int i=0;i<v3.size();i++)
    {
        std::cout<<v3[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;

}
