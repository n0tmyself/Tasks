#include <string>
#include <iostream> 
using namespace std;


bool isPalindrome(string s) 
{
    string newS = "";
    for(char ch : s)
    {
        if ((ch >= 'A' and ch <= 'Z') or (ch >= 'a' and ch <= 'z'))
        {
            if (ch >= 'A' and ch <= 'Z')
            {
                newS.push_back(char(int(ch) - int('A') + int('a')));
            }
            else
            {
                newS.push_back(ch);
            }
        }
    }
    for(char ch : newS)
    {
        cout << ch;
    }
    int r = newS.length() - 1;
    int l = 0;
    bool flag = true;
    for(char ch : newS)
    {
        if(newS[r] != newS[l])
        {
            flag = false;
        }
        --r;
        ++l;
    }
    return flag;
}

int main()
{
    cout << isPalindrome("0P");
    return 0;
}