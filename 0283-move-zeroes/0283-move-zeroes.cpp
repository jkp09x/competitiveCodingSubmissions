class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx = 0;
        
        // Initialize vector of same size as nums with all zeros 
        vector<int> newVec(nums.size(), 0);
        
        // Creates a new vector and only adds the non-zero elements to the front of the array        
        for (int num: nums) {
            if (num != 0) {
                newVec[idx] = num;
                ++idx;
            }
        }
        
        // assign new Vector back to nums
        nums = newVec;
    }
};