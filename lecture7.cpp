//leetcode compliment of base10 integer solution(problem no 1009)
/*
class Solution {
public:
    int bitwiseComplement(int n) {
       int m =n ;
       int mask = 0;
       //Edge case(missed it remember next time)
       if(n==0){
        return 1;
       }
       while(m!=0)
       {
         mask = (mask<<1)|1;
         m= m>>1;
       }
       int ans = (~n) & mask;
       return ans;
    }
};
*/
//leetcode prolem no 7 solution(reverse integer)
/*
#include <limits>

class Solution {
public:
    int reverse(int x) {
        int ans =0 ;
        while(x!=0){
            int digit = x%10; 
            if((ans>INT_MAX/10)||(ans<INT_MIN/10))
            {
                return 0;
            }
            ans=(ans*10)+digit;
            x= x/10 ;

        }
        return ans ;

    }
};*/

//leetcode prolem no 231 solution(power of two)

/*
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i= 0; i<=30; i++){
            int ans = pow(2,i);
            if(ans==n){
                return true;
            }
        }
        return false ;
    }
};
*/