#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int a[size], p = 0, n = 0, z = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
            p++;
        if (a[i] < 0)
            n++;
        if (a[i] == 0)
            z++;
    }
    cout << (double)(p) / size << endl;
    cout << (double)(n) / size << endl;
    cout << (double)(z) / size;
    return 0;
}