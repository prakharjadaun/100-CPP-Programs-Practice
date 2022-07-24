#include<iostream>
using namespace std;
#define TABWIDTH 8
//using standard parameters with template functions 
//displaing data at specified position
template<class X> 
void tabDisplay(X data, int n)
{
    //applying the specified number of tabs
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<TABWIDTH;j++)
        {
            cout<<" ";
        }
    }
    cout<<data<<endl;
}

int main()
{
    //calling the template function 
    tabDisplay(100,1);
    tabDisplay("Hello",2);
    tabDisplay(100/3,4);

    return 0;
}