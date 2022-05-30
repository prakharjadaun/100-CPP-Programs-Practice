#include<iostream>
#include<fstream>       
using namespace std;
//reading from a file
int main()
{
    //creating an object of ifstream object
    ifstream in("Data.txt");       //open file for output(writing)

    if(!in)
    {
        //if file is not found or opened
        cout<<"Cannot open file!!"<<endl;
        return 1;
    }
    char str[20];

    //reading from a file
    while(in)
    {
        //inputs word by word from the file not line by line
        in>>str;
        cout<<str<<endl;
    }
    
    //closing the object
    in.close();
    return 0;
}