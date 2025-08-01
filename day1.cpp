// 1207. Unique Number of Occurrences

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int ans = 0;
         for(int i = 0; i<arr.size(); i++){
            ans = !(ans ^ arr[i]);
         }

        
            return true;
         
         else{
            return false;
         }
    }
};




// 7. Reverse Integer


class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        int remainder;

        while (x != 0) {
            remainder = x % 10;
            ans = ans * 10 + remainder;
            x = x / 10;
        }

        if (ans > INT_MAX || ans < INT_MIN) {
            return 0;
        }

        return (int)ans;
    }
};


// 1009. Complement of Base 10 Integer

class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;

        if (n == 0){
            return 1;
        }

        while(m!=0){
            mask = (mask << 1)|1;
            m = m>>1;
        }
        int ans = (~n) & mask;

        return ans;
    }
};