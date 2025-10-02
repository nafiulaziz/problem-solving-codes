class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int hi = 0;

        while (l < r) {
            int area = (r - l) * min(height[l], height[r]);
            hi = max(hi, area);

            if (height[l] < height[r])
                l++;
            else
                r--;
        }

        return hi;
    }
};
