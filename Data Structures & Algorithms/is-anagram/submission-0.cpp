class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> freq1, freq2;
        for(auto i : s){
            freq1[i]++;
        }
        for(auto i : t){
            freq2[i]++;
        }

        return freq1 == freq2 ? true : false;
    }
};
