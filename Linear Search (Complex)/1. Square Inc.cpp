#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int nums[t];
    for(int i = 0; i < t; i++)
        cin >> nums[i];
    int query;
    cin >> query;
    while(query--)
    {
        int f = 0;
        int q;
        cin >> q;
        int sum = 0;
        for(int i = 0; i < t; i++)
        {
            sum = sum + nums[i];
            if(sum >= q)
            {
                cout << "Completed at position " << i << endl;
                f = 1;
                break;
            }
        }
        if(f == 0)
            cout << -1 << endl;
    }
    return 0;
}
