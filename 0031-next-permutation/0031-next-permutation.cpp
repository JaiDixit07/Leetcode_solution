class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();

        // Step 1: Find the "dip"
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }

        // Step 2: Handle edge case where the entire sequence is in descending order
        if (ind == -1) {
            reverse(nums.begin(), nums.end());
            return; // Early exit since the sequence has been reversed
        }

        // Step 3: Find the element to swap with nums[ind]
        for (int i = n - 1; i > ind; i--) {
            if (nums[i] > nums[ind]) {
                swap(nums[i], nums[ind]);
                break;
            }
        }

        // Step 4: Reverse the elements after the index `ind`
        reverse(nums.begin() + ind + 1, nums.end());
    }
};
