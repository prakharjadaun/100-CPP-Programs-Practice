#include<iostream>
using namespace std;
int main()
{
    //program to get the largest element in the array 
    int a[10];

    //getting the input from the user 
    cout<<"Input 10 elements : "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>a[i];
    }

    //to get the largest number 
    int large=-10000000;
    for(int i=0;i<10;i++)
    {
        if(a[i]>large)
            large=a[i];
    }

    cout<<"Largest element in the array : "<<large<<endl;
    //using the max() function in c++
    cout<<"Using library function : "<<max(a[0],*(a+10))<<endl;
    return 0;
}