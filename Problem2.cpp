#include<iostream>
#include<string>
using namespace std;
int main()
{
    // With using iterative approach
    string str1 = "oyo";
    string str2 = "oyo";
    int length = 0;
    for(int i = str1.length()-1;i>=0;i--)
    {
        if(str1[i] == str2[i])
        {
            length = length + 1;
            continue;
        }
        else
        {
            cout << "The string is not Palindrome" << endl;
            break;
        }
    }
    if(length == str2.length())
    {
        cout << "The string is Palindrome" << endl;;
    }
}