// CamelCase
// https://www.hackerrank.com/challenges/camelcase/problem
#include <bits/stdc++.h>

using namespace std;
int camelcase(string s)
{
    string s2 = "";
    int words = 1;
    for (auto i : s)
    {
        if (i >= 'A' && i <= 'Z')
        {
            words++;
            s2 += " ";
        }
        s2 += i;
    }
    return words;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
