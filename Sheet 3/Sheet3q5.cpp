#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1, r = 1, itr = 2, j = 0;
    cout << 1 << " ";
    while(i < n - 1)
    {
        while(itr--)
        {
            r = r + pow(3, j);
            cout << r << " ";
            i++;
        }
        j++;
        itr = 2;
    }
    return 0;

}
