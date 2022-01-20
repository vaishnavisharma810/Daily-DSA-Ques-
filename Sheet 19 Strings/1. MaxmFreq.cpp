#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    unordered_map<char, int> mp;
    for(int i = 0; i < n; i++)
        mp[s[i]]++;
    int maxm = -1;
    char ans;
    for(int i = 0; i < n; i++)
    {
        if(mp[s[i]] > maxm)
        {
            maxm = mp[s[i]];
            ans = s[i];
        }
    }
    cout << ans;
}
