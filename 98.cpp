#include<iostream>
#include<fstream>       
using namespace std;
//reading from a file using getline() function
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
    char str[40];

    //reading from a file line by line
    while(in)
    {
        //using the getline function 
        in.getline(str,20);
        cout<<str<<endl;
    }
    
    //closing the object
    in.close();
    return 0;
}