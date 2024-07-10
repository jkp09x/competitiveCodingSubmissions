class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        // get min length
        int minLen = std::min(word1.length(), word2.length());
        
        string retStr = "";
        
        for(int i = 0; i < minLen; ++i)
        {
            retStr += word1[i];
            retStr += word2[i];
        }
        
        if (word1.length() > word2.length())
            retStr += word1.substr(minLen, word1.length()-minLen);
        else
            retStr += word2.substr(minLen, word2.length()-minLen);
        
        return retStr;
    }
};