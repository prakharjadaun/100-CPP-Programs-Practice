#include <iostream>
using namespace std;

void myfunc(int num)
{
    try
    {
        if (num == 0)
            throw 1;
        if (num == 2)
            throw 'a';
        if (num == 3)
            throw 1.234;
    }
    catch (...)     //here ellipsis matches any type of data
    {
        cout << "Exception is handled" << endl;
        //one very good use for catch(...) is as the last catch of a cluster of catches. In this manner, it provides a useful default or "catch all" statement.
    }
}
int main()
{
    myfunc(0);
    myfunc(2);
    myfunc(3);
    return 0;
}