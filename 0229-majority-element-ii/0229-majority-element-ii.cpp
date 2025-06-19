class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // Hashmap Solution
        // vector<int> ans;
        // int n=nums.size();
        // int mini = (n/3)+1;
        // map<int,int> mpp;
        // for(int i=0;i<n;i++){
        //     mpp[nums[i]]++;
        //     if(mpp[nums[i]]==mini){
        //         ans.push_back(nums[i]);
        //     }
        //     if( ans.size()==2){
        //         break;
        //     }
        // }
        // return ans;
        // Moore's voting algo
        vector<int>ans;
        int cnt1=0,cnt2=0,el1=INT_MIN,el2=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(cnt1==0 && el2!=nums[i]){
                el1=nums[i];
                cnt1++;
            }
            else if( cnt2==0 && el1!=nums[i]){
                el2=nums[i];
                cnt2++;
            }
            else if( nums[i]==el1){
                cnt1++;
            }
            else if(nums[i]==el2){
                cnt2++;
            }
            else{
                cnt1--,cnt2--;
            }
        }
        int mini=(n/3)+1;
        cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){

            if(el1==nums[i]){
                cnt1++;
            }
            else if(el2==nums[i]){
                cnt2++;
            }
            else{
                continue;
            }
        }
        if(cnt1>=mini){
            ans.push_back(el1);
        }
        if(cnt2>=mini){
            ans.push_back(el2);
        }
        return ans;
    }
};