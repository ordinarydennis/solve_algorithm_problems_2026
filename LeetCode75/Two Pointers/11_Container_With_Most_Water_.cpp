class Solution {
public:
    int maxArea(vector<int>& height) {
		
		int left = 0;
		int right = height.size() - 1;
		
		int ret = INT_MIN;
		
		while(left < right)
		{
			int h = std::min(height[left], height[right]);
			
			if(ret < h * (right - left))
				ret = std::max(ret, h * (right - left));
			
			if(height[left] < height[right])
				left++;
			else
				right--;
		}
		
		return ret;
    }
};