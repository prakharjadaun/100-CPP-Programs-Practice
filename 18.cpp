#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    //to get the string length 
    string str = "I love music";

    //1. using the size() function of strings
    cout<<"Length of the string is : "<<str.size()<<endl;

    char ch[] = "I play piano";
    //2. using the strlen() function 
    cout<<"Length of the string is : "<<strlen(ch)<<endl;

    //3. last one is with a for loop
    int len=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        len++;
    }
    cout<<"Length of the string is : "<<len<<endl;
    return 0;
}