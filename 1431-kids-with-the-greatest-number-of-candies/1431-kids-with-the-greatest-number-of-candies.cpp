class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        const int numKids = candies.size();
        const int maxCandy = getMaxCandy(candies);
        
        vector<bool> hasGreatestNumCandies(numKids, false);
        
        for (int i = 0; i < numKids; ++i) {
            if (candies[i] + extraCandies >= maxCandy)
                hasGreatestNumCandies[i] = true;
        }
        
        return hasGreatestNumCandies;
    }
private:
    int getMaxCandy(const vector<int>& candies) {
        int maxCandy = -1;
        
        for (int candy: candies) {
            if (maxCandy < candy)
                maxCandy = candy;
        }
        
        return maxCandy;
    }
};