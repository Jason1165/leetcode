class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int num : nums) {
            if (int(log10(num)) % 2 == 1) {
                count++;
            }
        }
        return count;
    }
};
