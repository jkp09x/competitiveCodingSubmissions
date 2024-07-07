class Solution {
public:
    int strStr(string haystack, string needle) {
        // /*** STL Solution ***/
        // return haystack.find(needle);
        
        /*** Brute-Force Solution ***/
        int haystackLen = haystack.length();
        int needleLen = needle.length();

        // If needle is empty, return 0
        if (needleLen == 0) {
            return 0;
        }

        // If needle is longer than haystack, return -1
        if (needleLen > haystackLen) {
            return -1;
        }

        // Brute force approach
        for (int i = 0; i <= haystackLen - needleLen; ++i) {
            int j;
            for (j = 0; j < needleLen; ++j) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == needleLen) {
                return i; // Found the first occurrence
            }
        }

        return -1; // Needle not found in haystack
    }
};