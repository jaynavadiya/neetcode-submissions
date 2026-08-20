class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>, vector<string>> mp;

        for(int i = 0; i < strs.size(); i++){
            vector<int> freq(26);
            for(int j = 0; j < strs[i].size(); j++){
                freq[strs[i][j]-'a']++;
            }
            mp[freq].push_back(strs[i]);
        }

        for(auto it = mp.begin(); it!=mp.end(); it++){
            ans.push_back(it->second);
        }

        return ans;
    }
};
