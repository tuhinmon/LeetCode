//  Majority Element use moores voting algo
int majorityElement(vector<int>& nums) {
        // // first approch 
        // // 1.-> time complecity = o(n);
        // // space complecity = o(n);
        // int ans =0;
        // int k = nums.size()/2;
        // unordered_map<int,int>mpp;
        // for(int i=0;i<nums.size();i++){
        //     mpp[nums[i]]++;
        // }
        // for(auto it:mpp){
        //     if(it.second>k){
        //         ans = it.first;
        //     }

        // }
        // return ans;




        // sceond approch 
        // use moores voting algo
        // T.C = O(N);
        // S.C = 0(1);
        int count =0;
        int element =0;
        for(int i=0;i<nums.size();i++){
            // first case -1
              if(count ==0){
                  element = nums[i];
              }

              // second case - 2
              if(nums[i]==element){
                  count++;
              }
              else{
                  count--;
              }
        }
        return element;
        
