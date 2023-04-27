//Set Matrix Zeroes
void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>a,b;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    a.push_back(i);
                    b.push_back(j);

                }
            }
        }
        // row should be zero;
        for(int i=0;i<a.size();i++){
            int index = a[i];
            for(int j=0;j<m;j++){
                matrix[index][j]=0;
            }

        }
        // column shold be zero;
        for(int i=0;i<b.size();i++){
            int index = b[i];
            for(int j=0;j<n;j++){
                matrix[j][index]=0;
            }
        }
    }