#include <iostream>
using namespace std;
// function declaration
// for dividing two numbers
void divide(double a, double b);

int main()
{
    double a, b;
    //getting input
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    //calling the function divide()
    divide(a, b);

    return 0;
}

//function definition
void divide(double a, double b)
{
    try         //starting of try block
    {
        if (!b)
            throw b;        //throwing an exception if denominator is zero
        cout<<"Result : "<<a/b<<endl;
    }
    catch(double d)
    {
        //handling the exception
        cout<<"Cannot divide by zero!!"<<endl;
    }
}