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
        int length = 0;
        for(int i = 0; i<s.size();){
            string str; 
            string lenstr ="";
            int j = i;
            while(1){
                if(s[j]=='#'){
                    break;
                }
                lenstr+=s[j];
                j++;
                i++;
            }
            length = stoi(lenstr);
            i++;
            while(length!=0){
                str+=s[i];
                i++;
                length--;
            }

            ans.emplace_back(str);
        }
        return ans;
    }
};
