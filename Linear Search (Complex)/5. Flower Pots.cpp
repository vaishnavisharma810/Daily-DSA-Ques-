#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int minm = INT_MAX;
        for(int i = 0; i <= n; i++)
        {
            int check = (a * i * i) + (b * (n - i) * (n - i));
            if(check < minm)
                minm = check;
        }
        cout << minm << endl;
    }
    return 0;
}
