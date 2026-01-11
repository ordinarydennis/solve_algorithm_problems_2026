class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int max = *std::max_element(candies.begin(), candies.end());
        

        vector<bool> ret(candies.size());

        for(int i = 0; i < candies.size(); i++)
            ret[i] = max <= candies[i] + extraCandies;

        return ret;
    }
};