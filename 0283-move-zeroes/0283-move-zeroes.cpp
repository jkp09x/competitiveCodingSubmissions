class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx = 0;
        vector<int> newVec(nums.size(), 0);
        
        for (int num: nums) {
            if (num != 0) {
                newVec[idx] = num;
                ++idx;
            }
        }
        nums = newVec;
    }
};