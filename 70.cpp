#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    //program to understand the rotate() and rotate_copy() function 
    //initializing a vector 
    std::vector<int> v = {1,2,3,4,5,6,7};
    std::cout<<"Vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    //rotate() : left rotates the elements in the range specified by the start and end so that the element specified by the mid becomes the new first element 
    std::rotate(v.begin(),(v.begin()+v.size()/2),v.end());
    std::cout<<"updated Vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    //rotate_copy() : copies the range specified by start and end and stores the result in the resulting container 
    std::vector<int> v2(7);

    std::rotate_copy(v.begin(),(v.begin()+v.size()/2),v.end(),v2.begin());
    std::cout<<"updated Vector 2 : ";
    for(int i=0;i<v2.size();i++)
    {
        std::cout<<v2[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}
