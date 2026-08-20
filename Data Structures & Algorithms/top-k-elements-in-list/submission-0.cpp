bool compare(const pair<int,int>& a, const pair<int,int>& b) {
    return a.second > b.second;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        vector<pair<int,int>> temp;
        unordered_map<int, int> freq;
        for(auto i : nums){
            freq[i]++;
        }
        for(auto [k,v] : freq ){
            temp.emplace_back(make_pair(k,v));
        }
        sort(temp.begin(),temp.end(),compare);
        for(int i = 0; i<k;i++){
            ans.push_back(temp[i].first);
        }
        return ans;
    }
};
