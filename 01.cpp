#include<iostream>
using namespace std;
int main()
{
    //fibonacci series 
    int var=1;
    int temp=0,res;
    cout<<"fibonacci series : 0 1";
    for(int i=0;i<10;i++)
    {
        res = temp+var;
        cout<<"  "<<res;
        temp = var;
        var = res;
    } 
    return 0;
}
