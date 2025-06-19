class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Better Solution -> hashmaps
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.second > ((nums.size())/2)){
                return it.first;
            }
        }
        return 0;
// ----------------------------------------------
        //Moore's Voting Algo 
        int cnt=0;
        int el;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                el=nums[i];
                cnt++;
            }
            else if(el==nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        // If there is not connfirmed that there is a majority element we run an additional for loop ->
        // Here not required;
        return el;
    }
};