#include <string>
#include <algorithm> 
#include <iostream> 
using namespace std;

string reverseWords(string s) 
{
    string newS = "";
    int i = 0;
    while(i <= s.length() - 1)
    {
        int j = i;
        string word = " ";
        while(s[j] != ' ' and j < s.length())
        {
            word += s[j];
            j++;
        }
        reverse(word.begin(), word.end());
        newS += word;
        word = " ";
        i = j + 1;
    }
    for(int i = 0; i<=newS.length() -1; ++i)
    {
        cout << newS[i];
    }
    return newS;
}


int main()
{
    reverseWords("Mr Ding");
    return 0;
}