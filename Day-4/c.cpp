class Solution {
  public:
  
 int merge(int s , int e , int mid , vector<int>& arr){
        int l1 = mid-s+1 ;
        int l2 = e -mid;
        
        vector<int>a(l1) , b(l2);
        
        for(int i = 0 ; i<l1;i++) a[i] = arr[s+i];
        for(int j = 0 ; j<l2;j++) b[j] = arr[mid+1+j];
        int i = s ; 
        int l = 0 ; 
        int r = 0 ;
        int cnt = 0 ;
        while(l < l1 && r <l2){
            if(a[l] <= b[r]){
                arr[i++] = a[l++];  
            }else{
                arr[i++] = b[r++];
                cnt+= (l1 - l);
            }
        }
        while(l < l1) arr[i++] = a[l++];
        while(r < l2) arr[i++] = b[r++];
        return cnt ; 
    }
  
  
    int mergeSort(int s , int e , vector<int>& arr){
        if(s<e){
            int mid = s + (e-s)/2 ;
            int a = mergeSort(s, mid , arr);
            int b = mergeSort(mid+1, e , arr);
            int p = merge(s, e, mid , arr);
            return a + b +p ;
        }
        return 0 ;   
    }

    int inversionCount(vector<int> &arr) {
        int n = arr.size();
        
        return mergeSort(0, n-1, arr);
    }
};