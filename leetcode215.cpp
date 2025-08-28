class Solution {
public:
    int findKthLargest(vector<int>& num, int k) {
        sort(num.begin(), num.end(), greater<int>());
        return num[k-1];
    }
};
