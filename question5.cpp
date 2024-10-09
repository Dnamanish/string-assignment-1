// Input a string of length less than 10 and convert it into integer without using builtin function.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "enter string of length less than 10:";
    cin >> str;
    int n = str.length();
    if (n >= 10)
    {
        cout << "invalid string";
    }
    else
    {
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            x *= 10;
            x += (str[i] - 48);
        }
        cout << x<<endl;
        cout<<x+1;
    }
}
