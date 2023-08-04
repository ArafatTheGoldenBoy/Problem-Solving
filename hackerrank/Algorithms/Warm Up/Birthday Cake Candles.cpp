// Birthday Cake Candles
// https://www.hackerrank.com/challenges/birthday-cake-candles/problem
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, tallest = 0, num = 0;
    cin >> n;
    int candles[n];
    for (int i = 0; i < n; i++)
    {
        cin >> candles[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (candles[i] > candles[i + 1])
        {
            if (tallest < candles[i])
            {
                tallest = candles[i];
            }
        }
    }
    if (tallest == 0)
    {
        for (int i = 0; i < n; i++)
            num++;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (candles[i] == tallest)
            {
                num++;
            }
        }
    }
    cout << num << endl;
    return 0;
}
