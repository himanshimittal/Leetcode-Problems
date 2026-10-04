class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        vector<int> freq(100001, 0);

        int j = 0;
        int types = 0;
        int maxi = 0;

        for (int i = 0; i < fruits.size(); i++) {
            if (freq[fruits[i]] == 0) {
                types++;
            }
            freq[fruits[i]]++;
            while (types > 2) {
                freq[fruits[j]]--;
                if (freq[fruits[j]] == 0) {
                    types--;
                }
                j++;
            }
            maxi = max(maxi, i - j + 1);
        }
        return maxi;
    }
};