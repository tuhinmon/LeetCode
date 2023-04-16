//Majority Element
int majorityElement(vector<int>& nums) {
        int k = nums.size()/2;
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;

        }
        int ans=0;
        for(auto it:mpp){
            if(it.second>k){
                ans = it.first;
            }

        }
        return ans;
        
    }
