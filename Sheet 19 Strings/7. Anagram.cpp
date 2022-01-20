#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();
    if(n1 != n2)
        return false;
    int a1[26] = {0};
    int a2[26] = {0};
    for(int i = 0; i < n1; i++)
        a1[s1[i] - 'a']++;
    for(int i = 0; i < n2; i++)
        a2[s2[i] - 'a']++;
    for(int i = 0; i < n1; i++)
    {
        if(a1[s1[i] - 'a'] != a2[s2[i] - 'a'])
            return false;
    }
    return true;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << isAnagram(s1, s2);
}
