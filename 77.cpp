#include<iostream>
using namespace std;
//Even though a generic function overloads itself as needed, you can explicitly overload one, too. This is formally called explicitly specalization. If you overload a generic function, that overloaded function overrided (hides) the generic function relative to that specific version.

template<class T1> 
T1 addVal(T1 a,T1 b)
{
    cout<<"\nInside template addVal"<<endl;
    return a+b;
}

//this overrides the generic version of the addVal
int addVal(int a,int b)
{
    cout<<"\nInside addVal int specialization"<<endl;
    return a+b;
}


int main()
{
    int i=500,j=920;
    double x=11,y=23.34;
    short a=2,b=4;

    cout<<"Adding the integers : "<<addVal(i,j)<<endl;     //calls explicitly overloaded addVal
    cout<<"Adding the double : "<<addVal(x,y)<<endl;       //calls generic addVal
    cout<<"Adding the short : "<<addVal(a,b)<<endl;        //calls generic addVal

    return 0;
}