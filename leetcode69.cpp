class Solution {
public:
    int mySqrt(int x) {
        int y = 0;
        for (int i = 1; i <= x; i++) {
            long long c = pow(i, 2) ;
            if (c <= x)
                y++;
            else
                break;
        }
        return y;
    }
};
