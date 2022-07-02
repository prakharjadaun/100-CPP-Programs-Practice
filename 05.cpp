#include<iostream>
#include<math.h>
using namespace std;
bool Armstrong(int i)
{
    bool flag=false;
    int temp=i,arm=0;
    while(temp!=0)
    {
        arm +=pow(temp%10,3);
        temp=temp/10;
    }
    if(arm==i)
    {
        flag=true;
    }
    return flag;
}
int main()
{
    //armstrong number
    //an integer such that the sum of the cubes of its digits is equal to the number itself.
    //printing armstrong numbers under 1000
    for(int i=0;i<1000;i++)
    {
        bool c = Armstrong(i);
        if(c==true)
        {
            cout<<i<<"  ";
        }
    }
    return 0;
}
