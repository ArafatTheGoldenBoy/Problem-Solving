// Breaking the Records
// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
vector<int> breakingRecords(vector<int> scores)
{
    vector<int> min_max;
    int min = scores[0], max = scores[0];
    int min2 = 0, max2 = 0;
    for (auto i : scores)
    {
        if (i < min)
        {
            min = i;
            min2++;
        }
        else if (i > max)
        {
            max = i;
            max2++;
        }
    }
    min_max.push_back(max2);
    min_max.push_back(min2);
    return min_max;
}