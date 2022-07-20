#include<iostream>
#include<algorithm>
#include<vector>
bool isOdd(int i)
{
    if(i%2!=0)
        return true;
    else 
        return false;
}
int main()
{
    //program to understand the remove(), remove_if(), remove_copy() and remove_copy_if() function 
    // remove() : remove elements from the specified range that are equal to the val
    //initializing a vector
    std::vector<int> v = {5,3,2,8,66,2,5,9,10};
    std::cout<<"Vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    std::vector<int>::iterator pend,p;
    //calling the remove function 
    pend = std::remove(v.begin(),v.end(),5);

    //printing the resultant vector 
    std::cout<<"Updated vector : ";
    for(p=v.begin();p!=pend;p++)
    {
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;

    //initializing another vector
    std::vector<int> v2 = {3,2,4,5,6,3,4,88,12};
    std::cout<<"Vector 2 : ";
    for(int i=0;i<v2.size();i++)
    {
        std::cout<<v2[i]<<" ";
    }
    std::cout<<std::endl;

    //remove_if() : removes the element from the specified range for which the predicate func. is true 
    pend = std::remove_if(v2.begin(),v2.end(),isOdd);
    //printing the resultant vector 
    std::cout<<"\nUpdated vector 2 : ";
    for(p=v2.begin();p!=pend;p++)
    {
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;

    std::vector<int> v3 = {5,6,7,3,4,2,5,4,6,3,7},v4(7);
    //remove_copy(): it removes the element from the specified range and puts it into the resultant vector. It also returns the end iterator for the resultant vector 
    std::cout<<"\nVector 3 : ";
    for(int i=0;i<v3.size();i++)
    {
        std::cout<<v3[i]<<" ";
    }
    std::cout<<std::endl;
    pend = std::remove_copy(v3.begin(),v3.end(),v4.begin(),4);
    //printing the resultant vector 
    std::cout<<"Updated vector 4 : ";
    for(p=v4.begin();p!=pend;p++)
    {
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;

    std::vector<int> v5 = {5,6,7,3,4,2,5,4,6,3,7},v6(7);
    //remove_copy_if(): it removes the element from the specified range if predicate func returns true and puts it into the resultant vector. It also returns the end iterator for the resultant vector 
    std::cout<<"\nVector 5 : ";
    for(int i=0;i<v5.size();i++)
    {
        std::cout<<v5[i]<<" ";
    }
    std::cout<<std::endl;
    pend = std::remove_copy_if(v5.begin(),v5.end(),v6.begin(),isOdd);
    //printing the resultant vector 
    std::cout<<"Updated vector 6 : ";
    for(p=v6.begin();p!=pend;p++)
    {
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;

    return 0;
}
