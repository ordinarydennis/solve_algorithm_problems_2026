class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        vector<vector<int>> ret(2);

        std::unordered_set<int> s1;
        std::unordered_set<int> s2;

        for (int n : nums1)
            s1.emplace(n);

        for (int n : nums2)
            s2.emplace(n);

        for (int n : s1)
        {
            if (s2.count(n) == 0)
                ret[0].push_back(n);
        }

        for (int n : s2)
        {
            if (s1.count(n) == 0)
                ret[1].push_back(n);
        }

        return ret;
    }
};