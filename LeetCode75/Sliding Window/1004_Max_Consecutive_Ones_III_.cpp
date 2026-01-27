class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int ret = 0;
        int left = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                ret = max(ret, i - left + 1);
                continue;
            }

            if (k)
            {
                k--;
                ret = max(ret, i - left + 1);
                continue;
            }

            while (left < nums.size() && nums[left])
                left++;

            if (left < nums.size())
                left++;

            ret = max(ret, i - left + 1);
        }

        return ret;
    }
};