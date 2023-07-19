//Merge Strings Alternately
string mergeAlternately(string word1, string word2) {
        string ans ;
        int i=0;
        int j =0;
        while(1){
            if(i<word1.size()){
                ans.push_back(word1[i]);
                i++;

            }
            else{
                break;
            }
            if(j<word2.size()){
                ans.push_back(word2[j]);
                j++;

            }
            else{
                break;
            }
        }
        while(i<word1.size()){
            ans.push_back(word1[i]);
            i++;
        }
        while(j<word2.size()){
            ans.push_back(word2[j]);
            j++;
        }
        return ans;
        
    }