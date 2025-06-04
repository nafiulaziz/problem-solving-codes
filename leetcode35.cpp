class Solution {
public:
    int searchInsert(vector<int>& nums, int tar) {
        int sta = 0;
        int mid = 0;
        int end = nums.size() - 1;

        while (sta <= end) 
        {
            mid = (sta + end) / 2;

            if (nums[mid] == tar)
                return mid;

            else if (tar < nums[mid])
                end= mid - 1;
            else
                sta = mid + 1;
        }
        return sta;
    }
};
