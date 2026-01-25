class Solution {
	
	bool isVowel(char c)
	{
		return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
	}
	
	
public:
    int maxVowels(string s, int k) {
        
		int count = 0;
		int ret = 0;
		
		for(int i = 0; i < s.size(); i++)
		{
			char c = s[i];
			
			if(isVowel(c))
				count++;
				
			if(i <= k - 1)
			{	
				ret = max(ret, count);
				continue;
			}	
		
			if(isVowel(s[i - k]))
				count--;
			
			ret = max(ret, count);
		}
	
		return ret;	
    }
};