//Find the Difference of Two Arrays
 vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        map<int,int> mp1, mp2;
        int n = nums1.size();
        int m = nums2.size();
        for(int i=0;i<n;i++){
            mp1[nums1[i]]++;
        }
        for(int i=0;i<m;i++){
            mp2[nums2[i]]++;
        }
        vector<int> ans1;
        for(int i=0;i<n;i++){
            if(mp2.find(nums1[i]) == mp2.end() && mp1[nums1[i]] != 0){
                ans1.push_back(nums1[i]);
                mp1[nums1[i]] = 0;
            }
        }
        ans.push_back(ans1);
        vector<int> ans2;
        for(int i=0;i<m;i++){
            if(mp1.find(nums2[i]) == mp1.end() && mp2[nums2[i]] != 0){
                ans2.push_back(nums2[i]);
                mp2[nums2[i]] = 0;
            }
        }
        ans.push_back(ans2);
        return (ans);
    }