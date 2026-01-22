class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
		int left = 0;
		int right = 0;
		
		int sum = 0;
		int ret = INT_MIN;
		
		while(right < nums.size())
		{
			sum += nums[right];
			 
			if(k < right - left + 1)
			{
				sum -= nums[left];
				left++;
				right++;
			}
			else
			{
				right++;
			}
			
			if(right - left == k)
				ret = max(ret, sum);
		}
		
		return double(ret) / k;
    }
};