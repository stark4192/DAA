// heap sort
#include <bits/stdc++.h>
#include <string>
using namespace std;
int ctr = 0;
void max_heapify(int a[], int i, int size)
{
    int largest;

    int l = 2 * i;
    int r = 2 * i + 1;
    if (l <= size and a[l] > a[i])
        largest = l;
    else
        largest = i;
    if (r <= size and a[r] > a[largest])
        largest = r;
    if (largest != i)
    {
        swap(a[i], a[largest]);
        max_heapify(a, largest, size);
    }
}                                                     


void heap_sort(int heaps[], int size)
{

    if (size == 0)
    {
        return;
    }

    cout << heaps[1] << "\t";
    heaps[1] = heaps[size];
    size = size - 1;

    max_heapify(heaps, 1, size);
    heap_sort(heaps, size);
 }

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    max_heapify(arr, 1, n);
    heap_sort(arr, n);
}