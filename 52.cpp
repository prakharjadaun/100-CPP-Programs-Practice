#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    //program to understand heap data structure using STL container
    //initializing a vector 
    std::vector<int> v = {3,7,63,45,12,89,123,45};

    //using make_heap() function to convert the vector to a heap
    std::make_heap(v.begin(),v.end());

    //getting the max element of the heap
    std::cout<<"Max element of the heap : "<<v.front()<<std::endl;

    //adding more elements to the vector 
    v.push_back(900);
    v.push_back(33);

    //using push_heap() function to reorder elements 
    std::make_heap(v.begin(),v.end());

    //max element of the heap 
    std::cout<<"Max element of the heap : "<<v.front()<<std::endl;

    //pop_heap() to delete the max element of the heap 
    std::pop_heap(v.begin(),v.end());
    v.pop_back();

    std::cout<<"Max element of the heap : "<<v.front()<<std::endl;
    
    //displaying the heap elements 
    std::cout<<"Heap elements : ";
    for(int &i : v)
    {
        std::cout<<i<<" ";
    }
    std::cout<<"\n";

    //using sort_heap() function 
    std::sort_heap(v.begin(),v.end());

    //displaying the heap elements 
    std::cout<<"After sorting, Heap elements : ";
    for(int &i : v)
    {
        std::cout<<i<<" ";
    }
    std::cout<<"\n";

    //checking if container is heap 
    std::is_heap(v.begin(),v.end())?std::cout<<"Container is heap!"<<std::endl:std::cout<<"Container is not heap!!"<<std::endl;

    return 0;
}
