//  Kth Largest Element in an Array
int findKthLargest(vector<int>& nums, int k) {
        int size =0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            size++;

        }
        int largest = nums[size-k];
        return largest;
}