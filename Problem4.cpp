#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name1;
    string name2;
    cout << "Enter the first string" << endl;
    getline(cin,name1);
    cout << "Enter the second string" << endl;
    getline(cin,name2);
    if(name1.length() == name2.length())
    {
        return 0;
    }
    else
    {
        cout << "The two strings are not equal in length , therefore they are not a valid Anagram" << endl;
    }
    
}