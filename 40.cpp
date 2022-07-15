#include<iostream>
#include<queue>
int main()
{
    //program to demonstrate queue of the standard template library of c++
    std::queue<char> q;

    //inserting elements into the queue
    for(int i=0;i<10;i++)
    {
        q.push('A'+i);
    }

    //printing the elements of the queue
    std::cout<<"Queue : ";
    //using the empty function 
    while(!q.empty())
    {
        std::cout<<q.front()<<" ";
        q.pop();
    }
    std::cout<<std::endl;

    //size of the queue 
    std::cout<<"Size of the queue : "<<q.size()<<std::endl;

    //understanding the Swap func. of queue stl
    //first populating both queues
    for(int i=0;i<10;i++)
    {
        q.push('A'+i);
    }
    std::queue<char> q2;
    for(int i=0;i<10;i++)
    {
        q2.push('a'+i);
    }
    q.swap(q2);

    std::cout<<"Queue 1 : ";
    while(!q.empty())
    {
        std::cout<<q.front()<<" ";
        q.pop();
    }
    std::cout<<std::endl;


    std::cout<<"Queue 2 : ";
    while(!q2.empty())
    {
        std::cout<<q2.front()<<" ";
        q2.pop();
    }
    std::cout<<std::endl;
    return 0;
}
