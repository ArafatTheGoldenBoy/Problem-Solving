// Picking Numbers
// https://www.hackerrank.com/challenges/picking-numbers/problem
int pickingNumbers(vector<int> a)
{
    sort(a.begin(), a.end());
    vector<int> b{0};
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i; j < a.size(); j++)
        {
            if (a[i] - a[j] < -1)
            {
                b.push_back(j);
                i = j - 1;
                break;
            }
        }
    }
    int max = 0;
    for (int i = 0; i < b.size() - 1; i++)
    {
        int diff = b[i + 1] - b[i];
        cout << diff << " ";
        if (max < diff)
        {
            max = diff;
        }
    }
    if (b.size() == 1)
    {
        max = a.size();
    }
    return max;
}