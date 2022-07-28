#include<iostream>
using namespace std;
//An exception can be thrown from outside the try block as long it is thrown by a function that is called from within try block.
void myFunc(int i)
{
    cout<<"Inside the myfunc function() : "<<i<<endl;
    if(i==0)
        throw i;        //an exception is been thrown if i==0
}

int main()
{
    try
    {
        cout<<"Inside the try block"<<endl;
        //calling myFunc()
        myFunc(98);
        myFunc(7);
        myFunc(0);
        myFunc(73);
    }
    catch(double d)     //this catch block is entered only when thrown exception is of double type
    {
        cout<<"Inside the catch block which handles exception of double type"<<endl;
        cout<<d<<endl;
    }
    catch(int i)        //this catch block is entered only when thrown exception is of integer type.
    {
        cout<<"Inside the catch block which handles exception of integer type"<<endl;
        cout<<i<<endl;
    }
    cout<<"Outside the try-catch block"<<endl;
    return 0;
}