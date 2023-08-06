// Mars Exploration
// https://www.hackerrank.com/challenges/mars-exploration/problem

#include <bits/stdc++.h>
using namespace std;
/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */
int marsExploration(string s)
{
    int alter = 0;
    for (int i = 0; i < s.size() - 1; i += 3)
    {
        if (s[i] != 'S')
            alter++;
        if (s[i + 2] != 'S')
            alter++;
        if (s[i + 1] != 'O')
            alter++;
    }
    return alter;
}

int main()
{
    string s;
    getline(cin, s);
    int result = marsExploration(s);
    cout << result << "\n";
    return 0;
}
