class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        //firstly lets sort the array and then use two pointers technique

        sort(nums.begin(),nums.end());
        int num1=0,size=nums.size(),res_min_diff=INT_MAX,res_sum=0;
        for(int i=0;i<size-2;i++)
        {
            num1=nums[i];
            int revised_targ=target-num1;
            int left=i+1,right=size-1,min_diff=INT_MAX,sum_canditate=0;
            //now using two pointers method
            while(left<right)
            {
                int temp=nums[left]+nums[right];
                int diff=abs(temp-revised_targ);
                if(temp==revised_targ)
                {
                    //we found the best possible triplet we can directly return the answer
                    return target;
                }
                else if(temp>revised_targ)
                {
                    //reduce right ptr
                    right--;
                }
                else
                {
                    //increae lefyt to get bigger sum
                    left++;
                }

                if(min_diff>diff)
                {
                    min_diff=diff;
                    sum_canditate=temp+num1; //gives sume of all three nums in this case

                }
                //min_diff=min(min_diff,diff);
            }
            //once we get min_two_diff,we have to store this as a possible canditate for closest sum
            //int sum_canditate=(min_two_diff+revised_targ)+num1;
            if(res_min_diff>min_diff)
            {
                res_min_diff=min_diff;
                res_sum=sum_canditate;

            }
            
        }
        return res_sum;
        
    }
};