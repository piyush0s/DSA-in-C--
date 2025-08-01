// 125. Valid Palindrome

class Solution {
public:
    bool isPalindrome(string s) {
       int start = 0 , end = s.size()-1;
      
       while(start < end){
        if(s[start]!=s[end]){
        return false;
       }
       start ++;
        end --;
       }
       return true;
    }
    
};

// 704. Binary Search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid = (start + end)/2;

        while(start <= end){

            if(nums[mid]==target){
                return mid;
            }
            if(target > nums[mid]){
                start = mid +1;
            }
            else{
                end = mid -1;
            }

            mid = (start + end )/2;
        }

        return -1;
    }


// };34. Find First and Last Position of Element in Sorted Array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        int low = 0, high = nums.size() - 1;

        // Find first occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                first = mid;
                high = mid - 1; // look on left side
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        low = 0, high = nums.size() - 1;

        // Find last occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                last = mid;
                low = mid + 1; // look on right side
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return {first, last};
    }
};


// 852. Peak Index in a Mountain Array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int start = 0, end = arr.size()-1;
      
       while(start<end){
         int mid = start+(end-start)/2;
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
      
       }
       return start;
};
};
