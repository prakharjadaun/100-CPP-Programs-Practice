#include<iostream>
#include<algorithm>
#include<vector>
bool isOdd(int i)
{
    if(i%2!=0)
    return true;
    else
    return false;
}
int main()
{
    //program to understand the count(), count_if(), find() and find_end() func.
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


    //count_if()
    std::cout<<"Count even : "<<std::count_if(v.begin(),v.end(), isOdd);


    // find(first_iterator, last_iterator, x) – Returns an iterator to the first occurrence of x in vector and points to last address of vector ((name_of_vector).end()) if element is not present in vector.

    if(find(v.begin(),v.end(),54)!=v.end())
    {
        std::cout<<"\nElement Found!!"<<std::endl;
    }
    else
    {
        std::cout<<"Element not found!!"<<std::endl;
    }

    std::vector<int> v2 = {1,2};
    std::cout<<std::find_end(v.begin(),v.end(),v2.begin(),v2.end()) - v.begin();
    return 0;
}
