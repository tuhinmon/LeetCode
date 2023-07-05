//Container With Most Water
int maxArea(vector<int>& height) {
        // T.C = 0(N);
        // S.C = 0(1);
       int i=0;
       int j = height.size()-1;
       int ans =0;
       while(i<j){
           int k = min(height[i],height[j]);
           int area = (j-i)*k;
             ans = max(ans,area);
           if(height[i]<height[j]){
               i++;
           }
           else{
               j--;
           }

       }
       return ans;

        
    }