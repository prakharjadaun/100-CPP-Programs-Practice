#include<iostream>
#include<set>
#include<algorithm>
int main()
{
    //program to demonstrate the multiset of the STL container
    std::multiset<int> m;

    //adding elements to the multiset
    m.insert(4);
    m.insert(1);
    m.insert(5);
    m.insert(22);
    m.insert(42);
    m.insert(3);

    //printing the multiset
    std::cout<<"Multi set : \n";
    std::multiset<int>::iterator it;
    for(it = m.begin();it!=m.end();it++)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;

    //deleting 5 from the multiset
    std::cout<<"Deleting 5 from the multi set...!"<<std::endl;
    m.erase(5);

    //finding 4 in the multiset
    std::cout<<"Finding 5 in the multi set...!"<<std::endl;
    if(m.find(5)!=m.end())
    {
        std::cout<<"Element found!"<<std::endl;
    }
    else 
    {
        std::cout<<"Element not found!!"<<std::endl;
    }

    //size of the multiset 
    std::cout<<"Size of the multi set : "<<m.size()<<std::endl;

    //counting elements with a specific key 
    std::cout<<"Count of 3 : "<<m.count(3)<<std::endl;

    //first element of the multiset 
    it = m.begin();
    std::cout<<"First element : "<<*it<<std::endl;
    return 0;
}
