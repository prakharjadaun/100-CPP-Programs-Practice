#include<iostream>
#include<vector>
#include<algorithm>
void add100(int i)
{
    if(i%2==0)
    {
        i = i + 100;
    }
    std::cout<<i<<" ";
}
int main()
{
    //program to demonstrate the find_first_of(), find_if() and for_each() function 
    std::vector<int> v = {1,999,3,4,5,6};
    std::vector<int> v2 = {9,8,7,1,999,3};

    //returns the first same element in both the containers
    std::vector<int>::iterator p = std::find_first_of(v.begin(),v.end(),v2.begin(),v2.end());
    std::cout<<*p<<std::endl;

    //finding the second element 
    p = std::find_first_of(p+1,v.end(),v2.begin(),v2.end());
    std::cout<<*p<<std::endl;

    //returns 4 because even number exists at 4th element 
    std::cout<<*std::find_if(v.begin(),v.end(),[](int i){if(i%2==0)return true;
    else return false;});

    //for_each() 
    std::cout<<"Vector v : ";
    std::for_each(v.begin(),v.end(),add100);
    return 0;
}
