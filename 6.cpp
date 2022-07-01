#include<iostream>
using namespace std;
int main()
{
    //to find the sum of digits
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int temp=0;
    while(n!=0)
    {
        temp+=(n%10);
        n=n/10;
    }
    cout<<"Sum of the digits of the given number : "<<temp<<endl;
    return 0;
}