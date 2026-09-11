class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        if (num % 2 == 1) {
            count++;
        }
        while (num != 0) {
            num /= 2;
            if (num % 2 == 1) {
                num -= 1;
                count++;
            }
            count++;
        }
        return count;
    }
};