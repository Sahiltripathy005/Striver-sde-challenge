class Solution {
public:
    int trap(vector<int>& arr) {
        int n= arr.size();
        int l = arr[0];
        int r = arr[n-1];
        int ans= 0 ; 
        int maxi = max_element(arr.begin() , arr.end() ) -arr.begin();
        for(int i =0 ; i<maxi;i++){
            l =max(arr[i] , l);
            ans+=  min(arr[maxi] , l) - arr[i];
        }
        for(int i = n -1; i>=maxi ;i--){
            r = max(r , arr[i]);
            ans+= min(arr[maxi] , r) - arr[i];
        }
        return ans ; 
    }
};