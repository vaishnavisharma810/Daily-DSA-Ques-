#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    int f = 1;
    for(int i = 1; i <= n; i++)
        f = f * i;
    return f;
}
int main()
{
    int x, n;
    cin >> x >> n;
    float sum = 0.0;
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            sum = sum + (pow(x, i * 2) / factorial(i * 2));
        else
            sum = sum - (pow(x, i * 2) / factorial(i * 2));
    }
    cout << sum;
}

