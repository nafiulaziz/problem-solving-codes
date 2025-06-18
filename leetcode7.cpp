class Solution {
public:
    int reverse(int x) {
        long long num = x;
        num = abs(num);
        long n = 0;
        while (num > 0) {
            long r = num % 10;
            num = num / 10;
            n = (n * 10) + r;
        }
        if (n >= INT32_MIN && n <= INT32_MAX) {
            return (x < 0) ? -n : n;
        }
        return 0;
    }
};
