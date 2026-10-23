#include<iostream>
#include<string>
using namespace std;
int main()
{
    // Counting the number of Vowels and Consonants in an given string
    string str1 = "Hello Everyone in this problem we are going to count the number of vowels and consonants in an given string";
    int countv = 0;
    int countc = 0;
    for(int i = 0; i < str1.length();i++)
    {
        if(str1[i] == 'a' || str1[i] == 'A')
        {
            countv = countv + 1;
        }
        else if(str1[i] == 'e' || str1[i] == 'E')
        {
            countv = countv + 1;
        }
        else if(str1[i] == 'i' || str1[i] == 'I')
        {
            countv = countv + 1;
        }
        else if(str1[i] == 'o' || str1[i] == 'O')
        {
            countv = countv + 1;
        }
        else if(str1[i] == 'u' || str1[i] == 'U')
        {
            countv = countv + 1;
        }
        else if (str1[i] == ' ')
        {
            continue;
        }
        else
        {
            countc = countc + 1;
        }
    }
    cout << "The number of times any vowel occured in the string is " << countv << endl;
    cout << "The number of times any consonant occured in the string is " << countc << endl;
    cout << "The length of entire string is " << str1.length() << endl;

}