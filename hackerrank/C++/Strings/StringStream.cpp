// StringStream
// https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string s;
    string t;

    cin >> s;
    // stringstream ss(s);
    // char ch;
    // int x;
    // while (ss >> x >> ch) {
    //     cout << x << endl;
    // }
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == ',')
        {
            cout << t << endl;
            t = "";
        }
        else
        {
            t += s[i];
        }
        if (i == s.length() - 1)
        {
            cout << t << endl;
        }
    }
    return 0;
}
