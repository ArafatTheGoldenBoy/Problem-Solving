// Ice Cream Parlor
// https://www.hackerrank.com/challenges/icecream-parlor/problem

vector<int> icecreamParlor(int m, vector<int> arr)
{
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            int sum = arr[i] + arr[j];
            if (sum == m)
            {
                result.push_back(i + 1);
                result.push_back(j + 1);
                break;
            }
        }
    }
    return result;
}