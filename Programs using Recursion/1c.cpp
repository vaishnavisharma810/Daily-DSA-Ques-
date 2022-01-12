#include<iostream>
using namespace std;
void print(int n)
{
    if(n == 0)
        return;
    print(n - 2);
    cout << n << " ";
}
int main()
{
    int n;
    cin >> n;
    if(n % 2 == 0)
        print(n);
    else
        print(n - 1);
    return 0;
}

