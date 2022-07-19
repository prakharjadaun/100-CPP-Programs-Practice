#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    //program to demonstrate the iter_swap and the lexicographical_compare
    std::vector<int> v = {1,2,3,4,5,6,7};
    std::cout<<"Vector v : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    //swaping the first and the last element of the vector 
    std::iter_swap(v.begin(),v.end()-1);
    std::cout<<"After swapping, Vector v : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    //creating two char sequences 
    std::vector<char> c = {'a','v','d'};
    std::vector<char> c2 = {'u','i','w'};

    // lexicographical_compare() : it returns true if the first sequence is lexicographically less than the second and false otherwise. 
    //returns true because c is less than the container c2
    std::cout<<std::lexicographical_compare(c.begin(),c.end(),c2.begin(),c2.end());
    return 0;
}
