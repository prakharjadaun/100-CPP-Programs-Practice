#include<iostream>
#include<fstream>       
using namespace std;
//writing into a file using seekp()
int main()
{
    //creating an object of ofstream object
    ofstream out("Data.txt",ios::app);       //open file for output(writing)

    if(!out)
    {
        //if file is not found or created
        cout<<"Cannot open file!!"<<endl;
        return 1;
    }

    out.seekp(0,ios::end);
    //writing into the file with the ofstream object
    out<<"Virat Kohli"<<endl;
    //closing the object
    out.close();
    return 0;
}