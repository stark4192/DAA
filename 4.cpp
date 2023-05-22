#include <iostream>
#include <string>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int p = a, q = b, r = c;
    cout << a << " " << b << " " << c << endl;
    swap(&a, &b);
    swap(&a, &c);
    cout << a << " " << b << " " << c << endl;
}
