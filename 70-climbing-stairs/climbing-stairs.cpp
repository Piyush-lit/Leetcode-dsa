class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2)
            return n;
        int next;
        int f = 1;
        int s = 2;
        for (int i = 3; i <= n; i++) {
            next = f + s;
            f = s;
            s = next;
        }
        return s;
    }
};