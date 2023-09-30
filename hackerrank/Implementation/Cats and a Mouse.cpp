// Cats and a Mouse
// https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
string catAndMouse(int x, int y, int z)
{
    string ans;
    if (x > z)
    {
        x = x - z;
    }
    else
    {
        x = z - x;
    }
    if (y > z)
    {
        y = y - z;
    }
    else
    {
        y = z - y;
    }
    if (x == y)
    {
        ans = "Mouse C";
    }
    else if (x < y)
    {
        ans = "Cat A";
    }
    else
    {
        ans = "Cat B";
    }
    return ans;
}