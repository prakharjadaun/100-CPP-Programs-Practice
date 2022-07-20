#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    //program to understand the next_permutation() and the prev_permutation func.
    //initialzing a vector
    std::vector<int> v = {1,3,2};

    //sorting the vector 
    std::sort(v.begin(),v.end());

    std::cout<<"Vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    //printing the all possible permutations
    do 
    {
        for(int i=0;i<v.size();i++)
        {
            std::cout<<v[i]<<" ";
        }
        std::cout<<std::endl;
    } while(std::next_permutation(v.begin(),v.end()));

    std::cout<<"After loop, Vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;


    //reversing the vector v for prev_permutation func. 
    std::reverse(v.begin(),v.end());

    //printing the all possible permutations
    do 
    {
        for(int i=0;i<v.size();i++)
        {
            std::cout<<v[i]<<" ";
        }
        std::cout<<std::endl;
    } while(std::prev_permutation(v.begin(),v.end()));

    std::cout<<"After loop, Vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;

}
