#include<iostream>
#include<fstream>       
using namespace std;
//writing into a file
int main()
{
    //creating an object of ofstream object
    ofstream out("Data.txt");       //open file for output(writing)

    if(!out)
    {
        //if file is not found or created
        cout<<"Cannot open file!!"<<endl;
        return 1;
    }

    //writing into the file with the ofstream object
    out<<"Prakhar Jadaun"<<endl;
    out<<"Ramesh Kumar"<<endl;
    out<<"Suresh Kumar"<<endl;

    //closing the object
    out.close();
    return 0;
}