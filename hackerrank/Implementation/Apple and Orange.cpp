// Apple and Orange
// https://www.hackerrank.com/challenges/apple-and-orange/problem

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;
    int apple[m], orange[n];
    int app = 0, ora = 0;
    for (auto i = 0; i < m; i++)
    {
        cin >> apple[i];
        apple[i] = a + apple[i];
        if (apple[i] < s)
        {
        }
        else if (apple[i] > t)
        {
        }
        else
        {
            app++;
        }
    }
    for (auto i = 0; i < n; i++)
    {
        cin >> orange[i];
        orange[i] = b + orange[i];
        if (orange[i] < s)
        {
        }
        else if (orange[i] > t)
        {
        }
        else
        {
            ora++;
        }
    }
    cout << app << endl;
    cout << ora << endl;
}
