#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    //program to demonstrate the function equal() and equal_range() 
    //initializing the vectors
    std::vector<int> v = {1,2,3,4,5};
    std::vector<int> v2 = {1,2,3,4,5};
    std::vector<int> v3 = {1,3,4,5,5,5,6,7};

    //equal() : determines if two ranges are same 
    std::cout<<std::equal(v.begin(),v.end(),v2.begin(),v2.end())<<std::endl;     //as v and v2 are equal it returns 1
    std::cout<<std::equal(v.begin(),v.end(),v3.begin(),v3.end())<<std::endl;     //as v and v3 are not equal it returns 0

    //equal_range() : returns a range in which an element can be inseted into sequence without disrupting the ordering of the sequence
    std::pair<std::vector<int>::iterator,std::vector<int>::iterator> p =std::equal_range(v3.begin(),v3.end(),11);

    std::cout<<"11 can be inserted from "<<p.first-v3.begin()<<" till "<<p.second-v3.begin();
    return 0;

}
