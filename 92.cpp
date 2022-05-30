//restricting exceptions 
#include<iostream>
using namespace std;

//this function can only throw ints, chars and doubles.
void myfunc(int i) throw (int,char,double)
{
    if(i==0) 
        throw 1;
    if(i==1)
        throw 1.23;
    if(i==2)
        throw 'e';
}
//if this function attempts to throw any other type of exception, then an abnormal termination will occur. Remove int from the list and run the program.
int main()
{
    cout<<"Beginning of the program"<<endl;
    try
    {
        myfunc(0);
        // myfunc(1);
        // myfunc(2);
    }
    catch(int i)
    {
        cout<<"Caught an integer exception"<<endl;
    }
    catch(char c)
    {
        cout<<"Caught a char exception"<<endl;
    }
    catch(double d)
    {
        cout<<"Caught a double exception"<<endl;
    }
    return 0;
}

