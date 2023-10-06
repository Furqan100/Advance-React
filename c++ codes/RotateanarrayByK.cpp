#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;
    k = k % n;
    int ansArray[n];
    int j = 0;
    for (int i = n - k; i < n; i++)
    {
        ansArray[j++] = arr[i];
    }
    for (int i = 0; i <= k; i++)
    {
        ansArray[j++] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ansArray[i] << " ";
    }
}