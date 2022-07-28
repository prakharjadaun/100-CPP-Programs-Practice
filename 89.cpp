#include<iostream>
using namespace std;
//multiple catch blocks 
//using templates 
template<class X>
void ExceptHandler(X i)
{
    //multiple catch blocks 
    try
    {
        throw i;
    }
    catch(int i)
    {
        cout<<"Exception Handled # : Integer type"<<endl;
    }
    catch(double d)
    {
        cout<<"Exception Handled # : Double type"<<endl;
    }
    catch(char c)
    {
        cout<<"Exception Handled # : char type"<<endl;
    }
    catch(char const *s)
    {
        cout<<"Exception handled # : character sequence type"<<endl;
    }
}
int main()
{
    //calling ExceptHandler()
    ExceptHandler(1);
    ExceptHandler(2.34);
    ExceptHandler('A');
    ExceptHandler("Hello");
    return 0;
}