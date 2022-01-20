#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    unordered_map<char, int> arr;
    string ans = "";
    for(int i = 0; i < n; i++)
        arr[s[i]]++;
    for(int i = 0; i < n; i++)
    {
        if(arr[s[i]] >= 1)
        {
            //cout << s[i] << arr[s[i]] << " ";
            ans = ans + s[i];
            arr[s[i]] = 0;
        }
    }
    cout << ans;
}
