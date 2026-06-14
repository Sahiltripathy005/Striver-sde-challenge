class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size();
        int k =n  ;
        int j =1;
        for(int  i = 1 ;i <n;i++){
            if(arr[i] != arr[i-1]){
                arr[j++] = arr[i]; 
            }else{
                k--;
            }
        }
        return k;
    }
};