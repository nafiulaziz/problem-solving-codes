class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool is = false;
        if (n<=0) return is;
        for (int i = 0; i < n; i++) {
            long long c = pow(2, i);
            if (c == n){
                is = true;
                 break;
            }
            else if (c > n){
                is = false;
                 break;
            }
        }
        return is;
    }
};
