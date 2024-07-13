class Solution {
public:
    int xorOperation(int n, int start) {
        int result = 0;
        
        for (int i = 0; i < n; ++i) {
            if (i == 0)
                result = start;
            else
                result ^= (start + 2 * i);
        }

        return result;

    }
};