// #include<bits/stdc++.h>
#include <iostream>
#include <set>
int main()
{
    // program to understand the set
    std::set<int> s1;

    // inserting into the set 1
    s1.insert(40);
    s1.insert(44);
    s1.insert(0);
    s1.insert(88);
    s1.insert(3);

    // printing the set elements
    std::set<int>::iterator p;
    for (p = s1.begin(); p != s1.end(); p++)
    {
        std::cout << *p << " ";
    }
    //all the elements are in ascending order 
    std::cout<<std::endl;
    // inserting the existing elements again into the set
    s1.insert(44);
    s1.insert(88);
    //shows that a set can have only unique elements 
    for (p = s1.begin(); p != s1.end(); p++)
    {
        std::cout << *p << " ";
    }
    std::cout<<std::endl;

    //size of the set
    std::cout<<"Size : "<<s1.size();


    // creating another set
    std::set<int> s2(s1.begin(),s1.end());
    std::set<int>::iterator p2;
    std::cout<<"Set 2 : ";
    for (p2 = s2.begin(); p2 != s2.end(); p2++)
    {
        std::cout << *p2 << " ";
    }
    std::cout<<std::endl;

    //now deleting the elements till 40
    s2.erase(40);
    std::cout<<"After Deletion....!"<<std::endl;

    std::cout<<"Set 2 : ";
    for (p2 = s2.begin(); p2 != s2.end(); p2++)
    {
        std::cout << *p2 << " ";
    }
    std::cout<<std::endl;

    //erasing the whole set 
    s2.clear();

    std::cout<<"Size of set 2 : "<<s2.size()<<std::endl;
    return 0;
}
