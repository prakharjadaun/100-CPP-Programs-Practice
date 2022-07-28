#include<iostream>
using namespace std;
int main()
{
    //unhandled exception
    cout<<"Beginning of the program"<<endl;

    try 
    {
        cout<<"Inside the try block"<<endl;
        throw 'a';     //an exception is thrown.
        cout<<"After the throw statement"<<endl;
    } 
    catch(double e)
    {
        cout<<"Inside the catch block"<<endl;
        cout<<e<<endl;
    }

    cout<<"Outside the try and catch ladder"<<endl;
    //the exception is not handled and the program is been aborted.
    return 0;
}