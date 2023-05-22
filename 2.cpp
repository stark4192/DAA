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
    int N = 99999;
    int *freq = new int[N];
    for (int i = 0; i < N; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    int count = 0;
    int max;
    int x;

    max = freq[0];
    for (int i = 0; i < N; i++)
    {

        if (freq[i] > max)
        {
            max = freq[i];
            x = i; // storing the element of most repeating element
        }
        if (freq[i] == 2)
        {
            count++;
        }
    }

    cout << "Tno. of duplicate elements are " << count << endl;
    cout << "The most repeating elements is " << x << endl;
    

    return 0;
}