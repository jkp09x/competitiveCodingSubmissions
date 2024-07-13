class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int dist = x ^ y;
        int sum = 0;
        
        while (dist) {
            sum += dist & 1;
            dist = dist >> 1;
        }
        
        return sum;
    }
};