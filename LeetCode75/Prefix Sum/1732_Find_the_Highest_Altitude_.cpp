class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int ret = 0;
        int sum = 0;

        for (int i = 0; i < gain.size(); i++)
        {
            sum += gain[i];
            ret = max(ret, sum);
        }

        return ret;
    }
};