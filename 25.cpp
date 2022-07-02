#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    //program to strcpy
    char str[] = "Voldemort's name was Tom Riddle";
    char str2[100];

    //1. without using strcpy function 
    for(int i=0;str[i]!='\0';i++)
    {
        str2[i]=str[i];
    }
    cout<<"str 1 : "<<str<<endl;
    cout<<"After copying contents of str1 to str2 : "<<endl;
    cout<<"Str 2 : "<<str2<<endl;

    //2. using the strcpy() function 
    char str3[30];
    strcpy(str3,"Hello there!");
    cout<<endl<<"With strcpy() func "<<endl;
    cout<<"str3 : "<<str3<<endl;
    return 0;
}