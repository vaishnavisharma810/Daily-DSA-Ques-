#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = n; i >= 0; i--)
    {
        for(int j = n; j >= i; j--)
            cout << j;
        cout << endl;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j >= i; j--)
            cout << j;
        cout << endl;
    }
}
