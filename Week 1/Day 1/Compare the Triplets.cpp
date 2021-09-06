#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3], b[3], c1 = 0, c2 = 0;

    for (int i = 0; i < 3; i++)
        cin >> a[i];

    for (int i = 0; i < 3; i++)
        cin >> b[i];

    for (int i = 0; i < 3; i++)
    {

        if (a[i] > b[i])
            c1++;

        else if (b[i] > a[i])
            c2++;
    }

    cout << c1 << " " << c2;
    return 0;
}