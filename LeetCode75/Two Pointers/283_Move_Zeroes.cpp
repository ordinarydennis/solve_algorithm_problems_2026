
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
		
		vector<int> ret(nums.size(), 0);
		
		int index = 0;
		for(int i = 0; i < nums.size(); i++)
		{
			if(nums[i])
			{
				ret[index++] = nums[i];
			}
		}
		
		nums = ret;
    }
};

class Solution {
public:
  void moveZeroes(vector<int>& nums) {
      int lastNonZeroFoundAt = 0;
      // If the current element is not 0, then we need to
      // append it just in front of last non 0 element we found.
      for (int i = 0; i < nums.size(); i++) {
          if (nums[i] != 0) {
              nums[lastNonZeroFoundAt++] = nums[i];
          }
      }
    // After we have finished processing new elements,
    // all the non-zero elements are already at beginning of array.
    // We just need to fill remaining elements in the array with 0's.
      for (int i = lastNonZeroFoundAt; i < nums.size(); i++) {
          nums[i] = 0;
      }
  }
};

class Solution {
public:
  void moveZeroes(vector<int>& nums) {
      for (int lastNonZeroFoundAt = 0, cur = 0; cur < nums.size(); cur++) {
          if (nums[cur] != 0) {
              swap(nums[lastNonZeroFoundAt++], nums[cur]);
          }
      }
  }
};

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

