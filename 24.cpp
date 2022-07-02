#include<iostream>
#include<numeric>   //for accumulate function
using namespace std;
int main()
{
    //to get the array average
    int a[] = {1,2,3,4,5};
    int len = sizeof(a)/sizeof(a[0]);
    int total=0;
    //using accumulate function to find the array sum
    cout<<"Average of the array : "<<accumulate(a,a+len,total)/len<<endl;
    return 0;
}