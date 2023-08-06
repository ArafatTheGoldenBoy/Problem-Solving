// The Love-Letter Mystery
// https://www.hackerrank.com/challenges/the-love-letter-mystery/problem
#include <bits/stdc++.h>
using namespace std;
int theLoveLetterMystery(int oparation, string s)
{
    bool is_palindrom = true;
    for (int k = 0, j = s.size() - 1; k < s.size() - 1; k++, j--)
    {
        if (s[k] != s[j])
        {
            is_palindrom = false;
            oparation++;
            if (s[k] < s[j])
            {
                s[j] = s[j] - 1;
            }
            else
            {
                s[k] = s[k] - 1;
            }
            break;
        }
    }
    if (is_palindrom == true)
    {
        return oparation;
    }
    return theLoveLetterMystery(oparation, s);
}
int main()
{
    int n, result = 0;
    scanf("%d", &n);
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        result = theLoveLetterMystery(0, s[i]);
        printf("%d\n", result);
    }
    return 0;
}
