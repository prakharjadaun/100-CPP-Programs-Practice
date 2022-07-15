#include<bits/stdc++.h>
int main()
{
    //program to demomnstrate the priority queue
    std::priority_queue<char> p;

    //inserting elements into the priority queue
    p.push('X');
    p.push('A');
    p.push('S');
    p.push('O');

    //size of the priority queue 
    std::cout<<"Size : "<<p.size()<<std::endl;

    //printing the priority queue
    std::cout<<"Priority Queue : "<<std::endl;
    while(!p.empty())
    {
        std::cout<<p.top()<<std::endl;
        p.pop();
    }
    return 0;

}
