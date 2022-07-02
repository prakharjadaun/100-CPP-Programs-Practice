#include<iostream>
using namespace std;
//using a recurion 
long int Fact(int n)
{
    if(n<1)
    {
        return 1;
    }
    return n*Fact(n-1);
}

int main()
{
    //A number can be said as a strong number when the sum of the factorial of the individual digits is equal to the number.
    //printing strong numbers under 1000
    cout<<"Strong numbers : ";
    for(int i=1;i<1000;i++)
    {
        long int temp=i,total=0;
        while(temp!=0)
        {
            total= total+ Fact(temp%10);
            temp=temp/10;
        }
        if(total==i)
        {
            cout<<total<<" ";
        }
    }
    return 0;
}