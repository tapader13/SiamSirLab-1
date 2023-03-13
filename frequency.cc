#include <iostream>
using namespace std;
int main()
{
    int arr1[5] = {1, 2, 3, 1, 2}, arr2[100], count = 0;
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        count = 1;
        if (arr1[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr1[i] == arr1[j])
                {
                    count++;
                    arr1[j] = -1;
                }
            }
            arr2[i] = count;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != -1)
        {
            cout << "number of" << arr1[i] << "number of" << arr2[i] << endl;
        }
    }
}