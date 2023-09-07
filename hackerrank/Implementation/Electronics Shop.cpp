// Electronics Shop
// https://www.hackerrank.com/challenges/electronics-shop/problem
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b)
{
    int max1 = -1;
    sort(keyboards.begin(), keyboards.end());
    sort(drives.begin(), drives.end());
    for (auto i : keyboards)
    {
        int max2 = -1;
        for (auto j : drives)
        {
            if (i + j <= b)
            {
                max2 = i + j;
            }
        }
        if (max1 < max2)
        {
            max1 = max2;
        }
    }
    return max1;
}