#include<iostream>
#include<cstring>
using namespace std;

//definning a class of
class MyException
{
    public:
        char str[80];
        int num;
        //constructor 
        MyException()
        {
            *str=0;
            num=0;
        }
        //parameterized constructor
        MyException(char *s,int n)
        {
            strcpy(str,s);
            num=n;
        }
};

int main()
{

    try 
    {
        int n;
        //input a positive number
        cout<<"Enter a positive number : ";
        cin>>n;

        if(n<0)
        {
            //an object of MyException class is been thrown if entered number is smaller than 0
            throw MyException("Not positive",n);
        }

        cout<<"Positive number : "<<n<<endl;
    }
    catch(MyException e)
    {
        cout<<e.str<<endl;
        cout<<e.num<<endl;
    }
    return 0;
}

