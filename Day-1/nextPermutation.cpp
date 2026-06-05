#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1 ;
        for(int i = n-2 ; i>=0; i--){
            if(nums[i] < nums[i+1]){
                idx = i ;
                break;
            }
        }
        if(idx == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        int mini = INT_MAX;
        int miniIdx = -1; 
        for(int i = n-1 ; i>=idx+1;i--){
            if(mini > nums[i] && nums[i] > nums[idx]){
                mini = nums[i];
                miniIdx = i;
            }
        }
        swap(nums[idx] , nums[miniIdx]);

        reverse(nums.begin() + idx+1 , nums.end());

    }
};