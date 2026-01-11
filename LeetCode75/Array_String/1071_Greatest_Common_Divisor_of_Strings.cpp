class Solution {

	bool check(string& str, string& base)
	{
		if(str.size() % base.size() != 0)
			return false;
		
		string s;
		
		while(s.size() < str.size())
		{
			 s += base;
		}
		return s == str;
	}
	
	
public:
    string gcdOfStrings(string str1, string str2) {
     
		string ret;
		
		int min = std::min(str1.size(), str2.size());
		
		while(min)
		{
			string base = str2.substr(0, min);
			
			if(check(str1, base) && check(str2, base))
			{
				return base;
			}
			min--;
		}

		return ret;
    }
};

