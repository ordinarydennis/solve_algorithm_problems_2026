class Solution {
public:
    int compress(vector<char>& chars) {
		
		int cur = 0;
		int count = 0;
		char cur_char = chars[cur];
		char c;
		for(int i = 0; i < chars.size(); i++)
		{
			c = chars[i];
			
			if(cur_char == chars[i])
			{
				count++;
				continue;
			}
			
			if(1 < count && count < 10)
			{
				chars[cur + 1] = '0' + count;
			}
			else if(10 <= count)
			{
				while(count)
				{
					int n = 0;
					if(10 <= count)
					{
						n = static_cast<int>(count / 10);
					}
					else
					{
						n = count % 10;
					}
					
					chars[++cur] = '0' + n;
					count = count / 10;
				}
			}
			
			cur = i;
			cur_char = chars[cur];
			count = 1;
		}
		
		if(count)
		{
			if(1 < count && count < 10)
			{
				chars[cur + 1] = '0' + count;
				cur++;
			}
			else if(10 <= count)
			{
				while(count)
				{
					int n = 0;
					if(10 <= count)
					{
						n = static_cast<int>(count / 10);
					}
					else
					{
						n = count % 10;
					}
					
					chars[++cur] = '0' + n;
					count = count / 10;
				}
			}
		}
		
		return cur + 1;
    }
};

