class Solution {
public:
    long long ncr(int n , int r ){
        if(r>n)return 0 ;
        long long ans = 1 ;
        r= min(r , n-r);

        for(int i = 1; i<=r;i++){
            ans *= (n-i+1);
            ans /=i ;
        }
        return ans ;
    }

    int uniquePaths(int m, int n) {
        return ncr(m+n-2 , m-1);
    }
};