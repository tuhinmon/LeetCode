// Find Minimum in Rotated Sorted Array
int findMin(vector<int>& nums) {
        int i=0;
        int j = nums.size()-1;
        int mid ;
        int ans = INT_MAX;
        while(i<=j){
            mid = (i+j)/2;
            if(nums[mid]>nums[j]){
                i= mid+1;
            }
            else{
                j = mid-1;
            }
            ans = min(ans,nums[mid]);
            }
            return ans;
        
    }