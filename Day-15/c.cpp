class Solution {
  public:
    static  bool cmp(vector<int>&  a, vector<int>& b) {
        return a[0] > b[0];   // sort by profit descending
    }
    vector<int> jobSequencing(vector<int> &d, vector<int> &p) {
        // code here
         int n = d.size();
    vector<int> ans = {0, 0};
    vector<pair<int, int>> jobs;
    for (int i = 0; i < n; i++) {
        jobs.push_back({d[i], p[i]});
    }

    sort(jobs.begin(), jobs.end());
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < jobs.size(); i++) {
        
        if (jobs[i].first > pq.size())
            pq.push(jobs[i].second);
        
        else if (!pq.empty() && pq.top() < jobs[i].second) {
            pq.pop();
            pq.push(jobs[i].second);
        }
    }

    while (!pq.empty()) {
        ans[1] += pq.top();
        pq.pop();
        ans[0]++;
    }

    return ans;
    }
};