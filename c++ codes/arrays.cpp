
/*Array:It is a type of linear Data Strucrure which stores a collection of homogeneous items
        2.. They have a contiguous memory means the elements are stored in a consecutive block of memory
        3..Arrays are zero indexed
 Array Types : 1. Single Dimension or 1D array
               2. Multidimensional Array
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 8, 90, 10, -100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = 2;
    for (int ele : arr)
    {
        if (ele > max)
        {
            max = ele;
        }
    }
    cout << max;
}