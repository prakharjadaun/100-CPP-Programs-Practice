#include<iostream>
using namespace std;
int main()
{
    //to find the lcm of two numbers
    int a,b;
    //getting the input
    cout<<"Enter number 1 : ";
    cin>>a;
    cout<<"Enter number 2 : ";
    cin>>b;

    int maxN = max(a,b);
    while(true)
    {
        if(maxN%a==0 && maxN%b==0)
        {
            cout<<"Least Common divisor of "<<a<<" and "<<b<<" is : "<<maxN<<endl;
            break;
        }
        ++maxN;
    }
    return 0;
}