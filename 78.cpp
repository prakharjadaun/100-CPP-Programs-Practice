#include<iostream>
using namespace std;
//overloading a function template 

//first version of print template
template<class X> 
void print(X a)
{
    cout<<"\nInside function print which take a single argument"<<endl;
    cout<<"a : "<<a<<endl;
}

//second version of print template
template<class X,class Y>
void print(X a,Y b)
{
    cout<<"\nInside function print which takes two arguments"<<endl;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
}

int main()
{
    int i=5;
    double y=23.34;
    char n='d';

    print(i);       //calls print(X)
    print(y,n);     //calls print(X,Y)
    print(i,y);     //calls print(X,y)

    return 0;
}