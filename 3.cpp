#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "no. of array is :";
    cin >> n;
    int arr[n];
    cout << "enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int arr1[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr1[count++] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arr1[count++] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}
