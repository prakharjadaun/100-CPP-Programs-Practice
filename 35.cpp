#include<iostream>
#include<cctype>
int main()
{
    //demonstrating the function declared in cctype header file
    //functions : isalpha(), isblank(), iscntrl(), isdigit(), isgraph(), islower(), 
    //isprint(), ispunct(), isspace(), isupper(), isxdigit(), tolower(), toupper()

    //1. isalpha():
    char ch = 'a';
    int a = 2;
    std::cout<<isalpha(ch)<<std::endl;    //returns more than 0 for being true 
    std::cout<<isalpha(a)<<std::endl;     //returns 0 because it is not a alphabet

    //2. isblank()
    ch = ' ';
    std::cout<<isblank(ch)<<std::endl;    //returns more than 0 because ch contains a blank character
    std::cout<<isblank(a)<<std::endl;     //returns 0 because a contains a digit

    //3. iscntrl()  : examples of control characters - '\n', '\t', '\b'
    ch = '\t';
    std::cout<<iscntrl(ch)<<std::endl;    //return more than 0 because ch contains a control character
    std::cout<<iscntrl(' ')<<std::endl;    //returns 0 because space is not a control character

    ///4. isdigit() 
    ch = '6';
    std::cout<<isdigit(6)<<std::endl;       //returns 0 as 6 is an integer
    std::cout<<isdigit(ch)<<std::endl;      //retuns 1 as '6' is a digit   

    //5. isgraph()
    //ch contains 6 
    std::cout<<isgraph(ch)<<std::endl;      //true condition 
    ch = '\t';
    std::cout<<isgraph(ch)<<std::endl;      //false condition 
    
    //6. islower()
    ch = 'i';
    std::cout<<islower(ch)<<std::endl;      //true condition 
    std::cout<<islower('I')<<std::endl;     //false condition 

    //7. isprint()
    ch = 't';
    std::cout<<isprint(ch)<<std::endl;      //true condition 
    std::cout<<isprint('\t')<<std::endl;    //false condition 

    //8. ispunct() 
    std::cout<<ispunct(',')<<std::endl;     //true
    std::cout<<ispunct('+')<<std::endl;     //true 
    std::cout<<ispunct('8')<<std::endl;     //false

    //9. isspace()
    std::cout<<isspace(' ')<<std::endl;      //true 
    std::cout<<isspace('p')<<std::endl;     //false

    //10 . isupper()
    ch = 'I';
    std::cout<<isupper(ch)<<std::endl;      //true condition 
    std::cout<<isupper('i')<<std::endl;     //false condition 

    //11. isxdigit()
    ch = '0';
    std::cout<<isxdigit(ch)<<std::endl;      //true condition

    //12. tolower() 
    std::cout<<(char)(tolower('T'))<<std::endl;

    //13. toupper()
    std::cout<<(char)(toupper('t'))<<std::endl;
    return 0;
}
