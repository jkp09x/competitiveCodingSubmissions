class Solution {
public:
    int xorOperation(int n, int start) {
        int result = 0;
        vector<int> nums(n, 0);
        
        for (int i = 0; i < n; ++i) {
            if (i == 0)
                result = start;
            else
                result ^= (start + 2 * i);
            
        }

        // if (n > 1){
        //     result = nums[0] ^ nums[1];
        //     for (int j = 2; j < nums.size(); ++j) {
        //         result ^= nums[j];
        //     }
        // }
        // else
        //     return start;

        return result;

    }
};

/*
class Solution {
public:
    int xorOperation(int n, int start) {
        int result = 0;
        vector<int> nums(n, 0);
        
        for (int i = 0; i < n; ++i) {
            nums[i] = start + 2 * i;
        }

        if (n > 1){
            result = nums[0] ^ nums[1];
            for (int j = 2; j < nums.size(); ++j) {
                result ^= nums[i];
            }
        }
        else
            return start;

        return result;

    }
};
*/