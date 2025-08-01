// 33. Search in Rotated Sorted Array

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        
        while (s <= e) {
            int mid = s + (e - s) / 2;
            
            if (nums[mid] == target)
                return mid;

            // Check if left half is sorted
            if (nums[s] <= nums[mid]) {
                // Target in left half
                if (nums[s] <= target && target < nums[mid])
                    e = mid - 1;
                else
                    s = mid + 1;
            }
            // Right half is sorted
            else {
                // Target in right half
                if (nums[mid] < target && target <= nums[e])
                    s = mid + 1;
                else
                    e = mid - 1;
            }
        }

        return -1; // Target not found
    }
};


// 9. Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;  // Negative numbers are not palindromes

        int original = x;
        int rem, rev = 0;

        while (x != 0) {
            rem = x % 10;
            // Check for overflow:
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) return false;
            rev = rev * 10 + rem;
            x = x / 10;
        }

        return rev == original;
    }
};

// 88. Merge Sorted Array


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;        // Last index of nums1's valid elements
        int j = n - 1;        // Last index of nums2
        int k = m + n - 1;    // Last index of nums1 total space

        // Merge from the back to avoid overwriting nums1's values
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If nums2 still has elements left
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};


// 283. Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero= 0;
        for(int i =0; i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[zero]);
                 zero++;
            }
           
        }
    }
};