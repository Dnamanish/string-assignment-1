// Input a string of even length and reverse the second half of the string.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "enter string of even length:";
    cin >> str;
    int n = str.length();
    if (n % 2 == 0)
    {
        reverse(str.begin() + n / 2, str.end());
        cout << str;
    }
    else{
        cout<<"invalid input";
    }
}