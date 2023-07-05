//
vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size());
        int x=1;
        for(int i=0;i<nums.size();i++){
             x=x*nums[i];
             ans[i]=x;
             }
             x=1;
             for(int i = nums.size()-1;i>0;i--){
                 ans[i]=x*ans[i-1];
                 x=x*nums[i];
             }
             ans[0]=x;
             return ans;
        
    }