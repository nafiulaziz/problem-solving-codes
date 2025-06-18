class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double b;
        for (int i : nums2)
            nums1.push_back(i);

        sort(nums1.begin(), nums1.end());

        int a = (nums1.size()) / 2;

        if (nums1.size() % 2 == 0) {
            int a = nums1.size() / 2;
            double e = nums1.at(a - 1);
            double f = nums1.at(a);
            b = (e + f) / 2;
        } else {
            int a = (nums1.size() + 1) / 2 - 1;
            b = nums1.at(a);
        }

        return b;
    }
};
