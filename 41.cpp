#include<iostream>
#include<deque>
#include<vector>
int main()
{
    //program to understand the deque (double ended queue)
    std::deque<char> d;
    std::vector<char> v  = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    std::vector<char>::iterator p;

    //inserting in a double ended queue using a push_back function 
    for( p = v.begin();p != v.end();p++)
    {
        d.push_back(*p);
    }

    //printing the elements of the deque
    std::deque<char>::iterator it = d.begin();
    std::cout<<"Elements in deque : ";
    while(it!=d.end())
    {
        std::cout<<*it<<" ";
        it++;
    }
    std::cout<<std::endl;

    //size of the deque 
    std::cout<<"Size : "<<d.size()<<std::endl;

    //max size of the deque 
    std::cout<<"Max size : "<<d.max_size()<<std::endl;

    //finding the first element of the deque 
    std::cout<<"Front element : "<<d.front()<<std::endl;

    //finding the last element 
    std::cout<<"Last element : "<<d.back()<<std::endl;

    //popping the front element of the deque 
    d.pop_front();
    std::cout<<"Front element : "<<d.front()<<std::endl;

    //popping the last element of the deque 
    d.pop_back();
    std::cout<<"Last element : "<<d.back()<<std::endl;

    //printing elements of the deque in reverse order from front 
    std::deque<char>::reverse_iterator t = d.rbegin();
    std::cout<<"Elements of the deque : ";
    while(t!=d.rend())
    {
        std::cout<<*t<<" ";
        t++;
    }
    std::cout<<std::endl;

    return 0;
}
