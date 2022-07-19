#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    //program to demonstrate the fill() and fill_n() function 
    //initializing vectors 
    std::vector<int> v(7);       //initially all the elements of the vectors are initialized to 0 
    std::cout<<"Vector : ";
    for(int i=0;i<v.size();i++)
        std::cout<<v[i]<<" ";
    std::cout<<std::endl;

    //one more way to fill a specific element in the whole vector is to pass one more argument while initializing 
    std::vector<int> v2(7,2);
    std::cout<<"\nVector 2 : ";
    for(int i=0;i<v2.size();i++)
        std::cout<<v2[i]<<" ";
    std::cout<<std::endl;

    //using fill() function
    std::vector<int> v3(7);
    std::fill(v3.begin()+1,v3.end()-2,4);
    std::cout<<"\nVector 3 : ";
    for(int i=0;i<v3.size();i++)
        std::cout<<v3[i]<<" ";
    std::cout<<std::endl;

    //using fill_n() function
    std::vector<int> v4(7);
    std::fill_n(v4.begin()+2,4,9);
    std::cout<<"\nVector 4 : ";
    for(int i=0;i<v4.size();i++)
        std::cout<<v4[i]<<" ";
    std::cout<<std::endl; 

    return 0;   
}
