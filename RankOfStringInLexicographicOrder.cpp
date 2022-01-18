#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int f = 1;
    for(int i = 1; i <= n; i++)
        f = f * i;
    return f;
}
int rankInLexicoOrder(string s)
{
    int rank = 1;
    int n = s.length();
    int mul = fact(n);
    int count[256] = {0};
    for(int i = 0; i < n; i++)
        count[s[i]]++;
    for(int i = 1; i < 256; i++)
        count[i] += count[i - 1];
    for(int i = 0; i < n; i++)
    {
        mul = mul / (n - i);
        rank += count[s[i] - 1] * mul;
        for(int j = s[i]; j < 256; j++)
            count[j]--;
    }
    return rank;

}
int main()
{
    string s;
    cin >> s;
    int ans = rankInLexicoOrder(s);
    cout << ans;
    return 0;
}
