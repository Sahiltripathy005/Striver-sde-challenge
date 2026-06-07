class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int n= arr.size();
        
        unordered_map<int,int>mp;
        mp[0] =1 ; 
        int x = 0 ;
        int ans = 0 ;
        for(int it  :arr){
            x ^= it;
            int tar = k ^ x ; 
            
            if(mp.find(tar) != mp.end()){
                ans += mp[tar];
            }
            
            mp[x] = mp.find(x) == mp.end() ? 1 : mp[x]+1;
        }
        return ans ; 
    }
};