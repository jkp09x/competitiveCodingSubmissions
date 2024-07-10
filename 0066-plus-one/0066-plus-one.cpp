class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int result = 0;
        
        // add 1 to last element
        digits[digits.size()-1] += 1;
        
        for (int i = digits.size() - 1; i >= 0; --i)
        {
            if (digits[i] > 9)
            {
                digits[i] = 0;
                if (i > 0)
                    digits[i-1] += 1;
                if (i == 0)
                {
                    digits[i] = 1;
                    digits.push_back(0);
                }
            }
        }
        
        return digits;
    }
};