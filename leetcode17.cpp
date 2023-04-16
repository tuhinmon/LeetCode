//Single Number
 int singleNumber(vector<int>& nums) {
        // case  1;



        // int res=0;
        // for(int i=0;i<nums.size();i++){
        //     res = res^nums[i];

        // }
        // return res;


        //case  2


        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int ans =0;
        for(auto it:mpp){
            if(it.second==1){
                ans = it.first;
            }
        }
        return ans;
        
    }