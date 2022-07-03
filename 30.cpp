#include<iostream>
#include<string>
void assign0(int arr[26])
{
    for(int i=0;i<26;i++)
    {
        arr[i]=0;
    }
}

void update(int arr[26],std::string str)
{
    for(int i=0;i<str.length();i++)
    {
        arr[str[i]-97]++;
    }
}

bool checkAnagram(int arr1[26],int arr2[26])
{
    bool flag=true;
    for(int i=0;i<26;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            flag=false;
            break;
        }
    }
    return flag;
}
int main()
{
    //to find the anagram array
    std::string str1, str2;
    std::cout<<"Enter string 1 : ";
    getline(std::cin,str1);
    std::cout<<"Enter string 2 : ";
    getline(std::cin,str2);

    int arr1[26],arr2[26];
    assign0(arr1);
    assign0(arr2);

    //converting both string to lowercase
    for(int i=0;i<str1.length();i++)
    {
        str1[i]=tolower(str1[i]);
    }
    for(int i=0;i<str2.length();i++)
    {
        str2[i]=tolower(str2[i]);
    }

    update(arr1,str1);
    update(arr2,str2);

    if(checkAnagram(arr1,arr2)==true)
    {
        std::cout<<"Strings are anagram!"<<std::endl;
    }
    else
    {
        std::cout<<"Strings are not anagram!"<<std::endl;
    }

    return 0;
}