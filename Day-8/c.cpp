class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        vector<int> freq(95,0); 

        int i =0, j =0;
        int ans =0;

        while (j <n) {
            int idx =s[j++]-32;   
            freq[idx]++;

            while(freq[idx] >1) {
                freq[s[i]-32]--;
                i++;
            }

            ans =max(ans, j-i);
        }

        return ans;
    }
};