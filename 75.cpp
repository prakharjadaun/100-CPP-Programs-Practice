#include<iostream>
using namespace std;
// a generic function is created using the keyword template
//the next line directs the compiler that a template is being created and that a generic difinition is beginning. Here X is a generic type that is used as a place holder. After the template portion function is declared
template<class X> void swapArgs(X &a,X &b)      //also known as template function
{
    X temp;
    temp = a;
    a = b;
    b = temp;
}
//when a compiler creates a specific version of this function, then it is said to have created a specalization (also called a generated function).
int main()
{
    int i=5,j=20;
    double x=11,y=23.34;
    char m='c',n='d';
    //printing the original values
    cout<<"Original : ";
    cout<<"\ni : "<<i<<"\nj : "<<j<<endl;
    cout<<"\nx : "<<x<<"\ny : "<<y<<endl;
    cout<<"\nm : "<<m<<"\nn : "<<n<<endl;

    //swapping the values of the above variables through generic functions 
    swapArgs(i,j);
    swapArgs(x,y);
    swapArgs(m,n);
    //printing the swapped values
    cout<<"\n\nSwapped Values : ";
    cout<<"\ni : "<<i<<"\nj : "<<j<<endl;
    cout<<"\nx : "<<x<<"\ny : "<<y<<endl;
    cout<<"\nm : "<<m<<"\nn : "<<n<<endl;

    return 0;
}