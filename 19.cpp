#include<iostream>
#include<cstring>    //for strcat() functionm
using namespace std;
int main()
{
    //program to concatenate two strings
    //1. using strcat function 
    char a[100] = "My username is ";
    char b[] = "prakharjadaun";

    strcat(a,b);

    cout<<"After concatenation : \n"<<a<<endl;

    //2. without strcat() function 
    char c[100]="Are you ";
    char d[] = "mad!??";

    //first calculate the length of the first char array
    int len= strlen(c);
    for(int j=0;d[j]!='\0';j++,++len)
    {
        c[len]=d[j];
    } 
    //adding the null in the end 
    c[len]='\0';
    cout<<"Without strcat() : "<<c<<endl;
    return 0;
}