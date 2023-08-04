// Time Conversion
// https://www.hackerrank.com/challenges/time-conversion/problem
#include <bits/stdc++.h>
using namespace std;
string timeConversion(string s)
{
    string t = s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'P')
        {
            if (s[0] == '1' && s[1] == '2')
            {
                t = s;
            }
            else if (s[0] == '0')
            {
                int cal = 0, temp = 0;
                cal = int(s[1] - '0');
                cal = cal + 12;
                temp = cal / 10;
                t[0] = char(temp + 48);
                cal = cal % 10;
                t[1] = char(cal + 48);
                // cout << cal <<endl;
            }
            else
            {
                int cal = 10;
                cal += int(s[1] - '0');
                cal = cal + 12;
                t[0] = '2';
                cal = cal % 10;
                t[1] = char(cal + 48);
                // cout << cal <<endl;
            }
        }
        else if (s[i] == 'A')
        {
            if (s[0] == '1' && s[1] == '2')
            {
                t[0] = '0';
                t[1] = '0';
            }
            else if (s[0] == '0')
            {
                int cal = 0, temp = 0;
                cal = int(s[1] - '0');
                t[1] = char(cal + 48);
            }
            else
            {
                int cal = 10;
                cal += int(s[1] - '0');
                t[0] = '1';
                cal = cal % 10;
                t[1] = char(cal + 48);
            }
        }
    }
    string nt = "12:01:00";
    for (int i = 0; i < t.length() - 2; i++)
    {
        nt[i] = t[i];
    }
    return nt;
}
int main()
{
    string s;
    getline(cin, s);
    string result = timeConversion(s);
    cout << result;
    return 0;
}
