// Divisible Sum Pairs
// https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
int divisibleSumPairs(int n, int k, vector<int> ar)
{
    int divisibleSumPairs = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = ar[i] + ar[j];
            int div = sum % k;
            if (div == 0)
            {
                divisibleSumPairs++;
            }
        }
    }
    return divisibleSumPairs;
}