// Input a string of length n and count all the consonants in the given string.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "enter string:";
    cin >> str;
    int count = 0, i;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    cout << n - count;
}