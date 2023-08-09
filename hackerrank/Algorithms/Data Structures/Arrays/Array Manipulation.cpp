// Array Manipulation
// https://www.hackerrank.com/challenges/crush/problem
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n, m;
    cin >> n >> m;
    unsigned long long arr[m][3];
    for (unsigned long long i = 0; i < m; i++)
    {
        for (unsigned long long j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    unsigned long long index[m][n + 1];
    unsigned long long index2[n + 1];
    for (unsigned long long i = 0; i < m; i++)
    {
        for (unsigned long long j = 0; j < n + 1; j++)
        {
            index[i][j] = 0;
        }
    }
    for (unsigned long long j = 0; j < n + 1; j++)
    {
        index2[j] = 0;
    }
    for (unsigned long long i = 0; i < m; i++)
    {
        for (unsigned long long j = 0; j < n + 1; j++)
        {
            if (arr[i][0] <= j)
            {
                if (arr[i][1] >= j)
                    index[i][j] = arr[i][2];
            }
        }
    }

    for (unsigned long long i = 0; i < n + 1; i++)
    {
        for (unsigned long long j = 0; j < m; j++)
        {
            index2[i] += index[j][i];
        }
    }
    unsigned long long max1 = index2[0];
    for (unsigned long long j = 0; j < n + 1; j++)
    {
        if (max1 < index2[j])
        {
            max1 = index2[j];
        }
    }
    cout << max1 << endl;
    cout << endl;
    return 0;
}
