// temperatures
// https://www.codingame.com/ide/puzzle/temperatures
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*
WHAT YOU LEARNED
The solution to this puzzle lies in the following concepts. If you consider that you've acquired the skills listed below, tick the corresponding boxes (and they'll appear on your learning profile). If not, brush up on your knowledge and try again!
*/
/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // the number of temperatures to analyse

    int temp = 5526, closest, d1, d2 = 0;
    cin >> n;
    cin.ignore();
    if (n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            int t; // a temperature expressed as an integer ranging from -273 to 5526
            cin >> t;
            cin.ignore();
            cerr << "T: " << t << endl;
            if (t > 0 && temp > 0)
            {
                d1 = 0 + temp;
                d2 = 0 + t;
                if (d1 > d2)
                {
                    temp = t;
                }
                else
                {
                    temp = temp;
                }
            }
            else if (t > 0 && temp < 0)
            {
                d1 = 0 - temp;
                d2 = 0 + t;
                if (d1 == d2)
                {
                    temp = t;
                }
                else if (d1 > d2)
                {
                    temp = t;
                }
                else
                {
                    temp = temp;
                }
            }
            else if (t < 0 && temp > 0)
            {
                d1 = 0 + temp;
                d2 = 0 - t;
                if (d1 > d2)
                {
                    temp = t;
                }
                else
                {
                    temp = temp;
                }
            }
            else
            {
                d1 = 0 - temp;
                d2 = 0 - t;
                if (d1 > d2)
                {
                    temp = t;
                }
                else
                {
                    temp = temp;
                }
            }
        }
    }
    else
    {
        temp = 0;
    }
    cout << temp << endl;

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
}