#include<iostream>
using namespace std;
//a function with two generic types
//template and the generic function name can be on the different lines.
template<class T1,class T2>      //NOTE: no other lines can occur between the template and the start of the generic function
void print(T1 a,T2 b)
{
    cout<<a<<", "<<b<<endl;
}

int main()
{
    int i=5,j=20;
    double x=11,y=23.34;
    char m='c',n='d';

    //printing the values of different using the generic print function 
    print(i,j);
    print(x,y);
    print(m,n);

    return 0;
}