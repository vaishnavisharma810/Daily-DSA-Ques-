#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ch = 'A' + n;
    for(int i = n; i >= 0; i--)
    {
        for(int j = i; j < n; j++)
            cout << " ";
        cout << ch;
        for(int j = 2 * i + 1; j > 1; j--)
            cout << " ";
        if(ch != 'A')
            cout << ch;
        ch--;
        cout << endl;
    }
    return 0;
}
