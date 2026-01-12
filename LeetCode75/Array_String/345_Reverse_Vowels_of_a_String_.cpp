class Solution {
	
	bool isVowel(char c)
	{
		switch(c)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				return true;
			default:
				return false;
		}
		return false;
	}
	
public:
    string reverseVowels(string s) {
        
		int l = 0;
		int r = s.size() - 1;
		
		while(l < r)
		{
			while(!isVowel(s[l]) &&  l < s.size())
			{
				l++;
			}
			
			while(!isVowel(s[r]) && 0 < r)
			{
				r--;
			}
			
			if(l < r)
			{
				swap(s[l], s[r]);
			}
			
			l++;
			r--;
		}
		
		return s;
    }
};



IceCreAm
