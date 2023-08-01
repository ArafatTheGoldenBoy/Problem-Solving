// Staircase
//  https://www.hackerrank.com/challenges/staircase/problem
#include <bits/stdc++.h>
using namespace std;
void staircase(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; 0 <= j; j--)
        {
            if (i < j)
            {
                cout << " ";
            }
            else
            {
                cout << "#";
            }
        }
        cout << "\n";
    }
}
int main()
{
    int n = 0;
    cin >> n;
    staircase(n);
    return 0;
}