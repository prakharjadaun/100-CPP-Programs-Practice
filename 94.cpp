//setting a new terminate handler 
#include<iostream>
#include<exception>
#include<cstring>
using namespace std;

void myExcetionHandler()
{
    cerr<<"Inside the new termination handler"<<endl;
    abort();
}

int main()
{
    //setting a new terminate handler
    std::set_terminate(myExceptionHandler);

    try
    {
        cout<<"Inside the try block"<<endl;
        throw 100;
    }
    catch(char c)
    {
        //won't caught a int exception
        cout<<"Caught a char exception"<<endl;
    }
    return 0;
}