class Solution {
public:
    string removeStars(string s) {
        
		string ret;
		
		for(int i = 0; i < s.size(); i++)
		{
			char c = s[i];
			if('*' == s[i])
			{
				ret.pop_back();
			}
			else
			{
				ret.push_back(c);			
			}
		}
		
		return ret;
    }
};


class Solution {
public:
    string removeStars(string s) {
        
		stack<char> st;
		
		for(int i = 0; i < s.size(); i++)
		{
			char c = s[i];
			if('*' == s[i])
			{
				st.pop();
			}
			else
			{
				st.push(c);			
			}
		}
		
		string ret;
		while(!st.empt())
		{
			char t = st.top();
			st.pop();
			
			ret += t;
		}
		
		reverse(ret.begin(), ret.end());
		
		return ret;
    }
};

class Solution {
public:
    string removeStars(string s) {
        
		vector<char> v(s.size());
		
		int j = 0;
		for(char c : s)
		{
			if(c == '*')
			{
				j--;
			}
			else
			{
				v[j++] = c;
			}
		}
		
		string ret;
		
		for(int i = 0; i < j; i++)
		{
			ret.push_back(v[i]);
		}
		
		return ret;
    }
};
