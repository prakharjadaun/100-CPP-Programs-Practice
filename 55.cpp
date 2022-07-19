#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    //program to understand the copy_if() and copy_backward function 
    //creating a vector
    std::vector<int> v = {1,2,3,4,5,6,7};

    //declaring the result vectors
    std::vector<int> v2(5),v3(6);

    std::cout<<"Vector 1 : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"Size of v1 : "<<v.size()<<std::endl;
    //copying using the copy_if function
    //storing the even elements in the v2 from v
    std::copy_if(v.begin(),v.end(),v2.begin(),[](int i){return i%2==0;});

    std::cout<<"Vector 2 : ";
    for(int i=0;i<v2.size();i++)
    {
        std::cout<<v2[i]<<" ";
    }
    std::cout<<std::endl;


    //using the copy_backward() function 
    std::copy_backward(v.begin(),v.end()-2,v3.begin()+5);

    //printing the vector 
    std::cout<<"Vector 3 : ";
    for(int i=0;i<v3.size();i++)
    {
        std::cout<<v3[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}
