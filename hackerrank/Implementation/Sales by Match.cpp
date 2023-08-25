// Sales by Match
// https://www.hackerrank.com/challenges/sock-merchant/problem
int sockMerchant(int n, vector<int> ar)
{
    int pairs = 0;
    sort(ar.begin(), ar.end());
    for (auto i = 0; i < n;)
    {
        if (ar[i] == ar[i + 1])
        {
            pairs++;
            i++;
            i++;
        }
        else
        {
            i++;
        }
    }
    return pairs;
}