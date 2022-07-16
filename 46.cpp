#include<iostream>
#include<algorithm>         //for algo functions 
#include<vector>            // for vector           
#include<numeric>           //for accumulate 
int main()
{
    //program to use the sort(), reverse(), min(), max() and accumulate() function

    std::vector<int> v = {122,33,25,654,780,12,342};
    //printing the vector
    std::vector<int>::iterator p = v.begin();
    std::cout<<"Vector v : ";
    while(p!=v.end())
    {
        std::cout<<*p<<" ";
        p++;
    }
    std::cout<<std::endl;

    //max element of the vector 
    //*max_element (first_iterator, last_iterator)
    std::cout<<"Max element : "<<*max_element(v.begin(),v.end())<<std::endl;

    //min element of the vector 
    //*min_element (first_iterator, last_iterator)
    std::cout<<"Min element : "<<*min_element(v.begin(),v.end())<<std::endl;

    //sorting the vector 
    // sort(first_iterator, last_iterator)
    sort(v.begin(),v.end());
    std::cout<<"Sorted Vector v : ";
    p = v.begin();
    while(p!=v.end())
    {
        std::cout<<*p<<" ";
        p++;
    }
    std::cout<<std::endl;


    //reversing the vector 
    // reverse(first_iterator, last_iterator) 
    reverse(v.begin(),v.end());
    std::cout<<"Reversed Vector v : ";
    p = v.begin();
    while(p!=v.end())
    {
        std::cout<<*p<<" ";
        p++;
    }
    std::cout<<std::endl;

    //getting the sum of the vector 
    // accumulate(first_iterator, last_iterator, initial value of sum)
    std::cout<<"Sum of the vector : "<<accumulate(v.begin(),v.end(),0)<<std::endl;

    return 0;

}
