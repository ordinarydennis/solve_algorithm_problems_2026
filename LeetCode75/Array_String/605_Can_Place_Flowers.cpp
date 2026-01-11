class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
		if(n == 0)
			return true;
			
		if(flowerbed.size() == 1)
			return !flowerbed[0];	
		
		for(int i = 0; i < flowerbed.size(); i++)
		{
			if(flowerbed[i] == 1)
				continue;

			if(i == 0)
			{
				if(flowerbed[i + 1] == 1)
				{
					continue;
				}
			}
			else if(0 <= i - 1)
			{
				if(flowerbed[i - 1] == 1)
					continue;	
			}
			
			if(i == flowerbed.size() - 1)
			{
				if(flowerbed[i - 1] == 1)
				{
					continue;
				}
			}
			else if(i + 1 < flowerbed.size())
			{
				if(flowerbed[i + 1] == 1)
				continue;
			}
			
			flowerbed[i] = 1;	
			n--;
		}
		
		return n == 0;
    }
};
