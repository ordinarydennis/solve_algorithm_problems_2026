class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
		
		vector<int> ret(nums.size(), 0);
		
		int all_product = 1;
		int zero_count = 0;
		int zero_index = -1;
		for(int i = 0; i < nums.size(); i++)
		{
			if(nums[i] == 0)
			{
				zero_count++;
				if(zero_count == 2)
				{
					return ret;
				}
				zero_index = i;
				continue;
			}
			
			all_product *= nums[i];
		}
		
		for(int i = 0; i < nums.size(); i++)
		{
			if(zero_index != -1 && zero_index != i)
			{
				ret[i] = 0;
				continue;
			}
			
			ret[i] = (i != zero_index) ? all_product / nums[i] : all_product;
		}
		
		return ret;
    }
};
