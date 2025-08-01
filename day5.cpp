// 189. Rotate Array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>temp(n);
        for(int i =0; i< n; i++){
            temp[(i+k)%n]= nums[i];

        }

        nums = temp;
    }
};

// 1752. Check if Array Is Sorted and Rotated

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        for(int i =1; i<n ; i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(nums[n-1]>nums[0]){
            count++;
    }
    return count <=1;
    }
};

// 344. Reverse String


class Solution {
public:
    void reverseString(vector<char>& s) {
        int start= 0, end = s.size() -1;
        while(start < end ){
            swap (s[start++],s[end--]);
        }
    }
};

// 1910. Remove All Occurrences of a Substring
class Solution {
public:
    string removeOccurrences(string s, string part) {
        // while(s.length()!=0 && s.find(part)<s.length()){
        //     s.erase(s.find(part),part.length());
        // }
        // return s;
        int n = part.length();
        while(s.length()>= s.find(part)){
            int start = s.find(part);
            s.erase(start,n);
        }
        return s;
    }
};


// 1. Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i =0; i<nums.size(); i++){
            for(int j = i+1; j < nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};