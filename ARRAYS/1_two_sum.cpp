// NOTE: Logic is correct. May give errors in VS Code due to missing headers.
// Copied directly from LeetCode submission.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = INT_MIN;
        for(int val: nums){
            currSum += val;
            maxSum = max(currSum, maxSum);
            if(currSum<0)
            currSum = 0;
        }
        return maxSum;
    }
};