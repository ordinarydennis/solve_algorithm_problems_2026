class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int len1 = word1.size();
        int len2 = word2.size();

        string ret;

        while(len1 || len2)
        {
            if(len1)
            {
                ret += word1[word1.size() - len1];
                len1--;
            }

            if(len2)
            {
                ret += word2[word2.size() - len2];
                len2--;
            }
        }

        return ret;
    }
};