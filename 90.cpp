#include<iostream>
using namespace std;

class Base 
{

};

class Derived : public Base
{

};

int main()
{
    //instantiating an object of Derived class
    Derived d;

    try
    {
        //throwing exception of derived class
        throw d;
    }
    catch(Base B)       //catching an exception of base class
    {
        cout<<"Exception of base class handled"<<endl;
    }
    catch(Derived D)    //catching an exception of derived class
    {
        //this block is never handled because the exception is been handled by the catch block of base class 
        cout<<"Exception of derived class handled"<<endl;
    }
    //also a warning has been given because the base class catch block handles the exception before the derived class catch block

    //For better practice, always use catch block of derived class followed by the catch of its base class
    return 0;
}