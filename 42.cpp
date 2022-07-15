#include<bits/stdc++.h>
#define S 16
int main()
{
    //program to demonstrate the bitset in c++
    //bitset initialized all bits with 0
    std::bitset<S> b;
    std::cout<<"Bitset 1 : "<<b<<std::endl;

    //bitset initialised with bits 17
    std::bitset<S> b1(17);
    std::cout<<"Bistset 2 : "<<b1<<std::endl;
    //bitset initialized with bits specified in the string 
    std::bitset<S> b2("1010");
    std::cout<<"Bitset 3 : "<<b2<<std::endl;

    std::bitset<S> b3;
    //initializing the specific index of the bitset 
    b3[1]=1;
    b3[8]=1;
    std::cout<<"Bitset 4 : "<<b3<<std::endl;

    //converting decimal number to binary using bitset
    int n = 30;
    std::cout<<"Binary equivalent of "<<n<<" : "<<std::bitset<S>(n)<<std::endl;
    return 0 ;
}
