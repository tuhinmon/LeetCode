//Find First and Last Position of Element in Sorted Array
vector<int> searchRange(vector<int>& nums, int target) {
        // decleared all variables
        vector<int>ans;
        int first =0;
        int last = nums.size()-1;
        int start =-1;
        int end  =-1;
        int mid;
        // start binary search 
        while(first<=last){
            mid = (first+last)/2;
            if(nums[mid]==target){
                start =end= mid;
            }
            if(nums[mid]>target){
                last = mid-1;

            }
            else{first = mid +1;}
            
            
        }
        // cheak end right && start left in present for target
        while(start>0 && nums[start-1]==target){start--;}
        while(end<nums.size()-1 && nums[end+1]==target){end++;}
        ans.push_back(start);
        ans.push_back(end);
        return ans;
        
    }