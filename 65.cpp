#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    //program to understand the partial_sort() and partial_sort_copy() function 
    //partial_sort() : sorts the range from start to end but after execution only start to mid will be in the sorted order. 
    std::vector<int> v = {5,4,3,6,21,7,1};

    std::cout<<"Vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    // std::cout<<*(v.begin()+(v.size()/2))<<std::endl;    //finding the middle element 

    //calling the partial_sort() function 
    std::partial_sort(v.begin(),v.begin()+(v.size()/2),v.end());
    
    //printing the vector 
    std::cout<<"After partial_sort(), Vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    //initializing two vectors for partial_sort_copy() func
    std::vector<int> v2 = {1,4,3,5,6,3};
    std::vector<int> v3(6);

    std::partial_sort_copy(v2.begin(),v2.end(),v3.begin(),v3.end());

    std::cout<<"Vector 2 : ";
    for(int i=0;i<v2.size();i++)
    {
        std::cout<<v2[i]<<" ";
    }
    std::cout<<std::endl;
    //sorts the whole vector and fits it into the resulting sequence 
    std::cout<<"After partial_sort_copy(), Vector 3 : ";
    for(int i=0;i<v3.size();i++)
    {
        std::cout<<v3[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;

}

