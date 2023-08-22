// Number Line Jumps
// https://www.hackerrank.com/challenges/kangaroo/problem

string kangaroo(int x1, int v1, int x2, int v2)
{
    while (true)
    {
        x1 += v1;
        x2 += v2;
        if (x1 == x2)
        {
            return "YES";
        }
        else if (x1 < x2 && v1 < v2)
        {
            return "NO";
        }
        else if (x1 > x2 && v1 > v2)
        {
            return "NO";
        }
        else if (x1 != x2 && v1 == v2)
        {
            return "NO";
        }
    }
}