#include<iostream>
#include<string>
int main()
{
    //to get the number of vowels and consonant in the string
    int countV=0;
    std::string str;
    std::cout<<"Enter the string : ";
    getline(std::cin,str);

    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u')
        {
            countV++;
        }
    }
    std::cout<<"Number of vowels : "<<countV<<std::endl;
    std::cout<<"Number of consonants : "<<str.length()-countV<<std::endl;
    return 0;
}