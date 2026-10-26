class Solution {
public:
    // int ans(int n){
    //     if(n==1 || n==0){
    //         return n;
    //     }
    //     int A1 = ans(n-1)+ans(n-2);
    //     return A1;
    // }
    int fib(int n) {
        if(n==0 || n==1){
            return n;
        }
        return fib(n-1)+fib(n-2);
        //return ans(n);
    }
};