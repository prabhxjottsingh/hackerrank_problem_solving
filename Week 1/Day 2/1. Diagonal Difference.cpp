#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0;
    int a[n][n];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum2 = sum2 + a[i][j];
            }
            if ((i + j) == (n - 1))
            {
                sum1 = sum1 + a[i][j];
            }
        }
    }
    cout << abs(sum1 - sum2);
    return 0;
}