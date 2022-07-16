#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    //program to understand binary_search()
    std::vector<int> v = {11,432,54,11,34,879,21,11,80};
    //printing the vector
    std::vector<int>::iterator p = v.begin();
    std::cout<<"Vector v : ";
    while(p!=v.end())
    {
        std::cout<<*p<<" ";
        p++;
    }
    std::cout<<std::endl;

    //before doing binary search the vector should be in sorted order 
    sort(v.begin(),v.end());

    //after sorting, lets print the vector 
    p = v.begin();
    std::cout<<"Sorted Vector v : ";
    while(p!=v.end())
    {
        std::cout<<*p<<" ";
        p++;
    }
    std::cout<<std::endl;

    //lets find if 34 exist in the vector or not 
    //binary_search(first_iterator, last_iterator, x): returns bool 
    if(binary_search(v.begin(),v.end(),34))
    {
        std::cout<<"34 is in the vector!"<<std::endl;
    }
    else
    {
        std::cout<<"34 is not in the vector"<<std::endl;
    }


    // lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘x’.
    std::cout<<*(lower_bound(v.begin(),v.end(),80))<<std::endl;

    // upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘x’.      
    std::cout<<*upper_bound(v.begin(),v.end(),54)<<std::endl; 
    return 0;
}
