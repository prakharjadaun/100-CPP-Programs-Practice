#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    //program to use distance function 
    std::vector<int> v = {23,12,654,34,12,7};
    std::vector<int>::iterator p = v.begin();
    std::cout<<"Vector v : ";
    while(p!=v.end())
    {
        std::cout<<*p<<" ";
        p++;
    }
    std::cout<<std::endl;

    //distance(first_iterator,desired_position) – It returns the distance of desired position from the first iterator.This function is very useful while finding the index. 
    //lets find the index of the min element from the first index
    std::cout<<distance(v.begin(),min_element(v.begin(),v.end()))<<std::endl;
    return 0;
}
