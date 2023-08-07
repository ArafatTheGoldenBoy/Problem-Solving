// Left Rotation
// https://www.hackerrank.com/challenges/array-left-rotation/problem
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, d = 4;
    scanf("%d %d", &n, &d);
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0, j = 0; i < n; i++)
    {
        arr2[i + n - d] = arr[i];
        if (i + n - d > n - 1)
        {
            arr2[j] = arr[i];
            j++;
        }
        else
        {
            arr2[i + n - d] = arr[i];
        }
    }
    // printf("\n");
    for (auto i : arr2)
    {
        printf("%d ", i);
    }
    return 0;
}
