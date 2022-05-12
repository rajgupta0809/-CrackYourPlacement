class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int flag=1, row = matrix.size() , col = matrix[0].size();
        
        for(int i=0;i<row;i++){
            if(matrix[i][0] == 0) flag = 0; //for mainting an edge case ho sakta h iske baad m 0 hone ki vajh se durse element ko 0 hona apde
            for(int j=1;j<col;j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0; //marking dummy arrays
                }
            }
        }
        
        //Traversing from last(why?)
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=1;j--){
                if(matrix[i][0] == 0 || matrix[0][j]==0){
                    matrix[i][j] = 0;
                }
            }
            if(flag==0) matrix[i][0] = 0;
        }
    }
};