//Set Matrix Zeroes
 void setZeroes(vector<vector<int>>& matrix) { 
        int n = matrix.size();
        int m = matrix[0].size();
        // made row vector
        vector<int>row;
        // made columns vector
        vector<int>col;
        // find which position 0 present
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        // row should be zero
        for(int i=0;i<row.size();i++){
            int index = row[i];
            for(int j=0;j<m;j++){
                matrix[index][j]=0;
            }
        }
        // col should be zero
        for(int i=0;i<col.size();i++){
            int index = col[i];
            for(int j=0;j<n;j++){
                matrix[j][index]=0;
            }
        }
        
    }