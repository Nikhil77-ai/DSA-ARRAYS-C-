//NOTE: Logic is correct. May give errors in VS Code due to missing headers.
// Copied directly from LeetCode submission.


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;
        for(int i=0; i<nums.size(); i++){
            if(freq == 0)
            ans = nums[i];
            if(ans == nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;
    }
};