#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void series(int n)
{
    if(n == 0)
        return;
    series(n - 1);
    cout << " + " << pow(2, n);
}
int main()
{
    int n;
    cin >> n;
    cout << 1;
    series(n);
    return 0;
}

