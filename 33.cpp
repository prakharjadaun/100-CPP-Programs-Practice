// Vectors are the dynamic arrays which have the ability to resize itself automatically when an element is inserted or deleted. The size of the arrays cannot be altered at run time but vectors overcomes this disadvantage of the arrays.
// Let's have a quick introduction of the vectors
#include <iostream>
#include <vector>
#include <cctype> //declares a set of functions which can classify and transform individual characters
int main()
{
    std::vector<char> ch(5);   //created a vector of length 5 and type char

    //getting the size of the vector
    std::cout<<"Size of the vector : "<<ch.size()<<std::endl;

    //initializing characters in the vector
    for(int i=0;i<ch.size();i++)
    {
        ch[i] = i + 'a';
    }

    //printing the contents of the vector 
    std::cout<<"Vector : ";
    for(int i=0;i<ch.size();i++)
    {
        std::cout<<ch[i]<<" ";
    }
    std::cout<<std::endl;

    //expanding vector 
    for(int i=0;i<10;i++)
    {
        ch.push_back(i+5+'a');
    }

    //printing the contents of the vector 
    std::cout<<"Vector : ";
    for(int i=0;i<ch.size();i++)
    {
        std::cout<<ch[i]<<" ";
    }
    std::cout<<std::endl;


    //modifying the contents of the vector
    for(int i=0;i<ch.size();i++)
    {
        ch[i] = toupper(ch[i]);
    }

    //printing the contents of the vector 
    std::cout<<"Vector : ";
    for(int i=0;i<ch.size();i++)
    {
        std::cout<<ch[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;

}
