class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int k = nums[0];
        int b = 0;

        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            if (a > k) {
                k = a;
                b = i;
            }
        }
        return b;
    }
};
