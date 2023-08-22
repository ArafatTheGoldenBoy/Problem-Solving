// Subarray Division
// https://www.hackerrank.com/challenges/the-birthday-bar/problem
int birthday(vector<int> s, int d, int m)
{
    int sum = 0, total = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int range = m;
        int j = i;
        while (0 < range)
        {
            sum += s[j];
            range--;
            j++;
        }
        if (sum == d)
        {
            total++;
        }
        sum = 0;
    }
    return total;
}