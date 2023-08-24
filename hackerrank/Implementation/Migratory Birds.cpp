// Migratory Birds
// https://www.hackerrank.com/challenges/migratory-birds/problem
int migratoryBirds(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    vector<unsigned long long int> max1;
    vector<unsigned long long int> id;
    unsigned long long int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != arr[i + 1])
        {
            max1.push_back(sum);
            id.push_back(arr[i]);
            sum = 0;
        }
        else
        {
            sum++;
        }
    }
    for (auto i : max1)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : id)
    {
        cout << i << " ";
    }
    cout << endl;
    sum = *max_element(max1.begin(), max1.end());
    for (int i = 0; i < max1.size(); i++)
    {
        if (sum == max1[i])
        {
            sum = id[i];
            break;
        }
    }
    cout << sum;
    return sum;
}