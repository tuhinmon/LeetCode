// Find First and Last Position of Element in Sorted Array
vector<int> searchRange(vector<int>& nums, int target) {
        // T.C = 0(logn);
        //S.C =0(1);
        vector<int>ans;
        int s = 0;
        int e = nums.size()-1;
        int left =-1;
        while(s<=e){
             int mid = (s+e)/2;
            if(nums[mid]==target){
                left = mid;
                e = mid-1;
            }
            else if(nums[mid]>target){
                e = mid-1;
            }
            else {
                s = mid+1;
            }

            
        }
        ans.push_back(left);
        s = 0;
        e = nums.size()-1;
        int right =-1;
        while(s<=e){
             int mid = (s+e)/2;
            if(nums[mid]==target){
                right = mid ;
                s = mid+1;
            }
            else if(nums[mid]>target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        ans.push_back(right);
        return ans;
        
    }