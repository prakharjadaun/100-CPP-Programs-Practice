#include<iostream>
using namespace std;
int main()
{
    //what happens if no exception is generated or thrown in a program? : The catch block is not accessed or executed.
    try 
    {
        cout<<"Inside the try block"<<endl;
        int a,b;
        cout<<"Enter a : ";
        cin>>a;
        cout<<"Enter b : ";
        cin>>b;
        cout<<"Result : "<<a+b<<endl;
    }
    catch(int i)
    {
        //this block is never executed because no exception of integer type is thrown or generated.
        cout<<"Inside the catch block"<<endl;
    }

    cout<<"End of the program"<<endl;
    return 0;
}