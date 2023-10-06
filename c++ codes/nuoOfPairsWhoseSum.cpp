#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 6, 7, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 7;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {

            if (arr[i] + arr[j] == sum)
            {
                count++;
            }
        }
    }
    cout << count;
}