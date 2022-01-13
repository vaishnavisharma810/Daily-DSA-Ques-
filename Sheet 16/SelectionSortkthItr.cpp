#include<iostream>
using namespace std;
void selectionSort(int a[], int n, int k)
{
    int minm, pos;
    for(int i = 0; i < n - 1; i++)
    {
        minm = a[i];
        pos = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < minm)
            {
                minm = a[j];
                pos = j;
            }
        }
        if(pos != i)
        {
            int temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;
        }
        k--;
        if(k == 0)
            break;
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
      int n, k;
      cin >> n>> k;
      int *a = new int[n];
      for(int i = 0; i < n; i++)
        cin >> a[i];
      selectionSort(a, n, k);
  }
}

