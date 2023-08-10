// Two Sum
// https://leetcode.com/problems/two-sum/description/
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    if (i == j)
                    {
                        break;
                    }
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
        }
        int siz = result.size();
        while (2 < siz--)
        {
            result.pop_back();
        }
        return result;
    }
};