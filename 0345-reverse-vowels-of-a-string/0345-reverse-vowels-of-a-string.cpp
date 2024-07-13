class Solution {
public:
    string reverseVowels(string s) {
        const string vowelString = "aeiouAEIOU";
        int lPtr = 0;
        int rPtr = s.size() - 1;
        char tempChar;
        // s consists of printable ASCII characters (which is a total of 128)
        bool asciiVowels[128] = {false};
        
        // Set lower and uppercase vowels to true
        for (char c: "aeiouAEIOU")
        {
            asciiVowels[c] = true;
        }
        
        while (lPtr < rPtr) {            
            while (lPtr < rPtr && !asciiVowels[s[lPtr]])
                ++lPtr;
            
            while (lPtr < rPtr && !asciiVowels[s[rPtr]])
                --rPtr;
            
            tempChar = s[lPtr]; 
            s[lPtr] = s[rPtr];
            s[rPtr] = tempChar;
            ++lPtr;
            --rPtr;
        }
        
        return s;
    }
};