#include<iostream>
#include<ctype.h>
#include<string>
int main()
{
    //program to toggle case
    std::string str;
    bool flag=true;
    std::cout<<"Enter the string : ";
    getline(std::cin,str);

    //always remember isalpha() and isupper() function return positive integer value when the condition is true
    for(int i=0;i<str.length();i++)
    {
        if(isalpha(str[i])>0)
        {
            if(isupper(str[i])>0)
            {
                str[i] = tolower(str[i]);
            }
            else
            {
                str[i] = toupper(str[i]);
            }
        }
        else
        {
            std::cout<<"String is not alphabetical"<<std::endl;
            flag=false;
            break;

        }
    } 
    if(flag==true)
    {
        std::cout<<"Toggle case of the string : "<<str<<std::endl;
    }
    return 0;
}