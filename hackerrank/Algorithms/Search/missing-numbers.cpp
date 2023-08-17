// Missing Numbers
// https://www.hackerrank.com/challenges/missing-numbers/problem
vector<int> missingNumbers(vector<int> arr, vector<int> brr)
{
    vector<int> num;
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    for (int i = 0; i < brr.size(); i++)
    {
        if (arr[i] != brr[i])
        {
            arr.insert(arr.begin(), 0);
            num.push_back(brr[i]);
        }
    }
    num.erase(unique(num.begin(), num.end()), num.end()); // removing duplicate numbers in array
    return num;
}