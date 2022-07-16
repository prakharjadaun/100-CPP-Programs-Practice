#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    //program to understand the count() and find() func.
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

    // count(first_iterator, last_iterator,x) – To count the occurrences of x in vector.
    //lets count the occurences of the 11 in the given vector 
    std::cout<<"Count : "<<count(v.begin(),v.end(),11)<<std::endl;

    //find(first_iterator, last_iterator, x) – Returns an iterator to the first occurrence of x in vector and points to last address of vector ((name_of_vector).end()) if element is not present in vector.

    if(find(v.begin(),v.end(),54)!=v.end())
    {
        std::cout<<"Element Found!!"<<std::endl;
    }
    else
    {
        std::cout<<"Element not found!!"<<std::endl;
    }
    return 0;
}
