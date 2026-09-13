class Solution {
public:
    int fib(int p) {
        if (p == 0) {
            return 0;
        }
        else if (p == 1) {
            return 1;
        }
        return fib(p - 1) + fib(p - 2);
    }
};