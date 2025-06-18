class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> nums1;
        vector<int> nums2;

        for (int i = 1; i * i <= area; ++i) {
            if (i * i == area) {
                nums2.push_back(i);
                nums2.push_back(i);
                return nums2;
            }
        }

        for (int i = 1; i <= area; ++i) {
            if (area % i == 0) {
                nums1.push_back(i);
            }
        }
        for (int i = 0; i <= nums1.size(); i++) {
            int t = nums1[i];
            int di = area / t;
            if (di < t) {
                nums2.push_back(t);
                nums2.push_back(di);
                break;
            }
        }

        return nums2;
    }
};
