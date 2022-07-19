#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    //program to demonstrate the merge() and inplace_merge() function 
    std::vector<int> v = {1,2,3,4,5};
    std::vector<int> v2 = {6,7,8,9,10};
    
    //printing the vectors 
    std::cout<<"Vector 1 : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"\nVector 2 : ";
    for(int i=0;i<v2.size();i++)
    {
        std::cout<<v2[i]<<" ";
    }
    std::cout<<std::endl;

    //initializing the result vector 
    std::vector<int> v3(10);
    //merge function merges the two SORTED containers 
    std::merge(v.begin(),v.end(),v2.begin(),v2.end(),v3.begin());
    std::cout<<"\nVector 3 : ";
    for(int i=0;i<v3.size();i++)
    {
        std::cout<<v3[i]<<" ";
    }
    std::cout<<std::endl;

    std::vector<int> v4(12);
    auto it = std::copy(v.begin(), v.end(), v4.begin());
    std::copy(v2.begin(), v2.end(), it);

    inplace_merge(v4.begin(),it,v4.end());

    std::cout<<"\nVector 4 : ";
    for(int i=0;i<v4.size();i++)
    {
        std::cout<<v4[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}
