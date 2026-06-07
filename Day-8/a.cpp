class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n =arr.size();
        unordered_map<int,int>mp;
        mp[0] =-1;
        int ans= 0;
        int sum =  0 ;
        
        for(int i = 0 ; i<n;i++){
            int it = arr[i];
            
            sum+=it;
            int tar = sum - k ;
            if(mp.find(tar) != mp.end()){
                ans =max(ans , i- mp[tar]);
            }
            
            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }
            
        }
        return ans;
    }
};