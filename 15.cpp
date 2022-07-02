#include<iostream>
using namespace std;
int main()
{
    //program to check for leap year
    int y;
    //getting the input
    cout<<"Enter the year : ";
    cin>>y;
    
    //leap years are those years which are perfectly divisible by 400 and should not be divisble by 100
    //also leap years are those years which are divisible by 4 but not by 100
    if(y%400==0)
        cout<<y<<" is a leap year!"<<endl;
    else if(y%100==0)
        cout<<y<<" is not a leap year!"<<endl;
    else if(y%4==0)
        cout<<y<<" is a leap year!"<<endl;
    else 
        cout<<y<<" is not a leap year!"<<endl;
    return 0;
}