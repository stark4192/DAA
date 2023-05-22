
//merge sort
#include<bits/stdc++.h>
#include<string>
using namespace std;
void mergesort(int arr[],int p,int r)
{
    int q;
    if(p<r)
    q= floor((p+r)/2)

}
int main()
{
    int n;
    cout << "size of array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
    {
        cout << "enter the element of array : ";
        cin >> arr[i];
    }
    int p=1, q, r=n;
    mergesort(arr, p, r);
    return 0;
}