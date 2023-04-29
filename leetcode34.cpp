//Find the Duplicate Number
 int findDuplicate(vector<int>& nums) {
        int first = nums[0];
        int slow = nums[0];
        do{
            slow = nums[slow];
            first = nums[nums[first]];
        }while(first!=slow);
        first = nums[0];
        while(first!=slow){
            first = nums[first];
            slow = nums[slow];
        }
        return slow;
        