class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Better Approach
        // 0(N^2 + logM)
        // Is giving tle
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;

            while(j<k){
                int target=nums[i]+nums[j]+nums[k];
                if(target>0){
                    k--;
                }
                else if(target<0){
                    j++;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])j++;
                    while(j<k && nums[k]==nums[k+1])k--;
                }
            }
        }
        return ans;

    }
};