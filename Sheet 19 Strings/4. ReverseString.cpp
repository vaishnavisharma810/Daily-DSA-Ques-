#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int l = 0, h = n - 1;
    while(l <= h)
    {
        char temp = s[l];
        s[l] = s[h];
        s[h] = temp;
        h--;
        l++;
    }
    cout << s << endl;
}
