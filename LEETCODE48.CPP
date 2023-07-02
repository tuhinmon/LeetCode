//Find the Duplicate Number
int findDuplicate(vector<int>& nums) {
        // T.C = 0(N);
        // S.C = 0(1);
        int f= nums[0];
        int s = nums[0];
        do{
            f = nums[nums[f]];
            s = nums[s];
        }while(s!=f);
        f = nums[0];
        while(f!=s){
            f = nums[f];
            s = nums[s];
        }
        return s;
        
    }