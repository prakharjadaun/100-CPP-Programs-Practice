#include<iostream>
using namespace std;
int Reverse(int n)
{
    int temp=0;
    while(n!=0)
    {
        temp += n%10;
        if(n/10!=0)
        {
            temp=temp*10;
        }
        n=n/10;
    }
    return temp;
}
bool checkPalindrome(int i)
{
    bool flag=true;
    int rev = Reverse(i);
    if(rev!=i)
    flag=false;
    return flag;
}
int main()
{
    //palindrome numbers : which reads same backwards as forward
    //printing palindrome numbers under 1000
    for(int i=0;i<1000;i++)
    {
        bool c = checkPalindrome(i);
        if(c==true)
        {
            cout<<i<<"  ";
        }
    }
    return 0;
}
