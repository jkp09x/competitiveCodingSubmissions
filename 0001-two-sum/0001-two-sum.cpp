class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numToIndex; // Hash map to store number and its index
        std::vector<int> output(2, 0); // Result vector to store the indices

        // Iterate over the nums array
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the complement is already in the hash map
            if (numToIndex.find(complement) != numToIndex.end()) {
                // If found, return the indices
                output[0] = numToIndex[complement];
                output[1] = i;
                return output;
            }
            
            // If not found, store the current number and its index in the hash map
            numToIndex[nums[i]] = i;
        }

        // In case no solution is found, though the problem guarantees exactly one solution
        return output;
    }
};