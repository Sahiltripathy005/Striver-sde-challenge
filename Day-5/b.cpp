class Solution {
public:

    double power(double x , long long n){
        if(n == 0 )return 1; 
        if(n==1)return x;

        if(n &1) return x * power(x * x , n/2);
        return power(x*x , n/2);
    }

    double myPow(double x, int n) {
        if(x == 1)return 1 ; 
        long long k = n; 
        if(n>=0) return power(x , k);
        else return (double)1 / power(x, abs(k) );
    }
};