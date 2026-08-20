class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(string s: strs){
            ans+=to_string(s.size());
            ans+="#";
            ans+=s;
        }
        cout<<ans<<endl;
        return ans;
    }

    vector<string> decode(string s) {
    vector<string> ans;

    int i = 0;

    while(i < s.size()) {
        int j = i;

        // Find '#'
        while(s[j] != '#') {
            j++;
        }

        // Convert length
        int length = stoi(s.substr(i, j - i));

        // Move past '#'
        i = j + 1;

        // Extract string
        ans.push_back(s.substr(i, length));

        // Move to next encoded string
        i += length;
    }

    return ans;
}
};
