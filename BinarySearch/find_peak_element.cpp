// Problem: Find Peak Element
// Approach: Binary Search
// Time Complexity: O(log n)
// Space Complexity: O(1)

// Intuition:
// If nums[mid] > nums[mid+1], peak lies on left
// else it lies on right

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[mid + 1]) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};
