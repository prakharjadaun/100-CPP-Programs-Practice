#include<iostream>
using namespace std;
bool checkPrime(int n)
{
    bool c = false;
    for(int i=2;i<(n/2);i++)
    {
        if(n%i==0)
        {
            c = true;
            break;
        }
    }
    return c;
}
int main()
{
    //printing all prime numbers under 50 
    //remember 1 is neither prime nor composite
    for(int i=2;i<50;i++)
    {
        bool temp = checkPrime(i);
        if(temp==false)
        {
            cout<<i<<"  ";
        }
    } 
    return 0;
}
