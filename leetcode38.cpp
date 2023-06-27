// Maximum Subarray(update version)
int maxSubArray(vector<int>& nums) {
        // // approach ->>>>> 1
        // // T.C = 0(N^3);
        // // S.C = 0(1);

        // int ans =INT_MIN;
        // int sum =0;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         sum =0;
        //         for(int k=i;k<=j;k++){
        //             sum =sum + nums[k];
        //         }
        //         ans = max(ans,sum);

        //     }
        // }
        // return ans;

        // // approach ->>>>>2
        // //T.C = 0(N^2);
        // // S.C = 0(1);
        // int sum =0;
        // int ans =INT_MIN;

        // for(int i=0;i<nums.size();i++){
        //     sum =0;
        //     for(int j=i;j<nums.size();j++){
        //         sum = sum+nums[j];
        //           ans = max(ans ,sum);
        //     }

            
        // }
        // return ans;


        // APPROCAH ->>>>> 3
        // use khadens algorithm 
        // T.C = 0(N);
        // S.C =0(1);
    int sum =0;
    int maxi = nums[0];
    for(int i=0;i<nums.size();i++){
        sum = sum+nums[i];
        maxi = max(sum , maxi);
        if(sum<0){
            sum =0;
        }
    }
     return maxi;



        // int sum =0;
        // int maxi = INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     sum= sum+nums[i];
        //     maxi = max(maxi,sum);
        //     if(sum<0){
        //         sum=0;
        //     }
        // }
        // return maxi ;
        
