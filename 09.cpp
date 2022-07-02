//program without a main function

// 1. using static initializer
#include<iostream>
using namespace std;

int execute()
{
    cout<<"Under excute function";
    exit(EXIT_SUCCESS);
}

static int s = execute();

int main()
{
    cout<<"Inside main function"<<endl;
}

//----------

//using gcc_startb function
// #include<stdio.h>

// void _start()
// {
//     printf("Inside start function..!");
//     _exit(0);
// }


//-------

//using macro definition
// #include<iostream>
// #define replace(a,b,c,d) a##b##c##d
// #define execute replace(m,a,i,n)

// int execute()
// {
//     std::cout<<"hello world";
//     return 0;
// }

//-------
//using a constructor 
// #include<iostream>
// using namespace std;
// class Demo
// {
//     public:
//         Demo()
//         {
//             cout<<"Inside the constructor"<<endl;
//             exit(EXIT_SUCCESS);
//         }
// };

// static Demo s;

// int main()
// {
//     cout<<"Inside the main function"<<endl;
// }
