class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // int pt1=m-1;
        // int pt2=0;
        // if(m==0){
        //     nums1.push_back(nums2);
        // }
        // while(pt1>=0 && pt2<n){
        //     if(nums1[pt1]>nums2[pt2]){
        //         swap(nums1[pt1],nums2[pt2]);
        //     }
        //     else{
        //         break;
        //     }
        //     pt1--;
        //     pt2++;
        // }
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
//------------------------------------------------------------
    //     for (int i = 0; i < n; i++) {
    //         nums1[m + i] = nums2[i];
    //     }

    // // Sort nums1 to merge arrays
    // sort(nums1.begin(), nums1.end());
//_____________________________________________________________
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};