class Solution {
public:
    // vector<int> generaterow(int row){
    //     long long ans=1;
    //     vector<int> singlerow;
    //     singlerow.push_back(ans);
    //     for(int col=1;col<row;col++){    
    //         ans=ans*(row-col);
    //         ans=ans/col;
    //         singlerow.push_back(ans);
    //     }
    //     return singlerow;
    // }
    vector<int> generaterow(int row){
        long long ans=1;
        vector<int> singlerow;
        singlerow.push_back(ans);
        for(int col=1;col<row;col++){
            ans= ans * (row - col);
            ans =ans/ col ;
            singlerow.push_back(ans);
        }
        return singlerow;
    }
    vector<vector<int>> generate(int numRows) {
        // vector<vector<int>>entirepascal;
        // for(int i=1;i<=numRows;i++){
        //     entirepascal.push_back(generaterow(i));
        // }
        // return entirepascal;
        vector<vector<int>> entirepascal;
        for(int i=1;i<= numRows;i++){
            entirepascal.push_back(generaterow(i));
        }
        return entirepascal;
    }
};