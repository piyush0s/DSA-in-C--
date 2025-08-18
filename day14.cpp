// find palindrome in a string
// LeetCode 5. Longest Palindromic Substring

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n<=1) return s;

        int start = 0, end = 1;

        auto expand = [&](int left, int right){
            while(left >= 0 && right < n && s[left]== s[right]){
                if(right - left + 1> end){
                    start = left;
                    end = right- left +1;
                }
                left --;
                right++;
            }

        };
        for(int i = 0; i < n ; i++){
            expand(i,i);
            expand(i, i+1);
        }
        return s.substr(start,end);
    }
};



// 224// LeetCode 224. Basic Calculator

class Solution {
public:
    int calculate(string s) {
        long result = 0;
        long number = 0;
        int sign = 1;
        stack<int> stk;

        for(char c : s){
            if(isdigit(c)){
                number = number * 10 +(c- '0');
            }else if(c == '+'){
                result+=sign*number;
                number = 0;
                sign = 1;
            }else if(c == '-'){
                result+= sign*number;
                number = 0;
                sign = -1;
            }else if(c == '('){
                stk.push(result);
                stk.push(sign);

                result = 0;
                sign = 1;
            }
            else if(c ==')'){
                result+= sign*number;
                number = 0;

                result*=stk.top(); stk.pop();
                result+=stk.top(); stk.pop();

            }


        }

        if(number !=0) return result+=sign *number;
        return result;
    }
};