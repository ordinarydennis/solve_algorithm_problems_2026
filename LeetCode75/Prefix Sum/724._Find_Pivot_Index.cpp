class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
		int size = nums.size();
		
		vector<int> left_s;
		vector<int> right_s;
	
		int left = 0;
		int right = size - 1;
		
		left_s.push_back(nums[left++]);
		
		right_s.resize(size);
		
		right_s[right] = nums[right];
		right--;
		
		while(left < size)
		{
			left_s.push_back(nums[left] + left_s[left - 1]);
			right_s[right] = right_s[right + 1] + nums[right];
			
			left++;
			right--;
		}
		
		for(int i = 0; i < size; i++)
		{
			if(left_s[i] == right_s[i])
			{
				return i;
			}
		}
		
		return - 1;
    }
};
