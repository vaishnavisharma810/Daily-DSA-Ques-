#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> a, int n, int k)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        k--;
        if(k == 0)
            break;
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    bubbleSort(a, n, k);
    return 0;
}

