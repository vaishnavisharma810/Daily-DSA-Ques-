#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float sum = 0.0;
    for(int i = 1; i <= n; i++)
    {
        sum = sum + (float)(1/(i * i));
    }
    cout << sum;
}
