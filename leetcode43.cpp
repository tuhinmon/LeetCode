// Roman to Integer
int romanToInt(string s) {
        // T.C = 0(N);
        // S.C = 0(1);because there are use 256 in constant inter value;
        int res =0;
        int nums[256]={};
        nums['I']={1},nums['V']={5},nums['X']={10},nums['L']={50},nums['C']={100},nums['D']={500},nums['M']={1000};
        for(int i=0;i<s.size();i++){
            if(nums[s[i]]<nums[s[i+1]]){
                res = res-nums[s[i]];
            }
            else{
                res = res+nums[s[i]];
            }
        }
        return res;

        
    }