class Solution {
  public:
  
    static bool comp(pair<int,int> &a, pair<int,int> &b){
    return (a.second == b.second)
           ? a.first < b.first
           : a.second < b.second;
    }
  
    int meetingRoom(vector<int> &start, vector<int> &finish) {
        // code here
        int n = start.size();
        vector<pair<int,int>>job(n);
        int ans= 1; 
        
        for(int i = 0 ; i<n;i++){
            job[i] = {start[i] , finish[i]};
        }
        
        sort(job.begin() ,job.end() ,comp);
        int f =job[0].second;
        
        for(int i = 1 ; i<n;i++){
            if(job[i].first > f){
                f= job[i].second;
                ans++;
            }
        }
        return ans ; 
        
    }
};