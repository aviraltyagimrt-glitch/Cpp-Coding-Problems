#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string name1;
    string name2;
    cout << "Enter the first string" << endl;
    getline(cin,name1);
    cout << "Enter the second string" << endl;
    getline(cin,name2);
    int count1 = 0;
    if(name1.length() == name2.length())
    {
        for(int i = 0;i<name1.length();i++)
        {
            for(int j = 0;j<name1.length();j++)
            {
                if(name1[i] == name2[j])
                {
                    count1 = count1 + 1;
                    break;
                }
            }
        }
    }
    if(count1 == name1.length())
    {
        cout << "The strings are Anagram" << endl;
    }
    else
    {
        cout << "The strings are not Anagram" << endl;
        cout << count1 << endl;
    }
    // By using standard libraries
    sort(name1.begin(), name1.end());
    sort(name2.begin(), name2.end());
    if(name1 == name2)
    {
        cout << "The strings are Anagram" << endl;
    }
    else
    {
        cout << "The strings are not Anagram" << endl;
    }
    return 0;
}