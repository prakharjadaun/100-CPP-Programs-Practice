#include<iostream>
using namespace std;
//using a recurion 
long long int Fact(int n)
{
    if(n<1)
    {
        return 1;
    }
    return n*Fact(n-1);
}
//using a loop 
long long int Factorial(int n)
{
    long long int temp=1;
    if(n!=0)
    {
        while(n!=0)
        {
            temp= temp*n;
            n--;
        }
    }
    return temp;
}
int main()
{
    //program to print factorial of a number
    cout<<"Enter a number n : ";
    int n;
    cin>>n;
    long long int fact = Fact(n);
    cout<<"Factorial of the given number is : "<<fact<<endl;
    return 0;
}
