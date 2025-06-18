class Solution {
public:
    bool checkPerfectNumber(int num) {
        int a = 0;
        vector<int> nums;

        for (int i = 1; i < num; ++i) {
            if (num % i == 0) {
                nums.push_back(i);
            }
        }

        for (int i : nums)
            a = a + i;

        if (num == a)
            return true;
        else
            return false;
    }
};
