// lab1 q1
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
    int small = arr[0];
    int large = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (small > arr[i])
            small = arr[i];
        if (large < arr[i])
            large = arr[i];
    }
    cout << "smallest no is : " << small << endl;
    cout << "largest no. is " << large;
    return 0;
}