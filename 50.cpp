#include<iostream>
#include<vector>
#include<map>
#include<iterator>
#include<algorithm>
int main()
{
    //program to use the multi map 
    //multi map are used to store multiple values on the same key 
    //In multimap, the keys are stored in sorted order
    std::multimap<int,int> m;

    //inserting values in the multi map 
    m.insert(std::pair<int,int>(1,30));
    m.insert(std::pair<int,int>(2,40));
    m.insert(std::pair<int,int>(5,70));
    m.insert(std::pair<int,int>(2,10));
    m.insert(std::pair<int,int>(5,90));
    m.insert(std::pair<int,int>(4,0));
    m.insert(std::pair<int,int>(3,80));

    //printing the contents of the multimap
    std::multimap<int,int>::iterator it;
    std::cout<<"Multimap :\n";
    for(it = m.begin();it!=m.end();it++)
    {
        std::cout<<it->first<<" : "<<it->second<<std::endl;
    }

    //adding more elements to check the sorted order
    m.insert(std::pair<int,int>(0,100));
    m.insert(std::pair<int,int>(4,80));

    std::cout<<"\nUpdated Multimap :\n";
    for(it = m.begin();it!=m.end();it++)
    {
        std::cout<<it->first<<" : "<<it->second<<std::endl;
    }
    
    //size of the multimap 
    std::cout<<"\nSize of the multi map : "<<m.size()<<std::endl;

    //deleting keys until ley 3
    m.erase(m.begin(),m.find(3));

    //updated multi map 
    std::cout<<"\nUpdated Multimap :\n";
    for(it = m.begin();it!=m.end();it++)
    {
        std::cout<<it->first<<" : "<<it->second<<std::endl;
    }

    std::cout<<"\n\nUpper bound:\n";
    //upper_bound() and lower_bound() for the key 4 
    std::cout<<m.upper_bound(4)->first<<" : "<<m.upper_bound(4)->second<<std::endl;
    std::cout<<"\nLower Bound:\n";
    std::cout<<m.lower_bound(4)->first<<" : "<<m.lower_bound(4)->second<<std::endl;

    return 0;
}
