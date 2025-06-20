class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // int m = matrix.size(),n =matrix[0].size();
        // bool colO=false;

        // // marks rows and cols using the first row and column
        // for(int i= 0;i< m;i++){
        //     if(matrix[i][0]==0){
        //         colO=true;  //first col tag
        //     }
        //         for(int j=1;j<n;j++){
        //             if(matrix[i][j]==0){
        //                 matrix[i][0]=0;  //mark first col
        //                 matrix[0][j]=0;  // mark first row
        //             }
        //         }
        //     }
        //     for( int i =m-1;i>=0;i--){
        //         for(int j=n-1;j>=1;j--){
        //             if(matrix[i][0]==0 || matrix [0][j]==0){
        //                 matrix[i][j]=0;
        //             }
        //         }
        //         if(colO) matrix [i][0]=0;
        //     }
        int col0=1;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0){
                col0=0;
            }
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;  // mark the row in which there is 0
                    matrix[0][j]=0;  // mark the col in which there is 0
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0){
            for(int j=1;j<n;j++){
                matrix[0][j]=0;
            }
        }
        if( col0 ==0){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
    }
    
};