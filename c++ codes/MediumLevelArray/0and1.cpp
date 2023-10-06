#include <iostream>
using namespace std;
// Sort zeros and ones in array
void sortZerosandOnes(int arr[], int size)
{
    int countZeros = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countZeros++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (i < countZeros)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
    }
}
int main()
{
    int arr[] = {0, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortZerosandOnes(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}