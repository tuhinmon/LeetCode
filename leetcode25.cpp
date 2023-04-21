//Maximum Subarray
 int maxSubArray(vector<int>& nums) {
        // this question solved in khadens algorithm->->->


        //step 1 ->> find sum in arr[i];

        // step 2 ->> add maxisum in max function;


        // step 3 ->> when sum <0 then sum =0;


        int sum =0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum = sum+nums[i];
             maxi = max(maxi,sum);
             if(sum<0){
                 sum =0;
             }
             
        }
        return maxi;
        
        
        
        
    }