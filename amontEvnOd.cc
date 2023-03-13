#include <iostream>
using namespace std;
int main()
{
    int arr1[5] = {1, 4, 3, 5, 2}, even = 0, odd = 0;
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Total even number " << even << endl;
    cout << "Total odd number " << odd << endl;
}