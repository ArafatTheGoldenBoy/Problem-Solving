// Super Reduced String
// https://www.hackerrank.com/challenges/reduced-string/problem
#include <bits/stdc++.h>
using namespace std;
string superReducedString(string s)
{
    string a = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            i++;
        }
        else
        {
            a += s[i];
        }
    }
    if (s == a)
    {
        if (a == "")
        {
            return "Empty String";
        }
        return a;
    }
    return superReducedString(a);
}
int main()
{
    string s;
    getline(cin, s);
    string result = superReducedString(s);
    cout << result;
    return 0;
}
