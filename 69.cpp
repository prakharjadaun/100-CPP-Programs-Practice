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
    //program to understand the replace(), replace_if(), replace_copy() and replace_copy_if() function 
    // replace() : replaces elements from the specified range that are equal to the oldval with the newval
    //initializing a vector
    std::vector<int> v = {5,3,2,8,66,2,5,9,10};
    std::cout<<"Vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    //calling the remove function 
    std::replace(v.begin(),v.end(),5,100);

    //printing the resultant vector 
    std::cout<<"Updated vector : ";
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
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

    //replace_if() : replace the element from the specified range for which the predicate func. is true 
    std::replace_if(v2.begin(),v2.end(),isOdd,100);
    //printing the resultant vector 
    std::cout<<"\nUpdated vector 2 : ";
    for(int i=0;i<v2.size();i++)
    {
        std::cout<<v2[i]<<" ";
    }
    std::cout<<std::endl;

    std::vector<int> v3 = {5,6,7,3,4,2,5,4,6,3,7},v4(7);
    //replace_copy(): it replaces the element from the specified range and puts it into the resultant vector. It also returns the end iterator for the resultant vector 
    std::cout<<"\nVector 3 : ";
    for(int i=0;i<v3.size();i++)
    {
        std::cout<<v3[i]<<" ";
    }
    std::cout<<std::endl;
    std::vector<int>::iterator p,pend;
    pend = std::replace_copy(v3.begin(),v3.end(),v4.begin(),4,1000);
    //printing the resultant vector 
    std::cout<<"Updated vector 4 : ";
    for(p=v4.begin();p!=pend;p++)
    {
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;

    std::vector<int> v5 = {5,6,7,3,4,2,5,4,6,3,7},v6(7);
    //replace_copy_if(): it replaces the element from the specified range if predicate func returns true and puts it into the resultant vector. It also returns the end iterator for the resultant vector 
    std::cout<<"\nVector 5 : ";
    for(int i=0;i<v5.size();i++)
    {
        std::cout<<v5[i]<<" ";
    }
    std::cout<<std::endl;
    pend = std::replace_copy_if(v5.begin(),v5.end(),v6.begin(),isOdd,999);
    //printing the resultant vector 
    std::cout<<"Updated vector 6 : ";
    for(p=v6.begin();p!=pend;p++)
    {
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;

    return 0;
}
