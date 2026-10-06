class Solution {
public:
    bool checkGoodInteger(int n) {
        int squareSum = 0;
        int digitSum = 0;
        int num = n;
        while (n > 0) {
            digitSum += n % 10;
            n /= 10;
        }
        while (num > 0) {
            int digit = num % 10;
            squareSum += digit * digit;
            num /= 10;
        }
        if (squareSum - digitSum >= 50) {
            return true;
        }
        return false;
    }
};