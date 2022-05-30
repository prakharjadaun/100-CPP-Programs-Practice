#include<iostream>
#include<fstream>       
using namespace std;
//reading from a file using seekg()
int main()
{
    char ch;
    //creating an object of ifstream object
    ifstream in("Data.txt");       //open file for output(writing)

    if(!in)
    {
        //if file is not found or opened
        cout<<"Cannot open file!!"<<endl;
        return 1;
    }
    char str[20];
    //using seekg to read a file
    in.seekg(0,ios::beg);

    while(in.get(ch))
    {
        cout<<ch;
    }
    
    //closing the object
    in.close();
    return 0;
}