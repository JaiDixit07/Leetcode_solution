class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //TC -> O(NLOGN) + O(2N)
        int n=intervals.size();
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++){

            if(ans.empty()||ans.back()[1]<intervals[i][0]){
                ans.push_back(intervals[i]);
            }  // TC -> 0(N) + O(NlogN)  -> single pass
            else{
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);
            }
            // int start=intervals[i][0];
            // int end=intervals[i][1];
            // if(!ans.empty() && end<=ans.back()[1]){
            //     continue;
            // }
            // for(int j=i+1;j<n;j++){
            //     if(intervals[j][0]<=end){
            //         end=max(end,intervals[j][1]);
            //     }
            //     else{
            //         break;
            //     }
            // }
            // ans.push_back({start,end});
        }
        return ans;
    }
};