#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    //program to understand the set_difference(), set_intersection(), set_symmetric_difference() and set_union() function 
    std::vector<int> s1 = {1,5,2,3,7,6},s2 = {4,2,6,8};

    //sorting both vectors because set is ordered 
    std::sort(s1.begin(),s1.end());
    std::sort(s2.begin(),s2.end());
    std::vector<int>::iterator p,pend;
    std::cout<<"Set 1 : ";
    for(p = s1.begin();p!=s1.end();p++)
    {
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"Set 2 : ";
    for(p = s2.begin();p!=s2.end();p++)
    {
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;

    //set_difference(): produces the sequence that contains the difference between the two sets in the resulting container 
    std::vector<int> s3(10);

    pend = std::set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),s3.begin());
    std::cout<<"Set difference : ";
    for(p = s3.begin();p!=pend;p++)
    {
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;

    //set_intersection()
    std::vector<int> s4(10);

    pend = std::set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),s4.begin());
    std::cout<<"Set Intersection : ";
    for(p = s4.begin();p!=pend;p++)
    {
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;

    //set_symmetric_difference() : resultant container contains the elements that are not common to both 

    std::vector<int> s5(10);

    pend = std::set_symmetric_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),s5.begin());
    std::cout<<"Set Symmetric Difference : ";
    for(p = s5.begin();p!=pend;p++)
    {
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;

    //set_union() : the union is returned and the resultant is ordered 
    std::vector<int> s6(10);
    pend = std::set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),s6.begin());
    std::cout<<"Set Union : ";
    for(p = s6.begin();p!=pend;p++)
    {
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;
    return 0;

}
