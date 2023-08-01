#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cin.ignore();
    }
    sort(arr, arr + n);
    long int maxSum[2] = {0, 0};
    for (int i = 0; i < n - 1; i++)
    {
        maxSum[0] += arr[i];
    }
    for (int i = n; 0 < i; i--)
    {
        maxSum[1] += arr[i];
    }
    for (int i = 0; i < 2; i++)
    {
        cout << maxSum[i] << " ";
    }
    return 0;
}
// Mini-Max Sum
// https://www.hackerrank.com/challenges/mini-max-sum/problem