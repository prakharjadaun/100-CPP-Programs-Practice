#include<iostream>
#include<vector>
#include<algorithm>
//generattor function 
int gen()
{
    static int i=0;
    return i++;
}
int main()
{
    //program to demonstrate the generate(), generate_n(), includes() function 
    std::vector<int> v(10);
    //assigning 0-9 to the vectors element 
    std::generate(v.begin(),v.end(),gen);

    //printing the vectors
    std::vector<int>::iterator p ;
    std::cout<<"Vector v : ";
    for(p = v.begin();p!=v.end();p++)
    {
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;


    //using the generate_n function
    std::cout<<"Updated Vector v : ";
    std::generate_n(v.begin()+1,4,gen);

    for(p = v.begin();p!=v.end();p++)
    {
        std::cout<<*p<<" ";
    }
    std::cout<<std::endl;

    //includes() determines if the sequence defined by the start1 and end1 includes all of the elements in the sequence defined by the start2 and end2. it returns true if the elements all of the elements are all found and false otherwise.

    //initialzing two vectors 
    std::vector<int> v1 = {1,2,3,4,5};
    std::vector<int> v2 = {1,2,3,4,5};
    std::vector<int> v3 = {9,8,7,6,5};

    std::cout<<std::includes(v1.begin(),v1.end(),v2.begin(),v2.end())<<std::endl;    //returns true 
    std::cout<<std::includes(v1.begin(),v1.end(),v3.begin(), v3.end())<<std::endl;   //returns false 

}
