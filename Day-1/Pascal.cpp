class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans(n);
        ans[0] = {1};
        if(n==1)return ans;
        ans[1] = {1,1};

        for(int i =2 ; i<n;i++){
            int sz = ans[i-1].size();

            vector<int>temp(sz+1);
            temp[0] = 1;
            temp[sz] = 1;

            for(int j = 1 ; j<sz;j++){
                temp[j] = ans[i-1][j-1] + ans[i-1][j];
            }
            ans[i]= temp;
        }

        return ans ;
    }
};