#include <iostream>
using namespace std;
int main()
{
    int num = 28;
    int ans = 0;
    int rem;
    while (num > 9)
    {
        while (num != 0)
        {
            rem = num % 10;
            num /= 10;
            ans = ans + rem;
        }
        num = ans;
    }
    return num;
}
