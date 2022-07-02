#include<iostream>
using namespace std;
int main()
{
    // coverting the lowercase letters to the uppercase 
    //In this program we will subtract 32 to the lowercase letters
    char ch;
    //getting the input 
    cout<<"Enter a lowercase character : ";
    cin>>ch;

    //converting to uppercase
    cout<<ch<<" converting to uppercase --> "<<(char)(ch-32)<<endl;

    //using the toupper() function 
    cout<<ch<<"  converting to uppercase (using toupper() function --> "<<(char)toupper(ch)<<endl;
    return 0;
}