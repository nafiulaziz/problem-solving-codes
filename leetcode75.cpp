class Solution {
public:
    void sortColors(vector<int>& nums) {
        int temp;
        bool swap;

        for (int i = 0; i < nums.size() - 1; i++) {
            swap = false;
            for (int j = 0; j < nums.size() - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                    swap = true;
                }
            }
            if (!swap)
                break;
        }
    }
};
