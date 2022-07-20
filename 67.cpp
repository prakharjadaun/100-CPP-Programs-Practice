#include<iostream>
#include<algorithm>
#include<vector>
#include<time.h>
#include<stdlib.h>
#include<random>
int random_gen(int i)
{
    return rand()%i;
}
int main()
{
    //program to understand the shuffle() and the random_shuffle function 
    //initialzing a vector 
    std::vector<int> v = {1,3,2,4,5,6,7,9};
    srand(unsigned(time(0)));
    std::cout<<"Vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    std::random_shuffle(v.begin(),v.end(),random_gen);

    std::cout<<"After random shuffling, Vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;   

    //shuffle : The function swaps the value of each element with that of some other randomly picked element. The function determines the element picked by calling g().
    std::shuffle(v.begin(),v.end(),std::default_random_engine(0));

    std::cout<<"After shuffling, Vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl; 
    return 0;
}
