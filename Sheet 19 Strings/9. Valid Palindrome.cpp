#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string newString(string s)
{
    int n = s.length();
    string ans = "";
    for(int i = 0; i < n; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            ans = ans + (char)(s[i] + 32);
        else if(s[i] >= 'a' && s[i] <= 'z')
            ans = ans + s[i];
    }
    return ans;
}

bool isValidPalin(string s)
{
    int l = 0;
    int h = s.length() - 1;
    while(l <= h)
    {
        if(s[l] != s[h])
            return false;
        l++;
        h--;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    s = newString(s);
    cout << isValidPalin(s);
}
