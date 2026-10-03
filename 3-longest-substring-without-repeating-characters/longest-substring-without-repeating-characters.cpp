class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(256,0);
        int maxi = 0,j=0;
        for(int i=0;i<s.length();i++){
            v[s[i]]++;
            while(v[s[i]]>1){
                v[s[j]]--;
                j++;
            }
            maxi = max(maxi,i-j+1);
        }
       
        
        return maxi;
    }
};