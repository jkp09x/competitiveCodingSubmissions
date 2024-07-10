class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int kidWithMaxCandies = -1;
        vector<bool> result(candies.size(), false);
        
        // Get max value of candies
        for (int elem: candies)
        {
            if (kidWithMaxCandies < elem)
                kidWithMaxCandies = elem;
        }
        
        for(int i = 0; i < candies.size(); ++i)
        {
            if (candies[i] + extraCandies >= kidWithMaxCandies)
                result[i] = true;
        }
        
        return result;
    }
};