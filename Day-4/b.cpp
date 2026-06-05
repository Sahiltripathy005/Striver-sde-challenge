class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=  arr.size();
        int mis = -1 , rep  = -1;
        int sum = 0;
        int i =  0 ;
        
        while(i<n){
            int val = arr[i];
            
            int corr = arr[i]-1;
            
            if(arr[i] != arr[corr]){
                swap(arr[i] , arr[corr]);
            }else{
                i++;
            }
        }
        
        for(int i = 0  ;i<n;i++){
            if(i+1 != arr[i])return {arr[i] , i+1};
        }
        
        
        return {-1 , -1};
    }
};