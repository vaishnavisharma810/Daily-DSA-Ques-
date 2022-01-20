#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();
    string ans = "";
    int i = 0, j = 0;
    while(i < n1 && j < n2)
    {
        if(s1[i] != s2[i])
            return  ans;
        else
            ans = ans + s1[i];
        i++;
        j++;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++)
        cin >> s[i];
    string ans = longestCommonPrefix(s[0], s[1]);
    for(int i = 2; i < n; i++)
    {
        ans = longestCommonPrefix(ans, s[i]);
        if(ans == "")
            break;
    }
    cout << ans;
}
