class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int d = nums[i];
            if (d == 0) {
                nums.erase(nums.begin() + i);
                nums.push_back(0);
                n--;
                i--;
            }
        }
    }
};
