#include<iostream>
using namespace std;
int Reverse(int n)
{
    int temp=0;
    while(n!=0)
    {
        temp += n%10;
        if(n/10!=0)
        {
            temp=temp*10;
        }
        n=n/10;
    }
    return temp;
}
int DecToBin(int n)
{
    int temp=0;
    while(n>0)
    {
        temp += n%2;
        if(n/2>0)
        {
            temp = temp*10;
        }
        n=n/2;
    }
    temp = Reverse(temp);
    return temp;
}
int main()
{
    //to convert decimal to binary 
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Binary form : "<<DecToBin(n);
    return 0;
}