//Jump Game
 bool canJump(vector<int>& nums) {
        int n=nums.size(), canReach=0;
        for(int i=0;i<n;i++){
             if(canReach<i)return false;
            canReach=max(canReach,i+nums[i]);
            // if(canReach==nums.size()-1){
            //     return true;
            // }
        }
        return true;
    }