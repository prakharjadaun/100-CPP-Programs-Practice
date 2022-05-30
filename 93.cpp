#include<iostream>
using namespace std;
//rethrowing an exception
// the reason to for rethrowing an exception is to allow multiple handlers access to the exception and a second handler copes with another.
void myfunc()
{
    try 
    {
        //throwing an const char *str
        throw "hello";
    }
    catch(const char *s)    //exception caught
    {
        cout<<"Caught char *s inside myfunc()"<<endl;
        cout<<s<<endl;
        throw;      //rethrown char* out of the function
    }
}
int main()
{
    try
    {
        myfunc();
    }
    catch(const char *s)    //exception caught
    {
        cout<<"Caught char *s inside main()"<<endl;
        cout<<s<<endl;
    }
    return 0;
}