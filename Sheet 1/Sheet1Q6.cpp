#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int j = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int k = 1; k <= n - i - 1; k++)
            cout << " ";
        for(;j >= i; j--)
            cout << j;
        j = i + 2;
        for(int k = i; k >= 1; k--)
            cout << k;
        cout << endl;
    }
}
