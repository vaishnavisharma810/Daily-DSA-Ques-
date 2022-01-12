

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void series(int n)
{
    if(n == 1)
        return;
    series(n - 1);
    cout << " +" << n << "^" << n;
}
int main()
{
    int n;
    cin >> n;
    cout << "1";
    series(n);
    return 0;
}
