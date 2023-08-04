// Pangrams
// https://www.hackerrank.com/challenges/pangrams/problem
#include <bits/stdc++.h>
using namespace std;
string pangrams(string s)
{
    string a = "";
    string b = "";
    int num = 0;
    for (int i = 0, j = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            b += s[i];
        }
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            b += s[i] + 32;
        }
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] != b[i + 1])
        {
            a += b[i];
            num++;
        }
    }
    if (num > 25)
    {
        b = "pangram";
    }
    else
    {
        b = "not pangram";
    }
    return b;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
