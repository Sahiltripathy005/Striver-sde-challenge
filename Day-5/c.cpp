class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt= 0 ; 
        int maj = -1; 
        for(int i= 0 ; i<n;i++){
            if(cnt == 0 )maj = nums[i] ;
            if(maj == nums[i])cnt++;
            else cnt--;

        }
        return maj ;
    }
};