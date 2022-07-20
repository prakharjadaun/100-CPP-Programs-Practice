#include<iostream>
#include<algorithm>
#include<vector>
bool iseven(int i)
{
    if(i%2==0)
    {
        return true;
    }
    else 
    return false;
}
int main()
{
    //program to understand the partition() and stable_partition() function 
    //partition() : arranges the sequence defined by start and end such that all elelments for which the predicate specified by pfn returns true come before those for which the predicate returns false. It returns the iterator to the beginning of the elements for which the predicate is false. 
    std::vector<int> v = {1,3,2,4,6,5,8};

    std::cout<<"Vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    std::partition(v.begin(),v.end(),iseven);

    std::cout<<"After partition, Vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    std::vector<int> v2 = {1,4,2,5,3,6,7,8};
    std::cout<<"Vector 2 : ";
    for(int i=0;i<v2.size();i++)
    {
        std::cout<<v2[i]<<" ";
    }
    std::cout<<std::endl;
    //stable partition(): in this function, the partitioning is stable. This means that the relative ordering of the sequence is preserved.
    std::stable_partition(v2.begin(),v2.end(),iseven);
    std::cout<<"After stable partition, Vector 2 : ";
    for(int i=0;i<v2.size();i++)
    {
        std::cout<<v2[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}
