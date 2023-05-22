// Merge sort in C++

#include <iostream>
using namespace std;
int count = 0;

// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r)
{

    // Create L ← A[p..q] and M ← A[q+1..r]
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1 + 1], M[n2 + 1];

    for (int i = 1; i <= n1; i++)
        L[i] = arr[p + i - 1];
    for (int j = 1; j <= n2; j++)
        M[j] = arr[q + j];

    // Maintain current index of sub-arrays and main array
    int i, j, k;
    i = 1;
    j = 1;

    for (int k = p; k <= r; k++)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i = i + 1;
            count++;
        }
        else
        {
            arr[k] = M[j];
            j++;
            count++;
        }
    }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // m is the point where the array is divided into two subarrays
        int m = (l + (r)) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Merge the sorted subarrays
        merge(arr, l, m, r);
    }
}

// Print the array
void printArray(int arr[], int size)
{
    for (int i = 1; i <= size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver program
int main()
{
    int n;
    cout << "size of array : ";
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 1, n);

    cout << "Sorted array: \n";
    printArray(arr, n);
    cout << "time is : " << count;

    return 0;
}