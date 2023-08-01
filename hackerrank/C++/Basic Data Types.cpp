// Basic Data Types
// https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    long b;
    char c;
    string d;
    string e;
    cin >> a >> b >> c >> d >> e;
    float dd = stof(d);
    double ee = stod(e);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    if (stoi(d) > 0)
    {
        cout << setprecision(d.length() - 1) << dd << endl;
    }
    else
    {
        cout << setprecision(d.length() - 2) << dd << endl;
    }
    if (stoi(e) > 0)
    {
        cout << setprecision(e.length() - 1) << ee << endl;
    }
    else
    {
        cout << setprecision(e.length() - 2) << ee << endl;
    }
    return 0;
}
