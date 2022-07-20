#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    //program to understand the search() and search_n() function 
    //initializing a vector 
    std::vector<int> v = {1,2,3,4,5,6,7};
    std::vector<int> v2 = {5,6,7};
    std::vector<int> v3 = {4,2,6};
    std::cout<<"Vector 1 : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"Vector 2 : ";
    for(int i=0;i<v2.size();i++)
    {
        std::cout<<v2[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"Vector 3 : ";
    for(int i=0;i<v3.size();i++)
    {
        std::cout<<v3[i]<<" ";
    }
    std::cout<<std::endl;
    
    ///search() : searches for a subsequence within a sequence. If the subsequence is found a iterator to its beginning is returned, otherwise end is returned.
    std::vector<int>::iterator p;
    //searching between v and v2 
    p = std::search(v.begin(),v.end(),v2.begin(),v2.end());
    if(p!=v.end())
    {
        std::cout<<"Subsequence found!\n";
    }
    else 
    {
        std::cout<<"Subsequence not found!\n";
    }

    //searching between v and v3 
    p = std::search(v.begin(),v.end(),v3.begin(),v3.end());
    if(p!=v.end())
    {
        std::cout<<"Subsequence found!\n";
    }
    else 
    {
        std::cout<<"Subsequence not found!\n";
    }

    //search_n() : searches for a sequence of num elements equal to val within a sequence.
    std::vector<int> v4 = {1,2,3,4,4,4,5,6,3,4};
    p = std::search_n(v4.begin(),v4.end(),2,4);
    if(p!=v4.end())
    {
        std::cout<<"Subsequence found using search_n()"<<std::endl;
    }
    else 
    {
        std::cout<<"Subsequence not found!!"<<std::endl;
    }

    return 0;
}
