#include<iostream>
using namespace std;
int main()
{
    //program to get the number of digits
    int num;

    //getting the input
    cout<<"Enter the number : ";
    cin>>num;
    int temp=num;
    int counter=0;
    //finding the number of digits
    while(num!=0)
    {
        ++counter;
        num=num/10;
    }

    cout<<"Number of digits in "<<temp<<" are : "<<counter<<endl;
    return 0;
}