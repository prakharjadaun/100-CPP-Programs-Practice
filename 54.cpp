#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    //program to understand the copy() function 
    std::vector<int> v = {23,45,12,56,78,90};
    std::vector<int> v2(4);


    //printing our vector 
    std::cout<<"Vector : ";
    std::vector<int>::iterator p = v.begin();
    while(p!=v.end())
    {
        std::cout<<*p<<" ";
        p++;
    }
    std::cout<<std::endl;

    //copy function 
    //for that creating another vector in which we will add a copy of element 
    std::copy(v.begin(),v.begin()+3,v2.begin());
    std::cout<<"Copied three elements of vector\n";

    //printing the copied vector
    std::cout<<"Vector 2 : ";
    for(int i=0;i<v2.size();i++)
    {
        std::cout<<v2[i]<<" ";
    }
    std::cout<<std::endl;
   
    std::vector<int> v3(5);
    //copying using the copy_n() function 
    std::copy_n(v.begin(),5,v3.begin());
    std::cout<<"Vector 2 (using copy_n) : ";
    for(int i=0;i<v3.size();i++)
    {
        std::cout<<v3[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}
