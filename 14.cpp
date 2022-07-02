#include<iostream>
using namespace std;
int main()
{
    //program to demonstrate the use of sizeof function
    //sizeof operator is used to get the size of any variable or datatype or object
    int a=2;
    cout<<"Size of a : "<<sizeof(a)<<endl;

    //getting the size of the array without using sizeof 
    int b[] = {1,2,3,4,5};
    cout<<"Size of b[] : "<<*(&b+1)-b<<endl;
    return 0;
}