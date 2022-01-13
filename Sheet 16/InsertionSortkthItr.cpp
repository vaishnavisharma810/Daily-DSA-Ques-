#include<iostream>
using namespace std;
void insertionSort(int a[], int n, int k)
{
    for(int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && key < a[j])
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
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
      cin >> n >> k;
      int *a = new int[n];
      for(int i = 0; i < n; i++)
        cin >> a[i];
      insertionSort(a, n, k);
  }
}

