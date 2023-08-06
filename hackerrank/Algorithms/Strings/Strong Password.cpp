// Strong Password
// https://www.hackerrank.com/challenges/strong-password/problem
#include <bits/stdc++.h>
using namespace std;
int minimumNumber(int n, string password)
{
    int num = 6;
    int required_num = 0;
    string upper_case = "Not found";
    string lower_case = "Not found";
    string numbers = "Not found";
    string special_characters = "Not found";
    for (auto i : password)
    {
        if (i >= 'A' && i <= 'Z')
        {
            upper_case = "found";
        }
        if (i >= 'a' && i <= 'z')
        {
            lower_case = "found";
        }
        if (i >= '0' && i <= '9')
        {
            numbers = "found";
        }
        if (i >= 33 && i <= 47 || i >= 58 && i <= 64)
        {
            special_characters = "found";
        }
    }
    if (upper_case == "found")
    {
        num--;
    }
    else
    {
        required_num++;
    }
    if (lower_case == "found")
    {
        num--;
    }
    else
    {
        required_num++;
    }
    if (numbers == "found")
    {
        num--;
    }
    else
    {
        required_num++;
    }
    if (special_characters == "found")
    {
        num--;
    }
    else
    {
        required_num++;
    }
    if (n == 1)
    {
        required_num = 5;
    }
    if (n == 2)
    {
        required_num = 4;
    }
    if (n == 3)
    {
        required_num = 3;
    }
    if (n == 4 && required_num == 1)
    {
        required_num++;
    }
    if (n == 4 && required_num == 0)
    {
        required_num = 2;
    }
    if (n == 5 && required_num == 0)
    {
        required_num++;
    }
    return required_num;
}

int main()
{
    int n;
    cin >> n;
    string password;
    cin >> password;
    int answer = minimumNumber(n, password);

    cout << answer << "\n";

    return 0;
}
