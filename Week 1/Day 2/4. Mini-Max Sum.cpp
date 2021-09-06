#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a[5];
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    sort(a, a + 5);
    long long mini = 0, maxi = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i != 4)
            mini = mini + a[i];
        if (i != 0)
            maxi = maxi + a[i];
    }
    cout << mini << " " << maxi;
    return 0;
}