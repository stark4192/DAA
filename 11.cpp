// selection sort

#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int n)
{
    int count = 0;
    int i, j, index;
    for (i = 0; i < n - 1; i++)
    {

        index = i;
        for (j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[index])
            {
                count++;
                index = j;
            }
        }
        if (index != i)
        {
            count++;
            swap(&arr[index], &arr[i]);
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
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}

