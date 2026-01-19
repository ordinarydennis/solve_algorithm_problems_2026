class Solution {
public:
    bool isSubsequence(string s, string t) {
        
		int index = 0;
		for(char str : t)
		{
			if(s[index] == str)
				index++;	
		}
	
		return index == s.size();
    }
};
