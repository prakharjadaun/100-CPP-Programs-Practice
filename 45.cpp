#include<iostream>
#include<stack>
int main()
{
    //program to use stack STL library: push(), pop(), empty(), size(), top()
    std::stack<int> st;
    int n;
    std::cout<<"Enter the n : ";
    std::cin>>n;
    std::cout<<"Enter the elements into the stack : "<<std::endl;
    
    //pushing into the stack 
    while(n!=0)
    {
        int temp;
        std::cin>>temp;
        st.push(temp);
        n--;
    }  

    //size of the stack
    std::cout<<st.size()<<std::endl;
    
    //printing elements out of the stack 
    while(!st.empty())
    {
        std::cout<<st.top()<<std::endl;
        st.pop();
    }

    return 0;
}
