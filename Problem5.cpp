#include<iostream>
#include<string>
using namespace std;
int main()
{
    char a = 'a';
    char A = 'A';
    int large = (int)a + (int)A;
    int larger = large - (int)'a';
    cout << "The value of large is: " << large << endl;
    cout << "The value of larger is: " << larger << endl;
    cout << "The conversion is " << (char)larger << endl;
    for(char i = 'a'; i <= 'z'; i++)
    {
       int u = (int)i + 65;
       int z = u - 97;
       cout << (char)z << endl;
    }
    for(char j = 'A';j<'Z';j++)
    {
        // cout << (int)j << endl;
        int k = (int)j + 97;
        int h = k - 65;
        cout << (char)h << endl;
    }
}