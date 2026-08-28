class Solution {
public:
    int subtractProductAndSum(int n) {
        int num = n;
        int sum = 0;
        int product = 1;
        int result;
        while (n > 0) {
            sum += n % 10;
            product *= n % 10;
            n /= 10;
        }
         result = product - sum;
        return result;
    }
};
