class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sumn = 0;
        int summ = 0;
        for (int i = 1; i <= n; i++) {
            if (i % m == 0) {
                sumn += i;
            } else {
                summ += i;
            }
        }
        return summ - sumn;
    }
};