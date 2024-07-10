class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {   
        int n = digits.size();
        
        // Start from the end of the vector
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                // No carry needed, just increment and return
                digits[i]++;
                return digits;
            }
            // Set current digit to 0 and continue with the carry
            digits[i] = 0;
        }
        
        // If all digits were 9, we need an extra digit at the beginning
        digits.insert(digits.begin(), 1);
        return digits;
    }
};