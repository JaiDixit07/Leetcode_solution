class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            // if sum==0  start=i
            sum+=nums[i];
            if(sum>maxi){
                maxi=sum;
                // ansstart= start, ansend=i
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};