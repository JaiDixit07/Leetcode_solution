class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int longest=1;
        int cnt=0;
        int lastnum=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]-1 == lastnum){
                cnt++;
                lastnum=nums[i];
            }
            else if(nums[i]!=lastnum){
                cnt=1;
                lastnum=nums[i];

            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};