class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.erase(nums1.begin() + m, nums1.end());
        nums2.erase(nums2.begin() + n, nums2.end());

        for (int j = 0; j < n; j++)
            nums1.push_back(nums2[j]);

        sort(nums1.begin(), nums1.end());
    }
};
