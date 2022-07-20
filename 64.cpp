#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    //program to understand the nth_element() function 
    //nth_element() : arranges the sequence such that all elements less than the element come before that element and all elements greater than element come after it. 
    std::vector<int> v = {5,4,3,6,21,7,1,8};

    std::cout<<"Vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    //nth_element function 
    std::nth_element(v.begin(),std::find(v.begin(),v.end(),6),v.end());

    std::cout<<"After applying nth_element func, Vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    // passing the compare function in the arguments 
    std::nth_element(v.begin(),std::find(v.begin(),v.end(),6),v.end(),std::greater<int>());

    std::cout<<"After applying nth_element func, Vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    //nth element can be used to find the 
    //1. first n small numbers but they may not be in the sorted form 
    //2. find the median of the given sequence
    //3. find n largest numbers

    std::vector<int> v2 = {5,4,1,2,3};
    std::nth_element(v2.begin(), v2.begin() + v2.size() / 2, v2.end());
    std::cout << "The median of the array is " << v2[v2.size() / 2];
    return 0;
}
