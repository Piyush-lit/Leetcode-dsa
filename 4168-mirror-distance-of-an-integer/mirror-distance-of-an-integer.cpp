class Solution {
public:
    int mirrorDistance(int n) {
        int reverse = 0;
        int num = n;
        while (num > 0) {
            int digit = num % 10;
            reverse = reverse * 10 + digit;
            num /= 10;
        }
        return abs(n - reverse);
    }
};