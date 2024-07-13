class Solution {
public:
    string reverseVowels(string s) {
        const string vowelString = "aeiouAEIOU";
        int lPtr = 0;
        int rPtr = s.size() - 1;
        char tempChar;
        // s consists of printable ASCII characters (which is a total of 128)
        bool asciiVowels[128] = {false};
        
        // Set lower and uppercase vowels to true (everything else remains false)
        for (char c: "aeiouAEIOU")
        {
            asciiVowels[c] = true;
        }
        
        while (lPtr < rPtr) {
            // find vowel from start of string
            while (lPtr < rPtr && !asciiVowels[s[lPtr]])
                ++lPtr;
            
            // Find vowel from end of string
            while (lPtr < rPtr && !asciiVowels[s[rPtr]])
                --rPtr;
            
            //Swap vowel positions (could use std::swap() as well)
            tempChar = s[lPtr]; 
            s[lPtr] = s[rPtr];
            s[rPtr] = tempChar;
            
            // Update Pointer positions
            ++lPtr;
            --rPtr;
        }
        
        return s;
    }
};