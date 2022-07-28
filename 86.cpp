#include<iostream>
using namespace std;

void myFunc(int i)
{
    //localized try-catch block in a function 
    try
    {
        cout<<"Inside myfunc : "<<i<<endl;
        if(i)
            throw i;
    }
    catch(int e)
    {
        cout<<"Exception is handled locally : "<<e<<endl;
    }
}

int main()
{
    //try block 
    try 
    {
        //calling myFunc
        myFunc(76);
        myFunc(34);
        myFunc(23);

        //these exception is handled locally inside the myFunc function and exception do not reaches the main() function
    }
    catch(int i)
    {
        cout<<"Inside catch block which is in the main() function"<<endl;
    }
    return 0;
}