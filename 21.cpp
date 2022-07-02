#include<iostream>
using namespace std;
int main()
{
    //finding the greatest common divisor
    int a,b;

    //getting the input 
    cout<<"Enter number 1 : ";
    cin>>a;
    cout<<"Enter number 2 : ";
    cin>>b;

    int gcd;
    for(int i=1;i<=(a*b);i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd = i;
        }
    }

    cout<<"Greatest Common Divisor of "<<a<<" and "<<b<<" is : "<<gcd<<endl;
    return 0;
}