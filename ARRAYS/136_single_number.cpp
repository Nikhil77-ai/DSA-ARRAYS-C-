// NOTE: Logic is correct. May give errors in VS Code due to missing headers.
// Copied directly from LeetCode submission.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unique = 0;
        for(int i:nums){
            unique = unique^i;
        }
        return unique;
    }
};