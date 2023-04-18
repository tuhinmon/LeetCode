// Container With Most Water
 int maxArea(vector<int>& height) {
        int ans =0;
        int s = 0;
        int l = height.size()-1;
        while(s<l){
            //step 1 find the low height
            int h = min(height[s],height[l]);
            // step 2 find the area 
            int area = (l-s)*h;
            // step 3 store area in ans 
            ans = max(ans,area);
            // step 4 small height pelier move forward ans backward
            if(height[l]<height[s]){
                l--;
            }
            else{
                s++;
            }
        }
        return ans;
