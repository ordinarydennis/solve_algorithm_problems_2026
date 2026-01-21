class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
		std::unordered_map<int, int> m;
		
		for(int n : nums)
			m[n]++;
			
		int ret = 0;
		for(int n : nums)
		{
			if(k <= n)
				continue;
			
			auto it = m.find(k - n);
			if(m.end() == it)
				continue;
			
			if(n == k - n && it->second < 2)
				continue;
			else if(it->second == 0)
				continue;
			
			if(n == k - n)
			{
				m[n] -= 2;
				ret++;
			}
			else 
			{
				int min = std::min(m[n], m[k - n]);	
				m[n] -= min;
				m[k - n] -= min;
				ret += min;
			}
		}
		
		return ret;
    }
};


