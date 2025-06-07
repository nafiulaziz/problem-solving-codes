class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int b = 0;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            int c = nums[i];
            if (c != b) {
                break;
            }
            b++;
        }
        return b;
    }
};
