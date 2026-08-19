class Solution {
public:
    bool isPalindrome(string s) {
        char comp1, comp2;
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            if((s[i]<='Z' && s[i]>='A') || (s[i]<='z' && s[i]>='a') || (s[i]<='9' && s[i]>='0'))
            {
                comp1 = tolower(s[i]);
            }else{
                i++;
                continue;
            }

            if((s[j]<='Z' && s[j]>='A') || (s[j]<='z' && s[j]>='a') || (s[j]<='9' && s[j]>='0'))
            {
                comp2 = tolower(s[j]);
            }else{
                j--;
                continue;
            }

            if(comp1 == comp2){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
};
