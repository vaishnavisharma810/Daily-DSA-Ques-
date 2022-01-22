
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<pair<int, int>> activity;
        int n, s, e;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> s >> e;
            activity.push_back({e, s});
        }
        sort(activity.begin(), activity.end());
        int c = 0, currEnd = -1;
        for(int i = 0; i < n; i++)
        {
            if(activity[i].second >= currEnd)
            {
                c++;
                currEnd = activity[i].first;
            }
        }
        cout << c;
    }
}
