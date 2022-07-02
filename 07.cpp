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
int main()
{
    //printing the reverse of a number
    int n;
    cout<<"Input a number : ";
    cin>>n;
    int rev = Reverse(n);
    cout<<"Reverse of the number : "<<rev;
    return 0;
}
