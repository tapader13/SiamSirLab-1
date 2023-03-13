#include <iostream>
using namespace std;
int main()
{
    int arr1[5] = {1, 4, 3, 5, 2}, first = 0, second = 0;
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] > first)
        {
            second = first;
            first = arr1[i];
        }
        else if (arr1[i] > second)
        {
            second = arr1[i];
        }
    }
    cout << "First largest element " << first << endl;
    cout << "Second largest element " << second << endl;
}