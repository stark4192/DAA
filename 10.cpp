// bubble sort
#include <bits/stdc++.h>
#include <string>
using namespace std;

void bubblesort(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] > arr[j])
            {
                count++;
                swap(arr[i], arr[j]);
            }
        }
    }
    cout << "time is : " << count << endl;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cout << "size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter the element of array : ";
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    bubblesort(arr, n);
    cout << "\n Sorted array : ";
    printArray(arr, n);
    return 0;
}