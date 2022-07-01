#include<iostream>
using namespace std;
//swapping using a temporary variable
void SwapT(int *n1,int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}
//using + and - operator 
void SwapO(int *n1,int *n2)
{
    *n1 = *n1 + *n2;
    *n2 = *n1 - *n2;
    *n1 = *n1 - *n2;
}
//using bitwise operator 
void SwapB(int *n1,int *n2)
{
    *n1 = *n1 ^ *n2;
    *n2 = *n1 ^ *n2;
    *n1 = *n1 ^ *n2;
}
int main()
{
    //to swap the two numbers 
    int n1,n2;
    cout<<"Enter number 1 : ";
    cin>>n1;
    cout<<"enter number 2 : ";
    cin>>n2;
    cout<<"Before Swapping : "<<endl;
    cout<<"N1 : "<<n1<<endl;
    cout<<"N2 : "<<n2<<endl;
    SwapB(&n1,&n2);
    cout<<"After Swapping :"<<endl;
    cout<<"N1 : "<<n1<<endl;
    cout<<"N2 : "<<n2<<endl;
}