// Sparse Arrays
// https://www.hackerrank.com/challenges/sparse-arrays/problem
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'matchingStrings' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY stringList
 *  2. STRING_ARRAY queries
 */

int main()
{
    int n, q;
    cin >> n;
    string stringList[n];
    for (int i = 0; i < n; i++)
    {
        cin >> stringList[i];
    }
    cin >> q;
    string queries[q];

    for (int i = 0; i < q; i++)
    {
        cin >> queries[i];
    }
    int ans[q];
    for (int i = 0; i < q; i++)
    {
        ans[i] = 0;
    }
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (queries[i] == stringList[j])
            {
                ans[i] += 1;
            }
        }
    }
    for (int i = 0; i < q; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
