class Solution {
public:
    double myPow(double x, int n) {
        double y = 1;
        long long ab = abs((long long)n);
        while (ab > 0) {
            if (ab % 2 == 1)
                y *= x;
            x *= x;
            ab /= 2;
        }
        if (n < 0)
            y = 1 / y;
        return y;
    }
};
