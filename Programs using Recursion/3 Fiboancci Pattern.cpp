#include<iostream>
using namespace std;
int fibonacciPattern(int n)
{
    if(n <= 1)
        return n;
    return fibonacciPattern(n - 1) + fibonacciPattern(n - 2);
}
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i<= n; i++)
    {
        cout << fibonacciPattern(i) << " ";
    }
    return 0;
}
