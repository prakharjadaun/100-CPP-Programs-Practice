#include<iostream>
using namespace std;

int main()
{
    //basic use of try, throw and catch statement
    cout<<"Beginning of the code"<<endl;

    try
    {
        //start of the try block
        cout<<"Inside the try block"<<endl;
        throw 'a';
        cout<<"Line after the throw statement"<<endl;
    }
    catch(char e)
    {
        //inside the catch block
        cout<<"Inside the catch block"<<endl;
        cout<<"Exception caught with character : "<<e<<endl;
    }

    cout<<"Outside of the try-catch block"<<endl;
    //throwing an unhandled exception causes the standard library function terminate() to be invoked. By default, terminate() calls the abort() to stop your program.
    return 0;
}