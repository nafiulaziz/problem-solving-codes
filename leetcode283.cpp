class Solution {
public:
    void moveZeroes(vector<int>& num) {
        int n = num.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (num[j] == 0) {
                    int m = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = m;
                }
            }
        }
    }
};
