#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int num;
    cout << "Enter the string" << endl;
    getline(cin,str);
    for(int i = 0;i<str.length();i++)
    {
        num = (int)str[i];
        cout << num << endl;
    }
    cout << "Successfully converted string into integer" << endl;
}