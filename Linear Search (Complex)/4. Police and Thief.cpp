#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        char grid[n][n];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
                cin >> grid[i][j];
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == 'T')
                {
                    for(int k = max(0, j - k); k <= min(n, j + k); k++)
                    {
                        if(grid[i][k] == 'P')
                        {
                            grid[i][k] = 'F';
                            ans++;
                            break;
                        }
                    }
                }
            }
        }
        cout << ans;
    }
    return 0;
}

