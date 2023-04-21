//groupAnagrams
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        vector<string>temp;
        unordered_map<string,vector<string>>mpp;
        for(auto x:strs){
            string temp = x;
            sort(x.begin(),x.end());
            mpp[x].push_back(temp);
        }
        for(auto x:mpp){
            vector<string>temp = x.second;
            ans.push_back(temp);
        }
        return ans;

        
    }