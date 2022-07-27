#include<iostream>
using namespace std;
const int SIZE = 10;
//creating a template class
//demonstrating the stack and its function with the help of templates.
template<class Type>    //creating a class named STack
class Stack
{
    Type stck[SIZE];
    int index;

    public:
        //constructor of the class Stack()
        Stack()
        {
            index=0;
        }
        //function declaration to push an item into the stack
        void push(Type item);
        //function declaration to pop an item out of the stack
        Type pop();
};

//pushing an object 
template<class Type>
void Stack<Type>::push(Type item)
{
    if(index==SIZE)
    {
        cout<<"Stack is full"<<endl;
        return;
    }
    stck[index]=item;
    index++;
}

//popping an object 
template<class Type>
Type Stack<Type>::pop()
{
    if(index==0)
    {
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    index--;
    return stck[index];
}

int main()
{
    //creating object of stack class
    Stack<char> s1;

    s1.push('S');
    s1.push('K');
    s1.push('I');
    s1.push('I');
    s1.push('P');

    cout<<"Top element of the stack s1 : "<<s1.pop()<<endl;

    Stack<double> s2;

    s2.push(1.23);
    s2.push(2.45);
    s2.push(6.54);
    s2.push(1234.44);
    s2.push(78.9);

    cout<<"Top element of the stack s2 : "<<s2.pop()<<endl;

    return 0;

}