class Solution {
public:
    long long countCommas(long long n) {
        if (n <= 999)
            return 0;
        else if (n > 999 && n <= 999999)
            return (n - 1000) + 1;

        else if (n > 999999 && n <= 999999999)
            return (n - 1000000 / 2) * 2 - 1000 + 2;

        else if (n > 999999999 && n <= 999999999999)
            return (n - 1000000000 / 3) * 3 - 1001001 + 3;

        else if (n > 999999999999 && n <= 999999999999999)
            return (n - 1000000000000 / 4) * 4 - 1001001000 + 4;

        else
            return (n - 1000000000000000 / 5) * 5 - 1001001001000 + 5;
    }
};
