class Solution {
public:
    int minOperations(vector<string>& logs) {
        int stepsToMain = 0;
        
        for (string step: logs)
        {
            // subtract 1 since you're closer to main
            if (step == "../")
            {    
                stepsToMain--;
                if (stepsToMain < 0)
                    stepsToMain = 0;
            }
            // add 1 since you traverse inside
            else if (step != "./")
                stepsToMain++;
        }
                
        return stepsToMain;
    }
};