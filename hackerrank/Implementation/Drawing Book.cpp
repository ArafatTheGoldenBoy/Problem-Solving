// Drawing Book
// https://www.hackerrank.com/challenges/drawing-book/problem
int pageCount(int n, int p)
{
    int value1 = p, value2 = p, ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i == p)
        {
            value1 = i / 2;
        }
    }
    if (n % 2 == 0)
    {
        n = n + 1;
    }
    for (int i = n, j = 0; 0 < i; i--, j++)
    {
        if (i == p)
        {
            value2 = j / 2;
        }
    }
    if (value1 < value2)
    {
        ans = value1;
    }
    else
    {
        ans = value2;
    }
    return ans;
}