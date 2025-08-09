PROBLEM   NUMBER                                                                     :                                                  231. Power of Two

// Date : 09 Aug 2025


// Bit Manipulation |  n & (n - 1)

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && not (n & n - 1);
    }
};


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  OR     ////////////////////////////////////////////////////////////////////////////////////////

// Code using N % n == 0

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && (1<<30)%n==0;
    }
};
