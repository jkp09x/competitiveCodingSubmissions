class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
//         // SOLUTION 1
//         int k = 0;
//         for (int i = 0; i < nums.size(); ++i) {
            
//             if (nums[i] == val) {
//                 nums.erase(nums.begin()+i);
//                 --i;
//             }
//         }
        
//         // SOLUTION 2
//         int k = 0;
//         for (int i = 0; i < nums.size(); ++i) {
//             if (nums[i] != val) {
//                 nums[k] = nums[i];
//                 ++k;
//             }
//         }
        
        // SOLUTION 3
        int k = nums.size();
        int i = 0;
        
        while (i < k) {
            if (nums[i] == val) {
                nums[i] = nums[k - 1];
                --k; // Reduce array size by one
            } else {
                ++i;
            }
        }
        return k;
    }
};