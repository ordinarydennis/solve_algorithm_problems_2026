class Solution {
public:
    bool closeStrings(string word1, string word2) {

        if (word1.size() != word2.size())
        {
            return false;
        }

        std::map<char, int> m;
        std::map<char, int> m2;
        for (int i = 0; i < word1.size(); i++)
        {
            m[word1[i]]++;
            m2[word2[i]]++;
        }

        vector<int> v;
        set<char> s;
        for (auto& [c , n] : m)
        {
            v.push_back(n);
            s.emplace(c);
        }

        vector<int> v2;
        set<char> s2;
        for (auto& [c, n] : m2)
        {
            v2.push_back(n);
            s2.emplace(c);
        }



        std::sort(v.begin(), v.end());
        std::sort(v2.begin(), v2.end());

        return s == s2 && v == v2;

    }
};