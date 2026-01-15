class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
		int p1 = 0;
		int p2 = 0;
		
		while(p1 < nums.size() && p2 < nums.size())
		{
			while(p1 < nums.size() && nums[p1])
			{
				p1++;
			}
			
			while(p2 < nums.size() && !nums[p2])
			{
				p2++;
			}
			
			if(p1 >= nums.size() || p2 >= nums.size())
			{
				break;
			}
			
			if(p1 < p2)
			{
				swap(nums[p1], nums[p2]);
				p1++;
				p2++;	
			}
			else
			{
				p2 = p1;
			}

		}
    }
};