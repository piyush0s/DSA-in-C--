// 1047. Remove All Adjacent Duplicates In String

class Solution {
public:
    string removeDuplicates(string s) {
      string result;
       for(char c : s){
        if(!result.empty() && result.back() == c){
            result.pop_back();
        }else{
            result.push_back(c);
        }
       }
       return result;
    }
};

// 4. Median of Two Sorted Arrays

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>merge;
        int i =0, j=0;
        while(i<nums1.size()&& j <nums2.size()){
            if(nums1[i]<nums2[j]){
                merge.push_back(nums1[i++]);
            }
            else{
                merge.push_back(nums2[j++]);
            }
        }
        while (i < nums1.size()) merge.push_back(nums1[i++]);
        while (j < nums2.size()) merge.push_back(nums2[j++]);

        int n = merge.size();
        if(n%2 ==1){
            return merge[n/2];
        }else{
            return (merge[n/2-1] + merge[n/2])/2.0;
        }
    }
};


// 69. Sqrt(x)

class Solution {
public:
    int mySqrt(int x) {
        if(x ==0 || x ==1){
            return x ;
    }
        int start =1, end = x/2;
        int ans =0;
        int mid = start + (end - start)/2;

        while(start <= end){
            int mid = start + (end - start)/2;
            if(mid <=x /mid){
                ans = mid;
                start = mid +1;
            }else{

                end = mid -1 ;
            }
        }
        return ans;
    }
};
