class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.size();
        int m = t.size();

        char result = 0;
        
        for (int i = 0; i < std::max(n,m); ++i)
        {
            if (i <= n)
                result ^= s[i];
            
            if (i <= m)
                result ^= t[i];
        }

        return result;
    }
};