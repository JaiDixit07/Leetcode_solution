class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int rows = grid.size();
        int columns = grid[0].size();
        long long n = rows* columns;
        long long sum1= (n* (n+1))/2;
        long long sqsum1 = (n*(n+1)*((2*n)+1))/6;
        long long sum2=0,sqsum2=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                sum2+=grid[i][j];
                sqsum2+=grid[i][j] * grid[i][j];
            }
        }
        long long value1=sum1 -sum2 ;
        long long value2=sqsum1-sqsum2;
        int x,y;
        x= (value1 + (value2/value1))/2;
        y= x - value1;
        return {y,x};
    }
};