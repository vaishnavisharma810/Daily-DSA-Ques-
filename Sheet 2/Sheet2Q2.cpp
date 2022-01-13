#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0, b = 1, c = 1;
    cout << c << endl;
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << c << " ";
            a = b;
            b = c;
            c = a + b;
        }
        cout << endl;
    }
    return 0;
}
