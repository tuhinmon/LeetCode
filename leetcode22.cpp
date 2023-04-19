//Rotate Image
void rotate(vector<vector<int>>& matrix) {
        // at first transpose the matrix its mean every colums change in row
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // every row cav reverse
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        