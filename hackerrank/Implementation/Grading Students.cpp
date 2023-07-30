// Grading Students
// https://www.hackerrank.com/challenges/grading/problem
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, result, reminder;
    cin >> n;
    int grades[n];
    for (auto i = 0; i < n; i++)
    {
        cin >> grades[i];
    }
    for (auto i = 0; i < n; i++)
    {
        if (grades[i] > 37)
        {
            if (grades[i] % 5 == 0)
            {
                grades[i] = grades[i];
                cout << grades[i] << endl;
            }
            else if (grades[i] % 5 > 2)
            {
                reminder = grades[i] / 5;
                grades[i] = (reminder + 1) * 5;
                cout << grades[i] << endl;
            }
            else
            {
                cout << grades[i] << endl;
            }
        }
        else
        {
            cout << grades[i] << endl;
        }
    }
    return 0;
}
