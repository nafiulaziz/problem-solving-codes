class Solution {
public:
    int fib(int n) {
        int a = 0;
        int b = 0;
        int c = 1;

        if(n<=1) return n;

        for (int i = 0; i < n - 1; i++) {
            a = b + c;
            b = c;
            c = a;
        }
        return a;
    }
};
