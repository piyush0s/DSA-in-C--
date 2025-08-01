// 231. Power of Two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
         if (n <= 0) return false; 
        return (n & (n - 1)) == 0;
       
    }
};

// 326. Power of Three

class Solution {
public:
    bool isPowerOfThree(int n) {
        return (n > 0 && 1162261467 % n == 0);
    }
};


// 342. Power of Four

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        while (n % 4 == 0) {
            n /= 4;
        }
        return n == 1;
    }
};


// 509. Fibonacci Number

class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        return fib(n - 1) + fib(n - 2);
    }
};