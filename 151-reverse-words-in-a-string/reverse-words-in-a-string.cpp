class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        vector<string> word;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                res = res + s[i];
            }
            else if(res!=""){
                word.push_back(res);
                res = "";
            }
        }
        if(res != ""){
            word.push_back(res);
        }
        string ans = "";
        for(int i=word.size()-1;i>=0;i--){
            ans = ans+word[i];
            if(i!=0){
                ans = ans + ' ';
            }
        }
        return ans;
    }
};