#include<iostream>
using namespace std;
int main()
{
    //to find the ascii value of the given character
    //defining a character
    char ch;
    //getting the input 
    cout<<"Enter a character : ";
    cin>>ch;
    //printing the ascii value of the character
    cout<<"ASCII of "<<ch<<" is "<<int(ch)<<endl;
    return 0;
}