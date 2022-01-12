#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j < n; j++)
            cout << " ";
        cout << i;
        if(i != 1)
        {
            for(int j = 1; j < 2 * i; j++)
                cout << " ";
            cout << i;
        }
        cout << endl;
    }
    for(int i = n; i >= 1; i--)
    {
        cout << i;
        for(int j = 1; j < i; j++)
            cout << " ";
        for(int j = 1; j < i; j++)
            cout << " ";
        if(i != 1)
            cout << i;
        cout << endl;
    }
}
