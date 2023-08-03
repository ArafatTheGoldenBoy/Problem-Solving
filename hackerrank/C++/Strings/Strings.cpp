// strings
// https://www.hackerrank.com/challenges/c-tutorial-strings/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a, b;
    char c;
    cin >> a >> b;
    int len1 = a.length();
    int len2 = b.length();
    cout << len1 << " " << len2 << endl;
    cout << a + b << endl;
    c = a[0];
    a[0] = b[0];
    b[0] = c;
    cout << a << " " << b;
    return 0;
}
