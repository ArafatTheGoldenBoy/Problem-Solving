// 189. Rotate Array
// https://leetcode.com/problems/rotate-array/description/

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int siz = nums.size();
        k = k % siz;
        int arr[siz];
        for (int i = 0, j = 0; i < siz; i++)
        {
            arr[i] = nums[i];
        }
        for (int i = 0, j = 0; i < siz; i++)
        {
            if (i + k > siz - 1)
            {
                arr[j] = nums[i];
                j++;
            }
            else
            {
                arr[i + k] = nums[i];
            }
        }
        for (int i = 0, j = 0; i < siz; i++)
        {
            nums[i] = arr[i];
        }
    }
};