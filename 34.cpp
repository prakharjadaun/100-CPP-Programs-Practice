#include <iostream>
#include <vector>
int main()
{
    // demonstrating insertion and deletion in vectors
    std::vector<char> v(5);
    std::vector<char> v2;
    char str[] = "hello world";

    // initializing vector v
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = i + 'a';
    }

    // copying the contents of str to v2
    for (int i = 0; str[i]; i++)
    {
        v2.push_back(str[i]);
    }

    // printing the vector v
    std::cout << "Vector v : ";
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    // getting the iterator of the vector v and let it point to the 3rd element
    std::vector<char>::iterator p = v.begin();
    p = p + 2;
    // inserting 5 X into the vector v
    v.insert(p, 5, 'X');

    // printing the vector v
    std::cout << "Vector v : ";
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    p = v.begin();
    p += 2;
    // now deleting the inserted 5 Xs
    v.erase(p, p + 5);

    // inserting the contents of vector v2
    p = v.begin();
    p += 2;

    v.insert(p, v2.begin(), v2.end());

    // printing the vector v
    std::cout << "Vector v : ";
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}
