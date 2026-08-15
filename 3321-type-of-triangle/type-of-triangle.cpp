class Solution {
public:
    string triangleType(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = 0; j < nums.size() - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }

        if (nums[0] + nums[1] <= nums[2]) {
            return "none";
        }
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
        }
        if (count == 9) {
            return "equilateral";
        } else if (count == 5) {
            return "isosceles";
        } else {
            return "scalene";
        }
    }
};
