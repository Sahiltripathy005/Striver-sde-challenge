class Solution {
public:

    int merge(int s , int e ,int mid , vector<int>& arr){
        int  l1 = mid - s +1 ;
        int l2 = e -mid ;
        vector<int> a(l1) ,b(l2);
        for(int i =0; i<l1;i++) a[i] = arr[s+i];
        for(int i =0; i<l2;i++) b[i] = arr[mid+1+i];

        int i = s ; 
        int l = 0 ;
        int r = 0 ; 
        int cnt = 0 ;
        
        while(l < l1 && r <l2){
            if(a[l] <=b[r]) arr[i++] =a[l++]; 
            else arr[i++] = b[r++];
        }
        while(l < l1) arr[i++] = a[l++];
        while(r < l2) arr[i++] = b[r++];
        int k =0 ;
        for(int i = 0 ; i<l1;i++){
            while(k < l2 && a[i] > b[k]*2LL )k++;
            cnt+=k;
        }
        return cnt;
    }

    int mergeSort(int s ,int e , vector<int>& arr ){
        if(s>=e)return 0 ;
        int mid = s+ (e-s)/2;
        int p = mergeSort(s, mid , arr);
        int q = mergeSort(mid+1, e, arr);
        int z = merge(s, e , mid , arr);
        return p+q+z;
    }

    int reversePairs(vector<int>& arr) {
        int n = arr.size();
        return mergeSort(0 ,n-1,arr);
    }
};