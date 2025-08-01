// 258. Add Digits

class Solution {
public:
    int addDigits(int num) {
        if(num ==0)return 0;
        return 1 + (num-1)%9;
    }
};


// 441. Arranging Coins

class Solution {
public:
    int arrangeCoins(int n) {
        long long start =0, end = n;
        long long mid = start +(end - start)/2;
        while(start <=end ){
            mid = start +(end - start)/2;
            long long curr = mid * (mid +1)/2;

            if(curr == n)
                return mid ;
            
            else if (curr < n ){
                start = mid +1;
            }
            else
                end = mid - 1;

            }
            return end ;
        
    }
};