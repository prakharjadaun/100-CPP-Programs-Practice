#include<iostream>
#include<algorithm>
#include<vector>
bool even(int i,int j)
{
    if(i%2==0 && j%2==0)
        return true;
    else 
        return false;
}
int main()
{
    //program to understand the mismatch() function 
    std::vector<int> v = {2,3,4,5,6};
    std::vector<int> v2 = {2,3,6,7,8,9,10};
    std::pair<std::vector<int>::iterator,std::vector<int>::iterator> p;
    p = std::mismatch(v.begin(),v.end(),v2.begin());
    //first mismatch
    std::cout<<"First mismatch : "<<*p.first<<std::endl;
    //second mismatch
    std::cout<<"Second mismatch : "<<*p.second<<std::endl;

    p = std::mismatch(v.begin(),v.end(),v2.begin(),even);
    //first mismatch
    std::cout<<"First mismatch : "<<*p.first<<std::endl;
    //second mismatch
    std::cout<<"Second mismatch : "<<*p.second<<std::endl;
}
