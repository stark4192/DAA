#include <iostream>
using namespace std;
void display(int *array, int size)
{
    for (int i = 0; i < size; i++)
        cout << "jacket " << i + 1 << " -> " << array[i] << " | ";
    cout << endl;
}
void insertionSort(int *array, int size)
{
    int temp, j;
    for (int i = 1; i < size; i++)
    {
        temp = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "jacket " << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << "Array before Sorting: ";
    display(arr, n);
    insertionSort(arr, n);
    cout << "Array after Sorting: ";
    display(arr, n);
}