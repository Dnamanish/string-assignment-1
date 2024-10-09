// Check whether the given string is palindrome or not.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "enter string:";
    cin >> str;
    string str1=str;
    reverse(str.begin(), str.end());
    if (str1 == str)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not palindrome";
    }
}