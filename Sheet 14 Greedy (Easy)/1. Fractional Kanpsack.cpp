#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Item{
    int wt;
    int val;
    float valperwt;
};

bool cmp(Item i1, Item i2)
{
    return i1.valperwt > i2.valperwt;
}

int main()
{
    int n;
    cin >> n;
    Item nums[n];
    for(int i = 0; i < n; i++)
        cin >> nums[i].wt >> nums[i].val;
    int w;
    cin >> w;
    for(int i = 0; i < n; i++)
        nums[i].valperwt = nums[i].val / nums[i].wt;
    sort(nums, nums + n, cmp);
    float totalval = 0, totalwt = 0;
    for(int i = 0; i < n; i++)
    {
        if(totalwt + nums[i].wt <= w)
        {
            totalval += nums[i].val;
            totalwt += nums[i].wt;
        }
        else{
            int leftwt = w - totalwt;
            totalval += (leftwt * nums[i].valperwt);
            totalwt += leftwt;
            break;
        }
    }
    cout << "Total Value " << totalval;
}
