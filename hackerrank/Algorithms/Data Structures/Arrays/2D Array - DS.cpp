// 2D Array - DS
// https://www.hackerrank.com/challenges/2d-array/problem
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[6][6];
    int arr2[6][4];
    int arr3[4][4];
    int arr4[4][4];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr2[i][j] = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
            // cout << arr2[i][j] << " ";
        }
        // cout << endl;
    }
    // cout << "*****************"<< endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr3[i][j] = arr[i + 1][j + 1];
            // cout << arr3[i][j]<< " ";
        }
        // cout << endl;
    }
    // cout << "*****************"<< endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr4[i][j] = arr2[i][j] + arr3[i][j] + arr2[i + 2][j];
            // cout << arr4[i][j] << " ";
        }
        // cout << endl;
    }
    int result = arr4[0][0];
    // cout << "*****************"<< endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr4[i][j] > arr4[i][j + 1])
            {
                if (arr4[i][j] > result)
                    result = arr4[i][j];
            }
        }
        // cout << endl;
    }
    cout << result << endl;
    return 0;
}
