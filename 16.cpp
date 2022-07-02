#include<iostream>
using namespace std;
int main()
{
    //to convert to lower case
    char ch;
    //getting the input from the user
    cout<<"Enter a uppercase character : ";
    cin>>ch;

    //converting the to lower case letters
    //since, lowercase letters has ascii value starting from 97 while uppercase letters starts from 65
    //the difference between their starting characters are 32
    //to convert to lowercase we will add 32 to the characters
    cout<<ch<<" converted to lowercase --> "<<(char)(ch+32)<<endl;

    //we can also perform the lowercase coversion using the tolower() function 
    cout<<ch <<" converted to lowercase (using tolower() function) --> "<<(char)tolower(ch)<<endl;
    return 0;
}