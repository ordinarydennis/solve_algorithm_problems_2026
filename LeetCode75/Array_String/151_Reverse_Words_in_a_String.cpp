class Solution {
public:
    string reverseWords(string s) {
		
		string ret;
		string str;
		
		for(int i = s.size() - 1; 0 <= i; i--)
		{
			char ch = s[i];
			
			if(ch == ' ')
			{
				if(str.empty())
					continue;

				ret = ret.empty() ? str : ret + " " + str;
				str.clear();
				continue;
			}
			
			str = s[i] + str;	
		}
		
		if(str.size())
			ret = ret.empty() ? str : ret + " " + str;
		
        return ret;
    }
};