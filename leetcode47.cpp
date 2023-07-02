//Search in Rotated Sorted Array
 int search(vector<int>& nums, int target) {
      // use modefy binary search
      // T.C = 0(N);
      // S.C = 0(1);
      int low = 0;
      int high = nums.size()-1;
      while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
          return mid;
        }
        // cheak the left half sorted or not
        if(nums[low]<=nums[mid]){
          if(nums[low]<=target && nums[mid]>target){
            high = mid-1;
          }
          else{
            low = mid+1;
          }

        }
        else{
          if(nums[mid]<target && target<=nums[high]){
            low = mid+1;
          }
          else{
            high = mid-1;
          }
        }
        
      }
      return -1;

        
    }