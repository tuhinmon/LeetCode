// Sum of Distances
vector<long long> distance(vector<int>& nums) {
        vector<long long>arr;
        int sum =0;
        for(int i=0;i<nums.size();i++){
            sum =0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j] && i!=j){
                    if(i>j){
                        sum = sum+(i-j);
                    }
                    else{
                        sum = sum+(j-i);
                    }
                    
                }
                
            }
            // if(sum<0){
            //     sum=sum*(-1);
            // }
            arr.push_back(sum);
            
        }
        return arr;
        