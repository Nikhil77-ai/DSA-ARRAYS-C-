// NOTE: Logic is correct. May give errors in VS Code due to missing headers.
// Copied directly from LeetCode submission.


class Solution {
public:
    int countOdds(int low, int high) {
          return (high - low) / 2 + (low % 2 != 0 || high % 2 != 0 ? 1 : 0);
    }

};