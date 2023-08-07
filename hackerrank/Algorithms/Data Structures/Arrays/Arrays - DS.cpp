// Arrays - DS
// https://www.hackerrank.com/challenges/arrays-ds/problem
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n - 1; 0 <= i; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}