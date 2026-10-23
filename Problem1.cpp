#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1 = "Aviral";
    string rev;
    for(int i  = str1.length();i>=0;i--)
    {
        cout << str1[i];
        rev = rev + str1[i];
    }
    cout << endl;
    cout << rev << endl;
    // Second Method Using Standard Library
    string str2 = "Tyagi";
    reverse(str2.begin(),str2.end());
    cout << "The reversed string is " << str2 << endl;
    // Third Way without changing the original string and also it doesn't require any standard usage of reverse function
    string og = "Hello";
    string rev2(og.rbegin(),og.rend());
    cout << "The original string was " << og << endl;
    cout << "The new string is " << rev2 << endl;
}