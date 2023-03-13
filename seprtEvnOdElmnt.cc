#include <iostream>
using namespace std;
int main()
{

    int arr1[5] = {1, 4, 3, 5, 2}, even[5], odd[5], j = 0, k = 0;
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] % 2 == 0)
        {

            even[j] = arr1[i];
            j++;
        }
        else
        {
            odd[k] = arr1[i];
            k++;
        }
    }
    cout << "Even element ";
    for (int i = 0; i < j; i++)
    {
        cout << even[i] << " ";
    }
    cout << endl;
    cout << "Odd element ";
    for (int i = 0; i < k; i++)
    {
        cout << odd[i] << " ";
    }
}