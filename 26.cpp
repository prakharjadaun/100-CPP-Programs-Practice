#include<iostream>
#include<algorithm>    //for reverse() function 
using namespace std;

void revString(string &s)
{
    int n = s.length();
    //swapping corners from two corners
    for(int i=0;i<n/2;i++)
    {
        swap(s[i],s[n-i-1]);
    }
}

int main()
{
    //program for string reversal
    //1. using our own function
    string s = "Prakhar Jadaun";
    cout<<"Before reversal : "<<s<<endl;
    revString(s);
    cout<<"After reversal : "<<s<<endl;

    revString(s);
    //2. using the inbuilt function
     cout<<endl<<"Before reversal : "<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<"After reversal : "<<s<<endl;
    return 0;
}