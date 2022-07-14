#include<iostream>
#include<map>
int main()
{
    //program to dmonstrate the map container

    //creating a map 
    std::map<char,int> m;

    //inserting elements into the map
    for(int i=0;i<10;i++)
    {
        m.insert(std::pair<char,int>('A'+i,65+i));
    }

    //printing the elements of the map
    std::cout<<"Elements of the map :"<<std::endl;
    std::map<char,int>::iterator p = m.begin();
    while(p != m.end())
    {
        std::cout<<p->first<<":"<<p->second<<std::endl;
        p++;
    }

    //searching for an element in the map
    char ch;
    std::cout<<"Enter a key : ";
    std::cin>>ch;

    p = m.begin();
    p = m.find(ch);
    if(p!=m.end())
    {
        std::cout<<ch<<":"<<p->second<<std::endl;
    }
    else
    {
        std::cout<<"Element not found!!"<<std::endl;
    }

    //to check whether the map is empty or not 
    if(!m.empty())
    {
        std::cout<<"Map is not empty!"<<std::endl;
    }
    else
    {
        std::cout<<"Map is empty!!"<<std::endl;
    }

    //getting the size of the map 
    std::cout<<"Size : "<<m.size()<<std::endl;

    //deleting the map
    m.erase(m.begin(),m.end());
    //or else you can use 
    //m.erase();

    std::cout<<"Size of the map : "<<m.size()<<std::endl;
    return 0;
}
