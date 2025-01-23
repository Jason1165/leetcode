class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix (nums.size(), 1);
        vector<int> suffix (nums.size(), 1);
        vector<int> products (nums.size(), 0);
        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = prefix[i-1] * nums[i-1];
        }
        for (int i = nums.size()-2; i >= 0; i--) {
            suffix[i] = suffix[i+1] * nums[i+1];
        }
        for (int i = 0; i < nums.size(); i++) {
            products[i] = prefix[i] * suffix[i];
        }
        return products;
    }
};
