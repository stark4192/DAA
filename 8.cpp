#include <iostream>
#include <string>
using namespace std;
void array()
{
    int n, key;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >>arr[i];
    }
}
void display_array()
{
    for (int i = 1; i <= n; i++)
    {
        cout<< arr[i];
    }
}
    for (int j = 2; j <= n; j++)
    {
        key = arr[j];
        int i = j - 1;
        while (i > 0 and arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

int main()
{

    int choice;
    
    while(1)
    {
        cout << "1. random numbers=> array " << endl;
        cout << "2. display array : " << endl;
        cout << "3. sort the array in ascending order by using insertion sort algorithm : " << endl;
        cout << "4. sort the array in decsending order by using any sorting algorithm : endl"<<endl;
        cout << "enter the choice";
        cin >> choice;
        }
    switch(choice)
    {
        case 1:
            {int n;
            cout << "enter the size of array : ";
            cin >> n;
            int arr[n];
            cout << "enter the elements : ";
            array(n,arr);
            }
        case 2:
            cout << "array is : " << endl;
        case 3:
            cout << "sorted array in increasing order is : " << endl;
    }
    

}